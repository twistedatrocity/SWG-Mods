	<Page
		Location='490,172'
		MinimumSize='326,326'
		Name='PMBrowser'
		OnDisableEffector='/Effectors.FadeThreeQuarter'
		OnEnableEffector='/Effectors.FadeFull'
		RStyleDefault='rs_default'
		ScrollExtent='840,613'
		Size='840,613'
		UserMovable='true'
		UserResizable='true'
		Visible='false'
	>
		<Data
			buttonclose='bg.mmc.close'
			buttondelete='bottom.buttonDelete'
			buttonForward='bottom.buttonForward'
			buttonnew='bottom.buttonNew'
			buttonOk='buttonOk'
			buttonReply='bottom.buttonReply'
			Name='CodeData'
			Table='pagetable.table'
			textbody='bottom.comp.body.text'
			volumeAttach='bottom.comp.attach.volume'
		/>
		<Button
			LocalText='[@ui_pm:close]'
			Location='504,573'
			Name='buttonOk'
			PackLocation='fff,fff'
			PackSize='p,f'
			RStyleDefault='/Styles.New.buttons.hud.style'
			ScrollExtent='320,30'
			Size='320,30'
			Style='/Styles.New.buttons.hud.style'
			TextColor='#000000'
		>@ui_pm:close</Button>
		<Page
			Location='9,28'
			MinimumSize='291,128'
			Name='pageTable'
			PackLocation='nfn,nfn'
			PackSize='a,h'
			RStyleDefault='rs_default'
			ScrollExtent='823,265'
			Selectable='true'
			Size='823,265'
		>
			<TableHeader
				BackgroundColor='#FFFFFF'
				BackgroundOpacity='0.00'
				ButtonStyle='/Styles.New.buttons.newInFrame2.style'
				CursorResize='/Styles.Cursors.resizeHoriz'
				Location='7,5'
				MinimumScrollExtent='801,0'
				Name='header'
				PackLocation='nfn,nfn'
				PackSize='a,f'
				ScrollExtent='802,30'
				Size='802,30'
				Table='table'
			>
			</TableHeader>
			<Table
				BackgroundColor='#000000'
				BackgroundOpacity='0.20'
				BackgroundTint='#00D6FB'
				CellHeight='19'
				CellPadding='5,3'
				ColumnSizeDataSource='dsColSizes'
				DefaultTextColor='#96F4FC'
				DefaultTextStyle='bold_14'
				GridColorHorizontal='#1CFFFF'
				GridColorVertical='#1CFFFF'
				Location='7,39'
				MinimumScrollExtent='801,66'
				Name='table'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				PalBgTint='back1'
				PalGridH='line1'
				PalGridV='line1'
				PalSelectedText='listtext'
				PalSelectionBg='listback'
				PalSelectionRect='listline'
				PalText='text1'
				RStyleDefault='/Styles.New.pill_lrg.rs_default'
				ScrollExtent='801,215'
				SelectionColorBackground='#35CBD7'
				SelectionColorRect='#37FD06'
				SelectionTextColor='#003842'
				Size='801,215'
				TableModel='model'
			/>
			<DataSource
				Name='dsColSizes'
			>
				<Data
					Constant='true'
					Proportion='0.07'
					Width='41'
				/>
				<Data
					Constant='false'
					Proportion='0.49'
					Width='316'
				/>
				<Data
					Constant='false'
					Proportion='0.51'
					Width='326'
				/>
				<Data
					Constant='true'
					Proportion='0.23'
					Width='96'
				/>
			</DataSource>
			<Scrollbar
				Control='table'
				Enabled='false'
				Location='809,21'
				Name='scrolltable'
				PackLocation='fff,nfn'
				PackSize='f,a'
				ScrollExtent='11,240'
				Size='11,240'
				Style='/Styles.scrollbar.default.vHud4.style'
			>
			</Scrollbar>
			<DataSourceContainer
				Name='containerall'
			>
				<DataSource
					Label='@ui_pm:table_status'
					Name='status'
					Type='text'
				>
					<Data
						Name='stamina'
						Value='xxx n'
					/>
					<Data
						Name='mind'
						Value='xxx u'
					/>
					<Data
						Name='focus'
						Value='xxx r'
					/>
				</DataSource>
				<DataSource
					Label='@ui_pm:table_sender'
					Name='sender'
					Type='text'
				>
					<Data
						Name='stamina'
						Value='xxx sender here'
					/>
					<Data
						Name='mind'
						Value='xxx sender here'
					/>
					<Data
						Name='focus'
						Value='xxx sender here'
					/>
				</DataSource>
				<DataSource
					Label='@ui_pm:table_subject'
					Name='subject'
					Type='text'
				>
					<Data
						Name='Mind'
						Value='40'
					/>
					<Data
						Name='Focus'
						Value='30'
					/>
					<Data
						Name='Willpower'
						Value='20'
					/>
				</DataSource>
				<DataSource
					Label='@ui_pm:table_date'
					Name='date'
					Type='text'
				>
					<Data
						Name='Mind'
						Value='xxx date here'
					/>
					<Data
						Name='Focus'
						Value='xxx date here'
					/>
					<Data
						Name='Willpower'
						Value='xxx date here'
					/>
				</DataSource>
			</DataSourceContainer>
			<TableModelDefault
				DataSourceContainer='containerall'
				Name='model'
			/>
			<Page
				BackgroundColor='#FFFFFF'
				BackgroundTint='#00FFFF'
				Name='bg_table'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				PalBgTint='outline1'
				ScrollExtent='823,265'
				Size='823,265'
			>
				<Page
					BackgroundOpacity='0.90'
					BackgroundTint='#1CFFFF'
					GetsInput='false'
					Name='outline'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='line1'
					RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
					ScrollExtent='823,265'
					Size='823,265'
				/>
				<Page
					BackgroundColor='#FFFFFF'
					BackgroundOpacity='0.60'
					BackgroundTint='#00D6FB'
					Location='0,4'
					Name='inFrame'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='back1'
					RStyleDefault='/Styles.New.fatFrameInside_palW.rs_default'
					ScrollExtent='820,261'
					Size='820,261'
				/>
			</Page>
		</Page>
		<Page
			Location='9,294'
			Name='bottom'
			PackLocation='nfn,fff'
			PackSize='a,h'
			RStyleDefault='rs_default'
			ScrollExtent='823,268'
			Selectable='true'
			Size='823,268'
		>
			<Composite
				Location='6,9'
				Name='comp'
				Orientation='Horizontal'
				PackSize='a,a'
				ScrollExtent='813,183'
				Size='813,183'
				Spacing='8'
				SpacingType='Fill'
			>
				<Page
					Name='body'
					PackSize='f,a'
					ScrollExtent='693,182'
					Size='693,182'
				>
					<Text
						BackgroundColor='#FFFFFF'
						BackgroundScrolls='false'
						CursorMark='33'
						CursorPoint='33'
						Font='normal_18'
						GetsInput='true'
						LocalText='xxx
LINE ONE
LINE TWO
LINE THREE
LINE FOUR
LINE FIVE
LINE SIX
LINE SEVEN
LINE EIGHT
LINE NINE
LINE TEN
LINE ELEVEN
'
						Location='6,7'
						Margin='2,2,2,2'
						Name='text'
						PackSize='a,a'
						PalText='text1'
						RStyleDefault='/Styles.New.whitebox.rs_default'
						ScrollExtent='668,251'
						Size='668,171'
						TextColor='#96F4FC'
					>xxx
LINE ONE
LINE TWO
LINE THREE
LINE FOUR
LINE FIVE
LINE SIX
LINE SEVEN
LINE EIGHT
LINE NINE
LINE TEN
LINE ELEVEN
</Text>
					<Scrollbar
						AutoVisibility='true'
						Control='text'
						Location='679,6'
						Name='Scroll'
						PackLocation='fff,nfn'
						PackSize='f,a'
						ScrollExtent='11,171'
						Size='11,171'
						Style='/Styles.scrollbar.default.vHud4.style'
					>
					</Scrollbar>
					<Page
						BackgroundOpacity='0.70'
						BackgroundTint='#00FFFF'
						GetsInput='false'
						Name='outline'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='line2'
						RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
						ScrollExtent='693,182'
						Size='693,182'
					/>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='0.70'
						BackgroundTint='#03546B'
						Location='4,6'
						Name='box'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='back3'
						RStyleDefault='/Styles.New.whitebox_palW.rs_default'
						ScrollExtent='674,174'
						Size='674,174'
					/>
				</Page>
				<Page
					Location='701,0'
					MaximumSize='112,16384'
					MinimumSize='112,0'
					Name='attach'
					OnHide='parent.pack=t'
					OnShow='parent.pack=t'
					PackSize='f,a'
					ScrollExtent='112,182'
					Size='112,182'
				>
					<VolumePage
						BackgroundScrolls='false'
						CellCount='1,2'
						CellSize='64,64'
						Location='5,18'
						MinimumScrollExtent='70,134'
						Name='volume'
						OnHide='parent.visible=visible'
						OnShow='parent.visible=visible'
						PackSize='a,a'
						RStyleDefault='/Styles.New.whitebox.rs_default'
						ScrollExtent='92,156'
						Size='92,156'
					>
						<Text
							BackgroundColor='#FFFFFF'
							BackgroundTint='#008080'
							Enabled='false'
							Font='bold_13'
							LocalText='xxx
LINE ONE
LINE TWO
LINE THREE
LINE FOUR
LINE FIVE
LINE SIX
LINE SEVEN
LINE EIGHT
LINE NINE
LINE TEN
LINE ELEVEN
'
							Location='2,2'
							Margin='2,2,2,2'
							MaximumSize='64,64'
							MinimumSize='64,64'
							Name='text'
							PalText='text1'
							RStyleDefault='rs_default'
							ScrollExtent='64,298'
							Size='64,64'
							TextColor='#96F4FC'
						>xxx
LINE ONE
LINE TWO
LINE THREE
LINE FOUR
LINE FIVE
LINE SIX
LINE SEVEN
LINE EIGHT
LINE NINE
LINE TEN
LINE ELEVEN
</Text>
						<Text
							BackgroundColor='#FFFFFF'
							BackgroundTint='#008080'
							Enabled='false'
							Font='bold_13'
							LocalText='xxx
LINE ONE
LINE TWO
LINE THREE
LINE FOUR
LINE FIVE
LINE SIX
LINE SEVEN
LINE EIGHT
LINE NINE
LINE TEN
LINE ELEVEN
'
							Location='2,68'
							Margin='2,2,2,2'
							MaximumSize='64,64'
							MinimumSize='64,64'
							Name='text'
							PalText='text1'
							RStyleDefault='rs_default'
							ScrollExtent='64,298'
							Size='64,64'
							TextColor='#96F4FC'
						>xxx
LINE ONE
LINE TWO
LINE THREE
LINE FOUR
LINE FIVE
LINE SIX
LINE SEVEN
LINE EIGHT
LINE NINE
LINE TEN
LINE ELEVEN
</Text>
					</VolumePage>
					<Text
						Font='bold_13'
						LocalText='Attachments'
						Location='-1,-2'
						Name='label'
						PackSize='a'
						PalText='header'
						ScrollExtent='104,16'
						Size='104,16'
						TextColor='#97FFFF'
					>Attachments</Text>
					<Scrollbar
						AutoVisibility='true'
						Control='volume'
						Location='98,17'
						Name='Scroll'
						PackLocation='fff,nfn'
						PackSize='f,a'
						ScrollExtent='11,160'
						Size='11,160'
						Style='/Styles.scrollbar.default.vHud4.style'
					>
					</Scrollbar>
					<Page
						BackgroundOpacity='0.70'
						BackgroundTint='#00FFFF'
						GetsInput='false'
						Location='0,12'
						Name='outline'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='line2'
						RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
						ScrollExtent='112,170'
						Size='112,170'
					/>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='0.70'
						BackgroundTint='#03546B'
						Location='3,19'
						Name='box'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='back3'
						RStyleDefault='/Styles.New.whitebox_palW.rs_default'
						ScrollExtent='94,158'
						Size='94,158'
					/>
				</Page>
			</Composite>
			<Button
				LocalText='[@ui_pm:fwd]'
				Location='7,232'
				Name='buttonForward'
				PackLocation='nfn,fff'
				PackSize='p,f'
				RStyleDefault='/Styles.New.buttons.hud.style'
				ScrollExtent='327,30'
				Size='327,30'
				Style='/Styles.New.buttons.hud.style'
				TextColor='#000000'
			>@ui_pm:fwd</Button>
			<Button
				LocalText='[@ui_pm:reply]'
				Location='7,197'
				Name='buttonReply'
				PackLocation='nfn,fff'
				PackSize='p,f'
				RStyleDefault='/Styles.New.buttons.hud.style'
				ScrollExtent='327,30'
				Size='327,30'
				Style='/Styles.New.buttons.hud.style'
				TextColor='#000000'
			>@ui_pm:reply</Button>
			<Button
				LocalText='[@ui_pm:delete]'
				Location='488,197'
				Name='buttonDelete'
				PackLocation='fff,fff'
				PackSize='p,f'
				RStyleDefault='/Styles.New.buttons.hud.style'
				ScrollExtent='327,30'
				Size='327,30'
				Style='/Styles.New.buttons.hud.style'
				TextColor='#000000'
			>@ui_pm:delete</Button>
			<Button
				LocalText='[@ui_pm:new]'
				Location='488,232'
				Name='buttonNew'
				PackLocation='fff,fff'
				PackSize='p,f'
				RStyleDefault='/Styles.New.buttons.hud.style'
				ScrollExtent='327,30'
				Size='327,30'
				Style='/Styles.New.buttons.hud.style'
				TextColor='#000000'
			>@ui_pm:new</Button>
			<Page
				BackgroundColor='#FFFFFF'
				BackgroundTint='#00FFFF'
				Name='bg_list'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				PalBgTint='outline1'
				ScrollExtent='823,268'
				Size='823,268'
			>
				<Page
					BackgroundOpacity='0.90'
					BackgroundTint='#1CFFFF'
					GetsInput='false'
					Name='outline'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='line1'
					RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
					ScrollExtent='823,268'
					Size='823,268'
				/>
				<Page
					BackgroundColor='#FFFFFF'
					BackgroundOpacity='0.70'
					BackgroundTint='#00D6FB'
					Location='0,4'
					Name='inFrame'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='back1'
					RStyleDefault='/Styles.New.fatFrameInside_palW.rs_default'
					ScrollExtent='820,264'
					Size='820,264'
				/>
			</Page>
		</Page>
		<Page
			Name='bg'
			PackLocation='nfn,nfn'
			PackSize='a,a'
			ScrollExtent='840,613'
			Size='840,613'
		>
			<Page
				Location='829,8'
				Name='mmc'
				PackLocation='fff,nfn'
				PackSize='f,f'
				RStyleDefault='/Styles.New.thin_mmc.rs_default'
				ScrollExtent='12,10'
				Size='12,10'
			>
				<Button
					BackgroundColor='#FFFFFF'
					BackgroundOpacity='0.80'
					IsCancelButton='true'
					Location='-3,-3'
					Name='close'
					PackLocation='fff,cfc'
					PackSize='f,f'
					ScrollExtent='16,16'
					Size='16,16'
					Style='/Styles.Frame.buttonClose.style'
				></Button>
			</Page>
			<Page
				Name='caption'
				PackLocation='nfn,nfn'
				PackSize='a,f'
				ScrollExtent='601,16'
				Size='601,16'
			>
				<Text
					Enabled='false'
					Font='bold_13'
					LocalText='[@UI_PM:CPT_BROWSER]'
					Margin='6,0,0,0'
					MaxLines='1'
					Name='text'
					PackSize='a,f'
					PalText='titletext'
					ScrollExtent='601,16'
					Size='601,16'
					TextAlignmentVertical='Center'
					TextCapital='true'
					TextColor='#00354F'
				>@ui_pm:cpt_browser</Text>
			</Page>
			<Page
				BackgroundTint='#00D6FB'
				GetsInput='false'
				Location='1,0'
				Name='frame'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				PalBgTint='baselight'
				RStyleDefault='/Styles.New.thin_in.rs_default'
				ScrollExtent='839,613'
				Selectable='true'
				Size='839,613'
			>
				<Page
					BackgroundColor='#FFFFFF'
					GetsInput='false'
					Location='1,0'
					Name='lines'
					PackSize='a,a'
					RStyleDefault='/Styles.space.boxes.generic4.rs_default'
					ScrollExtent='839,613'
					Size='839,613'
				>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='0,591'
						Name='outlineBL'
						OpacityRelativeMin='0.80'
						PackLocation='nfn,fff'
						PackSize='p,f'
						ScrollExtent='659,22'
						Size='659,22'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#1CFFFF'
							GetsInput='false'
							Location='0,13'
							Name='outline1'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							PalBgTint='line1'
							RStyleDefault='/Styles.space.boxes.boxlinebottomLeft2.rs_default'
							ScrollExtent='659,9'
							Size='659,9'
						/>
					</Page>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='231,591'
						Name='outlineBR'
						OpacityRelativeMin='0.80'
						PackLocation='fff,fff'
						PackSize='p,f'
						RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
						ScrollExtent='608,22'
						Size='608,22'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#1CFFFF'
							GetsInput='false'
							Location='0,13'
							Name='outline1'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							PalBgTint='line1'
							RStyleDefault='/Styles.space.boxes.boxlinebottomRight2.rs_default'
							ScrollExtent='608,9'
							Size='608,9'
						/>
					</Page>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='231,0'
						Name='outlineTR'
						OpacityRelativeMin='0.80'
						PackLocation='fff,nfn'
						PackSize='p,f'
						ScrollExtent='608,22'
						Size='608,22'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#1CFFFF'
							GetsInput='false'
							Name='outline1'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							PalBgTint='line1'
							RStyleDefault='/Styles.space.boxes.boxlineTopRight2.rs_default'
							ScrollExtent='608,9'
							Size='608,9'
						/>
					</Page>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Name='outlineTL'
						OpacityRelativeMin='0.80'
						PackLocation='nfn,nfn'
						PackSize='p,f'
						RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
						ScrollExtent='659,22'
						Size='659,22'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#1CFFFF'
							GetsInput='false'
							Name='outline1'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							PalBgTint='line1'
							RStyleDefault='/Styles.space.boxes.boxlineTopLeft2.rs_default'
							ScrollExtent='659,9'
							Size='659,9'
						/>
					</Page>
				</Page>
				<Page
					BackgroundOpacity='1.00'
					Location='-1,0'
					Name='top'
					PackLocation='nfn,nfn'
					PackSize='a,f'
					RStyleDefault='/Styles.New.main_TR.rs_default'
					ScrollExtent='840,29'
					Size='840,29'
				/>
				<Page
					BackgroundOpacity='1.00'
					Location='0,590'
					Name='bottom'
					PackLocation='nfn,fff'
					PackSize='a,f'
					RStyleDefault='/Styles.New.main_BR.rs_default'
					ScrollExtent='839,23'
					Size='839,23'
				/>
			</Page>
			<Page
				BackgroundOpacity='1.00'
				BackgroundTint='#00D6FB'
				GetsInput='false'
				Location='0,5'
				Name='back'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				PalBgTint='back1'
				RStyleDefault='/Styles.New.thin_in.rs_default'
				ScrollExtent='840,605'
				Selectable='true'
				Size='840,605'
			/>
			<Page
				BackgroundOpacity='1.00'
				BackgroundTint='#00D6FB'
				GetsInput='false'
				Location='0,5'
				Name='back'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				PalBgTint='back1'
				RStyleDefault='/Styles.space.spaceglow.rs_default'
				ScrollExtent='840,605'
				Selectable='true'
				Size='840,605'
			/>
		</Page>
	</Page>
