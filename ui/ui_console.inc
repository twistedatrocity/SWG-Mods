	<Page
		BackgroundOpacity='0.70'
		Name='Console'
		OnHideEffector='/Effectors.FadeOut'
		OnShowEffector='/Effectors.FadeFull'
		PackSize='1,1'
		ScrollExtent='1024,768'
		Size='1024,768'
		Visible='false'
		VisualEditLock='true'
	>
		<DataSource
			Name='vds2'
		/>
		<DataSource
			Name='vds'
		>
			<Data
				appearanceTemplate='appearance/pt_burning_smokeandembers_large.prt'
				Name='d'
			/>
		</DataSource>
		<Scrollbar
			BackgroundColor='#0000FF'
			Control='OutputText'
			Enabled='false'
			Location='1009,0'
			Name='InfoScrollbar'
			PackLocation='RightFixed,TopFixed'
			PackSize='fixed,absolute'
			ScrollExtent='12,738'
			Size='12,738'
			Style='/Styles.scrollbar.default.vHud4.style'
		>
		</Scrollbar>
		<CuiWidget3dObjectListViewer
			BackgroundColor='#FFFFFF'
			BackgroundOpacity='0.30'
			cameralookatcenter='true'
			cameratransformtoobj='true'
			camerayaw='90'
			dragpitchok='true'
			dragyawok='true'
			fieldofview='60'
			FitDistanceFactor='1'
			lightambientcolor='#999999'
			lightcolor='#ffffff'
			Location='413,64'
			Name='v'
			objectdatasource='vds'
			PackSize='a,a'
			paused='true'
			ScrollExtent='600,600'
			Size='600,600'
			Visible='false'
		/>
		<Textbox
			BackgroundOpacity='1.00'
			LocalTooltip='Enter Commands Here'
			Location='0,736'
			Name='InputTextbox'
			PackLocation='LeftFixed,BottomFixed'
			PackSize='1,fixed'
			RStyleDefault='/Styles.window.mfd.mfd3.rs_default'
			ScrollExtent='1024,30'
			Size='1024,30'
			Style='/Styles.textbox.chat.Style'
			Tooltip='Enter Commands Here'
			TooltipStyle='Enter Commands Here'
			VisualEditLock='true'
		></Textbox>
		<Text
			CursorMark='87'
			CursorPoint='87'
			Font='fixed_12'
			GetsInput='true'
			LocalText='Console
Use \\\\#rrggbb to specify colors
\\#ff0000red, \\#00ff00green, \\#0000ffblue
\\#ffffff
'
			Name='OutputText'
			PackSize='absolute,absolute'
			ScrollExtent='1010,738'
			Selectable='true'
			Size='1010,738'
			VisualEditLock='true'
		>Console
Use \\\\#rrggbb to specify colors
\\#ff0000red, \\#00ff00green, \\#0000ffblue
\\#ffffff
</Text>
	</Page>
