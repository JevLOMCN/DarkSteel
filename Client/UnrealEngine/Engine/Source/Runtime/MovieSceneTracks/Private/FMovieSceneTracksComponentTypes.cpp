// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// FMovieSceneTracksComponentTypes @ 146611490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMovieSceneTracksComponentTypes * __thiscall
UE::MovieScene::FMovieSceneTracksComponentTypes::FMovieSceneTracksComponentTypes
          (FMovieSceneTracksComponentTypes *this)

{
  TCompositePropertyTypeID<UE::MovieScene::FBoolPropertyTraits> TVar1;
  TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>
  TVar2;
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>
  TVar3;
  TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>
  TVar4;
  TCompositePropertyTypeID<UE::MovieScene::FFloatPropertyTraits> TVar5;
  TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_> TVar6;
  TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>
  TVar7;
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FString,FString,1>_> TVar8;
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FText,FText,1>_> TVar9;
  TCompositePropertyTypeID<UE::MovieScene::FObjectPropertyTraits> TVar10;
  FScriptContainerElement *pFVar11;
  FName FVar12;
  code *pcVar13;
  bool bVar14;
  FComponentTypeID FVar15;
  TComponentTypeID<bool> TVar16;
  TComponentTypeID<double> TVar17;
  TComponentTypeID<UE::MovieScene::FIntermediateColor> TVar18;
  TComponentTypeID<__int64> TVar19;
  TComponentTypeID<UE::MovieScene::FFloatIntermediateVector> TVar20;
  TComponentTypeID<UE::MovieScene::FDoubleIntermediateVector> TVar21;
  TComponentTypeID<FString> TVar22;
  TComponentTypeID<FText> TVar23;
  TComponentTypeID<UE::MovieScene::FObjectComponent> TVar24;
  TComponentTypeID<UE::MovieScene::FIntermediate3DTransform> TVar25;
  TComponentTypeID<UE::Math::TRotator<double>_> TVar26;
  TComponentTypeID<int> TVar27;
  TComponentTypeID<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData> TVar28;
  TComponentTypeID<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata> TVar29;
  TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> TVar30;
  TComponentTypeID<FConstraintComponentData> TVar31;
  TComponentTypeID<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_> TVar32;
  TComponentTypeID<UE::MovieScene::FAttachmentComponent> TVar33;
  TComponentTypeID<FMovieSceneObjectBindingID> TVar34;
  TComponentTypeID<FPerlinNoiseParams> TVar35;
  TComponentTypeID<FMovieSceneSkeletalAnimationComponentData> TVar36;
  TComponentTypeID<FLevelVisibilityComponentData> TVar37;
  TComponentTypeID<FMovieSceneDataLayerComponentData> TVar38;
  TComponentTypeID<FComponentMaterialInfo> TVar39;
  TComponentTypeID<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_> TVar40;
  TComponentTypeID<FName> TVar41;
  TComponentTypeID<FMaterialParameterInfo> TVar42;
  TComponentTypeID<UE::MovieScene::FFadeComponentData> TVar43;
  TComponentTypeID<UE::MovieScene::FPropertyNotifyComponentData> TVar44;
  TComponentTypeID<FMovieSceneAudioComponentData> TVar45;
  TComponentTypeID<FMovieSceneAudioInputData> TVar46;
  TComponentTypeID<FMovieSceneCameraShakeComponentData> TVar47;
  TComponentTypeID<FMovieSceneCameraShakeInstanceData> TVar48;
  int iVar49;
  FBuiltInComponentTypes *this_00;
  FComponentRegistry *this_01;
  FString *pFVar50;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined6 extraout_var_01;
  undefined6 extraout_var_02;
  undefined6 extraout_var_03;
  undefined6 extraout_var_04;
  undefined6 extraout_var_05;
  undefined6 extraout_var_06;
  undefined6 extraout_var_07;
  undefined6 extraout_var_08;
  undefined6 extraout_var_09;
  undefined6 extraout_var_10;
  undefined6 extraout_var_11;
  undefined6 extraout_var_12;
  undefined6 extraout_var_13;
  undefined6 extraout_var_14;
  undefined6 extraout_var_15;
  undefined6 extraout_var_16;
  undefined6 extraout_var_17;
  undefined6 extraout_var_18;
  undefined6 extraout_var_19;
  undefined6 extraout_var_20;
  undefined6 extraout_var_21;
  undefined6 extraout_var_22;
  undefined6 extraout_var_23;
  undefined6 extraout_var_24;
  undefined6 extraout_var_25;
  undefined6 extraout_var_26;
  undefined6 extraout_var_27;
  undefined6 extraout_var_28;
  undefined6 extraout_var_29;
  undefined6 extraout_var_30;
  undefined6 extraout_var_31;
  undefined6 extraout_var_32;
  undefined6 extraout_var_33;
  undefined6 extraout_var_34;
  undefined6 extraout_var_35;
  undefined6 extraout_var_36;
  undefined6 extraout_var_37;
  undefined6 extraout_var_38;
  undefined6 extraout_var_39;
  undefined6 extraout_var_40;
  undefined6 extraout_var_41;
  undefined6 extraout_var_42;
  undefined6 extraout_var_43;
  undefined6 extraout_var_44;
  undefined6 extraout_var_45;
  undefined6 extraout_var_46;
  undefined6 extraout_var_47;
  undefined6 extraout_var_48;
  undefined6 extraout_var_49;
  undefined6 extraout_var_50;
  undefined6 extraout_var_51;
  undefined6 extraout_var_52;
  undefined6 extraout_var_53;
  undefined6 extraout_var_54;
  undefined6 extraout_var_55;
  undefined6 extraout_var_56;
  undefined6 extraout_var_57;
  undefined6 extraout_var_58;
  undefined6 extraout_var_59;
  undefined6 extraout_var_60;
  undefined6 extraout_var_61;
  undefined6 extraout_var_62;
  undefined6 extraout_var_63;
  undefined6 extraout_var_64;
  undefined6 extraout_var_65;
  undefined6 extraout_var_66;
  undefined6 extraout_var_67;
  undefined6 extraout_var_68;
  undefined6 extraout_var_69;
  undefined6 extraout_var_70;
  FBuiltInComponentTypes *pFVar51;
  undefined6 extraout_var_71;
  undefined6 extraout_var_72;
  undefined6 extraout_var_73;
  undefined6 extraout_var_74;
  FMovieSceneTracksComponentTypes *pFVar52;
  FPropertyDefinition *pFVar53;
  UClass *pUVar54;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> *pTVar55;
  TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
  *pTVar56;
  TPropertyDefinitionBuilder<UE::MovieScene::FFloatPropertyTraits> *pTVar57;
  TPropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_> *pTVar58
  ;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar59;
  IPropertyComponentHandler *pIVar60;
  IPropertyComponentHandler *pIVar61;
  TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FText,FText,1>_> *pTVar62;
  TPropertyDefinitionBuilder<UE::MovieScene::FObjectPropertyTraits> *pTVar63;
  TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<float,double,1>_> *pTVar64;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
  *pTVar65;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double>
  *pTVar66;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double>
  *pTVar67;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double>
  *pTVar68;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double,double>
  *pTVar69;
  FName *pFVar70;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
  *this_02;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double>
  *this_03;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double>
  *this_04;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double>
  *this_05;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double,double>
  *pTVar71;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
  *this_06;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double>
  *this_07;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
  *pTVar72;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
  *this_08;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double>
  *this_09;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
  *this_10;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double,double>
  *pTVar73;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
  *this_11;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double>
  *this_12;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double>
  *this_13;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double>
  *this_14;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double,double>
  *pTVar74;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
  *pTVar75;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double>
  *pTVar76;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double>
  *pTVar77;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double>
  *pTVar78;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double>
  *pTVar79;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double>
  *pTVar80;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double>
  *pTVar81;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double>
  *pTVar82;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double>
  *pTVar83;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
  *pTVar84;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
  *this_15;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double>
  *this_16;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double>
  *this_17;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double>
  *this_18;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double>
  *this_19;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double>
  *this_20;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double>
  *this_21;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double>
  *this_22;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double>
  *this_23;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
  *pTVar85;
  FComponentTransformHandler *pFVar86;
  FComponentTypeID *pFVar87;
  uint uVar88;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar89;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *pTVar90;
  FPropertyDefinition *pFVar91;
  ForAnyElementType FVar92;
  undefined1 auStackY_11d8 [32];
  FComponentTypeID local_1188;
  FComponentTypeID local_1186;
  FComponentTypeID local_1184;
  FComponentTypeID local_1182;
  FComponentTypeID local_1180;
  FComponentTypeID local_117e;
  FComponentTypeID local_117c;
  FComponentTypeID local_117a;
  UClass *local_1178;
  FComponentTypeID local_1170 [4];
  FComponentTypeID local_1168 [4];
  FComponentTypeID local_1160;
  FComponentTypeID local_115e;
  FComponentTypeID local_115c;
  FComponentTypeID local_115a;
  FComponentTypeID local_1158 [4];
  FComponentTypeID local_1150 [4];
  FComponentTypeID local_1148 [4];
  FComponentTypeID local_1140 [4];
  FComponentTypeID local_1138;
  FComponentTypeID local_1136;
  undefined4 local_1134;
  uint local_1130;
  uint local_112c;
  undefined4 local_1128;
  undefined4 local_1124;
  undefined4 local_1120;
  undefined4 local_111c;
  undefined4 local_1118;
  undefined4 local_1114;
  undefined4 local_1110;
  uint local_110c;
  undefined4 local_1108;
  undefined4 local_1104;
  uint local_1100;
  uint local_10fc;
  undefined4 local_10f8;
  undefined4 local_10f4;
  undefined4 local_10f0;
  uint local_10ec;
  FComponentTypeID local_10e8;
  FComponentTypeID local_10e6 [7];
  initializer_list<UE::MovieScene::FComponentTypeID> local_10d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_10c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_10b8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_10a8;
  wchar_t local_1098;
  wchar_t local_1096;
  wchar_t local_1094;
  wchar_t local_1092;
  wchar_t local_1090;
  wchar_t local_108e;
  wchar_t local_108c;
  wchar_t local_108a;
  wchar_t local_1088;
  wchar_t local_1086;
  wchar_t local_1084;
  wchar_t local_1082;
  wchar_t local_1080;
  wchar_t local_107e;
  wchar_t local_107c;
  wchar_t local_107a;
  wchar_t local_1078;
  wchar_t local_1076;
  wchar_t local_1074;
  wchar_t local_1072;
  wchar_t local_1070;
  wchar_t local_106e;
  wchar_t local_106c;
  wchar_t local_106a;
  wchar_t local_1068;
  wchar_t local_1066;
  wchar_t local_1064;
  wchar_t local_1062;
  wchar_t local_1060;
  wchar_t local_105e;
  wchar_t local_105c;
  wchar_t local_105a;
  wchar_t local_1058;
  wchar_t local_1056;
  wchar_t local_1054;
  wchar_t local_1052;
  wchar_t local_1050;
  wchar_t local_104e;
  wchar_t local_104c;
  wchar_t local_104a;
  wchar_t local_1048;
  wchar_t local_1046;
  wchar_t local_1044;
  wchar_t local_1042;
  wchar_t local_1040;
  wchar_t local_103e;
  wchar_t local_103c;
  wchar_t local_103a;
  wchar_t local_1038;
  wchar_t local_1036;
  wchar_t local_1034;
  wchar_t local_1032;
  wchar_t local_1030;
  wchar_t local_102e;
  wchar_t local_102c;
  wchar_t local_102a;
  wchar_t local_1028;
  wchar_t local_1026;
  wchar_t local_1024;
  wchar_t local_1022;
  wchar_t local_1020;
  wchar_t local_101e;
  wchar_t local_101c;
  wchar_t local_101a;
  wchar_t local_1018;
  wchar_t local_1016;
  wchar_t local_1014;
  wchar_t local_1012;
  wchar_t local_1010;
  wchar_t local_100e;
  wchar_t local_100c;
  wchar_t local_100a;
  uchar local_1008 [4];
  uchar local_1004 [4];
  uchar local_1000 [4];
  uchar local_ffc [4];
  uchar local_ff8 [4];
  uchar local_ff4 [4];
  undefined4 local_ff0;
  undefined4 local_fec;
  undefined4 local_fe8;
  undefined4 local_fe4;
  undefined4 local_fe0;
  undefined4 local_fdc;
  undefined4 local_fd8;
  wchar_t local_fd4;
  wchar_t local_fd2;
  wchar_t local_fd0;
  wchar_t local_fce [3];
  TCustomPropertyRegistration<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,8>
  *local_fc8;
  TCustomPropertyRegistration<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,8>
  *local_fc0;
  TObjectPtr<UClass>_u_0 local_fb8;
  TObjectPtr<UClass>_u_0 local_fb0;
  TObjectPtr<UClass>_u_0 local_fa8;
  UClass *local_fa0;
  UClass *local_f98;
  UClass *local_f90;
  TObjectPtr<UClass>_u_0 local_f88;
  TObjectPtr<UClass>_u_0 local_f80;
  FString local_f78;
  FString local_f68;
  FString local_f58;
  FString local_f48;
  FString local_f38;
  FString local_f28;
  FString local_f18;
  FString local_f08;
  FString local_ef8;
  FString local_ee8;
  FString local_ed8;
  FString local_ec8;
  FString local_eb8;
  FString local_ea8;
  FString local_e98;
  FString local_e88;
  FString local_e78;
  undefined **local_e68;
  TComponentTypeID<FConstraintComponentData> local_e60;
  TComponentTypeID<FConstraintComponentData> local_e5e;
  undefined **local_e58;
  TComponentTypeID<FMovieSceneObjectBindingID> local_e50;
  TComponentTypeID<FMovieSceneObjectBindingID> local_e4e;
  undefined **local_e48;
  TComponentTypeID<UE::MovieScene::FAttachmentComponent> local_e40;
  TComponentTypeID<UE::MovieScene::FAttachmentComponent> local_e3e;
  undefined **local_e38;
  TComponentTypeID<FMovieSceneSkeletalAnimationComponentData> local_e30;
  TComponentTypeID<FMovieSceneSkeletalAnimationComponentData> local_e2e;
  undefined8 local_e28;
  undefined1 local_e20;
  undefined8 local_e18;
  undefined1 local_e10;
  undefined8 local_e08;
  undefined1 local_e00;
  undefined8 local_df8;
  undefined1 local_df0;
  undefined8 local_de8;
  undefined1 local_de0;
  undefined8 local_dd8;
  undefined1 local_dd0;
  undefined8 local_dc8;
  undefined1 local_dc0;
  undefined8 local_db8;
  undefined1 local_db0;
  undefined8 local_da8;
  undefined1 local_da0;
  undefined8 local_d98;
  undefined1 local_d90;
  undefined8 local_d88;
  undefined1 local_d80;
  undefined8 local_d78;
  undefined1 local_d70;
  undefined8 local_d68;
  undefined1 local_d60;
  undefined8 local_d58;
  undefined1 local_d50;
  undefined8 local_d48;
  undefined1 local_d40;
  undefined8 local_d38;
  undefined1 local_d30;
  undefined8 local_d28;
  undefined1 local_d20;
  undefined8 local_d18;
  undefined1 local_d10;
  undefined8 local_d08;
  undefined1 local_d00;
  undefined8 local_cf8;
  undefined1 local_cf0;
  undefined8 local_ce8;
  undefined1 local_ce0;
  undefined8 local_cd8;
  undefined1 local_cd0;
  undefined8 local_cc8;
  undefined1 local_cc0;
  undefined8 local_cb8;
  undefined1 local_cb0;
  undefined8 local_ca8;
  undefined1 local_ca0;
  undefined8 local_c98;
  undefined1 local_c90;
  undefined8 local_c88;
  undefined1 local_c80;
  undefined8 local_c78;
  undefined1 local_c70;
  undefined8 local_c68;
  undefined1 local_c60;
  undefined8 local_c58;
  undefined1 local_c50;
  undefined8 local_c48;
  undefined1 local_c40;
  undefined8 local_c38;
  undefined1 local_c30;
  undefined8 local_c28;
  undefined1 local_c20;
  undefined8 local_c18;
  undefined1 local_c10;
  undefined8 local_c08;
  undefined1 local_c00;
  undefined8 local_bf8;
  undefined1 local_bf0;
  undefined8 local_be8;
  undefined1 local_be0;
  undefined8 local_bd8;
  undefined1 local_bd0;
  undefined8 local_bc8;
  undefined1 local_bc0;
  undefined8 local_bb8;
  undefined1 local_bb0;
  undefined8 local_ba8;
  undefined1 local_ba0;
  undefined8 local_b98;
  undefined1 local_b90;
  undefined8 local_b88;
  undefined1 local_b80;
  undefined8 local_b78;
  undefined1 local_b70;
  undefined8 local_b68;
  undefined1 local_b60;
  undefined8 local_b58;
  undefined1 local_b50;
  undefined8 local_b48;
  undefined1 local_b40;
  undefined8 local_b38;
  undefined1 local_b30;
  undefined8 local_b28;
  undefined1 local_b20;
  undefined8 local_b18;
  undefined1 local_b10;
  undefined8 local_b08;
  undefined1 local_b00;
  undefined8 local_af8;
  undefined1 local_af0;
  undefined8 local_ae8;
  undefined1 local_ae0;
  undefined8 local_ad8;
  undefined1 local_ad0;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_ac8;
  undefined **local_ab8;
  uchar local_ab0 [4];
  undefined4 local_aac;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_aa8;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_a98;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_a88;
  undefined **local_a78;
  uchar local_a70 [4];
  undefined4 local_a6c;
  undefined **local_a68;
  uchar local_a60 [4];
  undefined4 local_a5c;
  undefined **local_a58;
  uchar local_a50 [4];
  undefined4 local_a4c;
  TPropertyDefinitionBuilder<UE::MovieScene::FFloatPropertyTraits> local_a48;
  undefined **local_a38;
  uchar local_a30 [4];
  undefined4 local_a2c;
  TPropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>
  local_a28;
  undefined **local_a18;
  uchar local_a10 [4];
  undefined4 local_a0c;
  undefined **local_a08;
  undefined4 local_a00;
  undefined4 local_9fc;
  undefined **local_9f8;
  undefined4 local_9f0;
  undefined4 local_9ec;
  TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FText,FText,1>_> local_9e8;
  undefined **local_9d8;
  undefined4 local_9d0;
  undefined4 local_9cc;
  TPropertyDefinitionBuilder<UE::MovieScene::FObjectPropertyTraits> local_9c8;
  undefined **local_9b8;
  undefined4 local_9b0;
  undefined4 local_9ac;
  undefined **local_9a8;
  undefined4 local_9a0;
  undefined4 local_99c;
  undefined **local_998;
  undefined4 local_990;
  undefined4 local_98c;
  undefined **local_988;
  undefined4 local_980;
  undefined4 local_97c;
  initializer_list<UE::MovieScene::FComponentTypeID> local_978;
  initializer_list<UE::MovieScene::FComponentTypeID> local_968;
  initializer_list<UE::MovieScene::FComponentTypeID> local_958;
  initializer_list<UE::MovieScene::FComponentTypeID> local_948;
  FString local_938;
  FString local_928;
  FString local_918;
  FString local_908;
  FString local_8f8;
  FString local_8e8;
  FString local_8d8;
  FString local_8c8;
  FString local_8b8;
  FString local_8a8;
  FString local_898;
  FString local_888;
  FString local_878;
  FString local_868;
  FString local_858;
  FString local_848;
  FString local_838;
  FComponentTransformHandler local_828;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_818;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_808;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_7f8;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_7e8;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_7d8;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_7c8;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_7b8;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_7a8;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_798;
  TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
  local_788;
  TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
  local_778;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_768;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_758;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_748;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_738;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_728;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> local_718;
  TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<float,double,1>_> local_708;
  TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<float,double,1>_> local_6f8;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
  local_6e8;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double>
  local_6d8;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double>
  local_6c8;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double>
  local_6b8;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double,double>
  local_6a8;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
  local_698;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double>
  local_688;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double>
  local_678;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double>
  local_668;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double,double>
  local_658;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
  local_648;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double>
  local_638;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double>
  local_628;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double>
  local_618;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double,double>
  local_608;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
  local_5f8;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double>
  local_5e8;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
  local_5d8;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
  local_5c8;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double>
  local_5b8;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
  local_5a8;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double,double>
  local_598;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
  local_588;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double>
  local_578;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double>
  local_568;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double>
  local_558;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double,double>
  local_548;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
  local_538;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double>
  local_528;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double>
  local_518;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double>
  local_508;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double>
  local_4f8;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double>
  local_4e8;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double>
  local_4d8;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double>
  local_4c8;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double>
  local_4b8;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
  local_4a8;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
  local_498;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double>
  local_488;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double>
  local_478;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double>
  local_468;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double>
  local_458;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double>
  local_448;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double>
  local_438;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double>
  local_428;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double>
  local_418;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
  local_408;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
  local_3f8;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double>
  local_3e8;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double>
  local_3d8;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double>
  local_3c8;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double>
  local_3b8;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double>
  local_3a8;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double>
  local_398;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double>
  local_388;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double>
  local_378;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
  local_368;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_358;
  uchar local_350 [24];
  byte local_338;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_330;
  uchar local_328 [24];
  byte local_310;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_308;
  uchar local_300 [24];
  byte local_2e8;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_2e0;
  uchar local_2d8 [24];
  byte local_2c0;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_2b8;
  uchar local_2b0 [24];
  byte local_298;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_290;
  uchar local_288 [24];
  byte local_270;
  void *local_268 [4];
  byte local_248;
  void *local_240 [4];
  byte local_220;
  void *local_218 [4];
  byte local_1f8;
  void *local_1f0 [4];
  byte local_1d0;
  void *local_1c8 [4];
  byte local_1a8;
  void *local_1a0 [4];
  byte local_180;
  void *local_178 [4];
  byte local_158;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_150 [8];
  byte local_110;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_108 [8];
  byte local_c8;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_c0 [8];
  byte local_80;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *local_78 [8];
  byte local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_11d8;
  TPropertyComponents<UE::MovieScene::FBoolPropertyTraits>::
  TPropertyComponents<UE::MovieScene::FBoolPropertyTraits>(&this->Bool);
  TPropertyComponents<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::
  TPropertyComponents<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>(&this->Byte);
  TPropertyComponents<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::
  TPropertyComponents<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>(&this->Enum);
  TPropertyComponents<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>
  ::
  TPropertyComponents<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>
            (&this->Integer);
  TPropertyComponents<UE::MovieScene::FFloatPropertyTraits>::
  TPropertyComponents<UE::MovieScene::FFloatPropertyTraits>(&this->Float);
  TPropertyComponents<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>::
  TPropertyComponents<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>(&this->Double);
  TPropertyComponents<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>
  ::
  TPropertyComponents<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>
            (&this->Color);
  TPropertyComponents<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
  ::
  TPropertyComponents<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
            (&this->FloatVector);
  TPropertyComponents<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
  ::
  TPropertyComponents<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
            (&this->DoubleVector);
  TPropertyComponents<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>
  ::
  TPropertyComponents<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>
            (&this->Transform);
  TPropertyComponents<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
  ::
  TPropertyComponents<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
            (&this->EulerTransform);
  TPropertyComponents<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
  ::
  TPropertyComponents<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
            (&this->ComponentTransform);
  TPropertyComponents<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>
  ::
  TPropertyComponents<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>
            (&this->Rotator);
  TPropertyComponents<UE::MovieScene::TPropertyTraits<FString,FString,1>_>::
  TPropertyComponents<UE::MovieScene::TPropertyTraits<FString,FString,1>_>(&this->String);
  TPropertyComponents<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::
  TPropertyComponents<UE::MovieScene::TPropertyTraits<FText,FText,1>_>(&this->Text);
  TPropertyComponents<UE::MovieScene::FObjectPropertyTraits>::
  TPropertyComponents<UE::MovieScene::FObjectPropertyTraits>(&this->Object);
  TPropertyComponents<UE::MovieScene::TPropertyTraits<float,double,1>_>::
  TPropertyComponents<UE::MovieScene::TPropertyTraits<float,double,1>_>(&this->FloatParameter);
  TPropertyComponents<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
  ::
  TPropertyComponents<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
            (&this->ColorParameter);
  _vector_constructor_iterator_
            (this->QuaternionRotationChannel,2,3,
             TComponentTypeID<UE::MovieScene::FSourceDoubleChannel>::
             TComponentTypeID<UE::MovieScene::FSourceDoubleChannel>);
  _vector_constructor_iterator_
            (this->RotatorChannel,2,3,
             TComponentTypeID<UE::MovieScene::FSourceDoubleChannel>::
             TComponentTypeID<UE::MovieScene::FSourceDoubleChannel>);
  this->ConstraintChannel = (TComponentTypeID<FConstraintComponentData>)0xffff;
  this->AttachParent = (TComponentTypeID<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_>)0xffff;
  this->AttachComponent = (TComponentTypeID<UE::MovieScene::FAttachmentComponent>)0xffff;
  this->AttachParentBinding = (TComponentTypeID<FMovieSceneObjectBindingID>)0xffff;
  (this->Parameters).Bool.PropertyTraits =
       (TPropertyTraits<bool,bool,1>)&___7__TPropertyTraits__N_N_00_MovieScene_UE__6B_;
  (this->Parameters).Vector2.PropertyTraits =
       (TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>)
       &
       ___7__TPropertyTraits_U__TVector2_M_Math_UE__UFFloatIntermediateVector_MovieScene_3__00_MovieScene_UE__6B_
  ;
  (this->Parameters).Byte.PropertyTraits =
       (TPropertyTraits<unsigned_char,unsigned_char,1>)
       &___7__TPropertyTraits_EE_00_MovieScene_UE__6B_;
  (this->Parameters).Vector3.PropertyTraits =
       (TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>)
       &
       ___7__TPropertyTraits_U__TVector_M_Math_UE__UFFloatIntermediateVector_MovieScene_3__00_MovieScene_UE__6B_
  ;
  (this->Parameters).Integer.PropertyTraits =
       (TPropertyTraits<int,int,1>)&___7__TPropertyTraits_HH_00_MovieScene_UE__6B_;
  this->FloatPerlinNoiseChannel = (TComponentTypeID<FPerlinNoiseParams>)0xffff;
  this->DoublePerlinNoiseChannel = (TComponentTypeID<FPerlinNoiseParams>)0xffff;
  this->SkeletalAnimation = (TComponentTypeID<FMovieSceneSkeletalAnimationComponentData>)0xffff;
  this->ComponentMaterialInfo = (TComponentTypeID<FComponentMaterialInfo>)0xffff;
  (this->Parameters).Scalar.PropertyTraits =
       (TPropertyTraits<float,double,1>)&___7__TPropertyTraits_MN_00_MovieScene_UE__6B_;
  this->BoolParameterName = (TComponentTypeID<FName>)0xffff;
  this->ScalarParameterName = (TComponentTypeID<FName>)0xffff;
  this->Vector2DParameterName = (TComponentTypeID<FName>)0xffff;
  this->VectorParameterName = (TComponentTypeID<FName>)0xffff;
  this->ColorParameterName = (TComponentTypeID<FName>)0xffff;
  this->TransformParameterName = (TComponentTypeID<FName>)0xffff;
  this->GenericParameterName = (TComponentTypeID<FName>)0xffff;
  (this->Parameters).Bool.PropertyTag = 0xffff;
  (this->Parameters).Bool.InitialValue = (TComponentTypeID<bool>)0xffff;
  (this->Parameters).Bool.CompositeID =
       (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<bool,bool,1>_>)0xffffffff;
  (this->Parameters).Byte.PropertyTag = 0xffff;
  (this->Parameters).Byte.InitialValue = (TComponentTypeID<unsigned_char>)0xffff;
  (this->Parameters).Byte.CompositeID =
       (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>)
       0xffffffff;
  (this->Parameters).Integer.PropertyTag = 0xffff;
  (this->Parameters).Integer.InitialValue = (TComponentTypeID<int>)0xffff;
  (this->Parameters).Integer.CompositeID =
       (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<int,int,1>_>)0xffffffff;
  (this->Parameters).Scalar.PropertyTag = 0xffff;
  (this->Parameters).Scalar.InitialValue = (TComponentTypeID<double>)0xffff;
  (this->Parameters).Scalar.CompositeID =
       (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<float,double,1>_>)0xffffffff;
  (this->Parameters).Vector2.PropertyTag = 0xffff;
  (this->Parameters).Vector2.InitialValue =
       (TComponentTypeID<UE::MovieScene::FFloatIntermediateVector>)0xffff;
  (this->Parameters).Vector2.CompositeID =
       (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
        )0xffffffff;
  (this->Parameters).Vector3.PropertyTag = 0xffff;
  (this->Parameters).Vector3.InitialValue =
       (TComponentTypeID<UE::MovieScene::FFloatIntermediateVector>)0xffff;
  (this->Parameters).Vector3.CompositeID =
       (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
        )0xffffffff;
  (this->Parameters).Color.PropertyTag = 0xffff;
  (this->Parameters).Color.InitialValue =
       (TComponentTypeID<UE::MovieScene::FIntermediateColor>)0xffff;
  (this->Parameters).Color.CompositeID =
       (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
        )0xffffffff;
  (this->Parameters).Color.PropertyTraits =
       (TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>)
       &
       ___7__TPropertyTraits_UFLinearColor__UFIntermediateColor_MovieScene_UE___00_MovieScene_UE__6B_
  ;
  (this->Parameters).Transform.PropertyTag = 0xffff;
  (this->Parameters).Transform.InitialValue =
       (TComponentTypeID<UE::MovieScene::FIntermediate3DTransform>)0xffff;
  (this->Parameters).Transform.CompositeID =
       (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
        )0xffffffff;
  this->ScalarMaterialParameterInfo = (TComponentTypeID<FMaterialParameterInfo>)0xffff;
  this->ColorMaterialParameterInfo = (TComponentTypeID<FMaterialParameterInfo>)0xffff;
  this->VectorMaterialParameterInfo = (TComponentTypeID<FMaterialParameterInfo>)0xffff;
  this->BoundMaterial = (TComponentTypeID<UE::MovieScene::FObjectComponent>)0xffff;
  (this->Parameters).Transform.PropertyTraits =
       (TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>)
       &
       ___7__TPropertyTraits_UFEulerTransform__UFIntermediate3DTransform_MovieScene_UE___00_MovieScene_UE__6B_
  ;
  (this->Accessors).Bool._padding_ =
       (longlong)
       &___7__TCustomPropertyRegistration_UFBoolPropertyTraits_MovieScene_UE___07_MovieScene_UE__6B_
  ;
  this->MPC = (TComponentTypeID<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>)0xffff
  ;
  this->Fade = (TComponentTypeID<UE::MovieScene::FFadeComponentData>)0xffff;
  this->PropertyNotify = (TComponentTypeID<UE::MovieScene::FPropertyNotifyComponentData>)0xffff;
  this->Audio = (TComponentTypeID<FMovieSceneAudioComponentData>)0xffff;
  local_fc8 = &(this->Accessors).Byte;
  this->AudioInputs = (TComponentTypeID<FMovieSceneAudioInputData>)0xffff;
  this->AudioTriggerName = (TComponentTypeID<FName>)0xffff;
  this->CameraShake = (TComponentTypeID<FMovieSceneCameraShakeComponentData>)0xffff;
  this->CameraShakeInstance = (TComponentTypeID<FMovieSceneCameraShakeInstanceData>)0xffff;
  (this->Accessors).Bool.CustomAccessors.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FBoolPropertyTraits>_>
        )0x0;
  (this->Accessors).Bool.CustomAccessors.ArrayNum = 0;
  (this->Accessors).Bool.CustomAccessors.ArrayMax = 8;
  local_fc8->_padding_ =
       (longlong)
       &
       ___7__TCustomPropertyRegistration_U__TPropertyTraits_EE_00_MovieScene_UE___07_MovieScene_UE__6B_
  ;
  (this->Accessors).Byte.CustomAccessors.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>_>
        )0x0;
  (this->Accessors).Byte.CustomAccessors.ArrayNum = 0;
  (this->Accessors).Byte.CustomAccessors.ArrayMax = 8;
  (this->Accessors).Enum.CustomAccessors.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>_>
        )0x0;
  local_fc0 = &(this->Accessors).Enum;
  local_fc0->_padding_ =
       (longlong)
       &
       ___7__TCustomPropertyRegistration_U__TPropertyTraits_EE_00_MovieScene_UE___07_MovieScene_UE__6B_
  ;
  (this->Accessors).Enum.CustomAccessors.ArrayNum = 0;
  (this->Accessors).Enum.CustomAccessors.ArrayMax = 8;
  (this->Accessors).Integer.CustomAccessors.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>_>
        )0x0;
  (this->Accessors).Integer._padding_ =
       (longlong)
       &
       ___7__TCustomPropertyRegistration_U__TDynamicVariantPropertyTraits__J_JHFC_MovieScene_UE___07_MovieScene_UE__6B_
  ;
  (this->Accessors).Integer.CustomAccessors.ArrayNum = 0;
  (this->Accessors).Integer.CustomAccessors.ArrayMax = 8;
  (this->Accessors).Float._padding_ =
       (longlong)
       &
       ___7__TCustomPropertyRegistration_UFFloatPropertyTraits_MovieScene_UE___07_MovieScene_UE__6B_
  ;
  (this->Accessors).Float.CustomAccessors.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
        )0x0;
  (this->Accessors).Float.CustomAccessors.ArrayNum = 0;
  (this->Accessors).Float.CustomAccessors.ArrayMax = 8;
  (this->Accessors).Double._padding_ =
       (longlong)
       &
       ___7__TCustomPropertyRegistration_U__TDynamicVariantPropertyTraits_NN_MovieScene_UE___07_MovieScene_UE__6B_
  ;
  (this->Accessors).Double.CustomAccessors.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>_>
        )0x0;
  (this->Accessors).Double.CustomAccessors.ArrayNum = 0;
  (this->Accessors).Double.CustomAccessors.ArrayMax = 8;
  (this->Accessors).Color._padding_ =
       (longlong)
       &
       ___7__TCustomPropertyRegistration_U__TDynamicVariantPropertyTraits_UFIntermediateColor_MovieScene_UE__UFLinearColor__UFColor__UFSlateColor___MovieScene_UE___07_MovieScene_UE__6B_
  ;
  (this->Accessors).Color.CustomAccessors.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>_>
        )0x0;
  (this->Accessors).Color.CustomAccessors.ArrayNum = 0;
  (this->Accessors).Color.CustomAccessors.ArrayMax = 8;
  (this->Accessors).FloatVector._padding_ =
       (longlong)
       &
       ___7__TCustomPropertyRegistration_U__TDynamicVariantPropertyTraits_UFFloatIntermediateVector_MovieScene_UE__U__TVector2_M_Math_3_U__TVector_M_53_U__TVector4_M_53__MovieScene_UE___07_MovieScene_UE__6B_
  ;
  (this->Accessors).FloatVector.CustomAccessors.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>_>
        )0x0;
  (this->Accessors).FloatVector.CustomAccessors.ArrayNum = 0;
  (this->Accessors).FloatVector.CustomAccessors.ArrayMax = 8;
  (this->Accessors).DoubleVector._padding_ =
       (longlong)
       &
       ___7__TCustomPropertyRegistration_U__TDynamicVariantPropertyTraits_UFDoubleIntermediateVector_MovieScene_UE__U__TVector2_N_Math_3_U__TVector_N_53_U653_U__TVector4_N_53_U753__MovieScene_UE___07_MovieScene_UE__6B_
  ;
  (this->Accessors).DoubleVector.CustomAccessors.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>_>
        )0x0;
  (this->Accessors).DoubleVector.CustomAccessors.ArrayNum = 0;
  (this->Accessors).DoubleVector.CustomAccessors.ArrayMax = 8;
  (this->Accessors).Transform._padding_ =
       (longlong)
       &
       ___7__TCustomPropertyRegistration_U__TDynamicVariantPropertyTraits_UFIntermediate3DTransform_MovieScene_UE__U__TTransform_N_Math_3__MovieScene_UE___07_MovieScene_UE__6B_
  ;
  (this->Accessors).Transform.CustomAccessors.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>_>
        )0x0;
  (this->Accessors).Transform.CustomAccessors.ArrayNum = 0;
  (this->Accessors).Transform.CustomAccessors.ArrayMax = 8;
  (this->Accessors).ComponentTransform._padding_ =
       (longlong)
       &
       ___7__TCustomPropertyRegistration_U__TPropertyTraits_UFIntermediate3DTransform_MovieScene_UE__U123__00_MovieScene_UE___00_MovieScene_UE__6B_
  ;
  (this->Accessors).ComponentTransform.CustomAccessors.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
        )0x0;
  (this->Accessors).ComponentTransform.CustomAccessors.ArrayNum = 0;
  (this->Accessors).ComponentTransform.CustomAccessors.ArrayMax = 1;
  (this->Accessors).Object._padding_ = 0;
  *(undefined4 *)&(this->Accessors).Object._padding_ = 0;
  *(undefined4 *)((longlong)&(this->Accessors).Object._padding_ + 4) = 8;
  (this->Accessors).Object._padding_ =
       (longlong)&___7FObjectPropertyRegistration_FMovieSceneTracksComponentTypes_MovieScene_UE__6B_
  ;
  *(undefined8 *)&(this->Accessors).Object.MetaData = 0;
  *(undefined8 *)&(this->Accessors).Object.MetaData.field_0x8 = 0;
  *(undefined8 *)&(this->Accessors).Object.MetaData.field_0x20 = 0;
  *(undefined4 *)&(this->Accessors).Object.MetaData.field_0x28 = 0;
  *(undefined4 *)&(this->Accessors).Object.MetaData.field_0x2c = 0x80;
  *(undefined4 *)&(this->Accessors).Object.MetaData.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Accessors).Object.MetaData.field_0x34 = 0;
  *(undefined8 *)&(this->Accessors).Object.MetaData.field_0x40 = 0;
  *(undefined4 *)&(this->Accessors).Object.MetaData.field_0x48 = 0;
  (this->Tags).BoundMaterialChanged = 0xffff;
  (this->Tags).CustomPrimitiveData = 0xffff;
  (this->Tags).Slomo = 0xffff;
  (this->Tags).Visibility = 0xffff;
  *(undefined4 *)&(this->Tags).AnimMixerPoseProducer = 0xffffffff;
  this->DataLayer = (TComponentTypeID<FMovieSceneDataLayerComponentData>)0xffff;
  this_00 = FBuiltInComponentTypes::Get();
  this_01 = UMovieSceneEntitySystemLinker::GetComponents();
  pFVar50 = ::FString::FString(&local_938,L"Initial ");
  ::FString::ConcatFC(&local_f78,pFVar50,L"bool");
  if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_938.Data.AllocatorInstance.Data);
  }
  FVar15 = FComponentRegistry::NewTag(this_01,&local_1030,0xe0);
  local_e28 = 0;
  FVar92.Data = (FScriptContainerElement *)L"";
  if (local_f78.Data.ArrayNum != 0) {
    FVar92.Data = local_f78.Data.AllocatorInstance.Data;
  }
  (this->Bool).PropertyTag.Value = *(ushort *)CONCAT62(extraout_var,FVar15.Value);
  local_e20 = 9;
  TVar16 = FComponentRegistry::NewComponentType<bool>
                     (this_01,&local_102e,(FNewComponentTypeParams *)FVar92.Data);
  (this->Bool).InitialValue = *(TComponentTypeID<bool> *)CONCAT62(extraout_var_00,TVar16);
  if ((FNewComponentTypeParams *)local_f78.Data.AllocatorInstance.Data !=
      (FNewComponentTypeParams *)0x0) {
    FMemory::Free(local_f78.Data.AllocatorInstance.Data);
  }
  FComponentRegistry::
  NewPropertyType<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
            (this_01,&this->Byte,L"byte");
  FComponentRegistry::
  NewPropertyType<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
            (this_01,&this->Enum,L"enum");
  pFVar50 = ::FString::FString(&local_928,L"Initial ");
  ::FString::ConcatFC(&local_f68,pFVar50,L"float");
  if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_928.Data.AllocatorInstance.Data);
  }
  FVar15 = FComponentRegistry::NewTag(this_01,&local_102c,0x68);
  local_e18 = 0;
  FVar92.Data = (FScriptContainerElement *)L"";
  if (local_f68.Data.ArrayNum != 0) {
    FVar92.Data = local_f68.Data.AllocatorInstance.Data;
  }
  (this->Float).PropertyTag.Value = *(ushort *)CONCAT62(extraout_var_01,FVar15.Value);
  local_e10 = 9;
  TVar17 = FComponentRegistry::NewComponentType<double>
                     (this_01,&local_102a,(FNewComponentTypeParams *)FVar92.Data);
  (this->Float).InitialValue = *(TComponentTypeID<double> *)CONCAT62(extraout_var_02,TVar17);
  if ((FNewComponentTypeParams *)local_f68.Data.AllocatorInstance.Data !=
      (FNewComponentTypeParams *)0x0) {
    FMemory::Free(local_f68.Data.AllocatorInstance.Data);
  }
  pFVar50 = ::FString::FString(&local_918,L"Initial ");
  ::FString::ConcatFC(&local_f58,pFVar50,L"double");
  if (local_918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_918.Data.AllocatorInstance.Data);
  }
  FVar15 = FComponentRegistry::NewTag(this_01,&local_1028,0x78);
  local_e08 = 0;
  FVar92.Data = (FScriptContainerElement *)L"";
  if (local_f58.Data.ArrayNum != 0) {
    FVar92.Data = local_f58.Data.AllocatorInstance.Data;
  }
  (this->Double).PropertyTag.Value = *(ushort *)CONCAT62(extraout_var_03,FVar15.Value);
  local_e00 = 9;
  TVar17 = FComponentRegistry::NewComponentType<double>
                     (this_01,&local_1026,(FNewComponentTypeParams *)FVar92.Data);
  (this->Double).InitialValue = *(TComponentTypeID<double> *)CONCAT62(extraout_var_04,TVar17);
  if ((FNewComponentTypeParams *)local_f58.Data.AllocatorInstance.Data !=
      (FNewComponentTypeParams *)0x0) {
    FMemory::Free(local_f58.Data.AllocatorInstance.Data);
  }
  pFVar50 = ::FString::FString(&local_908,L"Initial ");
  ::FString::ConcatFC(&local_f48,pFVar50,L"color");
  if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_908.Data.AllocatorInstance.Data);
  }
  FVar15 = FComponentRegistry::NewTag(this_01,&local_1024,0x80);
  local_df8 = 0;
  FVar92.Data = (FScriptContainerElement *)L"";
  if (local_f48.Data.ArrayNum != 0) {
    FVar92.Data = local_f48.Data.AllocatorInstance.Data;
  }
  (this->Color).PropertyTag.Value = *(ushort *)CONCAT62(extraout_var_05,FVar15.Value);
  local_df0 = 9;
  TVar18 = FComponentRegistry::NewComponentType<UE::MovieScene::FIntermediateColor>
                     (this_01,&local_1022,(FNewComponentTypeParams *)FVar92.Data);
  (this->Color).InitialValue =
       *(TComponentTypeID<UE::MovieScene::FIntermediateColor> *)CONCAT62(extraout_var_06,TVar18);
  if ((FNewComponentTypeParams *)local_f48.Data.AllocatorInstance.Data !=
      (FNewComponentTypeParams *)0x0) {
    FMemory::Free(local_f48.Data.AllocatorInstance.Data);
  }
  pFVar50 = ::FString::FString(&local_8f8,L"Initial ");
  ::FString::ConcatFC(&local_f38,pFVar50,L"int32");
  if (local_8f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8f8.Data.AllocatorInstance.Data);
  }
  FVar15 = FComponentRegistry::NewTag(this_01,&local_101e,0x48);
  local_de8 = 0;
  FVar92.Data = (FScriptContainerElement *)L"";
  if (local_f38.Data.ArrayNum != 0) {
    FVar92.Data = local_f38.Data.AllocatorInstance.Data;
  }
  (this->Integer).PropertyTag.Value = *(ushort *)CONCAT62(extraout_var_07,FVar15.Value);
  local_de0 = 9;
  TVar19 = FComponentRegistry::NewComponentType<__int64>
                     (this_01,&local_101c,(FNewComponentTypeParams *)FVar92.Data);
  (this->Integer).InitialValue = *(TComponentTypeID<__int64> *)CONCAT62(extraout_var_08,TVar19);
  if ((FNewComponentTypeParams *)local_f38.Data.AllocatorInstance.Data !=
      (FNewComponentTypeParams *)0x0) {
    FMemory::Free(local_f38.Data.AllocatorInstance.Data);
  }
  pFVar50 = ::FString::FString(&local_8e8,L"Initial ");
  ::FString::ConcatFC(&local_f28,pFVar50,L"float vector");
  if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
  }
  FVar15 = FComponentRegistry::NewTag(this_01,&local_101a,0x90);
  local_dd8 = 0;
  FVar92.Data = (FScriptContainerElement *)L"";
  if (local_f28.Data.ArrayNum != 0) {
    FVar92.Data = local_f28.Data.AllocatorInstance.Data;
  }
  (this->FloatVector).PropertyTag.Value = *(ushort *)CONCAT62(extraout_var_09,FVar15.Value);
  local_dd0 = 9;
  TVar20 = FComponentRegistry::NewComponentType<UE::MovieScene::FFloatIntermediateVector>
                     (this_01,&local_1018,(FNewComponentTypeParams *)FVar92.Data);
  (this->FloatVector).InitialValue =
       *(TComponentTypeID<UE::MovieScene::FFloatIntermediateVector> *)
        CONCAT62(extraout_var_10,TVar20);
  if ((FNewComponentTypeParams *)local_f28.Data.AllocatorInstance.Data !=
      (FNewComponentTypeParams *)0x0) {
    FMemory::Free(local_f28.Data.AllocatorInstance.Data);
  }
  pFVar50 = ::FString::FString(&local_8d8,L"Initial ");
  ::FString::ConcatFC(&local_f18,pFVar50,L"double vector");
  if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
  }
  FVar15 = FComponentRegistry::NewTag(this_01,&local_1016,0xb0);
  local_dc8 = 0;
  FVar92.Data = (FScriptContainerElement *)L"";
  if (local_f18.Data.ArrayNum != 0) {
    FVar92.Data = local_f18.Data.AllocatorInstance.Data;
  }
  (this->DoubleVector).PropertyTag.Value = *(ushort *)CONCAT62(extraout_var_11,FVar15.Value);
  local_dc0 = 9;
  TVar21 = FComponentRegistry::NewComponentType<UE::MovieScene::FDoubleIntermediateVector>
                     (this_01,&local_1014,(FNewComponentTypeParams *)FVar92.Data);
  (this->DoubleVector).InitialValue =
       *(TComponentTypeID<UE::MovieScene::FDoubleIntermediateVector> *)
        CONCAT62(extraout_var_12,TVar21);
  if ((FNewComponentTypeParams *)local_f18.Data.AllocatorInstance.Data !=
      (FNewComponentTypeParams *)0x0) {
    FMemory::Free(local_f18.Data.AllocatorInstance.Data);
  }
  pFVar50 = ::FString::FString(&local_8c8,L"Initial ");
  ::FString::ConcatFC(&local_f08,pFVar50,L"FString");
  if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
  }
  FVar15 = FComponentRegistry::NewTag(this_01,&local_1012,0x68);
  local_db8 = 0;
  FVar92.Data = (FScriptContainerElement *)L"";
  if (local_f08.Data.ArrayNum != 0) {
    FVar92.Data = local_f08.Data.AllocatorInstance.Data;
  }
  (this->String).PropertyTag.Value = *(ushort *)CONCAT62(extraout_var_13,FVar15.Value);
  local_db0 = 9;
  TVar22 = FComponentRegistry::NewComponentType<FString>
                     (this_01,&local_1010,(FNewComponentTypeParams *)FVar92.Data);
  (this->String).InitialValue = *(TComponentTypeID<FString> *)CONCAT62(extraout_var_14,TVar22);
  if ((FNewComponentTypeParams *)local_f08.Data.AllocatorInstance.Data !=
      (FNewComponentTypeParams *)0x0) {
    FMemory::Free(local_f08.Data.AllocatorInstance.Data);
  }
  pFVar50 = ::FString::FString(&local_8b8,L"Initial ");
  ::FString::ConcatFC(&local_ef8,pFVar50,L"FText");
  if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
  }
  FVar15 = FComponentRegistry::NewTag(this_01,&local_100e,0x78);
  local_da8 = 0;
  FVar92.Data = (FScriptContainerElement *)L"";
  if (local_ef8.Data.ArrayNum != 0) {
    FVar92.Data = local_ef8.Data.AllocatorInstance.Data;
  }
  (this->Text).PropertyTag.Value = *(ushort *)CONCAT62(extraout_var_15,FVar15.Value);
  local_da0 = 9;
  TVar23 = FComponentRegistry::NewComponentType<FText>
                     (this_01,&local_100c,(FNewComponentTypeParams *)FVar92.Data);
  (this->Text).InitialValue = *(TComponentTypeID<FText> *)CONCAT62(extraout_var_16,TVar23);
  if ((FNewComponentTypeParams *)local_ef8.Data.AllocatorInstance.Data !=
      (FNewComponentTypeParams *)0x0) {
    FMemory::Free(local_ef8.Data.AllocatorInstance.Data);
  }
  pFVar50 = ::FString::FString(&local_8a8,L"Initial ");
  ::FString::ConcatFC(&local_ee8,pFVar50,L"Object");
  if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
  }
  FVar15 = FComponentRegistry::NewTag(this_01,&local_100a,200);
  local_d98 = 0;
  FVar92.Data = (FScriptContainerElement *)L"";
  if (local_ee8.Data.ArrayNum != 0) {
    FVar92.Data = local_ee8.Data.AllocatorInstance.Data;
  }
  (this->Object).PropertyTag.Value = *(ushort *)CONCAT62(extraout_var_17,FVar15.Value);
  local_d90 = 9;
  TVar24 = FComponentRegistry::NewComponentType<UE::MovieScene::FObjectComponent>
                     (this_01,&local_fd4,(FNewComponentTypeParams *)FVar92.Data);
  (this->Object).InitialValue =
       *(TComponentTypeID<UE::MovieScene::FObjectComponent> *)CONCAT62(extraout_var_18,TVar24);
  if ((FNewComponentTypeParams *)local_ee8.Data.AllocatorInstance.Data !=
      (FNewComponentTypeParams *)0x0) {
    FMemory::Free(local_ee8.Data.AllocatorInstance.Data);
  }
  pFVar50 = ::FString::FString(&local_898,L"Initial ");
  ::FString::ConcatFC(&local_ed8,pFVar50,L"FTransform");
  if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_898.Data.AllocatorInstance.Data);
  }
  FVar15 = FComponentRegistry::NewTag(this_01,&local_fd2,0x40);
  local_d88 = 0;
  FVar92.Data = (FScriptContainerElement *)L"";
  if (local_ed8.Data.ArrayNum != 0) {
    FVar92.Data = local_ed8.Data.AllocatorInstance.Data;
  }
  (this->Transform).PropertyTag.Value = *(ushort *)CONCAT62(extraout_var_19,FVar15.Value);
  local_d80 = 9;
  TVar25 = FComponentRegistry::NewComponentType<UE::MovieScene::FIntermediate3DTransform>
                     (this_01,&local_fd0,(FNewComponentTypeParams *)FVar92.Data);
  (this->Transform).InitialValue =
       *(TComponentTypeID<UE::MovieScene::FIntermediate3DTransform> *)
        CONCAT62(extraout_var_20,TVar25);
  if ((FNewComponentTypeParams *)local_ed8.Data.AllocatorInstance.Data !=
      (FNewComponentTypeParams *)0x0) {
    FMemory::Free(local_ed8.Data.AllocatorInstance.Data);
  }
  FComponentRegistry::
  NewPropertyType<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
            (this_01,&this->EulerTransform,L"FEulerTransform");
  pFVar50 = ::FString::FString(&local_888,L"Initial ");
  ::FString::ConcatFC(&local_ec8,pFVar50,L"Component Transform");
  if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_888.Data.AllocatorInstance.Data);
  }
  FVar15 = FComponentRegistry::NewTag
                     (this_01,local_fce,~(MigrateToOutput|CopyToOutput|CopyToChildren|Preserved));
  local_d78 = 0;
  FVar92.Data = (FScriptContainerElement *)L"";
  if (local_ec8.Data.ArrayNum != 0) {
    FVar92.Data = local_ec8.Data.AllocatorInstance.Data;
  }
  (this->ComponentTransform).PropertyTag.Value = *(ushort *)CONCAT62(extraout_var_21,FVar15.Value);
  local_d70 = 9;
  TVar25 = FComponentRegistry::NewComponentType<UE::MovieScene::FIntermediate3DTransform>
                     (this_01,&local_1098,(FNewComponentTypeParams *)FVar92.Data);
  (this->ComponentTransform).InitialValue =
       *(TComponentTypeID<UE::MovieScene::FIntermediate3DTransform> *)
        CONCAT62(extraout_var_22,TVar25);
  if ((FNewComponentTypeParams *)local_ec8.Data.AllocatorInstance.Data !=
      (FNewComponentTypeParams *)0x0) {
    FMemory::Free(local_ec8.Data.AllocatorInstance.Data);
  }
  pFVar50 = ::FString::FString(&local_878,L"Initial ");
  ::FString::ConcatFC(&local_eb8,pFVar50,L"FRotator");
  if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_878.Data.AllocatorInstance.Data);
  }
  FVar15 = FComponentRegistry::NewTag(this_01,&local_1096,0x28);
  local_d68 = 0;
  FVar92.Data = (FScriptContainerElement *)L"";
  if (local_eb8.Data.ArrayNum != 0) {
    FVar92.Data = local_eb8.Data.AllocatorInstance.Data;
  }
  (this->Rotator).PropertyTag.Value = *(ushort *)CONCAT62(extraout_var_23,FVar15.Value);
  local_d60 = 9;
  TVar26 = FComponentRegistry::NewComponentType<UE::Math::TRotator<double>_>
                     (this_01,&local_1094,(FNewComponentTypeParams *)FVar92.Data);
  (this->Rotator).InitialValue =
       *(TComponentTypeID<UE::Math::TRotator<double>_> *)CONCAT62(extraout_var_24,TVar26);
  if ((FNewComponentTypeParams *)local_eb8.Data.AllocatorInstance.Data !=
      (FNewComponentTypeParams *)0x0) {
    FMemory::Free(local_eb8.Data.AllocatorInstance.Data);
  }
  FComponentRegistry::NewPropertyType<UE::MovieScene::TPropertyTraits<float,double,1>_>
            (this_01,&this->FloatParameter,L"float parameter");
  FComponentRegistry::
  NewPropertyType<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
            (this_01,&this->ColorParameter,L"color parameter");
  pFVar50 = ::FString::FString(&local_868,L"Initial ");
  ::FString::ConcatFC(&local_ea8,pFVar50,L"Bool parameter");
  if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_868.Data.AllocatorInstance.Data);
  }
  FVar15 = FComponentRegistry::NewTag(this_01,&local_1092,0x58);
  local_d50 = 9;
  local_d58 = 0;
  FVar92.Data = (FScriptContainerElement *)L"";
  if (local_ea8.Data.ArrayNum != 0) {
    FVar92.Data = local_ea8.Data.AllocatorInstance.Data;
  }
  (this->Parameters).Bool.PropertyTag.Value = *(ushort *)CONCAT62(extraout_var_25,FVar15.Value);
  TVar16 = FComponentRegistry::NewComponentType<bool>
                     (this_01,&local_1090,(FNewComponentTypeParams *)FVar92.Data);
  (this->Parameters).Bool.InitialValue = *(TComponentTypeID<bool> *)CONCAT62(extraout_var_26,TVar16)
  ;
  if ((FNewComponentTypeParams *)local_ea8.Data.AllocatorInstance.Data !=
      (FNewComponentTypeParams *)0x0) {
    FMemory::Free(local_ea8.Data.AllocatorInstance.Data);
  }
  FComponentRegistry::
  NewPropertyType<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
            (this_01,&(this->Parameters).Byte,L"Byte parameter");
  pFVar50 = ::FString::FString(&local_858,L"Initial ");
  ::FString::ConcatFC(&local_e98,pFVar50,L"Integer parameter");
  if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_858.Data.AllocatorInstance.Data);
  }
  FVar15 = FComponentRegistry::NewTag(this_01,&local_108e,0x98);
  local_d48 = 0;
  FVar92.Data = (FScriptContainerElement *)L"";
  if (local_e98.Data.ArrayNum != 0) {
    FVar92.Data = local_e98.Data.AllocatorInstance.Data;
  }
  (this->Parameters).Integer.PropertyTag.Value = *(ushort *)CONCAT62(extraout_var_27,FVar15.Value);
  local_d40 = 9;
  TVar27 = FComponentRegistry::NewComponentType<int>
                     (this_01,&local_108c,(FNewComponentTypeParams *)FVar92.Data);
  (this->Parameters).Integer.InitialValue =
       *(TComponentTypeID<int> *)CONCAT62(extraout_var_28,TVar27);
  if ((FNewComponentTypeParams *)local_e98.Data.AllocatorInstance.Data !=
      (FNewComponentTypeParams *)0x0) {
    FMemory::Free(local_e98.Data.AllocatorInstance.Data);
  }
  FComponentRegistry::NewPropertyType<UE::MovieScene::TPropertyTraits<float,double,1>_>
            (this_01,&(this->Parameters).Scalar,L"Scalar parameter");
  pFVar50 = ::FString::FString(&local_848,L"Initial ");
  ::FString::ConcatFC(&local_e88,pFVar50,L"Vector2 parameter");
  if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_848.Data.AllocatorInstance.Data);
  }
  FVar15 = FComponentRegistry::NewTag(this_01,&local_108a,0xe8);
  local_d38 = 0;
  FVar92.Data = (FScriptContainerElement *)L"";
  if (local_e88.Data.ArrayNum != 0) {
    FVar92.Data = local_e88.Data.AllocatorInstance.Data;
  }
  (this->Parameters).Vector2.PropertyTag.Value = *(ushort *)CONCAT62(extraout_var_29,FVar15.Value);
  local_d30 = 9;
  TVar20 = FComponentRegistry::NewComponentType<UE::MovieScene::FFloatIntermediateVector>
                     (this_01,&local_1088,(FNewComponentTypeParams *)FVar92.Data);
  (this->Parameters).Vector2.InitialValue =
       *(TComponentTypeID<UE::MovieScene::FFloatIntermediateVector> *)
        CONCAT62(extraout_var_30,TVar20);
  if ((FNewComponentTypeParams *)local_e88.Data.AllocatorInstance.Data !=
      (FNewComponentTypeParams *)0x0) {
    FMemory::Free(local_e88.Data.AllocatorInstance.Data);
  }
  pFVar50 = ::FString::FString(&local_838,L"Initial ");
  ::FString::ConcatFC(&local_e78,pFVar50,L"Vector3 parameter");
  if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_838.Data.AllocatorInstance.Data);
  }
  FVar15 = FComponentRegistry::NewTag(this_01,&local_1086,0x10);
  local_d28 = 0;
  FVar92.Data = (FScriptContainerElement *)L"";
  if (local_e78.Data.ArrayNum != 0) {
    FVar92.Data = local_e78.Data.AllocatorInstance.Data;
  }
  (this->Parameters).Vector3.PropertyTag.Value = *(ushort *)CONCAT62(extraout_var_31,FVar15.Value);
  local_d20 = 9;
  TVar20 = FComponentRegistry::NewComponentType<UE::MovieScene::FFloatIntermediateVector>
                     (this_01,&local_1084,(FNewComponentTypeParams *)FVar92.Data);
  (this->Parameters).Vector3.InitialValue =
       *(TComponentTypeID<UE::MovieScene::FFloatIntermediateVector> *)
        CONCAT62(extraout_var_32,TVar20);
  if ((FNewComponentTypeParams *)local_e78.Data.AllocatorInstance.Data !=
      (FNewComponentTypeParams *)0x0) {
    FMemory::Free(local_e78.Data.AllocatorInstance.Data);
  }
  FComponentRegistry::
  NewPropertyType<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
            (this_01,&(this->Parameters).Color,L"Color parameter");
  FComponentRegistry::
  NewPropertyType<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
            (this_01,&(this->Parameters).Transform,L"Transform parameter");
  (this->Color).MetaDataComponents =
       (TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
        )this_00->VariantPropertyTypeIndex;
  (this->Double).MetaDataComponents =
       (TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
        )this_00->VariantPropertyTypeIndex;
  (this->Integer).MetaDataComponents =
       (TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
        )this_00->VariantPropertyTypeIndex;
  (this->Transform).MetaDataComponents =
       (TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
        )this_00->VariantPropertyTypeIndex;
  (this->FloatVector).MetaDataComponents =
       (TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
        )this_00->VariantPropertyTypeIndex;
  (this->DoubleVector).MetaDataComponents =
       (TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
        )this_00->VariantPropertyTypeIndex;
  local_d18 = 0;
  local_d10 = 4;
  TVar28 = FComponentRegistry::NewComponentType<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>
                     (this_01,&local_1082,(FNewComponentTypeParams *)L"Bool Bitfield");
  local_d08 = 0;
  local_d00 = 4;
  (this->Bool).MetaDataComponents =
       *(TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
         *)CONCAT62(extraout_var_33,TVar28);
  TVar29 = FComponentRegistry::
           NewComponentType<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>
                     (this_01,&local_1080,(FNewComponentTypeParams *)L"Object Class");
  local_cf8 = 0;
  local_cf0 = 0;
  (this->Object).MetaDataComponents =
       *(TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
         *)CONCAT62(extraout_var_34,TVar29);
  TVar30 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceDoubleChannel>
                     (this_01,&local_107e,
                      (FNewComponentTypeParams *)L"Quaternion Rotation Channel 0");
  local_ce8 = 0;
  local_ce0 = 0;
  this->QuaternionRotationChannel[0] =
       *(TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> *)CONCAT62(extraout_var_35,TVar30);
  TVar30 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceDoubleChannel>
                     (this_01,&local_107c,
                      (FNewComponentTypeParams *)L"Quaternion Rotation Channel 1");
  local_cd8 = 0;
  local_cd0 = 0;
  this->QuaternionRotationChannel[1] =
       *(TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> *)CONCAT62(extraout_var_36,TVar30);
  TVar30 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceDoubleChannel>
                     (this_01,&local_107a,
                      (FNewComponentTypeParams *)L"Quaternion Rotation Channel 2");
  local_cc8 = 0;
  local_cc0 = 0;
  this->QuaternionRotationChannel[2] =
       *(TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> *)CONCAT62(extraout_var_37,TVar30);
  TVar30 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceDoubleChannel>
                     (this_01,&local_1078,(FNewComponentTypeParams *)L"Rotator Channel Y (Pitch)");
  local_cb8 = 0;
  local_cb0 = 0;
  this->RotatorChannel[0] =
       *(TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> *)CONCAT62(extraout_var_38,TVar30);
  TVar30 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceDoubleChannel>
                     (this_01,&local_1076,(FNewComponentTypeParams *)L"Rotator Channel Z (Yaw)");
  this->RotatorChannel[1] =
       *(TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> *)CONCAT62(extraout_var_39,TVar30);
  local_ca8 = 0;
  local_ca0 = 0;
  TVar30 = FComponentRegistry::NewComponentType<UE::MovieScene::FSourceDoubleChannel>
                     (this_01,&local_1074,(FNewComponentTypeParams *)L"Rotator Channel X (Roll)");
  local_c98 = 0;
  local_c90 = 0;
  this->RotatorChannel[2] =
       *(TComponentTypeID<UE::MovieScene::FSourceDoubleChannel> *)CONCAT62(extraout_var_40,TVar30);
  TVar31 = FComponentRegistry::NewComponentType<FConstraintComponentData>
                     (this_01,&local_1072,(FNewComponentTypeParams *)L"Constraint Channel");
  local_c88 = 0;
  local_c80 = 0;
  this->ConstraintChannel =
       *(TComponentTypeID<FConstraintComponentData> *)CONCAT62(extraout_var_41,TVar31);
  TVar32 = FComponentRegistry::NewComponentType<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_>
                     (this_01,&local_1070,(FNewComponentTypeParams *)L"Attach Parent");
  local_c78 = 0;
  local_c70 = 0;
  this->AttachParent =
       *(TComponentTypeID<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_> *)
        CONCAT62(extraout_var_42,TVar32);
  TVar33 = FComponentRegistry::NewComponentType<UE::MovieScene::FAttachmentComponent>
                     (this_01,&local_106e,(FNewComponentTypeParams *)L"Attachment Component");
  local_c68 = 0;
  local_c60 = 0;
  this->AttachComponent =
       *(TComponentTypeID<UE::MovieScene::FAttachmentComponent> *)CONCAT62(extraout_var_43,TVar33);
  TVar34 = FComponentRegistry::NewComponentType<FMovieSceneObjectBindingID>
                     (this_01,&local_106c,(FNewComponentTypeParams *)L"Attach Parent Binding");
  local_c58 = 0;
  local_c50 = 0;
  this->AttachParentBinding =
       *(TComponentTypeID<FMovieSceneObjectBindingID> *)CONCAT62(extraout_var_44,TVar34);
  TVar35 = FComponentRegistry::NewComponentType<FPerlinNoiseParams>
                     (this_01,&local_1046,(FNewComponentTypeParams *)L"Float Perlin Noise Channel");
  local_c48 = 0;
  local_c40 = 0;
  this->FloatPerlinNoiseChannel =
       *(TComponentTypeID<FPerlinNoiseParams> *)CONCAT62(extraout_var_45,TVar35);
  TVar35 = FComponentRegistry::NewComponentType<FPerlinNoiseParams>
                     (this_01,&local_106a,(FNewComponentTypeParams *)L"Double Perlin Noise Channel")
  ;
  local_c38 = 0;
  local_c30 = 0;
  this->DoublePerlinNoiseChannel =
       *(TComponentTypeID<FPerlinNoiseParams> *)CONCAT62(extraout_var_46,TVar35);
  TVar36 = FComponentRegistry::NewComponentType<FMovieSceneSkeletalAnimationComponentData>
                     (this_01,&local_1068,(FNewComponentTypeParams *)L"Skeletal Animation");
  local_c28 = 0;
  local_c20 = 0;
  this->SkeletalAnimation =
       *(TComponentTypeID<FMovieSceneSkeletalAnimationComponentData> *)
        CONCAT62(extraout_var_47,TVar36);
  TVar37 = FComponentRegistry::NewComponentType<FLevelVisibilityComponentData>
                     (this_01,&local_1066,(FNewComponentTypeParams *)L"Level Visibility");
  this->LevelVisibility =
       *(TComponentTypeID<FLevelVisibilityComponentData> *)CONCAT62(extraout_var_48,TVar37);
  local_c18 = 0;
  local_c10 = 0;
  TVar38 = FComponentRegistry::NewComponentType<FMovieSceneDataLayerComponentData>
                     (this_01,&local_1064,(FNewComponentTypeParams *)L"Data Layer");
  local_c08 = 0;
  local_c00 = 6;
  this->DataLayer =
       *(TComponentTypeID<FMovieSceneDataLayerComponentData> *)CONCAT62(extraout_var_49,TVar38);
  TVar39 = FComponentRegistry::NewComponentType<FComponentMaterialInfo>
                     (this_01,&local_1062,(FNewComponentTypeParams *)L"Component Material Info");
  local_bf8 = 0;
  local_bf0 = 6;
  this->ComponentMaterialInfo =
       *(TComponentTypeID<FComponentMaterialInfo> *)CONCAT62(extraout_var_50,TVar39);
  TVar24 = FComponentRegistry::NewComponentType<UE::MovieScene::FObjectComponent>
                     (this_01,&local_1060,(FNewComponentTypeParams *)L"Bound Material");
  local_be8 = 0;
  local_be0 = 6;
  this->BoundMaterial =
       *(TComponentTypeID<UE::MovieScene::FObjectComponent> *)CONCAT62(extraout_var_51,TVar24);
  TVar40 = FComponentRegistry::
           NewComponentType<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_>
                     (this_01,&local_105e,
                      (FNewComponentTypeParams *)L"Material Parameter Collection");
  local_bd8 = 0;
  local_bd0 = 6;
  this->MPC = *(TComponentTypeID<TWeakObjectPtr<UMaterialParameterCollection,FWeakObjectPtr>_> *)
               CONCAT62(extraout_var_52,TVar40);
  TVar41 = FComponentRegistry::NewComponentType<FName>
                     (this_01,&local_105c,(FNewComponentTypeParams *)L"Bool Parameter Name");
  local_bc8 = 0;
  local_bc0 = 6;
  this->BoolParameterName = *(TComponentTypeID<FName> *)CONCAT62(extraout_var_53,TVar41);
  TVar41 = FComponentRegistry::NewComponentType<FName>
                     (this_01,&local_105a,(FNewComponentTypeParams *)L"Scalar Parameter Name");
  local_bb8 = 0;
  local_bb0 = 6;
  this->ScalarParameterName = *(TComponentTypeID<FName> *)CONCAT62(extraout_var_54,TVar41);
  TVar41 = FComponentRegistry::NewComponentType<FName>
                     (this_01,&local_1058,(FNewComponentTypeParams *)L"Vector2D Parameter Name");
  local_ba8 = 0;
  local_ba0 = 6;
  this->Vector2DParameterName = *(TComponentTypeID<FName> *)CONCAT62(extraout_var_55,TVar41);
  TVar41 = FComponentRegistry::NewComponentType<FName>
                     (this_01,&local_1056,(FNewComponentTypeParams *)L"Vector Parameter Name");
  local_b98 = 0;
  local_b90 = 6;
  this->VectorParameterName = *(TComponentTypeID<FName> *)CONCAT62(extraout_var_56,TVar41);
  TVar41 = FComponentRegistry::NewComponentType<FName>
                     (this_01,&local_1054,(FNewComponentTypeParams *)L"Color Parameter Name");
  this->ColorParameterName = *(TComponentTypeID<FName> *)CONCAT62(extraout_var_57,TVar41);
  local_b88 = 0;
  local_b80 = 6;
  TVar41 = FComponentRegistry::NewComponentType<FName>
                     (this_01,&local_1052,(FNewComponentTypeParams *)L"Transform Parameter Name");
  local_b78 = 0;
  local_b70 = 6;
  this->TransformParameterName = *(TComponentTypeID<FName> *)CONCAT62(extraout_var_58,TVar41);
  TVar41 = FComponentRegistry::NewComponentType<FName>
                     (this_01,&local_1050,(FNewComponentTypeParams *)L"Parameter Name");
  local_b68 = 0;
  local_b60 = 6;
  this->GenericParameterName = *(TComponentTypeID<FName> *)CONCAT62(extraout_var_59,TVar41);
  TVar42 = FComponentRegistry::NewComponentType<FMaterialParameterInfo>
                     (this_01,&local_104e,
                      (FNewComponentTypeParams *)L"Scalar Material Parameter Info");
  local_b58 = 0;
  local_b50 = 6;
  this->ScalarMaterialParameterInfo =
       *(TComponentTypeID<FMaterialParameterInfo> *)CONCAT62(extraout_var_60,TVar42);
  TVar42 = FComponentRegistry::NewComponentType<FMaterialParameterInfo>
                     (this_01,&local_104c,
                      (FNewComponentTypeParams *)L"Color Material Parameter Info");
  local_b48 = 0;
  local_b40 = 6;
  this->ColorMaterialParameterInfo =
       *(TComponentTypeID<FMaterialParameterInfo> *)CONCAT62(extraout_var_61,TVar42);
  TVar42 = FComponentRegistry::NewComponentType<FMaterialParameterInfo>
                     (this_01,&local_104a,
                      (FNewComponentTypeParams *)L"Vector Material Parameter Info");
  local_b38 = 0;
  local_b30 = 2;
  this->VectorMaterialParameterInfo =
       *(TComponentTypeID<FMaterialParameterInfo> *)CONCAT62(extraout_var_62,TVar42);
  TVar43 = FComponentRegistry::NewComponentType<UE::MovieScene::FFadeComponentData>
                     (this_01,&local_1048,(FNewComponentTypeParams *)L"Fade");
  local_b28 = 0;
  local_b20 = 2;
  this->Fade = *(TComponentTypeID<UE::MovieScene::FFadeComponentData> *)
                CONCAT62(extraout_var_63,TVar43);
  TVar44 = FComponentRegistry::NewComponentType<UE::MovieScene::FPropertyNotifyComponentData>
                     (this_01,&local_1020,(FNewComponentTypeParams *)L"PropertyNotify");
  local_b18 = 0;
  local_b10 = 2;
  this->PropertyNotify =
       *(TComponentTypeID<UE::MovieScene::FPropertyNotifyComponentData> *)
        CONCAT62(extraout_var_64,TVar44);
  TVar45 = FComponentRegistry::NewComponentType<FMovieSceneAudioComponentData>
                     (this_01,&local_1044,(FNewComponentTypeParams *)L"Audio");
  local_b08 = 0;
  local_b00 = 2;
  this->Audio = *(TComponentTypeID<FMovieSceneAudioComponentData> *)CONCAT62(extraout_var_65,TVar45)
  ;
  TVar46 = FComponentRegistry::NewComponentType<FMovieSceneAudioInputData>
                     (this_01,&local_1042,(FNewComponentTypeParams *)L"Audio Inputs");
  this->AudioInputs =
       *(TComponentTypeID<FMovieSceneAudioInputData> *)CONCAT62(extraout_var_66,TVar46);
  local_af8 = 0;
  local_af0 = 2;
  TVar41 = FComponentRegistry::NewComponentType<FName>
                     (this_01,&local_1040,(FNewComponentTypeParams *)L"Audio Trigger Name");
  local_ae8 = 0;
  local_ae0 = 2;
  this->AudioTriggerName = *(TComponentTypeID<FName> *)CONCAT62(extraout_var_67,TVar41);
  TVar47 = FComponentRegistry::NewComponentType<FMovieSceneCameraShakeComponentData>
                     (this_01,&local_103e,(FNewComponentTypeParams *)L"Camera Shake");
  local_ad8 = 0;
  local_ad0 = 1;
  this->CameraShake =
       *(TComponentTypeID<FMovieSceneCameraShakeComponentData> *)CONCAT62(extraout_var_68,TVar47);
  TVar48 = FComponentRegistry::NewComponentType<FMovieSceneCameraShakeInstanceData>
                     (this_01,&local_103c,(FNewComponentTypeParams *)L"Camera Shake Instance");
  this->CameraShakeInstance =
       *(TComponentTypeID<FMovieSceneCameraShakeInstanceData> *)CONCAT62(extraout_var_69,TVar48);
  FVar15 = FComponentRegistry::NewTag(this_01,&local_103a,~(CopyToOutput|CopyToChildren|Preserved));
  (this->Tags).BoundMaterialChanged.Value = *(ushort *)CONCAT62(extraout_var_70,FVar15.Value);
  pFVar51 = FBuiltInComponentTypes::Get();
  FComponentMask::Set(&pFVar51->RequiresInstantiationMask,
                      (FComponentTypeID)(this->Tags).BoundMaterialChanged.Value);
  FVar15 = FComponentRegistry::NewTag(this_01,&local_1038,0x28);
  FVar15.Value = *(ushort *)CONCAT62(extraout_var_71,FVar15.Value);
  (this->Tags).Slomo.Value = FVar15.Value;
  FEntityFactories::DefineChildComponent(&this_01->Factories,FVar15,FVar15);
  FVar15 = FComponentRegistry::NewTag(this_01,&local_1036,0xb0);
  FVar15.Value = *(ushort *)CONCAT62(extraout_var_72,FVar15.Value);
  (this->Tags).Visibility.Value = FVar15.Value;
  FEntityFactories::DefineChildComponent(&this_01->Factories,FVar15,FVar15);
  FVar15 = FComponentRegistry::NewTag(this_01,&local_1034,0x38);
  (this->Tags).CustomPrimitiveData.Value = *(ushort *)CONCAT62(extraout_var_73,FVar15.Value);
  FVar15 = FComponentRegistry::NewTag(this_01,&local_1032,0x68);
  (this->Tags).AnimMixerPoseProducer.Value = *(ushort *)CONCAT62(extraout_var_74,FVar15.Value);
  FPropertyRegistry::DefinePropertyImpl<UE::MovieScene::FBoolPropertyTraits>
            (&this_00->PropertyRegistry,&this->Bool,L"Apply bool Properties");
  TVar1 = (this->Bool).CompositeID;
  uVar88 = 0;
  if ((int)TVar1 < (this_00->PropertyRegistry).Properties.ArrayNum) {
    uVar88 = ~(uint)TVar1 >> 0x1f;
  }
  if (uVar88 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  pFVar91 = (FPropertyDefinition *)
            ((this_00->PropertyRegistry).Properties.AllocatorInstance.Data +
            (longlong)(int)TVar1 * 0x70);
  pFVar91->TraitsInstance = (IPropertyTraits *)&(this->Bool).PropertyTraits;
  local_ac8.DataPtr =
       (FPropertyDefinition *)(this_00->PropertyRegistry).Properties.AllocatorInstance.Data;
  iVar49 = (this_00->PropertyRegistry).Properties.ArrayNum;
  TVar16 = this_00->BoolResult;
  if (iVar49 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  local_ac8.ArrayNum = iVar49;
  pFVar53 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_ac8,0);
  if (pFVar91 != pFVar53) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x2a6,L"Cannot re-define a property type after another has been added.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  if (pFVar91->CompositeSize != 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition->CompositeSize == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x2a7,L"Property already has a composite.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  local_1130 = (uint)(ushort)TVar16;
  pFVar11 = (this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_1130) &&
     ((FScriptContainerElement *)&local_1130 <
      pFVar11 + (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax * 4)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  iVar49 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar49 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar49 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&(this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar49 + 1;
  *(uint *)((this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data +
           (longlong)iVar49 * 4) = local_1130;
  pFVar91->CompositeSize = 1;
  pUVar54 = Z_Construct_UClass_UMovieScenePiecewiseBoolBlenderSystem_NoRegister();
  pFVar91->BlenderSystemClass = pUVar54;
  local_1178 = Z_Construct_UClass_UMovieSceneBoolTrack_NoRegister();
  if (GC::GIsIncrementalReachabilityPending != false) {
    if (local_1178 != (UClass *)0x0) {
      GC::MarkAsReachable((UObject *)local_1178);
    }
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_1178 != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)local_1178);
    }
  }
  (pFVar91->DefaultTrackType).Class.field0_0x0.DebugPtr = local_1178;
  local_aac = 0;
  pFVar91->CustomPropertyRegistration = (ICustomPropertyRegistration *)&this->Accessors;
  FPreAnimatedStateExtension::RegisterStorageInternal();
  local_338 = local_338 | 3;
  local_350[0] = local_1008[0];
  local_350[1] = local_1008[1];
  local_350[2] = local_1008[2];
  local_350[3] = local_1008[3];
  local_ab0[0] = local_1008[0];
  local_ab0[1] = local_1008[1];
  local_ab0[2] = local_1008[2];
  local_ab0[3] = local_1008[3];
  local_358 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)
              &___7FBoolHandler_MovieScene_UE__6B_;
  if ((local_338 & 1) == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  pTVar89 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_358;
  if ((local_338 & 2) == 0) {
    pTVar89 = local_358;
  }
  if ((local_338 & 1) == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  pTVar59 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_358;
  if ((local_338 & 2) == 0) {
    pTVar59 = local_358;
  }
  if (pTVar89 != pTVar59) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            (&pFVar91->Handler,
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_358);
  if ((local_338 & 1) != 0) {
    pTVar89 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_358;
    if ((local_338 & 2) == 0) {
      pTVar89 = local_358;
    }
    local_338 = local_338 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar89->Data).Pad)->Data).Pad)(pTVar89,0);
    if ((local_338 & 2) == 0) {
      FMemory::Free(local_358);
    }
  }
  FPropertyDefinition::SetupInitialValueProcessor(pFVar91);
  local_ab8 = &___7IPropertyComponentHandler_MovieScene_UE__6B_;
  FPropertyRegistry::
  DefinePropertyImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>
            (&this_00->PropertyRegistry,&this->Transform,L"Apply Transform Properties");
  TVar2 = (this->Transform).CompositeID;
  uVar88 = 0;
  if ((int)TVar2 < (this_00->PropertyRegistry).Properties.ArrayNum) {
    uVar88 = ~(uint)TVar2 >> 0x1f;
  }
  if (uVar88 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  pFVar91 = (FPropertyDefinition *)
            ((this_00->PropertyRegistry).Properties.AllocatorInstance.Data +
            (longlong)(int)TVar2 * 0x70);
  pFVar91->TraitsInstance = (IPropertyTraits *)&(this->Transform).PropertyTraits;
  local_aa8.DataPtr =
       (FPropertyDefinition *)(this_00->PropertyRegistry).Properties.AllocatorInstance.Data;
  TVar17 = this_00->DoubleResult[0];
  local_aa8.ArrayNum = (this_00->PropertyRegistry).Properties.ArrayNum;
  local_1178 = (UClass *)CONCAT44(local_1178._4_4_,local_aa8.ArrayNum);
  if (local_aa8.ArrayNum < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
    local_aa8.ArrayNum = (int)local_1178;
  }
  pFVar53 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_aa8,0);
  if (pFVar91 != pFVar53) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  local_112c = (uint)(ushort)TVar17;
  pFVar11 = (this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_112c) &&
     ((FScriptContainerElement *)&local_112c <
      pFVar11 + (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax * 4)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  iVar49 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar49 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar49 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&(this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar49 + 1;
  *(uint *)((this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data +
           (longlong)iVar49 * 4) = local_112c;
  pFVar91->DoubleCompositeMask =
       pFVar91->DoubleCompositeMask | 1 << ((byte)pFVar91->CompositeSize & 0x1f);
  pFVar91->CompositeSize = pFVar91->CompositeSize + 1;
  local_a98.DataPtr =
       (FPropertyDefinition *)(this_00->PropertyRegistry).Properties.AllocatorInstance.Data;
  TVar17 = this_00->DoubleResult[1];
  local_a98.ArrayNum = (this_00->PropertyRegistry).Properties.ArrayNum;
  local_1178 = (UClass *)CONCAT44(local_1178._4_4_,local_a98.ArrayNum);
  if (local_a98.ArrayNum < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
    local_a98.ArrayNum = (int)local_1178;
  }
  pFVar53 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_a98,0);
  if (pFVar91 != pFVar53) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  local_1128 = CONCAT22(8,TVar17);
  pFVar11 = (this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_1128) &&
     ((FScriptContainerElement *)&local_1128 <
      pFVar11 + (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax * 4)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  iVar49 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar49 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar49 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&(this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar49 + 1;
  *(undefined4 *)
   ((this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data + (longlong)iVar49 * 4)
       = local_1128;
  pFVar91->DoubleCompositeMask =
       pFVar91->DoubleCompositeMask | 1 << ((byte)pFVar91->CompositeSize & 0x1f);
  pFVar91->CompositeSize = pFVar91->CompositeSize + 1;
  local_a88.DataPtr =
       (FPropertyDefinition *)(this_00->PropertyRegistry).Properties.AllocatorInstance.Data;
  TVar17 = this_00->DoubleResult[2];
  local_a88.ArrayNum = (this_00->PropertyRegistry).Properties.ArrayNum;
  local_1178 = (UClass *)CONCAT44(local_1178._4_4_,local_a88.ArrayNum);
  if (local_a88.ArrayNum < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
    local_a88.ArrayNum = (int)local_1178;
  }
  pFVar53 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(&local_a88,0);
  if (pFVar91 != pFVar53) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  local_1124 = CONCAT22(0x10,TVar17);
  pFVar11 = (this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_1124) &&
     ((FScriptContainerElement *)&local_1124 <
      pFVar11 + (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax * 4)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  iVar49 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar49 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar49 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&(this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar49 + 1;
  *(undefined4 *)
   ((this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data + (longlong)iVar49 * 4)
       = local_1124;
  pFVar91->DoubleCompositeMask =
       pFVar91->DoubleCompositeMask | 1 << ((byte)pFVar91->CompositeSize & 0x1f);
  pFVar91->CompositeSize = pFVar91->CompositeSize + 1;
  TVar17 = this_00->DoubleResult[3];
  pTVar55 = FPropertyRegistry::GetProperties(&this_00->PropertyRegistry,&local_818);
  pFVar53 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(pTVar55,0);
  if (pFVar91 != pFVar53) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  local_1120 = CONCAT22(0x18,TVar17);
  pFVar11 = (this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_1120) &&
     ((FScriptContainerElement *)&local_1120 <
      pFVar11 + (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax * 4)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  iVar49 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar49 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar49 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&(this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar49 + 1;
  *(undefined4 *)
   ((this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data + (longlong)iVar49 * 4)
       = local_1120;
  pFVar91->DoubleCompositeMask =
       pFVar91->DoubleCompositeMask | 1 << ((byte)pFVar91->CompositeSize & 0x1f);
  pFVar91->CompositeSize = pFVar91->CompositeSize + 1;
  TVar17 = this_00->DoubleResult[4];
  pTVar55 = FPropertyRegistry::GetProperties(&this_00->PropertyRegistry,&local_808);
  pFVar53 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(pTVar55,0);
  if (pFVar91 != pFVar53) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  local_111c = CONCAT22(0x20,TVar17);
  pFVar11 = (this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_111c) &&
     ((FScriptContainerElement *)&local_111c <
      pFVar11 + (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax * 4)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  iVar49 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar49 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar49 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&(this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar49 + 1;
  *(undefined4 *)
   ((this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data + (longlong)iVar49 * 4)
       = local_111c;
  pFVar91->DoubleCompositeMask =
       pFVar91->DoubleCompositeMask | 1 << ((byte)pFVar91->CompositeSize & 0x1f);
  pFVar91->CompositeSize = pFVar91->CompositeSize + 1;
  TVar17 = this_00->DoubleResult[5];
  pTVar55 = FPropertyRegistry::GetProperties(&this_00->PropertyRegistry,&local_7f8);
  pFVar53 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(pTVar55,0);
  if (pFVar91 != pFVar53) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  local_1118 = CONCAT22(0x28,TVar17);
  pFVar11 = (this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_1118) &&
     ((FScriptContainerElement *)&local_1118 <
      pFVar11 + (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax * 4)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  iVar49 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar49 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar49 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&(this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar49 + 1;
  *(undefined4 *)
   ((this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data + (longlong)iVar49 * 4)
       = local_1118;
  pFVar91->DoubleCompositeMask =
       pFVar91->DoubleCompositeMask | 1 << ((byte)pFVar91->CompositeSize & 0x1f);
  pFVar91->CompositeSize = pFVar91->CompositeSize + 1;
  TVar17 = this_00->DoubleResult[6];
  pTVar55 = FPropertyRegistry::GetProperties(&this_00->PropertyRegistry,&local_7e8);
  pFVar53 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(pTVar55,0);
  if (pFVar91 != pFVar53) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  local_1114 = CONCAT22(0x30,TVar17);
  pFVar11 = (this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_1114) &&
     ((FScriptContainerElement *)&local_1114 <
      pFVar11 + (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax * 4)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  iVar49 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar49 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar49 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&(this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar49 + 1;
  *(undefined4 *)
   ((this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data + (longlong)iVar49 * 4)
       = local_1114;
  pFVar91->DoubleCompositeMask =
       pFVar91->DoubleCompositeMask | 1 << ((byte)pFVar91->CompositeSize & 0x1f);
  pFVar91->CompositeSize = pFVar91->CompositeSize + 1;
  TVar17 = this_00->DoubleResult[7];
  pTVar55 = FPropertyRegistry::GetProperties(&this_00->PropertyRegistry,&local_7d8);
  pFVar53 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(pTVar55,0);
  if (pFVar91 != pFVar53) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  local_1134 = CONCAT22(0x38,TVar17);
  pFVar11 = (this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_1134) &&
     ((FScriptContainerElement *)&local_1134 <
      pFVar11 + (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax * 4)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  iVar49 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar49 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar49 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&(this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar49 + 1;
  *(undefined4 *)
   ((this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data + (longlong)iVar49 * 4)
       = local_1134;
  pFVar91->DoubleCompositeMask =
       pFVar91->DoubleCompositeMask | 1 << ((byte)pFVar91->CompositeSize & 0x1f);
  pFVar91->CompositeSize = pFVar91->CompositeSize + 1;
  TVar17 = this_00->DoubleResult[8];
  pTVar55 = FPropertyRegistry::GetProperties(&this_00->PropertyRegistry,&local_7c8);
  pFVar53 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(pTVar55,0);
  if (pFVar91 != pFVar53) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  local_1110 = CONCAT22(0x40,TVar17);
  pFVar11 = (this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_1110) &&
     ((FScriptContainerElement *)&local_1110 <
      pFVar11 + (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax * 4)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  iVar49 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar49 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar49 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&(this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar49 + 1;
  *(undefined4 *)
   ((this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data + (longlong)iVar49 * 4)
       = local_1110;
  pFVar91->DoubleCompositeMask =
       pFVar91->DoubleCompositeMask | 1 << ((byte)pFVar91->CompositeSize & 0x1f);
  pFVar91->CompositeSize = pFVar91->CompositeSize + 1;
  pFVar91->CustomPropertyRegistration = (ICustomPropertyRegistration *)&(this->Accessors).Transform;
  local_f88.DebugPtr = Z_Construct_UClass_UMovieSceneTransformTrack_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_f88.DebugPtr != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_f88.DebugPtr);
  }
  TSubclassOf<UMovieSceneTrack>::operator=
            (&pFVar91->DefaultTrackType,(TSubclassOf<UMovieSceneTrack> *)&local_f88.ObjectPtr);
  pUVar54 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
  pFVar91->BlenderSystemClass = pUVar54;
  local_a6c = 0;
  FPreAnimatedStateExtension::RegisterStorageInternal();
  local_310 = local_310 | 3;
  local_328[0] = local_1004[0];
  local_328[1] = local_1004[1];
  local_328[2] = local_1004[2];
  local_328[3] = local_1004[3];
  local_a70[0] = local_1004[0];
  local_a70[1] = local_1004[1];
  local_a70[2] = local_1004[2];
  local_a70[3] = local_1004[3];
  local_330 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)
              &
              ___7__TVariantPropertyComponentHandler_U__TDynamicVariantPropertyTraits_UFIntermediate3DTransform_MovieScene_UE__U__TTransform_N_Math_3__MovieScene_UE__NNNNNNNNN_MovieScene_UE__6B_
  ;
  if ((local_310 & 1) == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  pTVar89 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_330;
  if ((local_310 & 2) == 0) {
    pTVar89 = local_330;
  }
  if ((local_310 & 1) == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  pTVar59 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_330;
  if ((local_310 & 2) == 0) {
    pTVar59 = local_330;
  }
  if (pTVar89 != pTVar59) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            (&pFVar91->Handler,
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_330);
  if ((local_310 & 1) != 0) {
    pTVar89 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_330;
    if ((local_310 & 2) == 0) {
      pTVar89 = local_330;
    }
    local_310 = local_310 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar89->Data).Pad)->Data).Pad)(pTVar89,0);
    if ((local_310 & 2) == 0) {
      FMemory::Free(local_330);
    }
  }
  local_a78 = &___7IPropertyComponentHandler_MovieScene_UE__6B_;
  FPropertyDefinition::SetupInitialValueProcessor(pFVar91);
  FPropertyRegistry::
  DefinePropertyImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>
            (&this_00->PropertyRegistry,&this->Rotator,L"Apply FRotator Properties");
  TVar3 = (this->Rotator).CompositeID;
  uVar88 = 0;
  if ((int)TVar3 < (this_00->PropertyRegistry).Properties.ArrayNum) {
    uVar88 = ~(uint)TVar3 >> 0x1f;
  }
  if (uVar88 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  pFVar53 = (FPropertyDefinition *)
            ((this_00->PropertyRegistry).Properties.AllocatorInstance.Data +
            (longlong)(int)TVar3 * 0x70);
  pFVar53->TraitsInstance = (IPropertyTraits *)&(this->Rotator).PropertyTraits;
  TVar17 = this_00->DoubleResult[0];
  pTVar55 = FPropertyRegistry::GetProperties(&this_00->PropertyRegistry,&local_7b8);
  pFVar91 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(pTVar55,0);
  if (pFVar53 != pFVar91) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  local_110c = (uint)(ushort)TVar17;
  pFVar11 = (this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_110c) &&
     ((FScriptContainerElement *)&local_110c <
      pFVar11 + (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax * 4)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  iVar49 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar49 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar49 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&(this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar49 + 1;
  *(uint *)((this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data +
           (longlong)iVar49 * 4) = local_110c;
  pFVar53->DoubleCompositeMask =
       pFVar53->DoubleCompositeMask | 1 << ((byte)pFVar53->CompositeSize & 0x1f);
  pFVar53->CompositeSize = pFVar53->CompositeSize + 1;
  TVar17 = this_00->DoubleResult[1];
  pTVar55 = FPropertyRegistry::GetProperties(&this_00->PropertyRegistry,&local_7a8);
  pFVar91 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(pTVar55,0);
  if (pFVar53 != pFVar91) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  local_1108 = CONCAT22(8,TVar17);
  pFVar11 = (this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_1108) &&
     ((FScriptContainerElement *)&local_1108 <
      pFVar11 + (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax * 4)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  iVar49 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar49 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar49 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&(this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar49 + 1;
  *(undefined4 *)
   ((this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data + (longlong)iVar49 * 4)
       = local_1108;
  pFVar53->DoubleCompositeMask =
       pFVar53->DoubleCompositeMask | 1 << ((byte)pFVar53->CompositeSize & 0x1f);
  pFVar53->CompositeSize = pFVar53->CompositeSize + 1;
  TVar17 = this_00->DoubleResult[2];
  pTVar55 = FPropertyRegistry::GetProperties(&this_00->PropertyRegistry,&local_798);
  pFVar91 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(pTVar55,0);
  if (pFVar53 != pFVar91) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  local_1104 = CONCAT22(0x10,TVar17);
  pFVar11 = (this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_1104) &&
     ((FScriptContainerElement *)&local_1104 <
      pFVar11 + (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax * 4)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  iVar49 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar49 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar49 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&(this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar49 + 1;
  *(undefined4 *)
   ((this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data + (longlong)iVar49 * 4)
       = local_1104;
  pFVar53->DoubleCompositeMask =
       pFVar53->DoubleCompositeMask | 1 << ((byte)pFVar53->CompositeSize & 0x1f);
  pFVar53->CompositeSize = pFVar53->CompositeSize + 1;
  pUVar54 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
  pFVar53->BlenderSystemClass = pUVar54;
  local_a5c = 0;
  FPreAnimatedStateExtension::RegisterStorageInternal();
  local_2e8 = local_2e8 | 3;
  local_300[0] = local_1000[0];
  local_300[1] = local_1000[1];
  local_300[2] = local_1000[2];
  local_300[3] = local_1000[3];
  local_a60[0] = local_1000[0];
  local_a60[1] = local_1000[1];
  local_a60[2] = local_1000[2];
  local_a60[3] = local_1000[3];
  local_308 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)
              &
              ___7__TPropertyComponentHandler_U__TPropertyTraits_U__TRotator_N_Math_UE__U123__00_MovieScene_UE__NNN_MovieScene_UE__6B_
  ;
  if ((local_2e8 & 1) == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  pTVar89 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_308;
  if ((local_2e8 & 2) == 0) {
    pTVar89 = local_308;
  }
  if ((local_2e8 & 1) == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  pTVar59 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_308;
  if ((local_2e8 & 2) == 0) {
    pTVar59 = local_308;
  }
  if (pTVar89 != pTVar59) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            (&pFVar53->Handler,
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_308);
  if ((local_2e8 & 1) != 0) {
    pTVar89 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_308;
    if ((local_2e8 & 2) == 0) {
      pTVar89 = local_308;
    }
    local_2e8 = local_2e8 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar89->Data).Pad)->Data).Pad)(pTVar89,0);
    if ((local_2e8 & 2) == 0) {
      FMemory::Free(local_308);
    }
  }
  local_a68 = &___7IPropertyComponentHandler_MovieScene_UE__6B_;
  FPropertyDefinition::SetupInitialValueProcessor(pFVar53);
  pTVar56 = FPropertyRegistry::
            DefineProperty<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
                      (&this_00->PropertyRegistry,&local_788,&this->Byte,L"Apply Byte Properties");
  pTVar56 = TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
            ::AddSoleChannel(pTVar56,this_00->ByteResult);
  pUVar54 = Z_Construct_UClass_UMovieScenePiecewiseByteBlenderSystem_NoRegister();
  pTVar56->Definition->BlenderSystemClass = pUVar54;
  pTVar56->Definition->CustomPropertyRegistration = (ICustomPropertyRegistration *)local_fc8;
  TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::
  Commit(pTVar56);
  pTVar56 = FPropertyRegistry::
            DefineProperty<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
                      (&this_00->PropertyRegistry,&local_778,&this->Enum,L"Apply Enum Properties");
  pTVar56 = TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
            ::AddSoleChannel(pTVar56,this_00->ByteResult);
  pTVar56->Definition->CustomPropertyRegistration = (ICustomPropertyRegistration *)local_fc0;
  TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>::
  Commit(pTVar56);
  FPropertyRegistry::
  DefinePropertyImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>
            (&this_00->PropertyRegistry,&this->Integer,L"Apply Integer Properties");
  TVar4 = (this->Integer).CompositeID;
  uVar88 = 0;
  if ((int)TVar4 < (this_00->PropertyRegistry).Properties.ArrayNum) {
    uVar88 = ~(uint)TVar4 >> 0x1f;
  }
  if (uVar88 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  pFVar53 = (FPropertyDefinition *)
            ((this_00->PropertyRegistry).Properties.AllocatorInstance.Data +
            (longlong)(int)TVar4 * 0x70);
  pFVar53->TraitsInstance = (IPropertyTraits *)&(this->Integer).PropertyTraits;
  TVar19 = this_00->IntegerResult;
  pTVar55 = FPropertyRegistry::GetProperties(&this_00->PropertyRegistry,&local_768);
  pFVar91 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(pTVar55,0);
  if (pFVar53 != pFVar91) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x2a6,L"Cannot re-define a property type after another has been added.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  if (pFVar53->CompositeSize != 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition->CompositeSize == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x2a7,L"Property already has a composite.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  local_1100 = (uint)(ushort)TVar19;
  pFVar11 = (this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_1100) &&
     ((FScriptContainerElement *)&local_1100 <
      pFVar11 + (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax * 4)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  iVar49 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar49 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar49 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&(this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar49 + 1;
  *(uint *)((this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data +
           (longlong)iVar49 * 4) = local_1100;
  pFVar53->CompositeSize = 1;
  local_f80.DebugPtr = Z_Construct_UClass_UMovieSceneIntegerTrack_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_f80.DebugPtr != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_f80.DebugPtr);
  }
  TSubclassOf<UMovieSceneTrack>::operator=
            (&pFVar53->DefaultTrackType,(TSubclassOf<UMovieSceneTrack> *)&local_f80.ObjectPtr);
  pUVar54 = Z_Construct_UClass_UMovieScenePiecewiseIntegerBlenderSystem_NoRegister();
  pFVar53->BlenderSystemClass = pUVar54;
  local_a4c = 0;
  pFVar53->CustomPropertyRegistration = (ICustomPropertyRegistration *)&(this->Accessors).Integer;
  FPreAnimatedStateExtension::RegisterStorageInternal();
  local_2c0 = local_2c0 | 3;
  local_2d8[0] = local_ffc[0];
  local_2d8[1] = local_ffc[1];
  local_2d8[2] = local_ffc[2];
  local_2d8[3] = local_ffc[3];
  local_a50[0] = local_ffc[0];
  local_a50[1] = local_ffc[1];
  local_a50[2] = local_ffc[2];
  local_a50[3] = local_ffc[3];
  local_2e0 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)
              &
              ___7__TVariantPropertyComponentHandler_U__TDynamicVariantPropertyTraits__J_JHFC_MovieScene_UE___J_MovieScene_UE__6B_
  ;
  if ((local_2c0 & 1) == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  pTVar89 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_2e0;
  if ((local_2c0 & 2) == 0) {
    pTVar89 = local_2e0;
  }
  if ((local_2c0 & 1) == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  pTVar59 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_2e0;
  if ((local_2c0 & 2) == 0) {
    pTVar59 = local_2e0;
  }
  if (pTVar89 != pTVar59) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            (&pFVar53->Handler,
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_2e0);
  if ((local_2c0 & 1) != 0) {
    pTVar89 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_2e0;
    if ((local_2c0 & 2) == 0) {
      pTVar89 = local_2e0;
    }
    local_2c0 = local_2c0 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar89->Data).Pad)->Data).Pad)(pTVar89,0);
    if ((local_2c0 & 2) == 0) {
      FMemory::Free(local_2e0);
    }
  }
  local_a58 = &___7IPropertyComponentHandler_MovieScene_UE__6B_;
  FPropertyDefinition::SetupInitialValueProcessor(pFVar53);
  FPropertyRegistry::DefinePropertyImpl<UE::MovieScene::FFloatPropertyTraits>
            (&this_00->PropertyRegistry,&this->Float,L"Apply float Properties");
  TVar5 = (this->Float).CompositeID;
  uVar88 = 0;
  if ((int)TVar5 < (this_00->PropertyRegistry).Properties.ArrayNum) {
    uVar88 = ~(uint)TVar5 >> 0x1f;
  }
  if (uVar88 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  local_a48.Definition =
       (FPropertyDefinition *)
       ((this_00->PropertyRegistry).Properties.AllocatorInstance.Data + (longlong)(int)TVar5 * 0x70)
  ;
  (local_a48.Definition)->TraitsInstance = (IPropertyTraits *)&(this->Float).PropertyTraits;
  local_a48.Registry = &this_00->PropertyRegistry;
  pTVar57 = TPropertyDefinitionBuilder<UE::MovieScene::FFloatPropertyTraits>::AddSoleChannel
                      (&local_a48,this_00->DoubleResult[0]);
  local_fb8.DebugPtr = Z_Construct_UClass_UMovieSceneFloatTrack_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_fb8.DebugPtr != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_fb8.DebugPtr);
  }
  TSubclassOf<UMovieSceneTrack>::operator=
            (&pTVar57->Definition->DefaultTrackType,
             (TSubclassOf<UMovieSceneTrack> *)&local_fb8.ObjectPtr);
  pUVar54 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
  pTVar57->Definition->BlenderSystemClass = pUVar54;
  pTVar57->Definition->CustomPropertyRegistration =
       (ICustomPropertyRegistration *)&(this->Accessors).Float;
  local_a2c = 0;
  FPreAnimatedStateExtension::RegisterStorageInternal();
  local_1178 = (UClass *)&pTVar57->Definition->Handler;
  local_298 = local_298 | 3;
  local_2b0[0] = local_ff8[0];
  local_2b0[1] = local_ff8[1];
  local_2b0[2] = local_ff8[2];
  local_2b0[3] = local_ff8[3];
  local_a30[0] = local_ff8[0];
  local_a30[1] = local_ff8[1];
  local_a30[2] = local_ff8[2];
  local_a30[3] = local_ff8[3];
  local_2b8 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)
              &___7FFloatHandler_MovieScene_UE__6B_;
  if ((local_298 & 1) == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  pTVar89 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_2b8;
  if ((local_298 & 2) == 0) {
    pTVar89 = local_2b8;
  }
  if ((local_298 & 1) == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  pTVar59 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_2b8;
  if ((local_298 & 2) == 0) {
    pTVar59 = local_2b8;
  }
  if (pTVar89 != pTVar59) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_1178,
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_2b8);
  if ((local_298 & 1) != 0) {
    pTVar89 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_2b8;
    if ((local_298 & 2) == 0) {
      pTVar89 = local_2b8;
    }
    local_298 = local_298 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar89->Data).Pad)->Data).Pad)(pTVar89,0);
    if ((local_298 & 2) == 0) {
      FMemory::Free(local_2b8);
    }
  }
  FPropertyDefinition::SetupInitialValueProcessor(pTVar57->Definition);
  local_a38 = &___7IPropertyComponentHandler_MovieScene_UE__6B_;
  FPropertyRegistry::
  DefinePropertyImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>
            (&this_00->PropertyRegistry,&this->Double,L"Apply Double Properties");
  TVar6 = (this->Double).CompositeID;
  uVar88 = 0;
  if ((int)TVar6 < (this_00->PropertyRegistry).Properties.ArrayNum) {
    uVar88 = ~(uint)TVar6 >> 0x1f;
  }
  if (uVar88 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  local_a28.Definition =
       (FPropertyDefinition *)
       ((this_00->PropertyRegistry).Properties.AllocatorInstance.Data + (longlong)(int)TVar6 * 0x70)
  ;
  (local_a28.Definition)->TraitsInstance = (IPropertyTraits *)&(this->Double).PropertyTraits;
  local_a28.Registry = &this_00->PropertyRegistry;
  pTVar58 = TPropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>
            ::AddSoleChannel(&local_a28,this_00->DoubleResult[0]);
  local_fb0.DebugPtr = Z_Construct_UClass_UMovieSceneDoubleTrack_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_fb0.DebugPtr != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_fb0.DebugPtr);
  }
  TSubclassOf<UMovieSceneTrack>::operator=
            (&pTVar58->Definition->DefaultTrackType,
             (TSubclassOf<UMovieSceneTrack> *)&local_fb0.ObjectPtr);
  pUVar54 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
  pTVar58->Definition->BlenderSystemClass = pUVar54;
  pTVar58->Definition->CustomPropertyRegistration =
       (ICustomPropertyRegistration *)&(this->Accessors).Double;
  local_a0c = 0;
  FPreAnimatedStateExtension::RegisterStorageInternal();
  local_1178 = (UClass *)&pTVar58->Definition->Handler;
  local_270 = local_270 | 3;
  local_288[0] = local_ff4[0];
  local_288[1] = local_ff4[1];
  local_288[2] = local_ff4[2];
  local_288[3] = local_ff4[3];
  local_a10[0] = local_ff4[0];
  local_a10[1] = local_ff4[1];
  local_a10[2] = local_ff4[2];
  local_a10[3] = local_ff4[3];
  local_290 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)
              &
              ___7__TVariantPropertyComponentHandler_U__TDynamicVariantPropertyTraits_NN_MovieScene_UE__N_MovieScene_UE__6B_
  ;
  if ((local_270 & 1) == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  pTVar89 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_290;
  if ((local_270 & 2) == 0) {
    pTVar89 = local_290;
  }
  if ((local_270 & 1) == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("bIsValid",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0x97,
                        L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  pTVar59 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_290;
  if ((local_270 & 2) == 0) {
    pTVar59 = local_290;
  }
  if (pTVar89 != pTVar59) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_1178,
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_290);
  if ((local_270 & 1) != 0) {
    pIVar60 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                        ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)&local_290)
    ;
    local_270 = local_270 & 0xfe;
    (**(code **)*pIVar60)(pIVar60,0);
    if ((local_270 & 2) == 0) {
      FMemory::Free(local_290);
    }
  }
  local_a18 = &___7IPropertyComponentHandler_MovieScene_UE__6B_;
  FPropertyDefinition::SetupInitialValueProcessor(pTVar58->Definition);
  FPropertyRegistry::
  DefinePropertyImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>
            (&this_00->PropertyRegistry,&this->Color,L"Apply Color Properties");
  TVar7 = (this->Color).CompositeID;
  uVar88 = 0;
  if ((int)TVar7 < (this_00->PropertyRegistry).Properties.ArrayNum) {
    uVar88 = ~(uint)TVar7 >> 0x1f;
  }
  if (uVar88 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  pFVar53 = (FPropertyDefinition *)
            ((this_00->PropertyRegistry).Properties.AllocatorInstance.Data +
            (longlong)(int)TVar7 * 0x70);
  pFVar53->TraitsInstance = (IPropertyTraits *)&(this->Color).PropertyTraits;
  TVar17 = this_00->DoubleResult[0];
  pTVar55 = FPropertyRegistry::GetProperties(&this_00->PropertyRegistry,&local_758);
  pFVar91 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(pTVar55,0);
  if (pFVar53 != pFVar91) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  local_10fc = (uint)(ushort)TVar17;
  pFVar11 = (this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_10fc) &&
     ((FScriptContainerElement *)&local_10fc <
      pFVar11 + (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax * 4)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  iVar49 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar49 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar49 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&(this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar49 + 1;
  *(uint *)((this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data +
           (longlong)iVar49 * 4) = local_10fc;
  pFVar53->DoubleCompositeMask =
       pFVar53->DoubleCompositeMask | 1 << ((byte)pFVar53->CompositeSize & 0x1f);
  pFVar53->CompositeSize = pFVar53->CompositeSize + 1;
  TVar17 = this_00->DoubleResult[1];
  pTVar55 = FPropertyRegistry::GetProperties(&this_00->PropertyRegistry,&local_748);
  pFVar91 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(pTVar55,0);
  if (pFVar53 != pFVar91) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  local_10f8 = CONCAT22(8,TVar17);
  pFVar11 = (this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_10f8) &&
     ((FScriptContainerElement *)&local_10f8 <
      pFVar11 + (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax * 4)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  iVar49 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar49 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar49 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&(this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar49 + 1;
  *(undefined4 *)
   ((this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data + (longlong)iVar49 * 4)
       = local_10f8;
  pFVar53->DoubleCompositeMask =
       pFVar53->DoubleCompositeMask | 1 << ((byte)pFVar53->CompositeSize & 0x1f);
  pFVar53->CompositeSize = pFVar53->CompositeSize + 1;
  TVar17 = this_00->DoubleResult[2];
  pTVar55 = FPropertyRegistry::GetProperties(&this_00->PropertyRegistry,&local_738);
  pFVar91 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(pTVar55,0);
  if (pFVar53 != pFVar91) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  local_10f4 = CONCAT22(0x10,TVar17);
  pFVar11 = (this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_10f4) &&
     ((FScriptContainerElement *)&local_10f4 <
      pFVar11 + (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax * 4)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  iVar49 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar49 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar49 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&(this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar49 + 1;
  *(undefined4 *)
   ((this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data + (longlong)iVar49 * 4)
       = local_10f4;
  pFVar53->DoubleCompositeMask =
       pFVar53->DoubleCompositeMask | 1 << ((byte)pFVar53->CompositeSize & 0x1f);
  pFVar53->CompositeSize = pFVar53->CompositeSize + 1;
  TVar17 = this_00->DoubleResult[3];
  pTVar55 = FPropertyRegistry::GetProperties(&this_00->PropertyRegistry,&local_728);
  pFVar91 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(pTVar55,0);
  if (pFVar53 != pFVar91) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x31b,L"Cannot re-define a property type after another has been added.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  local_10f0 = CONCAT22(0x18,TVar17);
  pFVar11 = (this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_10f0) &&
     ((FScriptContainerElement *)&local_10f0 <
      pFVar11 + (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax * 4)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  iVar49 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar49 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar49 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&(this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar49 + 1;
  *(undefined4 *)
   ((this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data + (longlong)iVar49 * 4)
       = local_10f0;
  pFVar53->DoubleCompositeMask =
       pFVar53->DoubleCompositeMask | 1 << ((byte)pFVar53->CompositeSize & 0x1f);
  pFVar53->CompositeSize = pFVar53->CompositeSize + 1;
  local_fa8.DebugPtr = Z_Construct_UClass_UMovieSceneColorTrack_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_fa8.DebugPtr != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_fa8.DebugPtr);
  }
  TSubclassOf<UMovieSceneTrack>::operator=
            (&pFVar53->DefaultTrackType,(TSubclassOf<UMovieSceneTrack> *)&local_fa8.ObjectPtr);
  pUVar54 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
  pFVar53->BlenderSystemClass = pUVar54;
  pFVar53->CustomPropertyRegistration = (ICustomPropertyRegistration *)&(this->Accessors).Color;
  local_9fc = 0;
  FPreAnimatedStateExtension::RegisterStorageInternal();
  local_248 = local_248 | 3;
  local_a00 = local_ff0;
  pIVar60 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                      ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_268);
  *(undefined4 *)(pIVar60 + 1) = local_ff0;
  *pIVar60 = (IPropertyComponentHandler)
             &
             ___7__TVariantPropertyComponentHandler_U__TDynamicVariantPropertyTraits_UFIntermediateColor_MovieScene_UE__UFLinearColor__UFColor__UFSlateColor___MovieScene_UE__NNNN_MovieScene_UE__6B_
  ;
  pIVar60 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                      ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_268);
  pIVar61 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                      ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_268);
  if (pIVar60 != pIVar61) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            (&pFVar53->Handler,
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_268);
  if ((local_248 & 1) != 0) {
    pIVar60 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                        ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_268);
    local_248 = local_248 & 0xfe;
    (**(code **)*pIVar60)(pIVar60,0);
    if ((local_248 & 2) == 0) {
      FMemory::Free(local_268[0]);
    }
  }
  local_a08 = &___7IPropertyComponentHandler_MovieScene_UE__6B_;
  FPropertyDefinition::SetupInitialValueProcessor(pFVar53);
  FPropertyRegistry::DefinePropertyImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>_>
            (&this_00->PropertyRegistry,&this->String,L"Apply String Properties");
  TVar8 = (this->String).CompositeID;
  uVar88 = 0;
  if ((int)TVar8 < (this_00->PropertyRegistry).Properties.ArrayNum) {
    uVar88 = ~(uint)TVar8 >> 0x1f;
  }
  if (uVar88 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  pFVar53 = (FPropertyDefinition *)
            ((this_00->PropertyRegistry).Properties.AllocatorInstance.Data +
            (longlong)(int)TVar8 * 0x70);
  pFVar53->TraitsInstance = (IPropertyTraits *)&(this->String).PropertyTraits;
  TVar22 = this_00->StringResult;
  pTVar55 = FPropertyRegistry::GetProperties(&this_00->PropertyRegistry,&local_718);
  pFVar91 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::Last(pTVar55,0);
  if (pFVar53 != pFVar91) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition == &Registry->GetProperties().Last()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x2a6,L"Cannot re-define a property type after another has been added.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  if (pFVar53->CompositeSize != 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Definition->CompositeSize == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyComponentHandler.h"
                        ,0x2a7,L"Property already has a composite.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  local_10ec = (uint)(ushort)TVar22;
  pFVar11 = (this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data;
  if ((pFVar11 <= (FScriptContainerElement *)&local_10ec) &&
     ((FScriptContainerElement *)&local_10ec <
      pFVar11 + (longlong)(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax * 4)) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  iVar49 = (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum;
  if (iVar49 == (this_00->PropertyRegistry).CompositeDefinitions.ArrayMax) {
    iVar49 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x204,&(this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance,
                        &(this_00->PropertyRegistry).CompositeDefinitions.ArrayMax);
  }
  (this_00->PropertyRegistry).CompositeDefinitions.ArrayNum = iVar49 + 1;
  local_9ec = 0;
  *(uint *)((this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data +
           (longlong)iVar49 * 4) = local_10ec;
  pFVar53->CompositeSize = 1;
  FPreAnimatedStateExtension::RegisterStorageInternal();
  local_220 = local_220 | 3;
  local_9f0 = local_fec;
  pIVar60 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                      ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_240);
  *(undefined4 *)(pIVar60 + 1) = local_fec;
  *pIVar60 = (IPropertyComponentHandler)
             &
             ___7__TPropertyComponentHandler_U__TPropertyTraits_VFString__V1__00_MovieScene_UE__VFString___MovieScene_UE__6B_
  ;
  pIVar60 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                      ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_240);
  pIVar61 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                      ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_240);
  if (pIVar60 != pIVar61) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            (&pFVar53->Handler,
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_240);
  if ((local_220 & 1) != 0) {
    pIVar60 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                        ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_240);
    local_220 = local_220 & 0xfe;
    (**(code **)*pIVar60)(pIVar60,0);
    if ((local_220 & 2) == 0) {
      FMemory::Free(local_240[0]);
    }
  }
  local_9f8 = &___7IPropertyComponentHandler_MovieScene_UE__6B_;
  FPropertyDefinition::SetupInitialValueProcessor(pFVar53);
  FPropertyRegistry::DefinePropertyImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>_>
            (&this_00->PropertyRegistry,&this->Text,L"Apply Text Properties");
  TVar9 = (this->Text).CompositeID;
  uVar88 = 0;
  if ((int)TVar9 < (this_00->PropertyRegistry).Properties.ArrayNum) {
    uVar88 = ~(uint)TVar9 >> 0x1f;
  }
  if (uVar88 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  local_9e8.Definition =
       (FPropertyDefinition *)
       ((this_00->PropertyRegistry).Properties.AllocatorInstance.Data + (longlong)(int)TVar9 * 0x70)
  ;
  (local_9e8.Definition)->TraitsInstance = (IPropertyTraits *)&(this->Text).PropertyTraits;
  local_9e8.Registry = &this_00->PropertyRegistry;
  pTVar62 = TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FText,FText,1>_>::
            AddSoleChannel(&local_9e8,this_00->TextResult);
  local_9cc = 0;
  FPreAnimatedStateExtension::RegisterStorageInternal();
  pFVar91 = pTVar62->Definition;
  local_1f8 = local_1f8 | 3;
  local_9d0 = local_fe8;
  pIVar60 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                      ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_218);
  *(undefined4 *)(pIVar60 + 1) = local_fe8;
  *pIVar60 = (IPropertyComponentHandler)
             &
             ___7__TPropertyComponentHandler_U__TPropertyTraits_VFText__V1__00_MovieScene_UE__VFText___MovieScene_UE__6B_
  ;
  pIVar60 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                      ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_218);
  pIVar61 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                      ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_218);
  if (pIVar60 != pIVar61) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            (&pFVar91->Handler,
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_218);
  if ((local_1f8 & 1) != 0) {
    pIVar60 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                        ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_218);
    local_1f8 = local_1f8 & 0xfe;
    (**(code **)*pIVar60)(pIVar60,0);
    if ((local_1f8 & 2) == 0) {
      FMemory::Free(local_218[0]);
    }
  }
  local_9d8 = &___7IPropertyComponentHandler_MovieScene_UE__6B_;
  FPropertyDefinition::SetupInitialValueProcessor(pTVar62->Definition);
  FPropertyRegistry::DefinePropertyImpl<UE::MovieScene::FObjectPropertyTraits>
            (&this_00->PropertyRegistry,&this->Object,L"Apply Object Properties");
  TVar10 = (this->Object).CompositeID;
  uVar88 = 0;
  if ((int)TVar10 < (this_00->PropertyRegistry).Properties.ArrayNum) {
    uVar88 = ~(uint)TVar10 >> 0x1f;
  }
  if (uVar88 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  local_9c8.Definition =
       (FPropertyDefinition *)
       ((this_00->PropertyRegistry).Properties.AllocatorInstance.Data + (longlong)(int)TVar10 * 0x70
       );
  (local_9c8.Definition)->TraitsInstance = (IPropertyTraits *)&(this->Object).PropertyTraits;
  local_9c8.Registry = &this_00->PropertyRegistry;
  pTVar63 = TPropertyDefinitionBuilder<UE::MovieScene::FObjectPropertyTraits>::AddSoleChannel
                      (&local_9c8,this_00->ObjectResult);
  local_9ac = 0;
  pTVar63->Definition->CustomPropertyRegistration =
       (ICustomPropertyRegistration *)&(this->Accessors).Object;
  FPreAnimatedStateExtension::RegisterStorageInternal();
  pFVar91 = pTVar63->Definition;
  local_1d0 = local_1d0 | 3;
  local_9b0 = local_fe4;
  pIVar60 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                      ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_1f0);
  *(undefined4 *)(pIVar60 + 1) = local_fe4;
  *pIVar60 = (IPropertyComponentHandler)&___7FObjectHandler_MovieScene_UE__6B_;
  pIVar60 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                      ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_1f0);
  pIVar61 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                      ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_1f0);
  if (pIVar60 != pIVar61) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            (&pFVar91->Handler,
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_1f0);
  if ((local_1d0 & 1) != 0) {
    pIVar60 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                        ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_1f0);
    local_1d0 = local_1d0 & 0xfe;
    (**(code **)*pIVar60)(pIVar60,0);
    if ((local_1d0 & 2) == 0) {
      FMemory::Free(local_1f0[0]);
    }
  }
  FPropertyDefinition::SetupInitialValueProcessor(pTVar63->Definition);
  local_9b8 = &___7IPropertyComponentHandler_MovieScene_UE__6B_;
  pTVar64 = FPropertyRegistry::DefineProperty<UE::MovieScene::TPropertyTraits<float,double,1>_>
                      (&this_00->PropertyRegistry,&local_708,&this->FloatParameter,
                       L"Apply Float Parameters");
  pTVar64 = TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<float,double,1>_>::
            AddSoleChannel(pTVar64,this_00->DoubleResult[0]);
  pUVar54 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
  local_99c = 0;
  pTVar64->Definition->BlenderSystemClass = pUVar54;
  FPreAnimatedStateExtension::RegisterStorageInternal();
  pFVar91 = pTVar64->Definition;
  local_1a8 = local_1a8 | 3;
  local_9a0 = local_fe0;
  pIVar60 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                      ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_1c8);
  *(undefined4 *)(pIVar60 + 1) = local_fe0;
  *pIVar60 = (IPropertyComponentHandler)&___7FFloatParameterHandler_MovieScene_UE__6B_;
  pIVar60 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                      ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_1c8);
  pIVar61 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                      ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_1c8);
  if (pIVar60 != pIVar61) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            (&pFVar91->Handler,
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_1c8);
  if ((local_1a8 & 1) != 0) {
    pIVar60 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                        ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_1c8);
    local_1a8 = local_1a8 & 0xfe;
    (**(code **)*pIVar60)(pIVar60,0);
    if ((local_1a8 & 2) == 0) {
      FMemory::Free(local_1c8[0]);
    }
  }
  FPropertyDefinition::SetupInitialValueProcessor(pTVar64->Definition);
  local_9a8 = &___7IPropertyComponentHandler_MovieScene_UE__6B_;
  pTVar64 = FPropertyRegistry::DefineProperty<UE::MovieScene::TPropertyTraits<float,double,1>_>
                      (&this_00->PropertyRegistry,&local_6f8,&(this->Parameters).Scalar,
                       L"Scalar Parameters");
  pTVar64 = TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<float,double,1>_>::
            AddSoleChannel(pTVar64,this_00->DoubleResult[0]);
  pUVar54 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
  local_98c = 0;
  pTVar64->Definition->BlenderSystemClass = pUVar54;
  FPreAnimatedStateExtension::RegisterStorageInternal();
  pFVar91 = pTVar64->Definition;
  local_180 = local_180 | 3;
  local_990 = local_fdc;
  pIVar60 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                      ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_1a0);
  *(undefined4 *)(pIVar60 + 1) = local_fdc;
  *pIVar60 = (IPropertyComponentHandler)
             &
             ___7__TPropertyComponentHandler_U__TPropertyTraits_MN_00_MovieScene_UE__N_MovieScene_UE__6B_
  ;
  pIVar60 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                      ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_1a0);
  pIVar61 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                      ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_1a0);
  if (pIVar60 != pIVar61) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            (&pFVar91->Handler,
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_1a0);
  if ((local_180 & 1) != 0) {
    pIVar60 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                        ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_1a0);
    local_180 = local_180 & 0xfe;
    (**(code **)*pIVar60)(pIVar60,0);
    if ((local_180 & 2) == 0) {
      FMemory::Free(local_1a0[0]);
    }
  }
  local_998 = &___7IPropertyComponentHandler_MovieScene_UE__6B_;
  FPropertyDefinition::SetupInitialValueProcessor(pTVar64->Definition);
  pTVar65 = FPropertyRegistry::
            DefineCompositeProperty<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
                      (&this_00->PropertyRegistry,&local_6e8,&this->ColorParameter,
                       L"Apply Color Parameters");
  pTVar66 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
            ::AddComposite(pTVar65,&local_6d8,this_00->DoubleResult[0],(pdm_568bf5c2)0x0);
  pTVar67 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double>
            ::AddComposite(pTVar66,&local_6c8,this_00->DoubleResult[1],(pdm_568bf5c2)0x8);
  pTVar68 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double>
            ::AddComposite(pTVar67,&local_6b8,this_00->DoubleResult[2],(pdm_568bf5c2)0x10);
  pTVar69 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double>
            ::AddComposite(pTVar68,&local_6a8,this_00->DoubleResult[3],(pdm_568bf5c2)0x18);
  pUVar54 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
  local_97c = 0;
  pTVar69->Definition->BlenderSystemClass = pUVar54;
  FPreAnimatedStateExtension::RegisterStorageInternal();
  pFVar91 = pTVar69->Definition;
  local_158 = local_158 | 3;
  local_988 = &___7FColorParameterHandler_MovieScene_UE__6B_;
  local_980 = local_fd8;
  pIVar60 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                      ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_178);
  *(undefined4 *)(pIVar60 + 1) = local_fd8;
  *pIVar60 = (IPropertyComponentHandler)&___7FColorParameterHandler_MovieScene_UE__6B_;
  pIVar60 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                      ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_178);
  pIVar61 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                      ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_178);
  if (pIVar60 != pIVar61) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                        ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      pFVar52 = (FMovieSceneTracksComponentTypes *)(*pcVar13)();
      return pFVar52;
    }
  }
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            (&pFVar91->Handler,
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_178);
  if ((local_158 & 1) != 0) {
    pIVar60 = TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::GetValue
                        ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_178);
    local_158 = local_158 & 0xfe;
    (**(code **)*pIVar60)(pIVar60,0);
    if ((local_158 & 2) == 0) {
      FMemory::Free(local_178[0]);
    }
  }
  FPropertyDefinition::SetupInitialValueProcessor(pTVar69->Definition);
  pTVar65 = FPropertyRegistry::
            DefineCompositeProperty<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
                      (&this_00->PropertyRegistry,&local_698,&(this->Parameters).Color,
                       L"Color Parameters");
  pTVar66 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
            ::AddComposite(pTVar65,&local_688,this_00->DoubleResult[0],(pdm_568bf5c2)0x0);
  pTVar67 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double>
            ::AddComposite(pTVar66,&local_678,this_00->DoubleResult[1],(pdm_568bf5c2)0x8);
  pTVar68 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double>
            ::AddComposite(pTVar67,&local_668,this_00->DoubleResult[2],(pdm_568bf5c2)0x10);
  pTVar69 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double>
            ::AddComposite(pTVar68,&local_658,this_00->DoubleResult[3],(pdm_568bf5c2)0x18);
  pTVar69 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double,double>
            ::SetBlenderSystem<UMovieScenePiecewiseDoubleBlenderSystem>(pTVar69);
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>,double,double,double,double>
  ::Commit(pTVar69);
  pFVar70 = USkeletalMeshComponent::GetAnimationModePropertyNameChecked();
  FVar12 = *pFVar70;
  pUVar54 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,8>::Add
            (local_fc8,pUVar54,FVar12,GetSkeletalMeshAnimationMode,SetSkeletalMeshAnimationMode);
  pFVar70 = USkeletalMeshComponent::GetAnimationModePropertyNameChecked();
  FVar12 = *pFVar70;
  pUVar54 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>,8>::Add
            (local_fc0,pUVar54,FVar12,GetSkeletalMeshAnimationMode,SetSkeletalMeshAnimationMode);
  this_02 = FPropertyRegistry::
            DefineCompositeProperty<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
                      (&this_00->PropertyRegistry,&local_648,&this->FloatVector,
                       L"Apply FloatVector Properties");
  this_03 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
            ::AddComposite(this_02,&local_638,this_00->DoubleResult[0],(pdm_951a2570)0x0);
  this_04 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double>
            ::AddComposite(this_03,&local_628,this_00->DoubleResult[1],(pdm_951a2570)0x8);
  this_05 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double>
            ::AddComposite(this_04,&local_618,this_00->DoubleResult[2],(pdm_951a2570)0x10);
  pTVar71 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double>
            ::AddComposite(this_05,&local_608,this_00->DoubleResult[3],(pdm_951a2570)0x18);
  local_fa0 = Z_Construct_UClass_UMovieSceneFloatVectorTrack_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_fa0 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_fa0);
  }
  pTVar71 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double,double>
            ::SetDefaultTrackType(pTVar71,(TSubclassOf<UMovieSceneTrack>)&local_fa0);
  pTVar71 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double,double>
            ::SetBlenderSystem<UMovieScenePiecewiseDoubleBlenderSystem>(pTVar71);
  pTVar71->Definition->CustomPropertyRegistration =
       (ICustomPropertyRegistration *)&(this->Accessors).FloatVector;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>,double,double,double,double>
  ::Commit(pTVar71);
  this_06 = FPropertyRegistry::
            DefineCompositeProperty<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
                      (&this_00->PropertyRegistry,&local_5f8,&(this->Parameters).Vector2,
                       L"Vector2 Parameters");
  this_07 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
            ::AddComposite(this_06,&local_5e8,this_00->DoubleResult[0],(pdm_951a2570)0x0);
  pTVar72 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double>
            ::AddComposite(this_07,&local_5d8,this_00->DoubleResult[1],(pdm_951a2570)0x8);
  pTVar72 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
            ::SetBlenderSystem<UMovieScenePiecewiseDoubleBlenderSystem>(pTVar72);
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
  ::Commit(pTVar72);
  this_08 = FPropertyRegistry::
            DefineCompositeProperty<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
                      (&this_00->PropertyRegistry,&local_5c8,&(this->Parameters).Vector3,
                       L"Vector3 Parameters");
  this_09 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
            ::AddComposite(this_08,&local_5b8,this_00->DoubleResult[0],(pdm_951a2570)0x0);
  this_10 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double>
            ::AddComposite(this_09,&local_5a8,this_00->DoubleResult[1],(pdm_951a2570)0x8);
  pTVar73 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double>
            ::AddComposite(this_10,&local_598,this_00->DoubleResult[2],(pdm_951a2570)0x10);
  pTVar73 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double,double>
            ::SetBlenderSystem<UMovieScenePiecewiseDoubleBlenderSystem>(pTVar73);
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>,double,double,double>
  ::Commit(pTVar73);
  this_11 = FPropertyRegistry::
            DefineCompositeProperty<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
                      (&this_00->PropertyRegistry,&local_588,&this->DoubleVector,
                       L"Apply DoubleVector Properties");
  this_12 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
            ::AddComposite(this_11,&local_578,this_00->DoubleResult[0],(pdm_cfabbdd9)0x0);
  this_13 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double>
            ::AddComposite(this_12,&local_568,this_00->DoubleResult[1],(pdm_cfabbdd9)0x8);
  this_14 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double>
            ::AddComposite(this_13,&local_558,this_00->DoubleResult[2],(pdm_cfabbdd9)0x10);
  pTVar74 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double>
            ::AddComposite(this_14,&local_548,this_00->DoubleResult[3],(pdm_cfabbdd9)0x18);
  local_f98 = Z_Construct_UClass_UMovieSceneDoubleVectorTrack_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_f98 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_f98);
  }
  pTVar74 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double,double>
            ::SetDefaultTrackType(pTVar74,(TSubclassOf<UMovieSceneTrack>)&local_f98);
  pTVar74 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double,double>
            ::SetBlenderSystem<UMovieScenePiecewiseDoubleBlenderSystem>(pTVar74);
  pTVar74->Definition->CustomPropertyRegistration =
       (ICustomPropertyRegistration *)&(this->Accessors).DoubleVector;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>,double,double,double,double>
  ::Commit(pTVar74);
  pTVar75 = FPropertyRegistry::
            DefineCompositeProperty<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                      (&this_00->PropertyRegistry,&local_538,&this->EulerTransform,
                       L"Apply FEulerTransform Properties");
  pTVar76 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
            ::AddComposite(pTVar75,&local_528,this_00->DoubleResult[0],(pdm_95c0d0ba)0x0);
  pTVar77 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double>
            ::AddComposite(pTVar76,&local_518,this_00->DoubleResult[1],(pdm_95c0d0ba)0x8);
  pTVar78 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double>
            ::AddComposite(pTVar77,&local_508,this_00->DoubleResult[2],(pdm_95c0d0ba)0x10);
  pTVar79 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double>
            ::AddComposite(pTVar78,&local_4f8,this_00->DoubleResult[3],(pdm_95c0d0ba)0x18);
  pTVar80 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double>
            ::AddComposite(pTVar79,&local_4e8,this_00->DoubleResult[4],(pdm_95c0d0ba)0x20);
  pTVar81 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double>
            ::AddComposite(pTVar80,&local_4d8,this_00->DoubleResult[5],(pdm_95c0d0ba)0x28);
  pTVar82 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double>
            ::AddComposite(pTVar81,&local_4c8,this_00->DoubleResult[6],(pdm_95c0d0ba)0x30);
  pTVar83 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double>
            ::AddComposite(pTVar82,&local_4b8,this_00->DoubleResult[7],(pdm_95c0d0ba)0x38);
  pTVar84 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double>
            ::AddComposite(pTVar83,&local_4a8,this_00->DoubleResult[8],(pdm_95c0d0ba)0x40);
  local_f90 = Z_Construct_UClass_UMovieSceneEulerTransformTrack_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_f90 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_f90);
  }
  pTVar84 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
            ::SetDefaultTrackType(pTVar84,(TSubclassOf<UMovieSceneTrack>)&local_f90);
  pTVar84 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
            ::SetBlenderSystem<UMovieScenePiecewiseDoubleBlenderSystem>(pTVar84);
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
  ::Commit(pTVar84);
  pTVar75 = FPropertyRegistry::
            DefineCompositeProperty<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                      (&this_00->PropertyRegistry,&local_498,&(this->Parameters).Transform,
                       L"Transform Parameters");
  pTVar76 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
            ::AddComposite(pTVar75,&local_488,this_00->DoubleResult[0],(pdm_95c0d0ba)0x0);
  pTVar77 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double>
            ::AddComposite(pTVar76,&local_478,this_00->DoubleResult[1],(pdm_95c0d0ba)0x8);
  pTVar78 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double>
            ::AddComposite(pTVar77,&local_468,this_00->DoubleResult[2],(pdm_95c0d0ba)0x10);
  pTVar79 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double>
            ::AddComposite(pTVar78,&local_458,this_00->DoubleResult[3],(pdm_95c0d0ba)0x18);
  pTVar80 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double>
            ::AddComposite(pTVar79,&local_448,this_00->DoubleResult[4],(pdm_95c0d0ba)0x20);
  pTVar81 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double>
            ::AddComposite(pTVar80,&local_438,this_00->DoubleResult[5],(pdm_95c0d0ba)0x28);
  pTVar82 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double>
            ::AddComposite(pTVar81,&local_428,this_00->DoubleResult[6],(pdm_95c0d0ba)0x30);
  pTVar83 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double>
            ::AddComposite(pTVar82,&local_418,this_00->DoubleResult[7],(pdm_95c0d0ba)0x38);
  pTVar84 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double>
            ::AddComposite(pTVar83,&local_408,this_00->DoubleResult[8],(pdm_95c0d0ba)0x40);
  pTVar84 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
            ::SetBlenderSystem<UMovieScenePiecewiseDoubleBlenderSystem>(pTVar84);
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
  ::Commit(pTVar84);
  this_15 = FPropertyRegistry::
            DefineCompositeProperty<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                      (&this_00->PropertyRegistry,&local_3f8,&this->ComponentTransform,
                       L"Call USceneComponent::SetRelativeTransform");
  this_16 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
            ::AddComposite(this_15,&local_3e8,this_00->DoubleResult[0],(pdm_95c0d0ba)0x0);
  this_17 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double>
            ::AddComposite(this_16,&local_3d8,this_00->DoubleResult[1],(pdm_95c0d0ba)0x8);
  this_18 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double>
            ::AddComposite(this_17,&local_3c8,this_00->DoubleResult[2],(pdm_95c0d0ba)0x10);
  this_19 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double>
            ::AddComposite(this_18,&local_3b8,this_00->DoubleResult[3],(pdm_95c0d0ba)0x18);
  this_20 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double>
            ::AddComposite(this_19,&local_3a8,this_00->DoubleResult[4],(pdm_95c0d0ba)0x20);
  this_21 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double>
            ::AddComposite(this_20,&local_398,this_00->DoubleResult[5],(pdm_95c0d0ba)0x28);
  this_22 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double>
            ::AddComposite(this_21,&local_388,this_00->DoubleResult[6],(pdm_95c0d0ba)0x30);
  this_23 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double>
            ::AddComposite(this_22,&local_378,this_00->DoubleResult[7],(pdm_95c0d0ba)0x38);
  pTVar85 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double>
            ::AddComposite(this_23,&local_368,this_00->DoubleResult[8],(pdm_95c0d0ba)0x40);
  pTVar85 = TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
            ::SetBlenderSystem<UMovieScenePiecewiseDoubleBlenderSystem>(pTVar85);
  pTVar85->Definition->CustomPropertyRegistration =
       (ICustomPropertyRegistration *)&(this->Accessors).ComponentTransform;
  local_828._0_8_ = 0;
  local_828._8_8_ = 0;
  pFVar86 = FComponentTransformHandler::FComponentTransformHandler(&local_828);
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>,double,double,double,double,double,double,double,double,double>
  ::Commit<UE::MovieScene::FComponentTransformHandler>(pTVar85,pFVar86);
  FEntityFactories::DuplicateChildComponent<UE::MovieScene::FSourceDoubleChannel>
            (&this_01->Factories,this->QuaternionRotationChannel[0]);
  local_1188.Value = *(ushort *)(this_00->DoubleResult + 3);
  local_10d8._First = &local_1188;
  local_10d8._Last = &local_1186;
  FEntityFactories::DefineMutuallyInclusiveComponents
            (&this_01->Factories,(FComponentTypeID)*(ushort *)this->QuaternionRotationChannel,
             &local_10d8);
  local_1184.Value = *(ushort *)&this_00->EvalTime;
  local_10c8._First = &local_1184;
  local_10c8._Last = &local_1182;
  FEntityFactories::DefineMutuallyInclusiveComponents
            (&this_01->Factories,(FComponentTypeID)*(ushort *)this->QuaternionRotationChannel,
             &local_10c8);
  FEntityFactories::DuplicateChildComponent<UE::MovieScene::FSourceDoubleChannel>
            (&this_01->Factories,this->QuaternionRotationChannel[1]);
  local_1188.Value = *(ushort *)(this_00->DoubleResult + 4);
  local_10d8._First = &local_1188;
  local_10d8._Last = &local_1186;
  FEntityFactories::DefineMutuallyInclusiveComponents
            (&this_01->Factories,(FComponentTypeID)*(ushort *)(this->QuaternionRotationChannel + 1),
             &local_10d8);
  local_1184.Value = *(ushort *)&this_00->EvalTime;
  local_10c8._First = &local_1184;
  local_10c8._Last = &local_1182;
  FEntityFactories::DefineMutuallyInclusiveComponents
            (&this_01->Factories,(FComponentTypeID)*(ushort *)(this->QuaternionRotationChannel + 1),
             &local_10c8);
  FEntityFactories::DuplicateChildComponent<UE::MovieScene::FSourceDoubleChannel>
            (&this_01->Factories,this->QuaternionRotationChannel[2]);
  local_1188.Value = *(ushort *)(this_00->DoubleResult + 5);
  local_10d8._First = &local_1188;
  local_10d8._Last = &local_1186;
  FEntityFactories::DefineMutuallyInclusiveComponents
            (&this_01->Factories,(FComponentTypeID)*(ushort *)(this->QuaternionRotationChannel + 2),
             &local_10d8);
  local_1184.Value = *(ushort *)&this_00->EvalTime;
  local_10c8._First = &local_1184;
  local_10c8._Last = &local_1182;
  FEntityFactories::DefineMutuallyInclusiveComponents
            (&this_01->Factories,(FComponentTypeID)*(ushort *)(this->QuaternionRotationChannel + 2),
             &local_10c8);
  FEntityFactories::DuplicateChildComponent<UE::MovieScene::FSourceDoubleChannel>
            (&this_01->Factories,this->RotatorChannel[0]);
  local_1180.Value = *(ushort *)this_00->DoubleResult;
  local_10b8._First = &local_1180;
  local_10b8._Last = &local_117e;
  FEntityFactories::DefineMutuallyInclusiveComponents
            (&this_01->Factories,(FComponentTypeID)*(ushort *)this->RotatorChannel,&local_10b8);
  local_117c.Value = *(ushort *)&this_00->EvalTime;
  local_10a8._First = &local_117c;
  local_10a8._Last = &local_117a;
  FEntityFactories::DefineMutuallyInclusiveComponents
            (&this_01->Factories,(FComponentTypeID)*(ushort *)this->RotatorChannel,&local_10a8);
  FEntityFactories::DuplicateChildComponent<UE::MovieScene::FSourceDoubleChannel>
            (&this_01->Factories,this->RotatorChannel[1]);
  local_1180.Value = *(ushort *)(this_00->DoubleResult + 1);
  local_10b8._First = &local_1180;
  local_10b8._Last = &local_117e;
  FEntityFactories::DefineMutuallyInclusiveComponents
            (&this_01->Factories,(FComponentTypeID)*(ushort *)(this->RotatorChannel + 1),&local_10b8
            );
  local_117c.Value = *(ushort *)&this_00->EvalTime;
  local_10a8._First = &local_117c;
  local_10a8._Last = &local_117a;
  FEntityFactories::DefineMutuallyInclusiveComponents
            (&this_01->Factories,(FComponentTypeID)*(ushort *)(this->RotatorChannel + 1),&local_10a8
            );
  FEntityFactories::DuplicateChildComponent<UE::MovieScene::FSourceDoubleChannel>
            (&this_01->Factories,this->RotatorChannel[2]);
  local_1180.Value = *(ushort *)(this_00->DoubleResult + 2);
  local_10b8._First = &local_1180;
  local_10b8._Last = &local_117e;
  FEntityFactories::DefineMutuallyInclusiveComponents
            (&this_01->Factories,(FComponentTypeID)*(ushort *)(this->RotatorChannel + 2),&local_10b8
            );
  local_117c.Value = *(ushort *)&this_00->EvalTime;
  local_10a8._First = &local_117c;
  local_10a8._Last = &local_117a;
  FEntityFactories::DefineMutuallyInclusiveComponents
            (&this_01->Factories,(FComponentTypeID)*(ushort *)(this->RotatorChannel + 2),&local_10a8
            );
  local_e60 = this->ConstraintChannel;
  local_e68 = &___7__TDuplicateChildEntityInitializer_UFConstraintComponentData___MovieScene_UE__6B_
  ;
  local_e5e = local_e60;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FConstraintComponentData>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_150,
             (TDuplicateChildEntityInitializer<FConstraintComponentData> *)&local_e68);
  FEntityFactories::DefineChildComponent
            (&this_01->Factories,
             (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_150);
  if ((local_110 & 1) != 0) {
    pTVar90 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_150;
    if ((local_110 & 2) == 0) {
      pTVar90 = local_150[0];
    }
    local_110 = local_110 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                   (pTVar90->Data).Pad)->Data).Pad)(pTVar90,0);
    if ((local_110 & 2) == 0) {
      FMemory::Free(local_150[0]);
    }
  }
  local_10e8.Value = *(ushort *)&this_00->EvalTime;
  local_978._First = &local_10e8;
  local_978._Last = local_10e6;
  FEntityFactories::DefineMutuallyInclusiveComponents
            (&this_01->Factories,(FComponentTypeID)*(ushort *)&this->ConstraintChannel,&local_978);
  local_1170[0].Value = *(ushort *)&this->AttachParent;
  local_1168[0].Value = *(ushort *)&this->AttachParentBinding;
  pFVar87 = TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
            ::FindPair(&(this_01->Factories).ParentToChildComponentTypes,local_1168,local_1170);
  if (pFVar87 == (FComponentTypeID *)0x0) {
    TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
    ::Emplace<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&>
              ((TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
                *)&(this_01->Factories).ParentToChildComponentTypes,local_1168,local_1170);
  }
  local_e50 = this->AttachParentBinding;
  local_e58 = &
              ___7__TDuplicateChildEntityInitializer_UFMovieSceneObjectBindingID___MovieScene_UE__6B_
  ;
  local_e4e = local_e50;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneObjectBindingID>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_108,
             (TDuplicateChildEntityInitializer<FMovieSceneObjectBindingID> *)&local_e58);
  FEntityFactories::DefineChildComponent
            (&this_01->Factories,
             (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_108);
  if ((local_c8 & 1) != 0) {
    pTVar90 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_108;
    if ((local_c8 & 2) == 0) {
      pTVar90 = local_108[0];
    }
    local_c8 = local_c8 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                   (pTVar90->Data).Pad)->Data).Pad)(pTVar90,0);
    if ((local_c8 & 2) == 0) {
      FMemory::Free(local_108[0]);
    }
  }
  local_e40 = this->AttachComponent;
  local_e48 = &
              ___7__TDuplicateChildEntityInitializer_UFAttachmentComponent_MovieScene_UE___MovieScene_UE__6B_
  ;
  local_e3e = local_e40;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<UE::MovieScene::FAttachmentComponent>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_c0,
             (TDuplicateChildEntityInitializer<UE::MovieScene::FAttachmentComponent> *)&local_e48);
  FEntityFactories::DefineChildComponent
            (&this_01->Factories,
             (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_c0);
  if ((local_80 & 1) != 0) {
    pTVar90 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_c0;
    if ((local_80 & 2) == 0) {
      pTVar90 = local_c0[0];
    }
    local_80 = local_80 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                   (pTVar90->Data).Pad)->Data).Pad)(pTVar90,0);
    if ((local_80 & 2) == 0) {
      FMemory::Free(local_c0[0]);
    }
  }
  FEntityFactories::DuplicateChildComponent<FPerlinNoiseParams>
            (&this_01->Factories,this->FloatPerlinNoiseChannel);
  local_1160.Value = *(ushort *)&this_00->EvalSeconds;
  local_968._First = &local_1160;
  local_968._Last = &local_115e;
  FEntityFactories::DefineMutuallyInclusiveComponents
            (&this_01->Factories,(FComponentTypeID)*(ushort *)&this->FloatPerlinNoiseChannel,
             &local_968);
  FEntityFactories::DuplicateChildComponent<FPerlinNoiseParams>
            (&this_01->Factories,this->DoublePerlinNoiseChannel);
  local_115c.Value = *(ushort *)&this_00->EvalSeconds;
  local_958._First = &local_115c;
  local_958._Last = &local_115a;
  FEntityFactories::DefineMutuallyInclusiveComponents
            (&this_01->Factories,(FComponentTypeID)*(ushort *)&this->DoublePerlinNoiseChannel,
             &local_958);
  local_e30 = this->SkeletalAnimation;
  local_e38 = &
              ___7__TDuplicateChildEntityInitializer_UFMovieSceneSkeletalAnimationComponentData___MovieScene_UE__6B_
  ;
  local_e2e = local_e30;
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>::
  TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8><UE::MovieScene::TDuplicateChildEntityInitializer<FMovieSceneSkeletalAnimationComponentData>,void>
            ((TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_78,
             (TDuplicateChildEntityInitializer<FMovieSceneSkeletalAnimationComponentData> *)
             &local_e38);
  FEntityFactories::DefineChildComponent
            (&this_01->Factories,
             (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_78);
  if ((local_38 & 1) != 0) {
    pTVar90 = (TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> *)local_78;
    if ((local_38 & 2) == 0) {
      pTVar90 = local_78[0];
    }
    local_38 = local_38 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8> **)
                   (pTVar90->Data).Pad)->Data).Pad)(pTVar90,0);
    if ((local_38 & 2) == 0) {
      FMemory::Free(local_78[0]);
    }
  }
  local_1158[0].Value = (this->Tags).AnimMixerPoseProducer.Value;
  local_1150[0].Value = local_1158[0].Value;
  pFVar87 = TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
            ::FindPair(&(this_01->Factories).ParentToChildComponentTypes,local_1150,local_1158);
  if (pFVar87 == (FComponentTypeID *)0x0) {
    TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
    ::Emplace<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&>
              ((TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
                *)&(this_01->Factories).ParentToChildComponentTypes,local_1150,local_1158);
  }
  local_1148[0].Value = (this->Tags).CustomPrimitiveData.Value;
  local_1140[0].Value = local_1148[0].Value;
  pFVar87 = TMultiMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
            ::FindPair(&(this_01->Factories).ParentToChildComponentTypes,local_1140,local_1148);
  if (pFVar87 == (FComponentTypeID *)0x0) {
    TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
    ::Emplace<UE::MovieScene::FComponentTypeID_const_&,UE::MovieScene::FComponentTypeID_const_&>
              ((TMapBase<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,UE::MovieScene::FComponentTypeID,1>_>
                *)&(this_01->Factories).ParentToChildComponentTypes,local_1140,local_1148);
  }
  local_1138.Value = *(ushort *)&this->CameraShakeInstance;
  local_948._First = &local_1138;
  local_948._Last = &local_1136;
  FEntityFactories::DefineMutuallyInclusiveComponents
            (&this_01->Factories,(FComponentTypeID)*(ushort *)&this->CameraShake,&local_948);
  InitializeMovieSceneTracksAccessors(this);
  return this;
}

// ~FMovieSceneTracksComponentTypes @ 146621000

void __thiscall
UE::MovieScene::FMovieSceneTracksComponentTypes::~FMovieSceneTracksComponentTypes
          (FMovieSceneTracksComponentTypes *this)

{
  FScriptContainerElement *pFVar1;
  
  FAccessors::~FAccessors(&this->Accessors);
  (this->Parameters).Transform.PropertyTraits =
       (TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>)
       &___7IPropertyTraits_MovieScene_UE__6B_;
  (this->Parameters).Color.PropertyTraits =
       (TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>)
       &___7IPropertyTraits_MovieScene_UE__6B_;
  (this->Parameters).Vector3.PropertyTraits =
       (TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>)
       &___7IPropertyTraits_MovieScene_UE__6B_;
  (this->Parameters).Vector2.PropertyTraits =
       (TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>)
       &___7IPropertyTraits_MovieScene_UE__6B_;
  (this->Parameters).Scalar.PropertyTraits =
       (TPropertyTraits<float,double,1>)&___7IPropertyTraits_MovieScene_UE__6B_;
  (this->Parameters).Integer.PropertyTraits =
       (TPropertyTraits<int,int,1>)&___7IPropertyTraits_MovieScene_UE__6B_;
  (this->Parameters).Byte.PropertyTraits =
       (TPropertyTraits<unsigned_char,unsigned_char,1>)&___7IPropertyTraits_MovieScene_UE__6B_;
  (this->Parameters).Bool.PropertyTraits =
       (TPropertyTraits<bool,bool,1>)&___7IPropertyTraits_MovieScene_UE__6B_;
  (this->ColorParameter).PropertyTraits =
       (TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>)
       &___7IPropertyTraits_MovieScene_UE__6B_;
  (this->FloatParameter).PropertyTraits =
       (TPropertyTraits<float,double,1>)&___7IPropertyTraits_MovieScene_UE__6B_;
  (this->Object).PropertyTraits = (FObjectPropertyTraits)&___7IPropertyTraits_MovieScene_UE__6B_;
  (this->Text).PropertyTraits =
       (TPropertyTraits<FText,FText,1>)&___7IPropertyTraits_MovieScene_UE__6B_;
  (this->String).PropertyTraits =
       (TPropertyTraits<FString,FString,1>)&___7IPropertyTraits_MovieScene_UE__6B_;
  (this->Rotator).PropertyTraits =
       (TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>)
       &___7IPropertyTraits_MovieScene_UE__6B_;
  (this->ComponentTransform).PropertyTraits =
       (TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>
        )&___7IPropertyTraits_MovieScene_UE__6B_;
  (this->EulerTransform).PropertyTraits =
       (TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>)
       &___7IPropertyTraits_MovieScene_UE__6B_;
  pFVar1 = (this->Transform).PropertyTraits.DynamicTraits.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Transform).PropertyTraits._padding_ = (longlong)&___7IPropertyTraits_MovieScene_UE__6B_;
  pFVar1 = (this->DoubleVector).PropertyTraits.DynamicTraits.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->DoubleVector).PropertyTraits._padding_ = (longlong)&___7IPropertyTraits_MovieScene_UE__6B_;
  pFVar1 = (this->FloatVector).PropertyTraits.DynamicTraits.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->FloatVector).PropertyTraits._padding_ = (longlong)&___7IPropertyTraits_MovieScene_UE__6B_;
  pFVar1 = (this->Color).PropertyTraits.DynamicTraits.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Color).PropertyTraits._padding_ = (longlong)&___7IPropertyTraits_MovieScene_UE__6B_;
  pFVar1 = (this->Double).PropertyTraits.DynamicTraits.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Double).PropertyTraits._padding_ = (longlong)&___7IPropertyTraits_MovieScene_UE__6B_;
  (this->Float).PropertyTraits = (FFloatPropertyTraits)&___7IPropertyTraits_MovieScene_UE__6B_;
  pFVar1 = (this->Integer).PropertyTraits.DynamicTraits.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Integer).PropertyTraits._padding_ = (longlong)&___7IPropertyTraits_MovieScene_UE__6B_;
  (this->Enum).PropertyTraits =
       (TPropertyTraits<unsigned_char,unsigned_char,1>)&___7IPropertyTraits_MovieScene_UE__6B_;
  (this->Byte).PropertyTraits =
       (TPropertyTraits<unsigned_char,unsigned_char,1>)&___7IPropertyTraits_MovieScene_UE__6B_;
  (this->Bool).PropertyTraits = (FBoolPropertyTraits)&___7IPropertyTraits_MovieScene_UE__6B_;
  return;
}

// Destroy @ 146657640

void __cdecl UE::MovieScene::FMovieSceneTracksComponentTypes::Destroy(void)

{
  TUniquePtr<UE::MovieScene::FMovieSceneTracksComponentTypes,TDefaultDelete<UE::MovieScene::FMovieSceneTracksComponentTypes>_>
  TVar1;
  
  TVar1.Ptr = GMovieSceneTracksComponentTypes.Ptr;
  if (GMovieSceneTracksComponentTypes.Ptr != (FMovieSceneTracksComponentTypes *)0x0) {
    GMovieSceneTracksComponentTypes.Ptr = (FMovieSceneTracksComponentTypes *)0x0;
    TDefaultDelete<UE::MovieScene::FMovieSceneTracksComponentTypes>::operator()
              ((TDefaultDelete<UE::MovieScene::FMovieSceneTracksComponentTypes> *)
               &GMovieSceneTracksComponentTypes,TVar1.Ptr);
  }
  GMovieSceneTracksComponentTypesDestroyed = true;
  return;
}

// Get @ 1466886d0

FMovieSceneTracksComponentTypes * __cdecl UE::MovieScene::FMovieSceneTracksComponentTypes::Get(void)

{
  code *pcVar1;
  TUniquePtr<UE::MovieScene::FMovieSceneTracksComponentTypes,TDefaultDelete<UE::MovieScene::FMovieSceneTracksComponentTypes>_>
  TVar2;
  bool bVar3;
  FMovieSceneTracksComponentTypes *pFVar4;
  
  if (GMovieSceneTracksComponentTypes.Ptr == (FMovieSceneTracksComponentTypes *)0x0) {
    if (GMovieSceneTracksComponentTypesDestroyed) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GMovieSceneTracksComponentTypesDestroyed",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\MovieSceneTracksComponentTypes.cpp"
                         ,0x381,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FMovieSceneTracksComponentTypes *)(*pcVar1)();
        return pFVar4;
      }
    }
    pFVar4 = ::operator_new(0x1280);
    if (pFVar4 == (FMovieSceneTracksComponentTypes *)0x0) {
      pFVar4 = (FMovieSceneTracksComponentTypes *)0x0;
    }
    else {
      pFVar4 = FMovieSceneTracksComponentTypes(pFVar4);
    }
    TVar2.Ptr = GMovieSceneTracksComponentTypes.Ptr;
    if (GMovieSceneTracksComponentTypes.Ptr != pFVar4) {
      GMovieSceneTracksComponentTypes.Ptr = pFVar4;
      TDefaultDelete<UE::MovieScene::FMovieSceneTracksComponentTypes>::operator()
                ((TDefaultDelete<UE::MovieScene::FMovieSceneTracksComponentTypes> *)
                 &GMovieSceneTracksComponentTypes,TVar2.Ptr);
    }
  }
  return GMovieSceneTracksComponentTypes.Ptr;
}

