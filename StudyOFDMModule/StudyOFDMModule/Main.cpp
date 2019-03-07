
# include <Siv3D.hpp> // OpenSiv3D v0.3.1

void Main()
{
	Graphics::SetBackground(ColorF(0.8, 0.9, 1.0));

	const Font font(30);

	const Texture textureCat(Emoji(U"🐈"), TextureDesc::Mipped);

	int setnum = 0;




	while (System::Update())
	{
		
		font(Cursor::Pos()).draw(20, 550, ColorF(0.6));

		
	}
}
