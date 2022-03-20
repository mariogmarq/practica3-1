# include "ParchisGUI.h"

const map<Box, vector<Vector2i>> ParchisGUI::box2position{
    // Definición de las casillas normales
    // Para cada casilla definimos 3 posiciones: (1) En el centro de la casilla, (2) y (3) a ambos lados de la casilla para poder colocar 2 fichas en la misma casilla.
    {{1, box_type::normal, color::none}, {Vector2i(746, 310), Vector2i(746, 325), Vector2i(746, 290)}},
    {{2, box_type::normal, color::none}, {Vector2i(708, 310), Vector2i(708, 325), Vector2i(708, 290)}},
    {{3, box_type::normal, color::none}, {Vector2i(670, 310), Vector2i(670, 325), Vector2i(670, 290)}},
    {{4, box_type::normal, color::none}, {Vector2i(632, 310), Vector2i(632, 325), Vector2i(632, 290)}},
    {{5, box_type::normal, color::none}, {Vector2i(594, 310), Vector2i(594, 325), Vector2i(594, 290)}},
    {{6, box_type::normal, color::none}, {Vector2i(556, 310), Vector2i(556, 325), Vector2i(556, 290)}},
    {{7, box_type::normal, color::none}, {Vector2i(518, 310), Vector2i(518, 325), Vector2i(518, 290)}},
    {{8, box_type::normal, color::none}, {Vector2i(482, 310), Vector2i(482, 325), Vector2i(482, 290)}},
    {{9, box_type::normal, color::none}, {Vector2i(462, 289), Vector2i(443, 289), Vector2i(477, 289)}},
    {{10, box_type::normal, color::none}, {Vector2i(462, 253), Vector2i(443, 253), Vector2i(477, 253)}},
    {{11, box_type::normal, color::none}, {Vector2i(462, 215), Vector2i(443, 215), Vector2i(477, 215)}},
    {{12, box_type::normal, color::none}, {Vector2i(462, 177), Vector2i(443, 177), Vector2i(477, 177)}},
    {{13, box_type::normal, color::none}, {Vector2i(462, 139), Vector2i(443, 139), Vector2i(477, 139)}},
    {{14, box_type::normal, color::none}, {Vector2i(462, 100), Vector2i(443, 100), Vector2i(477, 100)}},
    {{15, box_type::normal, color::none}, {Vector2i(462, 63), Vector2i(443, 63), Vector2i(477, 63)}},
    {{16, box_type::normal, color::none}, {Vector2i(462, 25), Vector2i(443, 25), Vector2i(477, 25)}},
    {{17, box_type::normal, color::none}, {Vector2i(384, 25), Vector2i(403, 25), Vector2i(366, 25)}},
    {{18, box_type::normal, color::none}, {Vector2i(310, 25), Vector2i(328, 25), Vector2i(294, 25)}},
    {{19, box_type::normal, color::none}, {Vector2i(310, 63), Vector2i(328, 63), Vector2i(294, 63)}},
    {{20, box_type::normal, color::none}, {Vector2i(310, 100), Vector2i(328, 100), Vector2i(294, 100)}},
    {{21, box_type::normal, color::none}, {Vector2i(310, 139), Vector2i(328, 139), Vector2i(294, 139)}},
    {{22, box_type::normal, color::none}, {Vector2i(310, 177), Vector2i(328, 177), Vector2i(294, 177)}},
    {{23, box_type::normal, color::none}, {Vector2i(310, 215), Vector2i(328, 215), Vector2i(294, 215)}},
    {{24, box_type::normal, color::none}, {Vector2i(310, 253), Vector2i(328, 253), Vector2i(294, 253)}},
    {{25, box_type::normal, color::none}, {Vector2i(310, 289), Vector2i(328, 289), Vector2i(294, 289)}},
    {{26, box_type::normal, color::none}, {Vector2i(288, 310), Vector2i(288, 325), Vector2i(288, 290)}},
    {{27, box_type::normal, color::none}, {Vector2i(253, 310), Vector2i(253, 325), Vector2i(253, 290)}},
    {{28, box_type::normal, color::none}, {Vector2i(216, 310), Vector2i(216, 325), Vector2i(216, 290)}},
    {{29, box_type::normal, color::none}, {Vector2i(178, 310), Vector2i(178, 325), Vector2i(178, 290)}},
    {{30, box_type::normal, color::none}, {Vector2i(139, 310), Vector2i(139, 325), Vector2i(139, 290)}},
    {{31, box_type::normal, color::none}, {Vector2i(101, 310), Vector2i(101, 325), Vector2i(101, 290)}},
    {{32, box_type::normal, color::none}, {Vector2i(64, 310), Vector2i(64, 325), Vector2i(64, 290)}},
    {{33, box_type::normal, color::none}, {Vector2i(25, 310), Vector2i(25, 325), Vector2i(25, 290)}},
    {{34, box_type::normal, color::none}, {Vector2i(25, 385), Vector2i(25, 366), Vector2i(25, 403)}},
    {{35, box_type::normal, color::none}, {Vector2i(25, 462), Vector2i(25, 444), Vector2i(25, 478)}},
    {{36, box_type::normal, color::none}, {Vector2i(64, 462), Vector2i(64, 444), Vector2i(64, 478)}},
    {{37, box_type::normal, color::none}, {Vector2i(101, 462), Vector2i(101, 444), Vector2i(101, 478)}},
    {{38, box_type::normal, color::none}, {Vector2i(139, 462), Vector2i(139, 444), Vector2i(139, 478)}},
    {{39, box_type::normal, color::none}, {Vector2i(178, 462), Vector2i(178, 444), Vector2i(178, 478)}},
    {{40, box_type::normal, color::none}, {Vector2i(216, 462), Vector2i(216, 444), Vector2i(216, 478)}},
    {{41, box_type::normal, color::none}, {Vector2i(253, 462), Vector2i(253, 444), Vector2i(253, 478)}},
    {{42, box_type::normal, color::none}, {Vector2i(288, 462), Vector2i(288, 444), Vector2i(288, 478)}},
    {{43, box_type::normal, color::none}, {Vector2i(310, 480), Vector2i(328, 480), Vector2i(294, 480)}},
    {{44, box_type::normal, color::none}, {Vector2i(310, 517), Vector2i(328, 517), Vector2i(294, 517)}},
    {{45, box_type::normal, color::none}, {Vector2i(310, 555), Vector2i(328, 555), Vector2i(294, 555)}},
    {{46, box_type::normal, color::none}, {Vector2i(310, 593), Vector2i(328, 593), Vector2i(294, 593)}},
    {{47, box_type::normal, color::none}, {Vector2i(310, 632), Vector2i(328, 632), Vector2i(294, 632)}},
    {{48, box_type::normal, color::none}, {Vector2i(310, 669), Vector2i(328, 669), Vector2i(294, 669)}},
    {{49, box_type::normal, color::none}, {Vector2i(310, 707), Vector2i(328, 707), Vector2i(294, 707)}},
    {{50, box_type::normal, color::none}, {Vector2i(310, 746), Vector2i(328, 746), Vector2i(294, 746)}},
    {{51, box_type::normal, color::none}, {Vector2i(384, 746), Vector2i(366, 746), Vector2i(403, 746)}},
    {{52, box_type::normal, color::none}, {Vector2i(462, 746), Vector2i(443, 746), Vector2i(477, 746)}},
    {{53, box_type::normal, color::none}, {Vector2i(462, 707), Vector2i(443, 707), Vector2i(477, 707)}},
    {{54, box_type::normal, color::none}, {Vector2i(462, 669), Vector2i(443, 669), Vector2i(477, 669)}},
    {{55, box_type::normal, color::none}, {Vector2i(462, 632), Vector2i(443, 632), Vector2i(477, 632)}},
    {{56, box_type::normal, color::none}, {Vector2i(462, 593), Vector2i(443, 593), Vector2i(477, 593)}},
    {{57, box_type::normal, color::none}, {Vector2i(462, 555), Vector2i(443, 555), Vector2i(477, 555)}},
    {{58, box_type::normal, color::none}, {Vector2i(462, 517), Vector2i(443, 517), Vector2i(477, 517)}},
    {{59, box_type::normal, color::none}, {Vector2i(462, 480), Vector2i(443, 480), Vector2i(477, 480)}},
    {{60, box_type::normal, color::none}, {Vector2i(482, 462), Vector2i(482, 444), Vector2i(482, 478)}},
    {{61, box_type::normal, color::none}, {Vector2i(518, 462), Vector2i(518, 444), Vector2i(518, 478)}},
    {{62, box_type::normal, color::none}, {Vector2i(556, 462), Vector2i(556, 444), Vector2i(556, 478)}},
    {{63, box_type::normal, color::none}, {Vector2i(594, 462), Vector2i(594, 444), Vector2i(594, 478)}},
    {{64, box_type::normal, color::none}, {Vector2i(632, 462), Vector2i(632, 444), Vector2i(632, 478)}},
    {{65, box_type::normal, color::none}, {Vector2i(670, 462), Vector2i(670, 444), Vector2i(670, 478)}},
    {{66, box_type::normal, color::none}, {Vector2i(708, 462), Vector2i(708, 444), Vector2i(708, 478)}},
    {{67, box_type::normal, color::none}, {Vector2i(746, 462), Vector2i(746, 444), Vector2i(746, 478)}},
    {{68, box_type::normal, color::none}, {Vector2i(746, 385), Vector2i(746, 366), Vector2i(746, 403)}},

    // Definición de los pasillos de colores hacia la meta
    // Para cada casilla definimos 3 posiciones: (1) En el centro de la casilla, (2) y (3) a ambos lados de la casilla para poder colocar 2 fichas en la misma casilla.
    // Pasillo rojo
    {{1, box_type::final_queue, color::red}, {Vector2i(63, 385), Vector2i(63, 366), Vector2i(63, 403)}},
    {{2, box_type::final_queue, color::red}, {Vector2i(101, 385), Vector2i(101, 366), Vector2i(101, 403)}},
    {{3, box_type::final_queue, color::red}, {Vector2i(139, 385), Vector2i(139, 366), Vector2i(139, 403)}},
    {{4, box_type::final_queue, color::red}, {Vector2i(177, 385), Vector2i(177, 366), Vector2i(177, 403)}},
    {{5, box_type::final_queue, color::red}, {Vector2i(215, 385), Vector2i(215, 366), Vector2i(215, 403)}},
    {{6, box_type::final_queue, color::red}, {Vector2i(253, 385), Vector2i(253, 366), Vector2i(253, 403)}},
    {{7, box_type::final_queue, color::red}, {Vector2i(291, 385), Vector2i(291, 366), Vector2i(291, 403)}},

    // Pasillo amarillo
    {{7, box_type::final_queue, color::yellow}, {Vector2i(480, 385), Vector2i(480, 366), Vector2i(480, 403)}},
    {{6, box_type::final_queue, color::yellow}, {Vector2i(518, 385), Vector2i(518, 366), Vector2i(518, 403)}},
    {{5, box_type::final_queue, color::yellow}, {Vector2i(556, 385), Vector2i(556, 366), Vector2i(556, 403)}},
    {{4, box_type::final_queue, color::yellow}, {Vector2i(594, 385), Vector2i(594, 366), Vector2i(594, 403)}},
    {{3, box_type::final_queue, color::yellow}, {Vector2i(632, 385), Vector2i(632, 366), Vector2i(632, 403)}},
    {{2, box_type::final_queue, color::yellow}, {Vector2i(670, 385), Vector2i(670, 366), Vector2i(670, 403)}},
    {{1, box_type::final_queue, color::yellow}, {Vector2i(708, 385), Vector2i(708, 366), Vector2i(708, 403)}},

    // Pasillo verde
    {{1, box_type::final_queue, color::green}, {Vector2i(384, 707), Vector2i(366, 707), Vector2i(403, 707)}},
    {{2, box_type::final_queue, color::green}, {Vector2i(384, 669), Vector2i(366, 669), Vector2i(403, 669)}},
    {{3, box_type::final_queue, color::green}, {Vector2i(384, 632), Vector2i(366, 632), Vector2i(403, 632)}},
    {{4, box_type::final_queue, color::green}, {Vector2i(384, 593), Vector2i(366, 593), Vector2i(403, 593)}},
    {{5, box_type::final_queue, color::green}, {Vector2i(384, 555), Vector2i(366, 555), Vector2i(403, 555)}},
    {{6, box_type::final_queue, color::green}, {Vector2i(384, 517), Vector2i(366, 517), Vector2i(403, 517)}},
    {{7, box_type::final_queue, color::green}, {Vector2i(384, 480), Vector2i(366, 480), Vector2i(403, 480)}},

    // Pasillo azul
    {{7, box_type::final_queue, color::blue}, {Vector2i(384, 289), Vector2i(366, 289), Vector2i(403, 289)}},
    {{6, box_type::final_queue, color::blue}, {Vector2i(384, 253), Vector2i(366, 253), Vector2i(403, 253)}},
    {{5, box_type::final_queue, color::blue}, {Vector2i(384, 215), Vector2i(366, 215), Vector2i(403, 215)}},
    {{4, box_type::final_queue, color::blue}, {Vector2i(384, 177), Vector2i(366, 177), Vector2i(403, 177)}},
    {{3, box_type::final_queue, color::blue}, {Vector2i(384, 139), Vector2i(366, 139), Vector2i(403, 139)}},
    {{2, box_type::final_queue, color::blue}, {Vector2i(384, 100), Vector2i(366, 100), Vector2i(403, 100)}},
    {{1, box_type::final_queue, color::blue}, {Vector2i(384, 63), Vector2i(366, 63), Vector2i(403, 63)}},

    // Casillas destino
    // Ponemos 4 posiciones, correspondientes a las 4 fichas
    // Verdes
    {{0, box_type::goal, color::green}, {Vector2i(384, 440), Vector2i(384, 408), Vector2i(415, 440), Vector2i(350, 440)}},
    // Azules
    {{0, box_type::goal, color::blue}, {Vector2i(384, 326), Vector2i(384, 354), Vector2i(415, 326), Vector2i(350, 326)}},
    // Rojas
    {{0, box_type::goal, color::red}, {Vector2i(329, 385), Vector2i(360, 385), Vector2i(329, 350), Vector2i(329, 420)}},
    // Amarillas
    {{0, box_type::goal, color::yellow}, {Vector2i(445, 385), Vector2i(412, 385), Vector2i(445, 350), Vector2i(445, 420)}},

    // Casillas home
    // Ponemos 4 posiciones, correspondientes a las 4 fichas
    // Verdes
    {{0, box_type::home, color::green}, {Vector2i(632, 594), Vector2i(594, 632), Vector2i(632, 670), Vector2i(670, 632)}},
    // Azules
    {{0, box_type::home, color::blue}, {Vector2i(139, 101), Vector2i(101, 139), Vector2i(139, 177), Vector2i(177, 139)}},
    // Rojas
    {{0, box_type::home, color::red}, {Vector2i(139, 594), Vector2i(101, 632), Vector2i(139, 670), Vector2i(177, 632)}},
    // Amarillas
    {{0, box_type::home, color::yellow}, {Vector2i(632, 101), Vector2i(594, 139), Vector2i(632, 177), Vector2i(670, 139)}},
};

const string ParchisGUI::background_theme_file = "data/music/background_theme";

const string ParchisGUI::icon_file = "data/textures/icon_parchis.png";

ParchisGUI::ParchisGUI(Parchis &model)
    : RenderWindow(VideoMode(1600, 800, VideoMode::getDesktopMode().bitsPerPixel), L"Parchís", Style::Titlebar | Style::Close)
    // L"string" parece que permite representar caraceteres unicode. Útil para acentos y demás.
{
    this->model = &model;

    this->clicked = false;

    this->last_dice = -1;

    //Cargamos las texturas
    this->tBackground.loadFromFile("data/textures/background.png");
    this->tPieces.loadFromFile("data/textures/fichas_parchis_extended.png");
    this->tBoard.loadFromFile("data/textures/parchis_board_resized.png");
    this->tDices.loadFromFile("data/textures/dice_extended.png");
    this->tRectButton.loadFromFile("data/textures/rectangular-buttons.png");

    //Definimos los sprites
    this->background = Sprite(tBackground);
    this->background.setPosition(1000, 1000);
    //this->boards.push_back(BoardSprite(tBoard));
    this->board = BoardSprite(tBoard);

    // Vector de colores (ver cómo se podría obtener directamente del enumerado)
    vector<color> colors = {yellow, blue, red, green};

    // Creación de las fichas
    for(int i = 0; i < colors.size(); i++){
        color col = colors[i];
        vector<PieceSprite> col_pieces_sprites;
        for(int j = 0; j < model.getBoard().getPieces(color::red).size(); j++){
            col_pieces_sprites.push_back(PieceSprite(tPieces, j, col));
            //col_pieces_sprites[j].setPosition((Vector2f)box2position.at(model.getBoard().getPiece(col, j))[j]);
            col_pieces_sprites[j].setPosition(box3position(col, j, 0));
        }
        pieces.insert({col, col_pieces_sprites});
    }

    //Creación de los dados
    Vector2i ini_pos(850, 50);
    Vector2i offset(70,80);

    for (int i = 0; i < colors.size(); i++){
        for (int j = 1; j <= 6; j++){
            dices[colors[i]].push_back(DiceSprite(tDices, j, colors[i]));
            Vector2i pos = ini_pos + Vector2i((j-1)*offset.x, i*offset.y);
            dices[colors[i]][j-1].setPosition(pos.x, pos.y);
        } 
    }

    // Creación de los botones
    // this->prueba = RectangularButton(tRectButton);

    //Creación de las vistas
    general_view = View(FloatRect(1000, 1000, 1600, 800));
    general_view.setViewport(FloatRect(0.f, 0.f, 1.f, 1.f));

    board_view = View(FloatRect(0.f, 0.f, 800.f, 800.f));
    board_view.setViewport(FloatRect(0.f, 0.f, 0.5f, 1.f));

    dice_view = View(FloatRect(850.f, 50.f, 420.f, 320.f));
    dice_view.setViewport(FloatRect(0.555f, 0.055f, 0.3f, 0.4f));

    bt_panel_view = View(FloatRect(850.f, 400.f, 420.f, 320.f));
    bt_panel_view.setViewport(FloatRect(0.555f, 0.5f, 0.3f, 0.4f));

    rotate_board = false;
    rotate_angle0 = 0.0;

    collectSprites();

    this->updateEnabledSprites();

    //Música
    this->initializeBackgroundMusic();
    this->setBackgroundMusic(true);

    //Icono de la ventana.
    if(icon.loadFromFile(icon_file)){
        this->setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
    }else{
        cout << "Icon could not be loaded" << endl;
    }
}

void ParchisGUI::collectSprites(){
    // Tablero como sprite dibujable (IMPORTANTE: Añadir a all_drawable_sprites en el orden en que se dibujan)
    all_drawable_sprites.push_back(&background);
    general_drawable_sprites.push_back(&background);

    all_drawable_sprites.push_back(&board);
    board_drawable_sprites.push_back(&board);
    all_clickable_sprites.push_back(&board);
    board_clickable_sprites.push_back(&board);

    // Vector de colores (ver cómo se podría obtener directamente del enumerado)
    vector<color> colors = {red, blue, green, yellow};

    for (int i = 0; i < colors.size(); i++)
    {
        color col = colors[i];
        // Añadir fichas como dibujables y clickables.
        for(int j = 0; j < pieces[col].size(); j++){
            all_drawable_sprites.push_back(&pieces[col][j]);
            all_clickable_sprites.push_back(&pieces[col][j]);
            board_drawable_sprites.push_back(&pieces[col][j]);
            board_clickable_sprites.push_back(&pieces[col][j]);
        }

        // Añadir dados como dibujables y clickables.
        for(int j = 0; j < dices[col].size(); j++){
            all_drawable_sprites.push_back(&dices[col][j]);
            all_clickable_sprites.push_back(&dices[col][j]);
            dice_drawable_sprites.push_back(&dices[col][j]);
            dice_clickable_sprites.push_back(&dices[col][j]);
        }

        // Añadir botones como dibujables y clickables.
        //all_drawable_sprites.push_back(&prueba);
        //all_clickable_sprites.push_back(&prueba);
        //bt_panel_drawable_sprites.push_back(&prueba);
        //bt_panel_clickable_sprites.push_back(&prueba);
    }
}

void ParchisGUI::mainLoop(){
    processSettings();
    processMouse();
    processEvents();
    processAnimations();
    paint();
}

void ParchisGUI::processMouse(){
    Vector2i pos = Mouse::getPosition(*this);
    Vector2f world_pos;

    this->setView(board_view);
    world_pos = this->mapPixelToCoords(pos);

    bool already_hovered = false;

    for(int i = board_clickable_sprites.size() - 1; i >= 0; i--){
        ClickableSprite *current_sprite = board_clickable_sprites[i];
        if(current_sprite->getGlobalBounds().contains(world_pos) && !already_hovered){
            current_sprite->setHovered(true, *this);
            already_hovered = true;
        }
        else{
            current_sprite->setHovered(false, *this);
        }
    }

    this->setView(dice_view);
    world_pos = this->mapPixelToCoords(pos);

    for (int i = dice_clickable_sprites.size() - 1; i >= 0; i--)
    {
        ClickableSprite *current_sprite = dice_clickable_sprites[i];
        if (current_sprite->getGlobalBounds().contains(world_pos) && !already_hovered)
        {
            current_sprite->setHovered(true, *this);
            already_hovered = true;
        }
        else
        {
            current_sprite->setHovered(false, *this);
        }
    }

    if(!already_hovered){
        this->defaultHover();
    }
}

void ParchisGUI::defaultHover(){
    this->setDefaultCursor();
}

void ParchisGUI::processEvents(){
    // Gestión de eventos (processEvents())
    Event event;
    while (this->pollEvent(event))
    {
        if (event.type == Event::Closed)
        {
            this->close();
        }

        if(event.type == Event::MouseButtonPressed || event.type == Event::MouseButtonReleased){ // Eventos de ratón.
            //cout << pos.x << " " << pos.y << " " << world_pos.x << " " << world_pos.y << endl;
            //cout << board.getGlobalBounds().top << " " << board.getGlobalBounds().left << endl;
            bool clicked;
            if (event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Left)
                clicked = true;
            else
                clicked =false;

            //clicked = true;
            Vector2i pos = Mouse::getPosition(*this);
            Vector2f world_pos;

            cout << pos.x << " " << pos.y << endl;
            //world_pos = window.mapPixelToCoords(pos);
            vector<color> colors = {red, blue, green, yellow};

            // Eventos en la vista del tablero.
            this->setView(board_view);
            world_pos = this->mapPixelToCoords(pos);

            for(int i = board_clickable_sprites.size() - 1; i >= 0; i--){
                ClickableSprite *current_sprite = board_clickable_sprites[i];
                if(clicked && current_sprite->getGlobalBounds().contains(world_pos)){
                    current_sprite->setClicked(true, *this);
                }
                else{
                    current_sprite->setClicked(false, *this);
                }
                
            }


            // Eventos en la vista de los dados.
            this->setView(dice_view);
            world_pos = this->mapPixelToCoords(pos);

            for(int i = dice_clickable_sprites.size() - 1; i >= 0; i--){
                ClickableSprite *current_sprite = dice_clickable_sprites[i];
                if (clicked && current_sprite->getGlobalBounds().contains(world_pos)){
                    current_sprite->setClicked(true, *this);
                }
                else{
                    current_sprite->setClicked(false, *this);
                }
            }
        }
    }
}

void ParchisGUI::processAnimations()
{
    /*
    list<SpriteAnimator>::iterator it;
    for (it = animations.begin(); it != animations.end();)
    {
        it->update();
        if(it->hasEnded()){
            it = animations.erase(it);
        }
        else{
            ++it;
        }
    }
    */

    // Channel 1
    if(!animations_ch1.empty()){
        SpriteAnimator sa_1 = animations_ch1.front();
        sa_1.update();
        if(sa_1.hasEnded()){
            animations_ch1.pop();
            if(!animations_ch1.empty()){
                animations_ch1.front().setStartPosition();
                animations_ch1.front().restart();
            }
        }
    }

    // Channel 2
    if (!animations_ch2.empty()){
        SpriteAnimator sa_2 = animations_ch2.front();
        sa_2.update();
        if (sa_2.hasEnded()){
            animations_ch2.pop();
            if (!animations_ch2.empty()){
                animations_ch2.front().setStartPosition();
                animations_ch2.front().restart();
            }
        }
    }

    // Channel 3
    if (!animations_ch3.empty()){
        SpriteAnimator sa_3 = animations_ch3.front();
        sa_3.update();
        if (sa_3.hasEnded()){
            animations_ch3.pop();
            if (!animations_ch3.empty()){
                animations_ch3.front().setStartPosition();
                animations_ch3.front().restart();
            }
        }
    }
}

void ParchisGUI::processSettings(){
    if(rotate_board){
        Vector2i pos = Mouse::getPosition(*this);
        FloatRect board_box = board.getGlobalBounds();
        Vector2f board_center(board_box.left + board_box.width / 2, board_box.top + board_box.height / 2);

        float angle = atan2(pos.x - board_center.x, pos.y - board_center.y) * 180.f / PI;

        board_view.rotate(angle - rotate_angle0);
        rotate_angle0 = angle;
    }
}

void ParchisGUI::paint(){
    this->clear(Color::White);

    //Dibujamos elementos generales (sin vistas)
    this->setView(general_view);
    for(int i = 0; i < general_drawable_sprites.size(); i++){
        this->draw(*general_drawable_sprites[i]);
    }
    //Dibujamos elementos de la vista del tablero.
    this->setView(board_view);
    for(int i = 0; i < board_drawable_sprites.size(); i++){
        this->draw(*board_drawable_sprites[i]);
    }

    // Dibujamos elementos de la vista de los dados.
    this->setView(dice_view);
    for (int i = 0; i < dice_drawable_sprites.size(); i++)
    {
        this->draw(*dice_drawable_sprites[i]);
    }

    // Dibujamos elementos de la vista de los botones
    this->setView(bt_panel_view);
    for (int i = 0; i < bt_panel_drawable_sprites.size(); i++)
    {
        this->draw(*bt_panel_drawable_sprites[i]);
    }

    this->display();

}

void ParchisGUI::updateEnabledSprites(){
    vector<color> colors = {red, blue, green, yellow};
    for(int i = 0; i < colors.size(); i++){
        color c = colors[i];
        vector<Box> player_pieces = model->getBoard().getPieces(c);

        if(this->model->getCurrentColor() == c){
            for(int j = 0; j < player_pieces.size(); j++){
                this->pieces[c][j].setEnabled(model->isLegalMove(c, player_pieces[j], this->last_dice), *this);
                this->pieces[c][j].setLocked(!model->isLegalMove(c, player_pieces[j], this->last_dice), *this);
            }
        }
        else{
            for (int j = 0; j < player_pieces.size(); j++){
                this->pieces[c][j].setLocked(true, *this);
            }
        }

        Dice dice = model->getDice();
        for(int j = 0; j < this->dices[c].size(); j++){
            DiceSprite* current = &this->dices[c][j];
            //cout << j << " " << current->getNumber() << " " << dice.isAvailable(c, current->getNumber()) << endl;
            current->setEnabled(dice.isAvailable(c, current->getNumber()), *this);
            current->setLocked(this->model->getCurrentColor() != c, *this);
            current->setSelected(this->model->getCurrentColor() == c and this->last_dice == current->getNumber(), *this);
            //cout << current->isEnabled() << endl;
        }
    }
}

void ParchisGUI::run(){
    while(this->isOpen()){
        mainLoop();
    }
}

//col_pieces_sprites[j].setPosition((Vector2f)box2position.at(model.getBoard().getPiece(col, j))[j]);


Vector2f ParchisGUI::box3position(color c, int id, int pos){
    Box piece = model->getBoard().getPiece(c, id);
    if (piece.type == home || piece.type == goal) {
        return (Vector2f)box2position.at(piece)[id];
    }else{
        return (Vector2f)box2position.at(piece)[pos];
    }
}

Vector2f ParchisGUI::box3position(Box piece, int id, int pos){
    if (piece.type == home || piece.type == goal){
        return (Vector2f)box2position.at(piece)[id];
    }else{
        return (Vector2f)box2position.at(piece)[pos];
    }
}


//Cursores
void ParchisGUI::setDefaultCursor()
{
    if(cursor.loadFromSystem(Cursor::Arrow))
        this->setMouseCursor(cursor);
}

void ParchisGUI::setForbiddenCursor()
{
    if (cursor.loadFromSystem(Cursor::NotAllowed))
        this->setMouseCursor(cursor);
}

void ParchisGUI::setHandCursor()
{
    if (cursor.loadFromSystem(Cursor::Hand))
        this->setMouseCursor(cursor);
}

void ParchisGUI::queueMove(color col, int id, Box origin, Box dest){
    if(dest.type == home || dest.type == goal){
        // Si el destino es casa o meta cada ficha va a su puesto preasignado por id.
        Vector2f animate_pos = (Vector2f)box2position.at(dest)[id];

        Sprite *animate_sprite = &pieces[col][id];
        SpriteAnimator animator = SpriteAnimator(*animate_sprite, animate_pos, 1000);
        animations_ch1.push(animator);
    }
    else{
        // Buscamos colisiones.
        vector<pair<color, int>> occupation = this->model->boxState(dest);
        if(occupation.size() == 1){
            // Si no había fichas en destino se mueve la ficha al sitio central.
            Vector2f animate_pos = (Vector2f)box2position.at(dest)[0];

            Sprite *animate_sprite = &pieces[col][id];
            SpriteAnimator animator = SpriteAnimator(*animate_sprite, animate_pos, 1000);
            animations_ch1.push(animator);
        }
        else{
            // Si hay dos fichas en destino mandamos cada una a un lateral.
            int main_move = (occupation[0].first == col && occupation[0].second == id)?0:1;
            int collateral_move = (main_move == 0)?1:0;

            // Ficha principal (la que realmente se mueve) por el canal 1 por si hay que encadenar animaciones.
            Vector2f animate_pos = (Vector2f)box2position.at(dest)[1];
            Sprite *animate_sprite = &pieces[occupation[main_move].first][occupation[main_move].second];
            SpriteAnimator animator = SpriteAnimator(*animate_sprite, animate_pos, 1000);
            animations_ch1.push(animator);

            // Ficha desplazada por el canal 2.
            Vector2f animate_pos2 = (Vector2f)box2position.at(dest)[2];
            Sprite *animate_sprite2 = &pieces[occupation[collateral_move].first][occupation[collateral_move].second];
            SpriteAnimator animator2 = SpriteAnimator(*animate_sprite2, animate_pos2, 1000);
            animations_ch2.push(animator2);
        }
    }

    if(origin.type != goal && origin.type != home){
        vector<pair<color, int>> origin_occupation = this->model->boxState(origin);
        if(origin_occupation.size() == 1){
            // Si queda una ficha en el origen del movimiento tras haber hecho el movimiento, la devolvemos al centro (canal 3).
            // (Siempre que el origen no sea ni casa ni meta).
            Vector2f animate_pos = (Vector2f)box2position.at(origin)[0];
            Sprite *animate_sprite = &pieces[origin_occupation.at(0).first][origin_occupation.at(0).second];
            SpriteAnimator animator = SpriteAnimator(*animate_sprite, animate_pos, 1000);
            animations_ch3.push(animator);
        }
    }
}

void ParchisGUI::setBackgroundMusic(bool on){
    if(on){
        background_theme.play();
    }
    else{
        background_theme.stop();
    }
}

void ParchisGUI::initializeBackgroundMusic(){
    if (background_theme.openFromFile(background_theme_file + ".wav"))
    {
        background_theme.setLoop(true); // Para reproducir en bucle.

        ifstream loop_file((background_theme_file + ".loop").c_str());
        if (loop_file.good())
        {
            float loop_start, loop_end;
            loop_file >> loop_start;
            loop_file >> loop_end;
            background_theme.setLoopPoints(Music::TimeSpan(seconds(loop_start), seconds(loop_end - loop_start))); // Se puede elegir los puntos exactos en los que cicle la música de fondo.
            cout << "Added loop points for background theme: " << loop_start << " " << loop_end << endl;
        }
        else
            cout << "No loop points found for background theme." << endl;

        background_theme.setVolume(100.f);
    }
}