modded class CassetteBase_SSS extends ItemBase
{
	override int GetCassetteType()
	{
		string nwkpmCIvMxqBM = this.GetType();
		int bBjzhAOYdIBISgVtFRF = Cassettes.ERROR;
		switch (nwkpmCIvMxqBM)
		{
			case "SSSCassette_Lyube":
				bBjzhAOYdIBISgVtFRF = Cassettes_1.CASSETTE_LYUBE;
				break;
			case "SSSCassette_Aqua":
				bBjzhAOYdIBISgVtFRF = Cassettes_1.CASSETTE_AQUA;
				break;
			case "SSSCassette_LinkinPark":
				bBjzhAOYdIBISgVtFRF = Cassettes_1.CASSETTE_LINKINPARK;
				break;
			case "SSSCassette_Bumer":
				bBjzhAOYdIBISgVtFRF = Cassettes_1.CASSETTE_BUMER;
				break;
			case "SSSCassette_Serega":
				bBjzhAOYdIBISgVtFRF = Cassettes_1.CASSETTE_SEREGA;
				break;
			case "SSSCassette_Ivanushki":
				bBjzhAOYdIBISgVtFRF = Cassettes_1.CASSETTE_IVANUSHKI;
				break;
			case "SSSCassette_RukiVverh":
				bBjzhAOYdIBISgVtFRF = Cassettes_1.CASSETTE_RUKIVVERH;
				break;
		}
		if (bBjzhAOYdIBISgVtFRF == Cassettes.ERROR)
			return super.GetCassetteType();
		else
			return bBjzhAOYdIBISgVtFRF;
	}
	
	override int SetTrackCount()
	{
		int yCiVCsFVzZSxOkUQlnwType = GetCassetteType();
		int iUCanQdaOa = 0;
		switch (yCiVCsFVzZSxOkUQlnwType)
		{
			case Cassettes_1.CASSETTE_LYUBE:
				iUCanQdaOa = Cassettes1_tracks.COUNT;
				break;
			case Cassettes_1.CASSETTE_AQUA:
				iUCanQdaOa = Cassettes2_tracks.COUNT;
				break;
			case Cassettes_1.CASSETTE_LINKINPARK:
				iUCanQdaOa = Cassettes3_tracks.COUNT;
				break;
			case Cassettes_1.CASSETTE_BUMER:
				iUCanQdaOa = Cassettes4_tracks.COUNT;
				break;
			case Cassettes_1.CASSETTE_SEREGA:
				iUCanQdaOa = Cassettes5_tracks.COUNT;
				break;
			case Cassettes_1.CASSETTE_IVANUSHKI:
				iUCanQdaOa = Cassettes6_tracks.COUNT;
				break;
			case Cassettes_1.CASSETTE_RUKIVVERH:
				iUCanQdaOa = Cassettes7_tracks.COUNT;
				break;
		}
		
		iUCanQdaOa = iUCanQdaOa - 1;
		if (iUCanQdaOa == -1)
			return super.SetTrackCount();
		else
			return iUCanQdaOa;
	}
};