		<Page
			Location='205,72'
			MinimumSize='1022,593'
			Name='weaponGroupAssignment'
			OnShowEffector='/effectors.scale.scalemiddleOut'
			RStyleDefault='rs_default'
			ScrollExtent='1022,593'
			Size='1022,593'
			UserMovable='true'
			UserResizable='true'
			Visible='false'
		>
			<Data
				addbutton='inner.comp.right.comp.buttons.buttonadd'
				bottomlist='inner.comp.right.comp.right.inner.pageList.list'
				bottomTextAttribs='inner.comp.right.comp.right.text.textAttribs'
				buttonclose='inner.mmc.close'
				leftlist='inner.comp.left.inner.pageList.list'
				Name='CodeData'
				removebutton='inner.comp.right.comp.buttons.buttonremove'
				toplist='inner.comp.right.comp.left.inner.pageList.list'
				topTextAttribs='inner.comp.right.comp.left.text.textAttribs'
			/>
			<Page
				BackgroundColor='#BEBEBE'
				MinimumSize='441,204'
				Name='inner'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				ScrollExtent='1022,593'
				Size='1022,593'
			>
				<Page
					Location='1001,13'
					Name='mmc'
					OpacityRelativeMin='0.80'
					PackLocation='fff,nfn'
					PackSize='f,f'
					RStyleDefault='/Styles.New.thin_mmc.rs_default'
					ScrollExtent='13,13'
					Size='13,13'
				>
					<Button
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='0.80'
						IsCancelButton='true'
						Location='1,1'
						Name='close'
						PackLocation='fff,cfc'
						PackSize='f,f'
						ScrollExtent='11,10'
						Size='11,10'
						Style='/Styles.space.button.CloseDark.style'
					></Button>
				</Page>
				<Composite
					Location='1,-1'
					MinimumSize='441,204'
					Name='comp'
					Orientation='Horizontal'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					ScrollExtent='1022,594'
					Size='1022,594'
					SpacingType='Fill'
				>
					<Page
						Location='0,6'
						MaximumSize='341,16384'
						MinimumSize='341,587'
						Name='left'
						PackSize='f,a'
						ScrollExtent='341,587'
						Size='341,587'
					>
						<Page
							BackgroundTint='#00D6FB'
							Location='327,0'
							MaximumSize='16328,16328'
							Name='SingleVertLineLeft'
							PackLocation='fff,nfn'
							PackSize='f,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.space.vertLineGlow.rs_default'
							ScrollExtent='14,587'
							Size='14,587'
						>
							<Page
								BackgroundOpacity='1.00'
								BackgroundTint='#1CFFFF'
								Location='5,0'
								MaximumSize='16328,16328'
								Name='lineT'
								PackLocation='nfn,fff'
								PackSize='f,a'
								PalBgTint='line1'
								RStyleDefault='/Styles.space.vertLine.rs_default'
								ScrollExtent='5,587'
								Size='5,587'
							/>
							<Page
								BackgroundOpacity='1.00'
								BackgroundTint='#00D6FB'
								MaximumSize='16328,16328'
								Name='glowT'
								PackLocation='nfn,fff'
								PackSize='f,a'
								PalBgTint='back1'
								RStyleDefault='/Styles.space.vertLineGlow.rs_default'
								ScrollExtent='14,587'
								Size='14,587'
							/>
							<Page
								BackgroundOpacity='1.00'
								BackgroundTint='#1CFFFF'
								Location='5,0'
								MaximumSize='16328,16328'
								Name='lineB'
								PackLocation='nfn,fff'
								PackSize='f,a'
								PalBgTint='line1'
								RStyleDefault='/Styles.space.vertLine.rs_default'
								ScrollExtent='5,587'
								Size='5,587'
							/>
							<Page
								BackgroundOpacity='1.00'
								BackgroundTint='#00D6FB'
								MaximumSize='16328,16328'
								Name='glowB'
								PackLocation='nfn,fff'
								PackSize='f,a'
								PalBgTint='back1'
								RStyleDefault='/Styles.space.vertLineGlow.rs_default'
								ScrollExtent='14,587'
								Size='14,587'
							/>
						</Page>
						<Page
							Location='10,8'
							Name='caption'
							PackLocation='nfn,nfn'
							PackSize='a,f'
							ScrollExtent='317,30'
							Size='317,30'
						>
							<Text
								Enabled='false'
								Font='bold_18'
								LocalText='[@UI_WEAPONGROUPASSIGNMENT:CAPTION]'
								Margin='6,0,0,0'
								MinimumSize='0,19'
								Name='text'
								OpacityRelativeMin='0.80'
								PackSize='a,f'
								PalText='titletext'
								ScrollExtent='317,38'
								Size='317,30'
								TextAlignmentVertical='Center'
								TextCapital='true'
								TextColor='#00354F'
							>@ui_weapongroupassignment:caption</Text>
						</Page>
						<Page
							Location='3,43'
							Name='inner'
							PackSize='a,a'
							ScrollExtent='338,503'
							Size='338,503'
						>
							<Text
								Enabled='false'
								Font='bold_16'
								LocalText='[@ui_weapongroupassignment:weapon_groups_available]'
								Location='4,0'
								Margin='2,2,2,2'
								MinimumSize='0,19'
								Name='text'
								OpacityRelativeMin='0.80'
								PackSize='a,f'
								PalText='header'
								RStyleDefault='rs_default'
								RStyleText='/Styles.space.boxes.textBack.rs_default'
								ScrollExtent='326,38'
								Size='326,28'
								TextAlignment='Center'
								TextColor='#97FFFF'
							>@ui_weapongroupassignment:weapon_groups_available</Text>
							<Page
								Location='4,21'
								Name='pageList'
								PackSize='a,a'
								RStyleDefault='rs_default'
								ScrollExtent='325,474'
								Size='325,474'
							>
								<DataSource
									Name='ListData'
									Size='128,64'
								>
									<Data
										Name='0'
										Size='128,64'
										Text='xxx weapongroup here'
									/>
									<Data
										Name='1'
										Size='128,64'
										Text='xxx weapongroup here'
									/>
								</DataSource>
								<Scrollbar
									Control='list'
									Enabled='false'
									Location='312,0'
									Name='scrollList'
									PackLocation='fff'
									PackSize='f,a'
									ScrollExtent='10,474'
									Size='10,474'
									Style='/Styles.space.scrollbar.vHud4.style'
								>
								</Scrollbar>
								<List
									BackgroundColor='#000000'
									BackgroundOpacity='0.00'
									DataSource='ListData'
									Location='0,7'
									MinimumScrollExtent='309,65'
									Name='list'
									OpacityRelativeMin='0.80'
									PackLocation='nfn,nfn'
									PackSize='a,a'
									ScrollExtent='309,476'
									SelectedRow='1'
									SelectedRowCount='1'
									SelectionAllowedMultiRow='false'
									Size='309,476'
									Style='/Styles.space.list.combo.style'
								/>
							</Page>
						</Page>
						<Button
							cmdstr='/ship weaponGroup defaults'
							LocalText='[@ui_weapongroupassignment:reset_defaults]'
							Location='27,554'
							MinimumSize='0,27'
							Name='buttonReset'
							OpacityRelativeMin='0.80'
							PackLocation='nfn,fff'
							PackSize='a,f'
							ScrollExtent='266,27'
							Size='266,27'
							Style='/Styles.space.button4.style'
							TextColor='#000000'
						>@ui_weapongroupassignment:reset_defaults</Button>
					</Page>
					<Page
						Location='341,0'
						Name='right'
						PackLocation='nfn,nfn'
						PackSize='f,a'
						ScrollExtent='681,594'
						Size='681,594'
					>
						<Composite
							Location='4,8'
							Name='comp'
							Orientation='Horizontal'
							PackSize='a,a'
							ScrollExtent='674,580'
							Size='674,580'
							SpacingType='Fill'
						>
							<Composite
								Name='left'
								PackSize='f,a'
								ScrollExtent='314,580'
								Size='314,580'
								SpacingType='Fill'
							>
								<Page
									Name='inner'
									PackSize='a,0.9'
									ScrollExtent='314,260'
									Size='314,260'
								>
									<Text
										Enabled='false'
										Font='bold_16'
										LocalText='[@ui_weapongroupassignment:all_weapons]'
										Location='0,26'
										Margin='2,2,2,2'
										MinimumSize='0,19'
										Name='text'
										OpacityRelativeMin='0.80'
										PackSize='a,f'
										PalText='header'
										RStyleDefault='rs_default'
										ScrollExtent='304,38'
										Size='304,19'
										TextAlignment='Center'
										TextColor='#97FFFF'
									>@ui_weapongroupassignment:all_weapons</Text>
									<Page
										Location='0,47'
										Name='pageList'
										PackSize='a,a'
										RStyleDefault='rs_default'
										ScrollExtent='314,204'
										Size='314,204'
									>
										<Scrollbar
											Control='list'
											Location='301,-1'
											Name='scrollList'
											PackLocation='fff'
											PackSize='f,a'
											ScrollExtent='10,204'
											Size='10,204'
											Style='/Styles.space.scrollbar.vHud4.style'
										>
										</Scrollbar>
										<DataSource
											Name='ListData'
											Size='128,64'
										>
											<Data
												Name='Marksman'
												Size='128,64'
												Text='xxx weapon here'
											/>
											<Data
												Name='Marksman'
												Size='128,64'
												Text='xxx weapon here'
											/>
											<Data
												Name='Marksman'
												Size='128,64'
												Text='xxx weapon here'
											/>
											<Data
												Name='Marksman'
												Size='128,64'
												Text='xxx weapon here'
											/>
											<Data
												Name='Marksman'
												Size='128,64'
												Text='xxx weapon here'
											/>
										</DataSource>
										<List
											BackgroundColor='#000000'
											BackgroundOpacity='0.00'
											DataSource='ListData'
											Location='2,-1'
											MinimumScrollExtent='298,152'
											Name='list'
											OpacityRelativeMin='0.80'
											PackLocation='nfn,nfn'
											PackSize='a,a'
											ScrollExtent='298,204'
											SelectedRow='3'
											SelectedRowCount='1'
											SelectionAllowedMultiRow='false'
											Size='298,204'
											Style='/Styles.space.list.combo.style'
										/>
									</Page>
								</Page>
								<Page
									BackgroundTint='#1CFFFF'
									Location='0,260'
									Name='text'
									PackLocation='nfn,nfn'
									PackSize='a,f'
									PalBgTint='line1'
									ScrollExtent='314,320'
									Selectable='true'
									Size='314,320'
								>
									<Text
										Font='bold_16'
										LocalText='xxx attrib 1:    info here
xxx attrib 2:    info here
xxx attrib 3:    info here
xxx attrib 4:    info here
xxx attrib 5:    info here
xxx attrib 6:    info here
xxx attrib 7:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
'
										Location='8,9'
										Margin='4,4,4,4'
										Name='textAttribs'
										OpacityRelativeMin='0.80'
										PackSize='a,f'
										PalText='text1'
										RStyleDefault='/Styles.New.whitebox.rs_default'
										ScrollExtent='287,365'
										Size='287,337'
										TextColor='#96F4FC'
									>xxx attrib 1:    info here
xxx attrib 2:    info here
xxx attrib 3:    info here
xxx attrib 4:    info here
xxx attrib 5:    info here
xxx attrib 6:    info here
xxx attrib 7:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
</Text>
									<Scrollbar
										Control='textAttribs'
										Enabled='false'
										Location='302,7'
										Name='Scroll'
										Opacity='0.90'
										OpacityRelativeMin='0.80'
										PackLocation='fff,nfn'
										PackSize='f,a'
										ScrollExtent='11,303'
										Size='11,303'
										Style='/Styles.scrollbar.default.vHud4.style'
									>
									</Scrollbar>
									<Page
										BackgroundColor='#FFFFFF'
										BackgroundOpacity='0.30'
										BackgroundTint='#01687E'
										Location='4,0'
										Name='box'
										PackLocation='nfn,nfn'
										PackSize='a,a'
										PalBgTint='back2'
										RStyleDefault='/Styles.New.whitebox_palW.rs_default'
										ScrollExtent='294,320'
										Size='294,320'
									/>
								</Page>
							</Composite>
							<Page
								Location='314,0'
								MaximumSize='43,16328'
								MinimumSize='43,0'
								Name='buttons'
								PackLocation='nfn,nfn'
								PackSize='f,a'
								ScrollExtent='43,580'
								Size='43,580'
							>
								<Page
									BackgroundOpacity='1.00'
									BackgroundTint='#1CFFFF'
									Location='12,303'
									MaximumSize='16328,16328'
									Name='bottomLine'
									PackLocation='cfc,fff'
									PackSize='f,h'
									PalBgTint='line1'
									RStyleDefault='/Styles.space.splitLinebottom.rs_default'
									ScrollExtent='19,277'
									Size='19,277'
								/>
								<Page
									BackgroundOpacity='1.00'
									BackgroundTint='#1CFFFF'
									Location='12,0'
									MaximumSize='16328,16328'
									Name='topLine'
									PackLocation='cfc,nfn'
									PackSize='f,h'
									PalBgTint='line1'
									RStyleDefault='/Styles.space.splitLinetop.rs_default'
									ScrollExtent='19,277'
									Size='19,277'
								/>
								<Button
									BackgroundColor='#FFFFFF'
									IconMargin='4,2,2,2'
									Location='21,276'
									MaximumSize='32,32'
									MinimumSize='22,27'
									Name='buttonAdd'
									OpacityRelativeMin='0.80'
									PackLocation='cfc,cfc'
									PackSize='f,f'
									ScrollExtent='22,27'
									Size='22,27'
									Style='/Styles.space.button.add.style'
								></Button>
								<Button
									BackgroundColor='#FFFFFF'
									IconMargin='4,2,4,2'
									Location='2,277'
									MaximumSize='32,32'
									MinimumSize='22,27'
									Name='buttonRemove'
									OpacityRelativeMin='0.80'
									PackLocation='cfc,cfc'
									PackSize='f,f'
									ScrollExtent='22,27'
									Size='22,27'
									Style='/Styles.space.button.remove.style'
									TextColor='#000000'
								></Button>
							</Page>
							<Composite
								Location='357,0'
								Name='right'
								PackSize='f,a'
								ScrollExtent='317,580'
								Size='317,580'
								SpacingType='Fill'
							>
								<Page
									Name='inner'
									PackSize='a,0.9'
									ScrollExtent='317,260'
									Size='317,260'
								>
									<Text
										Enabled='false'
										Font='bold_16'
										LocalText='[@ui_weapongroupassignment:selected_group]'
										Location='0,26'
										Margin='2,2,2,2'
										MinimumSize='0,19'
										Name='text'
										OpacityRelativeMin='0.80'
										PackSize='a,f'
										PalText='header'
										RStyleDefault='rs_default'
										ScrollExtent='300,38'
										Size='300,19'
										TextAlignment='Center'
										TextColor='#97FFFF'
									>@ui_weapongroupassignment:selected_group</Text>
									<Page
										Location='0,47'
										Name='pageList'
										PackSize='a,a'
										RStyleDefault='rs_default'
										ScrollExtent='317,204'
										Size='317,204'
									>
										<Scrollbar
											Control='list'
											Location='304,-1'
											Name='scrollList'
											PackLocation='fff'
											PackSize='f,a'
											ScrollExtent='10,204'
											Size='10,204'
											Style='/Styles.space.scrollbar.vHud4.style'
										>
										</Scrollbar>
										<DataSource
											Name='ListData'
											Size='128,64'
										>
											<Data
												Name='Marksman'
												Size='128,64'
												Text='xxx weapon here'
											/>
											<Data
												Name='Marksman'
												Size='128,64'
												Text='xxx weapon here'
											/>
											<Data
												Name='Marksman'
												Size='128,64'
												Text='xxx weapon here'
											/>
											<Data
												Name='Marksman'
												Size='128,64'
												Text='xxx weapon here'
											/>
											<Data
												Name='Marksman'
												Size='128,64'
												Text='xxx weapon here'
											/>
										</DataSource>
										<List
											BackgroundColor='#000000'
											BackgroundOpacity='0.00'
											DataSource='ListData'
											Location='2,-1'
											MinimumScrollExtent='301,152'
											Name='list'
											OpacityRelativeMin='0.80'
											PackLocation='nfn,nfn'
											PackSize='a,a'
											ScrollExtent='301,204'
											SelectedRow='4'
											SelectedRowCount='1'
											SelectionAllowedMultiRow='false'
											Size='301,204'
											Style='/Styles.space.list.combo.style'
										/>
									</Page>
								</Page>
								<Page
									BackgroundTint='#1CFFFF'
									Location='0,260'
									Name='text'
									PackLocation='nfn,nfn'
									PackSize='a,f'
									PalBgTint='line1'
									ScrollExtent='317,320'
									Selectable='true'
									Size='317,320'
								>
									<Text
										Font='bold_16'
										LocalText='xxx attrib 1:    info here
xxx attrib 2:    info here
xxx attrib 3:    info here
xxx attrib 4:    info here
xxx attrib 5:    info here
xxx attrib 6:    info here
xxx attrib 7:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
'
										Location='8,9'
										Margin='4,4,4,4'
										Name='textAttribs'
										OpacityRelativeMin='0.80'
										PackSize='a,f'
										PalText='text1'
										RStyleDefault='/Styles.New.whitebox.rs_default'
										ScrollExtent='290,365'
										Size='290,337'
										TextColor='#96F4FC'
									>xxx attrib 1:    info here
xxx attrib 2:    info here
xxx attrib 3:    info here
xxx attrib 4:    info here
xxx attrib 5:    info here
xxx attrib 6:    info here
xxx attrib 7:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
xxx attrib 8:    info here
</Text>
									<Scrollbar
										Control='textAttribs'
										Enabled='false'
										Location='305,7'
										Name='Scroll'
										Opacity='0.90'
										OpacityRelativeMin='0.80'
										PackLocation='fff,nfn'
										PackSize='f,a'
										ScrollExtent='11,303'
										Size='11,303'
										Style='/Styles.scrollbar.default.vHud4.style'
									>
									</Scrollbar>
									<Page
										BackgroundColor='#FFFFFF'
										BackgroundOpacity='0.30'
										BackgroundTint='#01687E'
										Location='4,0'
										Name='box'
										PackLocation='nfn,nfn'
										PackSize='a,a'
										PalBgTint='back2'
										RStyleDefault='/Styles.New.whitebox_palW.rs_default'
										ScrollExtent='297,320'
										Size='297,320'
									/>
								</Page>
							</Composite>
						</Composite>
					</Page>
				</Composite>
			</Page>
			<Page
				Name='bg'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				ScrollExtent='1022,593'
				Size='1022,593'
			>
				<Page
					BackgroundColor='#FFFFFF'
					GetsInput='false'
					Name='background'
					PackSize='a,a'
					RStyleDefault='/Styles.space.boxes.generic4.rs_default'
					ScrollExtent='1022,593'
					Size='1022,593'
				>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='0,571'
						Name='outlineBL'
						OpacityRelativeMin='0.80'
						PackLocation='nfn,fff'
						PackSize='p,f'
						ScrollExtent='815,22'
						Size='815,22'
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
							RStyleDefault='/Styles.space.boxes.boxlinebottomLeft.rs_default'
							ScrollExtent='815,9'
							Size='815,9'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#00D6FB'
							GetsInput='false'
							Location='0,9'
							Name='outline2'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.space.boxes.boxlineglowBL.rs_default'
							ScrollExtent='815,19'
							Size='815,19'
						/>
					</Page>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='267,571'
						Name='outlineBR'
						OpacityRelativeMin='0.80'
						PackLocation='fff,fff'
						PackSize='p,f'
						RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
						ScrollExtent='755,22'
						Size='755,22'
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
							RStyleDefault='/Styles.space.boxes.boxlinebottomRight.rs_default'
							ScrollExtent='755,9'
							Size='755,9'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#00D6FB'
							GetsInput='false'
							Location='-5,9'
							Name='outline2'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.space.boxes.boxlineglowBR.rs_default'
							ScrollExtent='760,19'
							Size='760,19'
						/>
					</Page>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='267,0'
						Name='outlineTR'
						OpacityRelativeMin='0.80'
						PackLocation='fff,nfn'
						PackSize='p,f'
						ScrollExtent='755,22'
						Size='755,22'
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
							RStyleDefault='/Styles.space.boxes.boxlineTopRight.rs_default'
							ScrollExtent='755,9'
							Size='755,9'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#00D6FB'
							GetsInput='false'
							Location='-5,-6'
							Name='outline2'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.space.boxes.boxlineglowTR.rs_default'
							ScrollExtent='760,17'
							Size='760,17'
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
						ScrollExtent='815,22'
						Size='815,22'
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
							RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
							ScrollExtent='815,9'
							Size='815,9'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#00D6FB'
							GetsInput='false'
							Location='0,-6'
							Name='outline2'
							OpacityRelativeMin='0.80'
							PackSize='a,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.space.boxes.boxlineglowTL.rs_default'
							ScrollExtent='815,17'
							Size='815,17'
						/>
					</Page>
					<Page
						BackgroundOpacity='1.00'
						BackgroundTint='#00D6FB'
						GetsInput='false'
						Location='-1,2'
						Name='back2'
						PackSize='a,a'
						PalBgTint='back1'
						RStyleDefault='/Styles.space.boxes.generic8_noshader.rs_default'
						ScrollExtent='1023,589'
						Size='1023,589'
					/>
					<Page
						BackgroundOpacity='1.00'
						BackgroundTint='#00D6FB'
						GetsInput='false'
						Location='-1,2'
						Name='back'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='back1'
						RStyleDefault='/Styles.space.spaceglow.rs_default'
						ScrollExtent='1023,589'
						Selectable='true'
						Size='1023,589'
					/>
				</Page>
			</Page>
		</Page>
