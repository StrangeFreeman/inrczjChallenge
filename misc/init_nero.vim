""basic setting
:set number
:set relativenumber
:set autoindent
:set tabstop=4
:set shiftwidth=4
:set smarttab
:set softtabstop=4
:set mouse=a
:set completeopt-=preview
set encoding=UTF-8
nmap <C-q> :q<CR>
nmap <C-s> :w<CR>

call plug#begin()

Plug 'rafi/awesome-vim-colorschemes'	"nvim theme
Plug 'ap/vim-css-color'					"css color
Plug 'ryanoasis/vim-devicons'			"nvim icon
Plug 'vim-airline/vim-airline'			"nvim powerline
Plug 'preservim/nerdtree'				"nvim powerful file system
Plug 'preservim/tagbar'					"nvim code navigation
Plug 'neoclide/coc.nvim'				"coc

call plug#end()

"Theme setting
:colorscheme onedark

"NERDTree setting
nmap <leader>nt <cmd> :NERDTreeToggle<CR>
let g:NERDTreeDirArrowExpandable="+"
let g:NERDTreeDirArrowCollapsible="~"

"TagbarToggle setting
nmap <leader>tt <cmd> :TagbarToggle<CR>

"Nvim-terminal setting
nmap <leader>tb <cmd> :TerminalSplit bash<CR>

"coc setting
let g:coc_disable_startup_warning = 1

