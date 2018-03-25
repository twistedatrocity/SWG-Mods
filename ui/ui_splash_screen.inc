	<Page
		0.enabled='false'
		2.enabled='true'
		3noJTL.enabled='false'
		3withJTL.enabled='false'
		Activated='true'
		BackgroundOpacity='1.00'
		Name='Splash'
		OnDisableEffector='/effectors.opacity.slow.fadeout'
		OnEnable='opacity=1.0'
		PackSize='1,1'
		ScrollExtent='1024,768'
		Selectable='true'
		Size='1024,768'
		Visible='false'
		VisualEditLock='true'
	>
		<Data
			0ANV='0ANV'
			0COA='0COA'
			0JTL='0JTL'
			0JTLJapan='0JTLJapan'
			0ROTW='0ROTW'
			0SWG='0SWG'
			1='1'
			2='2'
			3='3'
			Name='CodeData'
			textVersion='textVersion'
		/>
		<Text
			Font='bold_16'
			LocalText='xxx version number here'
			Location='639,4'
			Name='textVersion'
			PackLocation='fff,nfn'
			ScrollExtent='381,34'
			Size='381,34'
			TextAlignment='Right'
			TextAlignmentVertical='Center'
			Visible='false'
		>xxx version number here</Text>
		<Page
			BackgroundOpacity='1.00'
			Enabled='false'
			Name='0ANV'
			OnDisableEffector='/effectors.opacity.slow.fadeout'
			OnEnable='parent.0SWG.enabled=false
parent.0COA.enabled=false
parent.0JTL.enabled=false
parent.0JTLJapan.enabled=false
parent.0ROTW.enabled=false
parent.1.enabled=false
parent.2.enabled=false
parent.3.enabled=false
opacity=1.0'
			OnEnableEffector='/effectors.opacity.slow.fadefull'
			Opacity='0.00'
			PackLocation='nfn,nfn'
			PackSize='p,p'
			ScrollExtent='1024,768'
			Size='1024,768'
		>
			<Image
				Location='282,667'
				Name='cpyright'
				PackLocation='cfc,fff'
				PackSize='f,f'
				ScrollExtent='15,15'
				Size='15,15'
				SourceRect='298,341,315,358'
				SourceResource='ui_rebel_final'
			/>
			<Image
				Location='824,663'
				MaximumSize='187,91'
				MinimumSize='187,91'
				Name='logos'
				PackLocation='fff,fff'
				PackSize='f,f'
				ScrollExtent='187,91'
				Size='187,91'
				SourceRect='288,397,510,512'
				SourceResource='ui_notice'
			/>
			<Image
				Location='5,618'
				MaximumSize='208,136'
				MinimumSize='208,136'
				Name='rating'
				PackLocation='nfn,fff'
				PackSize='f,f'
				ScrollExtent='208,136'
				Size='208,136'
				SourceRect='10,95,500,415'
				SourceResource='esrb_screen'
			/>
			<Page
				Location='212,607'
				MaximumSize='600,145'
				MinimumSize='600,145'
				Name='text'
				OnDisableEffector='/effectors.opacity.slow.fadeout'
				OnEnable='parent.0.enabled=false
parent.1.enabled=false

'
				OnEnableEffector='/effectors.opacity.slow.fadefull'
				PackLocation='cfc,fff'
				PackSize='f,f'
				ScrollExtent='600,145'
				Size='600,145'
			>
				<Text
					Font='default_14'
					LocalText='LucasArts, the LucasArts logo, STAR WARS and related properties are trademarks in
the United States and/or in other countries of Lucasfilm Ltd. and/or its affiliates.
STAR WARS GALAXIES is a trademark of Lucasfilm Entertainment Company Ltd.

2002-2010 Lucasfilm Entertainment Company Ltd. or Lucasfilm Ltd.
All rights reserved.

SOE and the SOE logo are registered trademarks of Sony Online Entertainment LLC in the US and/or other countries.
'
					Name='lucas'
					PackLocation='nfn,nfn'
					PackSize='f,f'
					ScrollExtent='600,150'
					Size='600,145'
					TextAlignment='Center'
					TextAlignmentVertical='Center'
				>LucasArts, the LucasArts logo, STAR WARS and related properties are trademarks in
the United States and/or in other countries of Lucasfilm Ltd. and/or its affiliates.
STAR WARS GALAXIES is a trademark of Lucasfilm Entertainment Company Ltd.

2002-2010 Lucasfilm Entertainment Company Ltd. or Lucasfilm Ltd.
All rights reserved.

SOE and the SOE logo are registered trademarks of Sony Online Entertainment LLC in the US and/or other countries.
</Text>
			</Page>
			<Image
				BackgroundOpacity='1.00'
				Location='227,20'
				Name='swgAnniversary'
				PackLocation='cpc,cpc'
				PackSize='f,f'
				ScrollExtent='570,570'
				Size='570,570'
				SourceRect='0,0,512,512'
				SourceResource='ui_logo_6th'
				Style='splash'
			/>
		</Page>
		<Page
			BackgroundOpacity='1.00'
			Enabled='false'
			Name='0SWG'
			OnDisableEffector='/effectors.opacity.slow.fadeout'
			OnEnable='parent.0ANV.enabled=false
parent.0COA.enabled=false
parent.0JTL.enabled=false
parent.0JTLJapan.enabled=false
parent.0ROTW.enabled=false
parent.1.enabled=false
parent.2.enabled=false
parent.3.enabled=false
opacity=1.0'
			OnEnableEffector='/effectors.opacity.slow.fadefull'
			Opacity='0.00'
			PackLocation='nfn,nfn'
			PackSize='p,p'
			ScrollExtent='1024,768'
			Size='1024,768'
		>
			<Image
				Location='284,669'
				Name='cpyright'
				PackLocation='cfc,fff'
				PackSize='f,f'
				ScrollExtent='15,15'
				Size='15,15'
				SourceRect='298,341,315,358'
				SourceResource='ui_rebel_final'
			/>
			<Image
				Location='824,663'
				MaximumSize='187,91'
				MinimumSize='187,91'
				Name='logos'
				PackLocation='fff,fff'
				PackSize='f,f'
				ScrollExtent='187,91'
				Size='187,91'
				SourceRect='288,397,510,512'
				SourceResource='ui_notice'
			/>
			<Image
				Location='11,626'
				MaximumSize='178,128'
				MinimumSize='178,128'
				Name='rating'
				PackLocation='nfn,fff'
				PackSize='f,f'
				ScrollExtent='178,128'
				Size='178,128'
				SourceRect='45,108,467,406'
				SourceResource='esrb_screen'
			/>
			<Page
				Location='212,607'
				MaximumSize='600,145'
				MinimumSize='600,145'
				Name='text'
				OnDisableEffector='/effectors.opacity.slow.fadeout'
				OnEnable='parent.0.enabled=false
parent.1.enabled=false

'
				OnEnableEffector='/effectors.opacity.slow.fadefull'
				PackLocation='cfc,fff'
				PackSize='f,f'
				ScrollExtent='600,145'
				Size='600,145'
			>
				<Text
					Font='default_14'
					LocalText='LucasArts, the LucasArts logo, STAR WARS and related properties are trademarks in the United States
and/or in other countries of Lucasfilm Ltd. and/or its affiliates.
Star Wars Galaxies is a trademark of Lucasfilm Entertainment Company Ltd.
2002-2006 Lucasfilm Entertainment Company Ltd. or Lucasfilm Ltd.
All rights reserved.

SOE and the SOE logo are registered trademarks of Sony Online Entertainment LLC in the US and/or other countries.
'
					Name='lucas'
					PackLocation='nfn,nfn'
					PackSize='f,f'
					ScrollExtent='600,150'
					Size='600,145'
					TextAlignment='Center'
					TextAlignmentVertical='Center'
				>LucasArts, the LucasArts logo, STAR WARS and related properties are trademarks in the United States
and/or in other countries of Lucasfilm Ltd. and/or its affiliates.
Star Wars Galaxies is a trademark of Lucasfilm Entertainment Company Ltd.
2002-2006 Lucasfilm Entertainment Company Ltd. or Lucasfilm Ltd.
All rights reserved.

SOE and the SOE logo are registered trademarks of Sony Online Entertainment LLC in the US and/or other countries.
</Text>
			</Page>
			<Image
				BackgroundOpacity='1.00'
				Location='217,9'
				Name='swg'
				PackLocation='cpc,cpc'
				PackSize='f,f'
				ScrollExtent='570,570'
				Size='570,570'
				SourceRect='0,0,512,512'
				SourceResource='ui_starwars_logo'
				Style='splash'
			/>
		</Page>
		<Page
			BackgroundOpacity='1.00'
			Enabled='false'
			Name='0COA'
			OnDisableEffector='/effectors.opacity.slow.fadeout'
			OnEnable='parent.0SWG.enabled=false
parent.0JTL.enabled=false
parent.0JTLJapan.enabled=false
parent.0ROTW.enabled=false
parent.1.enabled=false
parent.2.enabled=false
parent.3.enabled=false
opacity=1.0'
			OnEnableEffector='/effectors.opacity.slow.fadefull'
			Opacity='0.00'
			PackLocation='nfn,nfn'
			PackSize='p,p'
			ScrollExtent='1024,768'
			Size='1024,768'
		>
			<Image
				Location='284,669'
				Name='cpyright'
				PackLocation='cfc,fff'
				PackSize='f,f'
				ScrollExtent='15,15'
				Size='15,15'
				SourceRect='298,341,315,358'
				SourceResource='ui_rebel_final'
			/>
			<Image
				Location='824,663'
				MaximumSize='187,91'
				MinimumSize='187,91'
				Name='logos'
				PackLocation='fff,fff'
				PackSize='f,f'
				ScrollExtent='187,91'
				Size='187,91'
				SourceRect='288,397,510,512'
				SourceResource='ui_notice'
			/>
			<Image
				Location='11,626'
				MaximumSize='178,128'
				MinimumSize='178,128'
				Name='rating'
				PackLocation='nfn,fff'
				PackSize='f,f'
				ScrollExtent='178,128'
				Size='178,128'
				SourceRect='45,108,467,406'
				SourceResource='esrb_screen'
			/>
			<Page
				Location='212,607'
				MaximumSize='600,145'
				MinimumSize='600,145'
				Name='text'
				OnDisableEffector='/effectors.opacity.slow.fadeout'
				OnEnable='parent.0.enabled=false
parent.1.enabled=false

'
				OnEnableEffector='/effectors.opacity.slow.fadefull'
				PackLocation='cfc,fff'
				PackSize='f,f'
				ScrollExtent='600,145'
				Size='600,145'
			>
				<Text
					Font='default_14'
					LocalText='LucasArts, the LucasArts logo, STAR WARS and related properties are trademarks in the United States
and/or in other countries of Lucasfilm Ltd. and/or its affiliates.
Star Wars Galaxies is a trademark of Lucasfilm Entertainment Company Ltd.
2002-2006 Lucasfilm Entertainment Company Ltd. or Lucasfilm Ltd.
All rights reserved.

SOE and the SOE logo are registered trademarks of Sony Online Entertainment LLC in the US and/or other countries.
'
					Name='lucas'
					PackLocation='nfn,nfn'
					PackSize='f,f'
					ScrollExtent='600,150'
					Size='600,145'
					TextAlignment='Center'
					TextAlignmentVertical='Center'
				>LucasArts, the LucasArts logo, STAR WARS and related properties are trademarks in the United States
and/or in other countries of Lucasfilm Ltd. and/or its affiliates.
Star Wars Galaxies is a trademark of Lucasfilm Entertainment Company Ltd.
2002-2006 Lucasfilm Entertainment Company Ltd. or Lucasfilm Ltd.
All rights reserved.

SOE and the SOE logo are registered trademarks of Sony Online Entertainment LLC in the US and/or other countries.
</Text>
			</Page>
			<Image
				BackgroundOpacity='1.00'
				Location='227,48'
				Name='swgTOW'
				PackLocation='cpc,cpc'
				PackSize='f,f'
				ScrollExtent='570,570'
				Size='570,570'
				SourceRect='0,0,512,512'
				SourceResource='ui_logo_coa'
				Style='splash'
			/>
		</Page>
		<Page
			BackgroundOpacity='1.00'
			Enabled='false'
			Name='0JTL'
			OnDisableEffector='/effectors.opacity.slow.fadeout'
			OnEnable='parent.0SWG.enabled=false
parent.0JTLJapan.enabled=false
parent.0TOW.enabled=false
parent.0ROTW.enabled=false
parent.1.enabled=false
parent.2.enabled=false
parent.3.enabled=false
opacity=1'
			OnEnableEffector='/effectors.opacity.slow.fadefull'
			Opacity='0.00'
			PackLocation='nfn,nfn'
			PackSize='p,p'
			ScrollExtent='1024,768'
			Size='1024,768'
		>
			<Image
				Location='284,688'
				Name='cpyright'
				PackLocation='cfc,fff'
				PackSize='f,f'
				ScrollExtent='15,15'
				Size='15,15'
				SourceRect='298,341,315,358'
				SourceResource='ui_rebel_final'
			/>
			<Image
				Location='824,663'
				MaximumSize='187,91'
				MinimumSize='187,91'
				Name='logos'
				PackLocation='fff,fff'
				PackSize='f,f'
				ScrollExtent='187,91'
				Size='187,91'
				SourceRect='288,397,510,512'
				SourceResource='ui_notice'
			/>
			<Image
				Location='11,674'
				MaximumSize='181,80'
				MinimumSize='181,80'
				Name='rating'
				PackLocation='nfn,fff'
				PackSize='f,f'
				ScrollExtent='181,80'
				Size='181,80'
				SourceRect='319,310,509,395'
				SourceResource='ui_notice'
			/>
			<Page
				Location='212,629'
				MaximumSize='600,130'
				MinimumSize='600,130'
				Name='text'
				OnDisableEffector='/effectors.opacity.slow.fadeout'
				OnEnable='parent.0.enabled=false
parent.1.enabled=false

'
				OnEnableEffector='/effectors.opacity.slow.fadefull'
				PackLocation='cfc,fff'
				PackSize='f,f'
				ScrollExtent='600,130'
				Size='600,130'
			>
				<Text
					Font='default_14'
					LocalText='LucasArts, the LucasArts logo, STAR WARS and related properties are trademarks in the United States
and/or in other countries of Lucasfilm Ltd. and/or its affiliates.
Star Wars Galaxies is a trademark of Lucasfilm Entertainment Company Ltd.
2002-2006 Lucasfilm Entertainment Company Ltd. or Lucasfilm Ltd.
All rights reserved.

SOE and the SOE logo are registered trademarks of Sony Online Entertainment LLC in the US and/or other countries.
'
					Name='lucas'
					PackLocation='nfn,nfn'
					PackSize='f,f'
					ScrollExtent='600,150'
					Size='600,130'
					TextAlignment='Center'
					TextAlignmentVertical='Center'
				>LucasArts, the LucasArts logo, STAR WARS and related properties are trademarks in the United States
and/or in other countries of Lucasfilm Ltd. and/or its affiliates.
Star Wars Galaxies is a trademark of Lucasfilm Entertainment Company Ltd.
2002-2006 Lucasfilm Entertainment Company Ltd. or Lucasfilm Ltd.
All rights reserved.

SOE and the SOE logo are registered trademarks of Sony Online Entertainment LLC in the US and/or other countries.
</Text>
			</Page>
			<Image
				BackgroundOpacity='1.00'
				Location='227,48'
				Name='swgJTL'
				PackLocation='cpc,cpc'
				PackSize='f,f'
				ScrollExtent='570,570'
				Size='570,570'
				SourceRect='0,0,512,512'
				SourceResource='ui_starwars_logo_jtl'
				Style='splash'
			/>
		</Page>
		<Page
			BackgroundOpacity='1.00'
			Enabled='false'
			Name='0JTLJapan'
			OnDisableEffector='/effectors.opacity.slow.fadeout'
			OnEnable='parent.0SWG.enabled=false
parent.0JTL.enabled=false
parent.0TOW.enabled=false
parent.0ROTW.enabled=false
parent.1.enabled=false
parent.2.enabled=false
parent.3.enabled=false
opacity=1'
			OnEnableEffector='/effectors.opacity.slow.fadefull'
			Opacity='0.00'
			PackLocation='nfn,nfn'
			PackSize='p,p'
			ScrollExtent='1024,768'
			Size='1024,768'
		>
			<Image
				Location='824,663'
				MaximumSize='187,91'
				MinimumSize='187,91'
				Name='logos'
				PackLocation='fff,fff'
				PackSize='f,f'
				ScrollExtent='187,91'
				Size='187,91'
				SourceRect='288,397,510,512'
				SourceResource='ui_notice'
			/>
			<Page
				Location='212,629'
				MaximumSize='600,130'
				MinimumSize='600,130'
				Name='text'
				OnDisableEffector='/effectors.opacity.slow.fadeout'
				OnEnable='parent.0.enabled=false
parent.1.enabled=false

'
				OnEnableEffector='/effectors.opacity.slow.fadefull'
				PackLocation='cfc,fff'
				PackSize='f,f'
				ScrollExtent='600,130'
				Size='600,130'
			>
				<Image
					Location='349,66'
					Name='registered'
					PackLocation='nfn,nfn'
					PackSize='f,f'
					ScrollExtent='15,15'
					Size='15,15'
					SourceRect='298,320,315,338'
					SourceResource='ui_rebel_final'
					Visible='false'
				/>
				<Image
					Location='135,53'
					Name='cpyright'
					PackLocation='nfn,nfn'
					PackSize='f,f'
					ScrollExtent='15,15'
					Size='15,15'
					SourceRect='298,341,315,358'
					SourceResource='ui_rebel_final'
					Visible='false'
				/>
				<Text
					Font='bold_11'
					LocalText='LucasArts, the LucasArts logo, STAR WARS and related properties are trademarks in the United States
and/or in other countries of Lucasfilm Ltd. and/or its affiliates.
Star Wars Galaxies is a trademark of Lucasfilm Entertainment Company Ltd.
2002-2006 Lucasfilm Entertainment Company Ltd. or Lucasfilm Ltd.
All rights reserved.

SOE and the SOE logo are registered trademarks of Sony Online Entertainment LLC in the US and/or other countries.
'
					Name='lucas'
					PackLocation='nfn,nfn'
					PackSize='f,f'
					ScrollExtent='600,130'
					Size='600,130'
					TextAlignment='Center'
					TextAlignmentVertical='Center'
				>LucasArts, the LucasArts logo, STAR WARS and related properties are trademarks in the United States
and/or in other countries of Lucasfilm Ltd. and/or its affiliates.
Star Wars Galaxies is a trademark of Lucasfilm Entertainment Company Ltd.
2002-2006 Lucasfilm Entertainment Company Ltd. or Lucasfilm Ltd.
All rights reserved.

SOE and the SOE logo are registered trademarks of Sony Online Entertainment LLC in the US and/or other countries.
</Text>
			</Page>
			<Image
				BackgroundOpacity='1.00'
				Location='227,48'
				Name='swgJTLJapan'
				PackLocation='cpc,cpc'
				PackSize='f,f'
				ScrollExtent='570,570'
				Size='570,570'
				SourceRect='0,0,512,512'
				SourceResource='ui_starwars_logo_jtl_japan'
				Style='splash'
			/>
		</Page>
		<Page
			BackgroundOpacity='1.00'
			Enabled='false'
			Name='0TOW'
			OnDisableEffector='/effectors.opacity.slow.fadeout'
			OnEnable='parent.0SWG.enabled=false
parent.0JTL.enabled=false
parent.0JTLJapan.enabled=false
parent.0ROTW.enabled=false
parent.1.enabled=false
parent.2.enabled=false
parent.3.enabled=false
opacity=1.0'
			OnEnableEffector='/effectors.opacity.slow.fadefull'
			Opacity='0.00'
			PackLocation='nfn,nfn'
			PackSize='p,p'
			ScrollExtent='1024,768'
			Size='1024,768'
		>
			<Image
				Location='284,688'
				Name='cpyright'
				PackLocation='cfc,fff'
				PackSize='f,f'
				ScrollExtent='15,15'
				Size='15,15'
				SourceRect='298,341,315,358'
				SourceResource='ui_rebel_final'
				Visible='false'
			/>
			<Image
				Location='824,663'
				MaximumSize='187,91'
				MinimumSize='187,91'
				Name='logos'
				PackLocation='fff,fff'
				PackSize='f,f'
				ScrollExtent='187,91'
				Size='187,91'
				SourceRect='288,397,510,512'
				SourceResource='ui_notice'
			/>
			<Image
				Location='11,674'
				MaximumSize='181,80'
				MinimumSize='181,80'
				Name='rating'
				PackLocation='nfn,fff'
				PackSize='f,f'
				ScrollExtent='181,80'
				Size='181,80'
				SourceRect='319,310,509,395'
				SourceResource='ui_notice'
			/>
			<Page
				Location='212,607'
				MaximumSize='600,145'
				MinimumSize='600,145'
				Name='text'
				OnDisableEffector='/effectors.opacity.slow.fadeout'
				OnEnable='parent.0.enabled=false
parent.1.enabled=false

'
				OnEnableEffector='/effectors.opacity.slow.fadefull'
				PackLocation='cfc,fff'
				PackSize='f,f'
				ScrollExtent='600,145'
				Size='600,145'
			>
				<Text
					Font='default_14'
					LocalText='LucasArts, the LucasArts logo, STAR WARS and related properties are trademarks in the United States
and/or in other countries of Lucasfilm Ltd. and/or its affiliates.
Star Wars Galaxies is a trademark of Lucasfilm Entertainment Company Ltd.
2002-2006 Lucasfilm Entertainment Company Ltd. or Lucasfilm Ltd.
All rights reserved.

SOE and the SOE logo are registered trademarks of Sony Online Entertainment LLC in the US and/or other countries.
'
					Name='lucas'
					PackLocation='nfn,nfn'
					PackSize='f,f'
					ScrollExtent='600,150'
					Size='600,145'
					TextAlignment='Center'
					TextAlignmentVertical='Center'
				>LucasArts, the LucasArts logo, STAR WARS and related properties are trademarks in the United States
and/or in other countries of Lucasfilm Ltd. and/or its affiliates.
Star Wars Galaxies is a trademark of Lucasfilm Entertainment Company Ltd.
2002-2006 Lucasfilm Entertainment Company Ltd. or Lucasfilm Ltd.
All rights reserved.

SOE and the SOE logo are registered trademarks of Sony Online Entertainment LLC in the US and/or other countries.
</Text>
			</Page>
			<Image
				BackgroundOpacity='1.00'
				Location='227,48'
				Name='swgTOW'
				PackLocation='cpc,cpc'
				PackSize='f,f'
				ScrollExtent='570,570'
				Size='570,570'
				SourceRect='0,0,512,512'
				SourceResource='ui_starwars_logo_tow'
				Style='splash'
			/>
		</Page>
		<Page
			BackgroundOpacity='1.00'
			Enabled='false'
			Name='0ROTW'
			OnDisableEffector='/effectors.opacity.slow.fadeout'
			OnEnable='parent.0SWG.enabled=false
parent.0JTL.enabled=false
parent.0JTLJapan.enabled=false
parent.0TOW.enabled=false
parent.1.enabled=false
parent.2.enabled=false
parent.3.enabled=false
opacity=1.0'
			OnEnableEffector='/effectors.opacity.slow.fadefull'
			Opacity='0.00'
			PackLocation='nfn,nfn'
			PackSize='p,p'
			ScrollExtent='1024,768'
			Size='1024,768'
		>
			<Image
				Location='284,688'
				Name='cpyright'
				PackLocation='cfc,fff'
				PackSize='f,f'
				ScrollExtent='15,15'
				Size='15,15'
				SourceRect='298,341,315,358'
				SourceResource='ui_rebel_final'
				Visible='false'
			/>
			<Image
				Location='824,663'
				MaximumSize='187,91'
				MinimumSize='187,91'
				Name='logos'
				PackLocation='fff,fff'
				PackSize='f,f'
				ScrollExtent='187,91'
				Size='187,91'
				SourceRect='288,397,510,512'
				SourceResource='ui_notice'
			/>
			<Image
				Location='11,674'
				MaximumSize='181,80'
				MinimumSize='181,80'
				Name='rating'
				PackLocation='nfn,fff'
				PackSize='f,f'
				ScrollExtent='181,80'
				Size='181,80'
				SourceRect='319,310,509,395'
				SourceResource='ui_notice'
			/>
			<Page
				Location='212,629'
				MaximumSize='600,130'
				MinimumSize='600,130'
				Name='text'
				OnDisableEffector='/effectors.opacity.slow.fadeout'
				OnEnable='parent.0.enabled=false
parent.1.enabled=false

'
				OnEnableEffector='/effectors.opacity.slow.fadefull'
				PackLocation='cfc,fff'
				PackSize='f,f'
				ScrollExtent='600,130'
				Size='600,130'
			>
				<Text
					Font='default_14'
					LocalText='LucasArts, the LucasArts logo, STAR WARS and related properties are trademarks in the United States
and/or in other countries of Lucasfilm Ltd. and/or its affiliates.
Star Wars Galaxies is a trademark of Lucasfilm Entertainment Company Ltd.
2002-2006 Lucasfilm Entertainment Company Ltd. or Lucasfilm Ltd.
All rights reserved.

SOE and the SOE logo are registered trademarks of Sony Online Entertainment LLC in the US and/or other countries.
'
					Name='lucas'
					PackLocation='nfn,nfn'
					PackSize='f,f'
					ScrollExtent='600,150'
					Size='600,130'
					TextAlignment='Center'
					TextAlignmentVertical='Center'
				>LucasArts, the LucasArts logo, STAR WARS and related properties are trademarks in the United States
and/or in other countries of Lucasfilm Ltd. and/or its affiliates.
Star Wars Galaxies is a trademark of Lucasfilm Entertainment Company Ltd.
2002-2006 Lucasfilm Entertainment Company Ltd. or Lucasfilm Ltd.
All rights reserved.

SOE and the SOE logo are registered trademarks of Sony Online Entertainment LLC in the US and/or other countries.
</Text>
			</Page>
			<Image
				BackgroundOpacity='1.00'
				Location='227,48'
				Name='swgROTW'
				PackLocation='cpc,cpc'
				PackSize='f,f'
				ScrollExtent='570,570'
				Size='570,570'
				SourceRect='0,0,512,512'
				SourceResource='ui_starwars_logo_rotw'
				Style='splash'
			/>
		</Page>
		<Page
			BackgroundOpacity='1.00'
			Enabled='false'
			Name='1'
			OnDisableEffector='/effectors.opacity.slow.fadeout'
			OnEnable='parent.0ANV.enabled=false
parent.0SWG.enabled=false
parent.0COA.enabled=false
parent.0JTL.enabled=false
parent.0JTLJapan.enabled=false
parent.0ROTW.enabled=false
parent.0TOW.enabled=false
parent.2.enabled=false
parent.3.enabled=false
'
			OnEnableEffector='/effectors.opacity.slow.fadefull'
			Opacity='0.00'
			PackLocation='nfn,nfn'
			PackSize='p,p'
			ScrollExtent='1024,768'
			Size='1024,768'
		>
			<Image
				Location='220,79'
				Name='lucas'
				PackLocation='cfc,cfc'
				PackSize='p,p'
				ScrollExtent='584,611'
				Size='584,611'
				SourceRect='0,0,512,512'
				SourceResource='ui_logo_lucas'
			/>
		</Page>
		<Page
			BackgroundOpacity='1.00'
			Name='2'
			OnDisableEffector='/effectors.opacity.slow.fadeout'
			OnEnable='parent.0SWG.enabled=false
parent.0JTL.enabled=false
parent.0JTLJapan.enabled=false
parent.0TOW.enabled=false
parent.1.enabled=false
parent.3.enabled=false
'
			OnEnableEffector='/effectors.opacity.slow.fadefull'
			PackLocation='nfn,nfn'
			PackSize='p,p'
			ScrollExtent='1024,768'
			Size='1024,768'
		>
			<Page
				Location='102,629'
				MaximumSize='820,130'
				MinimumSize='820,130'
				Name='text'
				OnDisableEffector='/effectors.opacity.slow.fadeout'
				OnEnable='parent.0.enabled=false
parent.1.enabled=false

'
				OnEnableEffector='/effectors.opacity.slow.fadefull'
				PackLocation='cfc,fff'
				PackSize='a,a'
				ScrollExtent='820,130'
				Size='820,130'
			>
				<Text
					Font='default_14'
					LocalText='SOE and the SOE logo are registered trademarks of Sony Online Entertainment LLC.
2010 Sony Online Entertainment LLC. All Rights Reserved. All other trademarks are properties of their respective owners.'
					Location='0,78'
					MaximumSize='820,52'
					MinimumSize='820,52'
					Name='sony'
					PackLocation='nfn,fff'
					PackSize='f,f'
					ScrollExtent='820,52'
					Size='820,52'
					TextAlignment='Center'
					TextAlignmentVertical='Center'
				>SOE and the SOE logo are registered trademarks of Sony Online Entertainment LLC.
2010 Sony Online Entertainment LLC. All Rights Reserved. All other trademarks are properties of their respective owners.</Text>
				<Image
					Location='11,104'
					Name='cpyright'
					PackLocation='nfn,nfn'
					PackSize='f,f'
					ScrollExtent='15,15'
					Size='15,15'
					SourceRect='298,341,315,358'
					SourceResource='ui_rebel_final'
				/>
			</Page>
			<Text
				Font='default_20'
				Location='285,479'
				Name='sonyPictures'
				PackLocation='cfc,fpf'
				PackSize='f,f'
				ScrollExtent='454,31'
				Size='454,31'
				TextAlignment='Center'
				TextAlignmentVertical='Center'
			></Text>
			<Image
				Location='261,74'
				MaximumSize='508,435'
				MinimumSize='508,435'
				Name='soe'
				PackLocation='cfc,cfc'
				ScrollExtent='508,435'
				Size='508,435'
				SourceRect='0,44,512,468'
				SourceResource='ui_logo_soe'
				Stretch='false'
			/>
		</Page>
		<Page
			BackgroundOpacity='1.00'
			Enabled='false'
			Name='3'
			OnDisableEffector='/effectors.opacity.slow.fadeout'
			OnEnable='parent.0SWG.enabled=false
parent.0JTL.enabled=false
parent.0JTLJapan.enabled=false
parent.0TOW.enabled=false
parent.1.enabled=false
parent.2.enabled=false
'
			OnEnableEffector='/effectors.opacity.slow.fadefull'
			Opacity='0.00'
			PackLocation='nfn,nfn'
			PackSize='p,p'
			ScrollExtent='1024,768'
			Size='1024,768'
		>
			<Image
				Enabled='false'
				Location='256,74'
				Name='esrb'
				PackLocation='cfc,cfc'
				PackSize='p,p'
				ScrollExtent='512,512'
				Size='512,512'
				SourceRect='0,0,512,512'
				SourceResource='esrb_screen'
			/>
		</Page>
	</Page>
