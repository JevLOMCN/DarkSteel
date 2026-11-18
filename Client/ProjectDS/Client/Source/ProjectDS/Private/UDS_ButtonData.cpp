// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b431200

UClass * __cdecl UDS_ButtonData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ButtonData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ButtonData",
               &Z_Registration_Info_UClass_UDS_ButtonData.InnerSingleton,
               StaticRegisterNativesUDS_ButtonData,0x128,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ButtonData>,
               InternalVTableHelperCtorCaller<UDS_ButtonData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ButtonData.InnerSingleton;
}

// UDS_ButtonData @ 14b434290

UDS_ButtonData * __thiscall
UDS_ButtonData::UDS_ButtonData(UDS_ButtonData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ButtonData__6B_;
  *(undefined8 *)&this->ButtonImageDatas = 0;
  *(undefined8 *)&(this->ButtonImageDatas).field_0x8 = 0;
  *(undefined8 *)&(this->ButtonImageDatas).field_0x20 = 0;
  *(undefined4 *)&(this->ButtonImageDatas).field_0x28 = 0;
  *(undefined4 *)&(this->ButtonImageDatas).field_0x2c = 0x80;
  *(undefined4 *)&(this->ButtonImageDatas).field_0x34 = 0;
  *(undefined4 *)&(this->ButtonImageDatas).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ButtonImageDatas).field_0x40 = 0;
  *(undefined4 *)&(this->ButtonImageDatas).field_0x48 = 0;
  *(undefined8 *)&this->ButtonIconDatas = 0;
  *(undefined8 *)&(this->ButtonIconDatas).field_0x8 = 0;
  *(undefined8 *)&(this->ButtonIconDatas).field_0x20 = 0;
  *(undefined4 *)&(this->ButtonIconDatas).field_0x28 = 0;
  *(undefined4 *)&(this->ButtonIconDatas).field_0x2c = 0x80;
  *(undefined4 *)&(this->ButtonIconDatas).field_0x34 = 0;
  *(undefined4 *)&(this->ButtonIconDatas).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ButtonIconDatas).field_0x40 = 0;
  *(undefined4 *)&(this->ButtonIconDatas).field_0x48 = 0;
  *(undefined8 *)&this->ButtonTextData = 0;
  *(undefined8 *)&(this->ButtonTextData).field_0x8 = 0;
  *(undefined8 *)&(this->ButtonTextData).field_0x20 = 0;
  *(undefined4 *)&(this->ButtonTextData).field_0x28 = 0;
  *(undefined4 *)&(this->ButtonTextData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ButtonTextData).field_0x34 = 0;
  *(undefined4 *)&(this->ButtonTextData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ButtonTextData).field_0x40 = 0;
  *(undefined4 *)&(this->ButtonTextData).field_0x48 = 0;
  return this;
}

// ~UDS_ButtonData @ 14b434cf0

void __thiscall UDS_ButtonData::~UDS_ButtonData(UDS_ButtonData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_ButtonData__6B_;
  *(undefined4 *)&(this->ButtonTextData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ButtonTextData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ButtonStateType,FDS_ButtonTextDatas>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ButtonStateType,FDS_ButtonTextDatas>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ButtonTextData);
  *(undefined4 *)&(this->ButtonIconDatas).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ButtonIconDatas).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ButtonIconDatas);
  *(undefined4 *)&(this->ButtonImageDatas).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ButtonImageDatas).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ButtonImageDatas);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b4365a0

UClass * __cdecl UDS_ButtonData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ButtonData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ButtonData",
               &Z_Registration_Info_UClass_UDS_ButtonData.InnerSingleton,
               StaticRegisterNativesUDS_ButtonData,0x128,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ButtonData>,
               InternalVTableHelperCtorCaller<UDS_ButtonData>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ButtonData.InnerSingleton;
}

// StaticRegisterNativesUDS_ButtonData @ 14b437040

void __cdecl UDS_ButtonData::StaticRegisterNativesUDS_ButtonData(void)

{
  return;
}

// UDS_ButtonData @ 14bce3c60

UDS_ButtonData * __thiscall UDS_ButtonData::UDS_ButtonData(UDS_ButtonData *this)

{
  TMap<EDS_ButtonStateType,FDS_ButtonImageDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ButtonStateType,FDS_ButtonImageDatas,0>_>
  *this_00;
  TMap<EDS_ButtonStateType,FDS_ButtonTextDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ButtonStateType,FDS_ButtonTextDatas,0>_>
  *this_01;
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  TMap<EDS_ButtonStateType,FDS_ButtonImageDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ButtonStateType,FDS_ButtonImageDatas,0>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  UDS_ButtonData *pUVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_7f8;
  undefined4 local_7f4;
  undefined4 local_7f0;
  undefined4 local_7ec;
  undefined4 local_7e8;
  undefined4 local_7e4;
  undefined4 local_7e0;
  undefined4 local_7dc;
  undefined4 local_7d8;
  undefined4 local_7d4;
  undefined4 local_7d0;
  undefined4 local_7cc;
  undefined4 local_7c8;
  undefined4 local_7c4;
  undefined4 local_7c0;
  undefined4 local_7bc;
  undefined4 local_7b8;
  undefined4 local_7b4;
  undefined4 local_7b0;
  undefined4 local_7ac;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_79c;
  TMap<EDS_ButtonStateType,FDS_ButtonImageDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ButtonStateType,FDS_ButtonImageDatas,0>_>
  *local_798;
  int iStack_790;
  uint uStack_78c;
  undefined1 *local_788;
  undefined4 uStack_780;
  int iStack_77c;
  int local_778;
  int iStack_774;
  int iStack_770;
  undefined4 uStack_76c;
  undefined1 local_768 [8];
  undefined1 local_760 [8];
  undefined1 local_758 [8];
  undefined1 local_750 [8];
  undefined1 local_748 [8];
  undefined1 local_740 [8];
  undefined1 local_738 [8];
  undefined1 local_730 [8];
  undefined1 local_728 [8];
  undefined1 local_720 [8];
  undefined1 local_718 [8];
  undefined1 local_710 [8];
  undefined1 local_708 [8];
  int local_700;
  undefined8 local_6f8;
  undefined8 local_6f0;
  undefined8 local_6e8;
  undefined8 local_6e0;
  undefined8 local_6d8;
  undefined8 local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined8 local_6b8;
  undefined8 local_6b0;
  FLinearColor_u_0 local_6a8;
  undefined1 local_698;
  undefined2 local_697;
  undefined4 local_695;
  undefined1 local_691;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined1 local_680;
  undefined2 local_67f;
  undefined1 local_67d;
  undefined4 local_67c;
  undefined8 local_678;
  TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> local_670;
  FLinearColor_u_0 local_660;
  undefined1 local_650;
  undefined2 local_64f;
  undefined4 local_64d;
  undefined1 local_649;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined1 local_638;
  undefined2 local_637;
  undefined1 local_635;
  undefined4 local_634;
  undefined8 local_630;
  undefined8 local_628;
  FLinearColor_u_0 local_620;
  undefined1 local_610;
  undefined2 local_60f;
  undefined4 local_60d;
  undefined1 local_609;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined1 local_5f8;
  undefined2 local_5f7;
  undefined1 local_5f5;
  undefined4 local_5f4;
  undefined8 local_5f0;
  undefined8 local_5e8;
  FLinearColor_u_0 local_5e0;
  undefined1 local_5d0;
  undefined2 local_5cf;
  undefined4 local_5cd;
  undefined1 local_5c9;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined1 local_5b8;
  undefined2 local_5b7;
  undefined1 local_5b5;
  undefined4 local_5b4;
  undefined8 local_5b0;
  undefined8 local_5a8;
  FLinearColor_u_0 local_5a0;
  undefined1 local_590;
  undefined2 local_58f;
  undefined4 local_58d;
  undefined1 local_589;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined1 local_578;
  undefined2 local_577;
  undefined1 local_575;
  undefined4 local_574;
  undefined8 local_570;
  undefined8 local_568;
  FLinearColor_u_0 local_560;
  undefined1 local_550;
  undefined2 local_54f;
  undefined4 local_54d;
  undefined1 local_549;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined1 local_538;
  undefined2 local_537;
  undefined1 local_535;
  undefined4 local_534;
  undefined8 local_530;
  undefined8 local_528;
  FLinearColor_u_0 local_520;
  undefined1 local_510;
  undefined2 local_50f;
  undefined4 local_50d;
  undefined1 local_509;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined1 local_4f8;
  undefined2 local_4f7;
  undefined1 local_4f5;
  undefined4 local_4f4;
  undefined8 local_4f0;
  undefined8 local_4e8;
  FLinearColor_u_0 local_4e0;
  undefined1 local_4d0;
  undefined2 local_4cf;
  undefined4 local_4cd;
  undefined1 local_4c9;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined1 local_4b8;
  undefined2 local_4b7;
  undefined1 local_4b5;
  undefined4 local_4b4;
  undefined8 local_4b0;
  undefined8 local_4a8;
  FLinearColor_u_0 local_4a0;
  undefined1 local_490;
  undefined2 local_48f;
  undefined4 local_48d;
  undefined1 local_489;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined1 local_478;
  undefined2 local_477;
  undefined1 local_475;
  undefined4 local_474;
  undefined8 local_470;
  undefined8 local_468;
  FLinearColor_u_0 local_460;
  undefined1 local_450;
  undefined2 local_44f;
  undefined4 local_44d;
  undefined1 local_449;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined1 local_438;
  undefined2 local_437;
  undefined1 local_435;
  undefined4 local_434;
  undefined8 local_430;
  undefined8 local_428;
  FLinearColor_u_0 local_420;
  undefined1 local_410;
  undefined2 local_40f;
  undefined4 local_40d;
  undefined1 local_409;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined1 local_3f8;
  undefined2 local_3f7;
  undefined1 local_3f5;
  undefined4 local_3f4;
  undefined8 local_3f0;
  undefined8 local_3e8;
  FLinearColor_u_0 local_3e0;
  undefined1 local_3d0;
  undefined2 local_3cf;
  undefined4 local_3cd;
  undefined1 local_3c9;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined1 local_3b8;
  undefined2 local_3b7;
  undefined1 local_3b5;
  undefined4 local_3b4;
  undefined8 local_3b0;
  undefined8 local_3a8;
  FLinearColor_u_0 local_3a0;
  undefined1 local_390;
  undefined2 local_38f;
  undefined4 local_38d;
  undefined1 local_389;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined1 local_378;
  undefined2 local_377;
  undefined1 local_375;
  undefined4 local_374;
  undefined8 local_370;
  undefined8 local_368;
  FLinearColor_u_0 local_360;
  undefined1 local_350;
  undefined2 local_34f;
  undefined4 local_34d;
  undefined1 local_349;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined1 local_338;
  undefined2 local_337;
  undefined1 local_335;
  undefined4 local_334;
  undefined8 local_330;
  undefined8 local_328;
  FLinearColor_u_0 local_320;
  undefined1 local_310;
  undefined2 local_30f;
  undefined4 local_30d;
  undefined1 local_309;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined1 local_2f8;
  undefined2 local_2f7;
  undefined1 local_2f5;
  undefined4 local_2f4;
  undefined8 local_2f0;
  undefined8 local_2e8;
  FLinearColor_u_0 local_2e0;
  undefined1 local_2d0;
  undefined2 local_2cf;
  undefined4 local_2cd;
  undefined1 local_2c9;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8;
  undefined2 local_2b7;
  undefined1 local_2b5;
  undefined4 local_2b4;
  undefined8 local_2b0;
  undefined8 local_2a8;
  FLinearColor_u_0 local_2a0;
  undefined1 local_290;
  undefined2 local_28f;
  undefined4 local_28d;
  undefined1 local_289;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278;
  undefined2 local_277;
  undefined1 local_275;
  undefined4 local_274;
  undefined8 local_270;
  undefined8 local_268;
  FLinearColor_u_0 local_260;
  undefined1 local_250;
  undefined2 local_24f;
  undefined4 local_24d;
  undefined1 local_249;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 local_238;
  undefined2 local_237;
  undefined1 local_235;
  undefined4 local_234;
  undefined8 local_230;
  TMap<EDS_ButtonStateType,FDS_ButtonImageDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ButtonStateType,FDS_ButtonImageDatas,0>_>
  *local_228;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_220;
  undefined8 uStack_200;
  undefined4 *local_1f8;
  undefined8 *local_1f0;
  undefined4 *local_1e8;
  FDS_ButtonImageDatas **local_1e0;
  undefined4 *local_1d8;
  undefined8 *local_1d0;
  undefined4 *local_1c8;
  undefined8 *local_1c0;
  undefined4 *local_1b8;
  undefined8 *local_1b0;
  undefined4 *local_1a8;
  undefined8 *local_1a0;
  undefined4 *local_198;
  undefined8 *local_190;
  undefined4 *local_188;
  undefined8 *local_180;
  undefined4 *local_178;
  undefined8 *local_170;
  undefined4 *local_168;
  undefined8 *local_160;
  undefined4 *local_158;
  undefined8 *local_150;
  undefined4 *local_148;
  undefined8 *local_140;
  undefined4 *local_138;
  undefined8 *local_130;
  undefined4 *local_128;
  undefined8 *local_120;
  undefined4 *local_118;
  undefined8 *local_110;
  undefined4 *local_108;
  undefined8 *local_100;
  undefined4 *local_f8;
  undefined8 *local_f0;
  undefined4 *local_e8;
  undefined8 *local_e0;
  undefined4 *local_d8;
  undefined8 *local_d0;
  undefined4 *local_c8;
  undefined8 *local_c0;
  undefined4 *local_b8;
  undefined8 *local_b0;
  undefined4 *local_a8;
  undefined8 *local_a0;
  undefined4 *local_98;
  undefined8 *local_90;
  undefined4 *local_88;
  undefined8 *local_80;
  undefined4 *local_78;
  undefined8 *local_70;
  undefined4 *local_68;
  undefined8 *local_60;
  undefined4 *local_58;
  undefined8 *local_50;
  
  UObject::UObject((UObject *)this);
  local_64d = 0x200;
  this_00 = &this->ButtonIconDatas;
  local_64f = 0;
  this_01 = &this->ButtonTextData;
  local_649 = 0;
  local_637 = 0;
  this->_padding_ = (longlong)&___7UDS_ButtonData__6B_;
  *(undefined8 *)&this->ButtonImageDatas = 0;
  local_1e8 = local_res10;
  *(undefined8 *)&(this->ButtonImageDatas).field_0x8 = 0;
  *(undefined8 *)&(this->ButtonImageDatas).field_0x20 = 0;
  iVar11 = 0;
  *(undefined4 *)&(this->ButtonImageDatas).field_0x28 = 0;
  uVar7 = 1;
  *(undefined4 *)&(this->ButtonImageDatas).field_0x2c = 0x80;
  *(undefined4 *)&(this->ButtonImageDatas).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ButtonImageDatas).field_0x34 = 0;
  *(undefined8 *)&(this->ButtonImageDatas).field_0x40 = 0;
  *(undefined4 *)&(this->ButtonImageDatas).field_0x48 = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ButtonIconDatas).field_0x8 = 0;
  *(undefined8 *)&(this->ButtonIconDatas).field_0x20 = 0;
  *(undefined4 *)&(this->ButtonIconDatas).field_0x28 = 0;
  *(undefined4 *)&(this->ButtonIconDatas).field_0x2c = 0x80;
  *(undefined4 *)&(this->ButtonIconDatas).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ButtonIconDatas).field_0x34 = 0;
  *(undefined8 *)&(this->ButtonIconDatas).field_0x40 = 0;
  *(undefined4 *)&(this->ButtonIconDatas).field_0x48 = 0;
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)&(this->ButtonTextData).field_0x8 = 0;
  *(undefined8 *)&(this->ButtonTextData).field_0x20 = 0;
  *(undefined4 *)&(this->ButtonTextData).field_0x28 = 0;
  *(undefined4 *)&(this->ButtonTextData).field_0x2c = 0x80;
  *(undefined4 *)&(this->ButtonTextData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ButtonTextData).field_0x34 = 0;
  *(undefined8 *)&(this->ButtonTextData).field_0x40 = 0;
  *(undefined4 *)&(this->ButtonTextData).field_0x48 = 0;
  local_1e0 = &local_670.Value;
  local_635 = 0;
  local_660 = FLinearColor::White.field0_0x0;
  local_630 = 0;
  local_670.Value = (FDS_ButtonImageDatas *)0x0;
  local_648 = 0;
  uStack_640 = 0;
  local_650 = 0;
  local_638 = 0;
  local_634 = 0;
  local_res10[0] = 1;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (&this->ButtonImageDatas,&local_670,(bool *)&local_1e8);
  local_178 = local_res18;
  local_60f = 0;
  local_620 = FLinearColor::White.field0_0x0;
  local_60d = 0x200;
  local_170 = &local_628;
  local_609 = 0;
  local_608 = 0;
  uStack_600 = 0;
  local_5f7 = 0;
  local_5f5 = 0;
  local_5f0 = 0;
  local_628 = 0;
  local_610 = 0;
  local_5f8 = 0;
  local_5f4 = 0;
  local_res18[0] = 4;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (&this->ButtonImageDatas,
             (TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)local_768,
             (bool *)&local_178);
  local_168 = local_res20;
  local_5cf = 0;
  local_5e0 = FLinearColor::White.field0_0x0;
  local_5cd = 0x200;
  local_160 = &local_5e8;
  local_5c9 = 0;
  local_5b7 = 0;
  local_5b5 = 0;
  local_5b0 = 0;
  local_5c8 = 0;
  uStack_5c0 = 0;
  local_5e8 = 0;
  local_5d0 = 0;
  local_5b8 = 0;
  local_5b4 = 0;
  local_res20[0] = 2;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (&this->ButtonImageDatas,
             (TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)(local_768 + 4),
             (bool *)&local_168);
  local_158 = &local_7f8;
  local_58f = 0;
  local_5a0 = FLinearColor::White.field0_0x0;
  local_58d = 0x200;
  local_150 = &local_5a8;
  local_589 = 0;
  local_577 = 0;
  local_575 = 0;
  local_570 = 0;
  local_588 = 0;
  uStack_580 = 0;
  local_5a8 = 0;
  local_590 = 0;
  local_578 = 0;
  local_574 = 0;
  local_7f8 = 8;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (&this->ButtonImageDatas,
             (TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)local_760,
             (bool *)&local_158);
  local_148 = &local_7f4;
  local_697 = 0;
  local_6a8 = FLinearColor::White.field0_0x0;
  local_695 = 0x200;
  local_140 = &local_6b0;
  local_691 = 0;
  local_67f = 0;
  local_67d = 0;
  local_678 = 0;
  local_690 = 0;
  uStack_688 = 0;
  local_6b0 = 0;
  local_698 = 0;
  local_680 = 0;
  local_67c = 0;
  local_7f4 = 0x20;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (&this->ButtonImageDatas,
             (TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)(local_760 + 4),
             (bool *)&local_148);
  local_50f = 0;
  local_50d = 0x200;
  local_509 = 0;
  local_4f7 = 0;
  local_4f5 = 0;
  local_4f0 = 0;
  local_528 = 0;
  local_138 = &local_7f0;
  local_510 = 0;
  local_520 = FLinearColor::White.field0_0x0;
  local_4f8 = 0;
  local_130 = &local_528;
  local_4f4 = 0;
  local_7f0 = 0x10;
  local_508 = 0;
  uStack_500 = 0;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (&this->ButtonImageDatas,
             (TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)local_758,
             (bool *)&local_138);
  local_128 = &local_7ec;
  local_4cf = 0;
  local_4e0 = FLinearColor::White.field0_0x0;
  local_4cd = 0x200;
  local_120 = &local_4e8;
  local_4c9 = 0;
  local_4b7 = 0;
  local_4b5 = 0;
  local_4b0 = 0;
  local_4c8 = 0;
  uStack_4c0 = 0;
  local_4e8 = 0;
  local_4d0 = 0;
  local_4b8 = 0;
  local_4b4 = 0;
  local_7ec = 0x40;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (&this->ButtonImageDatas,
             (TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)(local_758 + 4),
             (bool *)&local_128);
  local_118 = &local_7e8;
  local_48f = 0;
  local_4a0 = FLinearColor::White.field0_0x0;
  local_48d = 0x200;
  local_110 = &local_4a8;
  local_489 = 0;
  local_477 = 0;
  local_475 = 0;
  local_470 = 0;
  local_488 = 0;
  uStack_480 = 0;
  local_4a8 = 0;
  local_490 = 0;
  local_478 = 0;
  local_474 = 0;
  local_7e8 = 0x100;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (&this->ButtonImageDatas,
             (TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)local_750,
             (bool *)&local_118);
  local_44f = 0;
  local_108 = &local_7e4;
  local_44d = 0x200;
  local_460 = FLinearColor::White.field0_0x0;
  local_449 = 0;
  local_437 = 0;
  local_448 = 0;
  uStack_440 = 0;
  local_435 = 0;
  local_430 = 0;
  local_468 = 0;
  local_450 = 0;
  local_438 = 0;
  local_434 = 0;
  local_7e4 = 0x80;
  local_100 = &local_468;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (&this->ButtonImageDatas,
             (TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)(local_750 + 4),
             (bool *)&local_108);
  local_f8 = &local_7e0;
  local_40f = 0;
  local_420 = FLinearColor::White.field0_0x0;
  local_40d = 0x200;
  local_f0 = &local_428;
  local_409 = 0;
  local_3f7 = 0;
  local_3f5 = 0;
  local_3f0 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_428 = 0;
  local_410 = 0;
  local_3f8 = 0;
  local_3f4 = 0;
  local_7e0 = 1;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (this_00,(TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)local_748,
             (bool *)&local_f8);
  local_e8 = &local_7dc;
  local_3cf = 0;
  local_3e0 = FLinearColor::White.field0_0x0;
  local_3cd = 0x200;
  local_e0 = &local_3e8;
  local_3c9 = 0;
  local_3b7 = 0;
  local_3b5 = 0;
  local_3b0 = 0;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_3e8 = 0;
  local_3d0 = 0;
  local_3b8 = 0;
  local_3b4 = 0;
  local_7dc = 4;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (this_00,(TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)
                     (local_748 + 4),(bool *)&local_e8);
  local_d8 = &local_7d8;
  local_38f = 0;
  local_3a0 = FLinearColor::White.field0_0x0;
  local_38d = 0x200;
  local_d0 = &local_3a8;
  local_389 = 0;
  local_377 = 0;
  local_375 = 0;
  local_370 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_3a8 = 0;
  local_390 = 0;
  local_378 = 0;
  local_374 = 0;
  local_7d8 = 2;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (this_00,(TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)local_740,
             (bool *)&local_d8);
  local_34f = 0;
  local_c8 = &local_7d4;
  local_34d = 0x200;
  local_360 = FLinearColor::White.field0_0x0;
  local_349 = 0;
  local_c0 = &local_368;
  local_337 = 0;
  local_335 = 0;
  local_330 = 0;
  local_368 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_350 = 0;
  local_338 = 0;
  local_334 = 0;
  local_7d4 = 8;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (this_00,(TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)
                     (local_740 + 4),(bool *)&local_c8);
  local_b8 = &local_7d0;
  local_30f = 0;
  local_320 = FLinearColor::White.field0_0x0;
  local_30d = 0x200;
  local_b0 = &local_328;
  local_309 = 0;
  local_2f7 = 0;
  local_2f5 = 0;
  local_2f0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_328 = 0;
  local_310 = 0;
  local_2f8 = 0;
  local_2f4 = 0;
  local_7d0 = 0x20;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (this_00,(TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)local_738,
             (bool *)&local_b8);
  local_a8 = &local_7cc;
  local_2cf = 0;
  local_2e0 = FLinearColor::White.field0_0x0;
  local_2cd = 0x200;
  local_a0 = &local_2e8;
  local_2c9 = 0;
  local_2b7 = 0;
  local_2b5 = 0;
  local_2b0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2e8 = 0;
  local_2d0 = 0;
  local_2b8 = 0;
  local_2b4 = 0;
  local_7cc = 0x10;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (this_00,(TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)
                     (local_738 + 4),(bool *)&local_a8);
  local_28f = 0;
  local_28d = 0x200;
  local_2a0 = FLinearColor::White.field0_0x0;
  local_289 = 0;
  local_277 = 0;
  local_275 = 0;
  local_270 = 0;
  local_2a8 = 0;
  local_290 = 0;
  local_98 = &local_7c8;
  local_278 = 0;
  local_90 = &local_2a8;
  local_274 = 0;
  local_7c8 = 0x40;
  local_288 = 0;
  uStack_280 = 0;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (this_00,(TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)local_730,
             (bool *)&local_98);
  local_88 = &local_7c4;
  local_24f = 0;
  local_260 = FLinearColor::White.field0_0x0;
  local_24d = 0x200;
  local_80 = &local_268;
  local_249 = 0;
  local_237 = 0;
  local_235 = 0;
  local_230 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_268 = 0;
  local_250 = 0;
  local_238 = 0;
  local_234 = 0;
  local_7c4 = 0x100;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (this_00,(TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)
                     (local_730 + 4),(bool *)&local_88);
  local_78 = &local_7c0;
  local_54f = 0;
  local_560 = FLinearColor::White.field0_0x0;
  local_54d = 0x200;
  local_70 = &local_568;
  local_549 = 0;
  local_537 = 0;
  local_535 = 0;
  local_530 = 0;
  local_548 = 0;
  uStack_540 = 0;
  local_568 = 0;
  local_550 = 0;
  local_538 = 0;
  local_534 = 0;
  local_7c0 = 0x80;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>_>
            (this_00,(TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&> *)local_728,
             (bool *)&local_78);
  local_68 = &local_7bc;
  local_6f8 = 0;
  local_60 = &local_6f8;
  local_7bc = 1;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonTextDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonTextDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&>_>
            (this_01,(TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&> *)
                     (local_728 + 4),(bool *)&local_68);
  local_1f8 = &local_7b8;
  local_6f0 = 0;
  local_1f0 = &local_6f0;
  local_7b8 = 4;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonTextDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonTextDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&>_>
            (this_01,(TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&> *)local_720,
             (bool *)&local_1f8);
  local_58 = &local_7b4;
  local_6e8 = 0;
  local_50 = &local_6e8;
  local_7b4 = 2;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonTextDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonTextDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&>_>
            (this_01,(TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&> *)
                     (local_720 + 4),(bool *)&local_58);
  local_1d8 = &local_7b0;
  local_6e0 = 0;
  local_1d0 = &local_6e0;
  local_7b0 = 8;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonTextDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonTextDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&>_>
            (this_01,(TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&> *)local_718,
             (bool *)&local_1d8);
  local_1c8 = &local_7ac;
  local_6d8 = 0;
  local_1c0 = &local_6d8;
  local_7ac = 0x20;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonTextDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonTextDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&>_>
            (this_01,(TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&> *)
                     (local_718 + 4),(bool *)&local_1c8);
  local_1b8 = &local_7a8;
  local_6d0 = 0;
  local_1b0 = &local_6d0;
  local_7a8 = 0x10;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonTextDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonTextDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&>_>
            (this_01,(TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&> *)local_710,
             (bool *)&local_1b8);
  local_1a8 = &local_7a4;
  local_6c8 = 0;
  local_1a0 = &local_6c8;
  local_7a4 = 0x40;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonTextDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonTextDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&>_>
            (this_01,(TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&> *)
                     (local_710 + 4),(bool *)&local_1a8);
  local_198 = &local_7a0;
  local_6c0 = 0;
  local_190 = &local_6c0;
  local_7a0 = 0x100;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonTextDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonTextDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&>_>
            (this_01,(TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&> *)local_708,
             (bool *)&local_198);
  local_188 = &local_79c;
  local_6b8 = 0;
  local_180 = &local_6b8;
  local_79c = 0x80;
  TSet<TTuple<enum_EDS_ButtonStateType,FDS_ButtonTextDatas>,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonTextDatas,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&>_>
            (this_01,(TPairInitializer<EDS_ButtonStateType_&&,FDS_ButtonTextDatas_&&> *)
                     (local_708 + 4),(bool *)&local_188);
  puVar1 = &(this->ButtonIconDatas).field_0x10;
  iVar3 = *(int *)&(this->ButtonIconDatas).field_0x28;
  iStack_77c = iVar11;
  local_778 = iVar11;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ButtonIconDatas).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    local_778 = 0;
    iVar11 = 0;
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar11;
      local_778 = local_778 + 0x20;
      iVar11 = iVar11 + 1;
      iStack_77c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bce4a5e;
      uVar12 = puVar14[lVar9 + 1];
    }
    uVar7 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_700 = (int)lVar9;
    iStack_77c = local_778 + -1 + local_700;
    if (iVar3 < iStack_77c) {
      iStack_77c = iVar3;
    }
  }
LAB_14bce4a5e:
  iStack_770 = *(int *)&(this->ButtonIconDatas).field_0x8 -
               *(int *)&(this->ButtonIconDatas).field_0x34;
  uVar12 = *(uint *)&(this->ButtonIconDatas).field_0x28;
  uStack_780 = 0xffffffff;
  TStack_220._padding_ = CONCAT44(uVar7,iVar11);
  uVar15 = uVar12 & 0xffffffe0;
  TStack_220.CurrentBitIndex = iStack_77c;
  TStack_220.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_220._28_4_ = iStack_77c;
  TStack_220.BaseBitIndex = local_778;
  uStack_200 = CONCAT44(uStack_76c,iStack_770);
  local_798 = this_00;
  iStack_790 = iVar11;
  uStack_78c = uVar7;
  local_788 = puVar1;
  iStack_774 = iStack_77c;
  local_228 = this_00;
  TStack_220.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pUVar8 = (UDS_ButtonData *)(*pcVar4)();
    return pUVar8;
  }
  uVar7 = *(uint *)&(this->ButtonIconDatas).field_0x28;
  if (uVar12 != uVar7) {
    puVar13 = *(undefined1 **)&(this->ButtonIconDatas).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar15 = uVar15 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14bce4b70;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_14bce4b70:
  while( true ) {
    pTVar5 = local_228;
    if (*(int *)&local_228->field_0x8 - *(int *)&local_228->field_0x34 != (int)uStack_200) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_220.CurrentBitIndex == uVar12) &&
        (TStack_220.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == this_00)
       ) break;
    *(undefined1 *)(*(longlong *)pTVar5 + 0x38 + (longlong)TStack_220.CurrentBitIndex * 0x50) = 1;
    TStack_220.UnvisitedBitMask = TStack_220.UnvisitedBitMask & ~TStack_220._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_220);
  }
  return this;
}

// GetIconColor @ 14bcf7e20

FLinearColor * __thiscall
UDS_ButtonData::GetIconColor
          (UDS_ButtonData *this,FLinearColor *__return_storage_ptr__,EDS_ButtonStateType *param_1)

{
  EDS_ButtonStateType EVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  FDS_ButtonImageDatas *pFVar5;
  FLinearColor *pFVar6;
  undefined1 *puVar7;
  
  EVar1 = *param_1;
  if (*(int *)&(this->ButtonIconDatas).field_0x8 != *(int *)&(this->ButtonIconDatas).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ButtonIconDatas).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ButtonIconDatas).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->ButtonIconDatas).field_0x48 - Normal & EVar1) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->ButtonIconDatas;
      do {
        if (*(EDS_ButtonStateType *)(lVar2 + (longlong)iVar4 * 0x50) == EVar1) {
          pFVar5 = TMapBase<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>_>
                   ::FindChecked(&this->ButtonIconDatas,EVar1);
          if ((pFVar5->Color).ColorUseRule == UseColor_ColorTable) {
            pFVar6 = FSlateColor::GetColorFromTable(&pFVar5->Color);
            uVar3 = *(undefined8 *)((longlong)&pFVar6->field0_0x0 + 8);
            *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pFVar6->field0_0x0;
            *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar3;
            return __return_storage_ptr__;
          }
          uVar3 = *(undefined8 *)((longlong)&(pFVar5->Color).SpecifiedColor.field0_0x0 + 8);
          *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
               *(undefined8 *)&(pFVar5->Color).SpecifiedColor.field0_0x0;
          *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar3;
          return __return_storage_ptr__;
        }
        iVar4 = *(int *)(lVar2 + 0x48 + (longlong)iVar4 * 0x50);
      } while (iVar4 != -1);
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
  return __return_storage_ptr__;
}

// GetIconDrawType @ 14bcf7ed0

Type __thiscall UDS_ButtonData::GetIconDrawType(UDS_ButtonData *this,EDS_ButtonStateType *param_1)

{
  EDS_ButtonStateType EVar1;
  longlong lVar2;
  int iVar3;
  FDS_ButtonImageDatas *pFVar4;
  undefined1 *puVar5;
  
  EVar1 = *param_1;
  if (*(int *)&(this->ButtonIconDatas).field_0x8 != *(int *)&(this->ButtonIconDatas).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ButtonIconDatas).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ButtonIconDatas).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->ButtonIconDatas).field_0x48 - Normal & EVar1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->ButtonIconDatas;
      do {
        if (*(EDS_ButtonStateType *)(lVar2 + (longlong)iVar3 * 0x50) == EVar1) {
          pFVar4 = TMapBase<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>_>
                   ::FindChecked(&this->ButtonIconDatas,EVar1);
          if (pFVar4->ImageDrawType == None) {
            return NoDrawType;
          }
          if (pFVar4->ImageDrawType != Box) {
            return Image;
          }
          return Box;
        }
        iVar3 = *(int *)(lVar2 + 0x48 + (longlong)iVar3 * 0x50);
      } while (iVar3 != -1);
    }
  }
  return Image;
}

// GetIconMargin @ 14bcf7f60

FMargin * __thiscall
UDS_ButtonData::GetIconMargin
          (UDS_ButtonData *this,FMargin *__return_storage_ptr__,EDS_ButtonStateType *param_1)

{
  EDS_ButtonStateType EVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  FDS_ButtonImageDatas *pFVar7;
  undefined1 *puVar8;
  
  EVar1 = *param_1;
  if (*(int *)&(this->ButtonIconDatas).field_0x8 != *(int *)&(this->ButtonIconDatas).field_0x34) {
    puVar8 = *(undefined1 **)&(this->ButtonIconDatas).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->ButtonIconDatas).field_0x38;
    }
    iVar6 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->ButtonIconDatas).field_0x48 - Normal & EVar1) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&this->ButtonIconDatas;
      do {
        if (*(EDS_ButtonStateType *)(lVar2 + (longlong)iVar6 * 0x50) == EVar1) {
          pFVar7 = TMapBase<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>_>
                   ::FindChecked(&this->ButtonIconDatas,EVar1);
          fVar3 = (pFVar7->Margin).Top;
          fVar4 = (pFVar7->Margin).Right;
          fVar5 = (pFVar7->Margin).Bottom;
          __return_storage_ptr__->Left = (pFVar7->Margin).Left;
          __return_storage_ptr__->Top = fVar3;
          __return_storage_ptr__->Right = fVar4;
          __return_storage_ptr__->Bottom = fVar5;
          return __return_storage_ptr__;
        }
        iVar6 = *(int *)(lVar2 + 0x48 + (longlong)iVar6 * 0x50);
      } while (iVar6 != -1);
    }
  }
  __return_storage_ptr__->Left = 0.0;
  __return_storage_ptr__->Top = 0.0;
  __return_storage_ptr__->Right = 0.0;
  __return_storage_ptr__->Bottom = 0.0;
  return __return_storage_ptr__;
}

// GetIconObject @ 14bcf7ff0

UObject * __thiscall
UDS_ButtonData::GetIconObject(UDS_ButtonData *this,EDS_ButtonStateType *param_1)

{
  EDS_ButtonStateType EVar1;
  longlong lVar2;
  int iVar3;
  FDS_ButtonImageDatas *pFVar4;
  undefined1 *puVar5;
  
  EVar1 = *param_1;
  if (*(int *)&(this->ButtonIconDatas).field_0x8 != *(int *)&(this->ButtonIconDatas).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ButtonIconDatas).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ButtonIconDatas).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->ButtonIconDatas).field_0x48 - Normal & EVar1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->ButtonIconDatas;
      do {
        if (*(EDS_ButtonStateType *)(lVar2 + (longlong)iVar3 * 0x50) == EVar1) {
          pFVar4 = TMapBase<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>_>
                   ::FindChecked(&this->ButtonIconDatas,EVar1);
          return (pFVar4->ImageData).field0_0x0.DebugPtr;
        }
        iVar3 = *(int *)(lVar2 + 0x48 + (longlong)iVar3 * 0x50);
      } while (iVar3 != -1);
    }
  }
  return (UObject *)0x0;
}

// GetIconSize @ 14bcf82a0

TVector2<double> * __thiscall
UDS_ButtonData::GetIconSize
          (UDS_ButtonData *this,TVector2<double> *__return_storage_ptr__,
          EDS_ButtonStateType *param_1)

{
  TMap<EDS_ButtonStateType,FDS_ButtonImageDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ButtonStateType,FDS_ButtonImageDatas,0>_>
  *this_00;
  EDS_ButtonStateType EVar1;
  int iVar2;
  int iVar3;
  FDS_ButtonImageDatas *pFVar4;
  undefined1 *puVar5;
  
  EVar1 = *param_1;
  this_00 = &this->ButtonIconDatas;
  if (*(int *)&(this->ButtonIconDatas).field_0x8 != *(int *)&(this->ButtonIconDatas).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ButtonIconDatas).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ButtonIconDatas).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->ButtonIconDatas).field_0x48 - Normal & EVar1) * 4);
    if (iVar3 != -1) {
      do {
        if (*(EDS_ButtonStateType *)(*(longlong *)this_00 + (longlong)iVar3 * 0x50) == EVar1) {
          pFVar4 = TMapBase<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>_>
                   ::FindChecked(this_00,EVar1);
          iVar3 = pFVar4->IconSizeY;
          pFVar4 = TMapBase<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>_>
                   ::FindChecked(this_00,*param_1);
          iVar2 = pFVar4->IconSizeX;
          (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)iVar3;
          (__return_storage_ptr__->field0_0x0)._s_0.X = (double)iVar2;
          return __return_storage_ptr__;
        }
        iVar3 = *(int *)(*(longlong *)this_00 + 0x48 + (longlong)iVar3 * 0x50);
      } while (iVar3 != -1);
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  return __return_storage_ptr__;
}

// GetImageColor @ 14bcf8380

FLinearColor * __thiscall
UDS_ButtonData::GetImageColor
          (UDS_ButtonData *this,FLinearColor *__return_storage_ptr__,EDS_ButtonStateType *param_1)

{
  EDS_ButtonStateType EVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  FDS_ButtonImageDatas *pFVar5;
  FLinearColor *pFVar6;
  undefined1 *puVar7;
  
  EVar1 = *param_1;
  if (*(int *)&(this->ButtonImageDatas).field_0x8 != *(int *)&(this->ButtonImageDatas).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ButtonImageDatas).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ButtonImageDatas).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->ButtonImageDatas).field_0x48 - Normal & EVar1) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->ButtonImageDatas;
      do {
        if (*(EDS_ButtonStateType *)(lVar2 + (longlong)iVar4 * 0x50) == EVar1) {
          pFVar5 = TMapBase<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>_>
                   ::FindChecked(&this->ButtonImageDatas,EVar1);
          if ((pFVar5->Color).ColorUseRule == UseColor_ColorTable) {
            pFVar6 = FSlateColor::GetColorFromTable(&pFVar5->Color);
            uVar3 = *(undefined8 *)((longlong)&pFVar6->field0_0x0 + 8);
            *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pFVar6->field0_0x0;
            *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar3;
            return __return_storage_ptr__;
          }
          uVar3 = *(undefined8 *)((longlong)&(pFVar5->Color).SpecifiedColor.field0_0x0 + 8);
          *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
               *(undefined8 *)&(pFVar5->Color).SpecifiedColor.field0_0x0;
          *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar3;
          return __return_storage_ptr__;
        }
        iVar4 = *(int *)(lVar2 + 0x48 + (longlong)iVar4 * 0x50);
      } while (iVar4 != -1);
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
  return __return_storage_ptr__;
}

// GetImageDrawType @ 14bcf84e0

Type __thiscall UDS_ButtonData::GetImageDrawType(UDS_ButtonData *this,EDS_ButtonStateType *param_1)

{
  EDS_ButtonStateType EVar1;
  longlong lVar2;
  int iVar3;
  FDS_ButtonImageDatas *pFVar4;
  undefined1 *puVar5;
  
  EVar1 = *param_1;
  if (*(int *)&(this->ButtonImageDatas).field_0x8 != *(int *)&(this->ButtonImageDatas).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ButtonImageDatas).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ButtonImageDatas).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->ButtonImageDatas).field_0x48 - Normal & EVar1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->ButtonImageDatas;
      do {
        if (*(EDS_ButtonStateType *)(lVar2 + (longlong)iVar3 * 0x50) == EVar1) {
          pFVar4 = TMapBase<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>_>
                   ::FindChecked(&this->ButtonImageDatas,EVar1);
          if (pFVar4->ImageDrawType == None) {
            return NoDrawType;
          }
          if (pFVar4->ImageDrawType != Box) {
            return Image;
          }
          return Box;
        }
        iVar3 = *(int *)(lVar2 + 0x48 + (longlong)iVar3 * 0x50);
      } while (iVar3 != -1);
    }
  }
  return Image;
}

// GetImageMargin @ 14bcf8570

FMargin * __thiscall
UDS_ButtonData::GetImageMargin
          (UDS_ButtonData *this,FMargin *__return_storage_ptr__,EDS_ButtonStateType *param_1)

{
  EDS_ButtonStateType EVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  FDS_ButtonImageDatas *pFVar7;
  undefined1 *puVar8;
  
  EVar1 = *param_1;
  if (*(int *)&(this->ButtonImageDatas).field_0x8 != *(int *)&(this->ButtonImageDatas).field_0x34) {
    puVar8 = *(undefined1 **)&(this->ButtonImageDatas).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->ButtonImageDatas).field_0x38;
    }
    iVar6 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->ButtonImageDatas).field_0x48 - Normal & EVar1) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&this->ButtonImageDatas;
      do {
        if (*(EDS_ButtonStateType *)(lVar2 + (longlong)iVar6 * 0x50) == EVar1) {
          pFVar7 = TMapBase<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>_>
                   ::FindChecked(&this->ButtonImageDatas,EVar1);
          fVar3 = (pFVar7->Margin).Top;
          fVar4 = (pFVar7->Margin).Right;
          fVar5 = (pFVar7->Margin).Bottom;
          __return_storage_ptr__->Left = (pFVar7->Margin).Left;
          __return_storage_ptr__->Top = fVar3;
          __return_storage_ptr__->Right = fVar4;
          __return_storage_ptr__->Bottom = fVar5;
          return __return_storage_ptr__;
        }
        iVar6 = *(int *)(lVar2 + 0x48 + (longlong)iVar6 * 0x50);
      } while (iVar6 != -1);
    }
  }
  __return_storage_ptr__->Left = 0.0;
  __return_storage_ptr__->Top = 0.0;
  __return_storage_ptr__->Right = 0.0;
  __return_storage_ptr__->Bottom = 0.0;
  return __return_storage_ptr__;
}

// GetImageObject @ 14bcf8600

UObject * __thiscall
UDS_ButtonData::GetImageObject(UDS_ButtonData *this,EDS_ButtonStateType *param_1)

{
  EDS_ButtonStateType EVar1;
  longlong lVar2;
  int iVar3;
  FDS_ButtonImageDatas *pFVar4;
  undefined1 *puVar5;
  
  EVar1 = *param_1;
  if (*(int *)&(this->ButtonImageDatas).field_0x8 != *(int *)&(this->ButtonImageDatas).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ButtonImageDatas).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ButtonImageDatas).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->ButtonImageDatas).field_0x48 - Normal & EVar1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->ButtonImageDatas;
      do {
        if (*(EDS_ButtonStateType *)(lVar2 + (longlong)iVar3 * 0x50) == EVar1) {
          pFVar4 = TMapBase<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>_>
                   ::FindChecked(&this->ButtonImageDatas,EVar1);
          return (pFVar4->ImageData).field0_0x0.DebugPtr;
        }
        iVar3 = *(int *)(lVar2 + 0x48 + (longlong)iVar3 * 0x50);
      } while (iVar3 != -1);
    }
  }
  return (UObject *)0x0;
}

// GetTextStyle @ 14bcfe8f0

TObjectPtr<UCommonTextStyle> __thiscall
UDS_ButtonData::GetTextStyle(UDS_ButtonData *this,EDS_ButtonStateType *param_1)

{
  TMap<EDS_ButtonStateType,FDS_ButtonTextDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ButtonStateType,FDS_ButtonTextDatas,0>_>
  *this_00;
  EDS_ButtonStateType EVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDS_ButtonTextDatas *pFVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  TObjectPtr<UCommonTextStyle> TVar9;
  EDS_ButtonStateType *in_R8;
  undefined1 *puVar10;
  
  this_00 = &this->ButtonTextData;
  EVar1 = *in_R8;
  if (*(int *)&(this->ButtonTextData).field_0x8 != *(int *)&(this->ButtonTextData).field_0x34) {
    puVar10 = *(undefined1 **)&(this->ButtonTextData).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ButtonTextData).field_0x38;
    }
    iVar5 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(this->ButtonTextData).field_0x48 - Normal & EVar1) * 4);
    if (iVar5 != -1) {
      do {
        if (*(EDS_ButtonStateType *)(*(longlong *)this_00 + (longlong)iVar5 * 0x18) == EVar1) {
          pFVar6 = TMapBase<enum_EDS_ButtonStateType,FDS_ButtonTextDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonTextDatas,0>_>
                   ::FindChecked(this_00,EVar1);
          pUVar8 = (pFVar6->TextStyle).Class.field0_0x0.DebugPtr;
          if ((pUVar8 != (UClass *)0x0) &&
             (pUVar7 = Z_Construct_UClass_UCommonTextStyle_NoRegister(), pUVar7 != (UClass *)0x0)) {
            iVar5 = (int)pUVar7->_padding_;
            if (((int)pUVar8->_padding_ < iVar5) ||
               ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar5 * 8) !=
                &pUVar7->_padding_)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if ((bVar4) && ((pFVar6->TextStyle).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
              pFVar6 = TMapBase<enum_EDS_ButtonStateType,FDS_ButtonTextDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonTextDatas,0>_>
                       ::FindChecked(this_00,*in_R8);
              pUVar8 = (pFVar6->TextStyle).Class.field0_0x0.DebugPtr;
              if ((pUVar8 != (UClass *)0x0) &&
                 (pUVar7 = Z_Construct_UClass_UCommonTextStyle_NoRegister(), pUVar7 != (UClass *)0x0
                 )) {
                iVar5 = (int)pUVar7->_padding_;
                if (((int)pUVar8->_padding_ < iVar5) ||
                   ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar5 * 8) !=
                    &pUVar7->_padding_)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (bVar4) {
                  pUVar8 = (pFVar6->TextStyle).Class.field0_0x0.DebugPtr;
                  goto LAB_14bcfea1b;
                }
              }
              pUVar8 = (UClass *)0x0;
LAB_14bcfea1b:
              if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
                UClass::InternalCreateDefaultObjectWrapper(pUVar8);
              }
              pUVar2 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
              pUVar8 = Z_Construct_UClass_UCommonTextStyle_NoRegister();
              iVar5 = (int)pUVar8->_padding_;
              if (((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar5) ||
                  ((longlong *)
                   *(undefined1 **)
                    (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar5 * 8)
                   != &pUVar8->_padding_)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Ret->IsA(T::StaticClass())",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                     ,0x1181,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                TVar9.field0_0x0 = (TObjectPtr<UCommonTextStyle>_u_0)(*pcVar3)();
                return (TObjectPtr<UCommonTextStyle>)TVar9.field0_0x0;
              }
              *(UObject **)param_1 = pUVar2;
              if (UE::GC::GIsIncrementalReachabilityPending == false) {
                return (TObjectPtr<UCommonTextStyle>)(TObjectPtr<UCommonTextStyle>_u_0)param_1;
              }
              UE::GC::MarkAsReachable(pUVar2);
              return (TObjectPtr<UCommonTextStyle>)(TObjectPtr<UCommonTextStyle>_u_0)param_1;
            }
          }
          break;
        }
        iVar5 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar5 * 0x18);
      } while (iVar5 != -1);
    }
  }
  param_1[0] = Void;
  param_1[1] = Void;
  return (TObjectPtr<UCommonTextStyle>)(TObjectPtr<UCommonTextStyle>_u_0)param_1;
}

// IsIconSizeZero @ 14bd05d00

bool __thiscall UDS_ButtonData::IsIconSizeZero(UDS_ButtonData *this,EDS_ButtonStateType *param_1)

{
  TMap<EDS_ButtonStateType,FDS_ButtonImageDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ButtonStateType,FDS_ButtonImageDatas,0>_>
  *this_00;
  EDS_ButtonStateType EVar1;
  int iVar2;
  FDS_ButtonImageDatas *pFVar3;
  undefined1 *puVar4;
  
  this_00 = &this->ButtonIconDatas;
  EVar1 = *param_1;
  if (*(int *)&(this->ButtonIconDatas).field_0x8 != *(int *)&(this->ButtonIconDatas).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ButtonIconDatas).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ButtonIconDatas).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->ButtonIconDatas).field_0x48 - Normal & EVar1) * 4);
    if (iVar2 != -1) {
      do {
        if (*(EDS_ButtonStateType *)(*(longlong *)this_00 + (longlong)iVar2 * 0x50) == EVar1) {
          pFVar3 = TMapBase<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>_>
                   ::FindChecked(this_00,EVar1);
          if (pFVar3->IconSizeX == 0) {
            return true;
          }
          pFVar3 = TMapBase<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>_>
                   ::FindChecked(this_00,*param_1);
          if (pFVar3->IconSizeY == 0) {
            return true;
          }
          return false;
        }
        iVar2 = *(int *)(*(longlong *)this_00 + 0x48 + (longlong)iVar2 * 0x50);
      } while (iVar2 != -1);
    }
  }
  return true;
}

