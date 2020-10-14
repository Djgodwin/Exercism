enum ColorEnum {
  black,
  brown,
  red,
  orange,
  yellow,
  green,
  blue,
  violet,
  grey,
  white,
}

type ColorTypes = keyof typeof ColorEnum

export class ResistorColor {
  private colors: ColorTypes[];

  constructor(colors: ColorTypes[]) {
    if (colors.length < 2) {
      throw new Error("At least two colors need to be present");
    }
    this.colors = colors;
  }

  value = (): number => {
    return (
      ColorEnum[this.colors[0]] * 10 +
      ColorEnum[this.colors[1]]
    );
  };
}
