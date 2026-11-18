// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147aa87b0

UClass * __cdecl ADebugCameraHUD::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADebugCameraHUD.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DebugCameraHUD",
               &Z_Registration_Info_UClass_ADebugCameraHUD.InnerSingleton,
               StaticRegisterNativesADebugCameraHUD,0x3b0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<ADebugCameraHUD>,InternalVTableHelperCtorCaller<ADebugCameraHUD>,
               local_res8,AHUD::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADebugCameraHUD.InnerSingleton;
}

// ADebugCameraHUD @ 147aba560

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ADebugCameraHUD * __thiscall
ADebugCameraHUD::ADebugCameraHUD(ADebugCameraHUD *this,FVTableHelper *param_1)

{
  AHUD::AHUD((AHUD *)this,param_1);
  *(undefined ***)this = &___7ADebugCameraHUD__6B_;
  return this;
}

// ADebugCameraHUD @ 147aba590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ADebugCameraHUD * __thiscall
ADebugCameraHUD::ADebugCameraHUD(ADebugCameraHUD *this,FObjectInitializer *param_1)

{
  AHUD::AHUD((AHUD *)this,param_1);
  *(undefined ***)this = &___7ADebugCameraHUD__6B_;
  AActor::SetHidden((AActor *)this,false);
  return this;
}

// ~ADebugCameraHUD @ 147abec40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraHUD::~ADebugCameraHUD(ADebugCameraHUD *this)

{
  *(undefined ***)this = &___7ADebugCameraHUD__6B_;
  AHUD::~AHUD((AHUD *)this);
  return;
}

// DisplayMaterials @ 147ad0700

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
ADebugCameraHUD::DisplayMaterials
          (ADebugCameraHUD *this,float param_1,float *param_2,float param_3,UMeshComponent *param_4)

{
  float fVar1;
  UCanvas *this_00;
  float fVar2;
  UMeshComponent *pUVar3;
  bool bVar4;
  int iVar5;
  UFont *pUVar6;
  longlong lVar7;
  int iVar8;
  TVector2<double>_u_0 local_d8;
  TVector2<double>_u_0 local_c8;
  FLinearColor_u_0 local_b8;
  FString local_a8;
  FFontRenderInfo local_98 [2];
  
  pUVar3 = param_4;
  bVar4 = false;
  if (param_4 == (UMeshComponent *)0x0) {
    bVar4 = false;
  }
  else {
    local_c8._s_0.X = 0.0;
    local_c8._s_0.Y = 0.0;
    local_d8._s_0.X = 0.0;
    local_d8._s_0.Y = 0.0;
    local_b8._0_8_ = (void *)0x0;
    local_b8._8_8_ = 0.0;
    UCanvas::CreateFontRenderInfo
              (*(UCanvas **)&this->field_0x310,local_98,false,true,(FLinearColor *)&local_b8._s_0,
               (TVector2<double> *)&local_d8._s_0,(TVector2<double> *)&local_c8._s_0);
    pUVar6 = UEngine::GetSmallFont();
    iVar8 = 0;
    iVar5 = (**(code **)(pUVar3->_padding_ + 0x810))(pUVar3);
    fVar2 = __real_3f800000;
    if (0 < iVar5) {
      do {
        lVar7 = (**(code **)(pUVar3->_padding_ + 0x690))(pUVar3,iVar8);
        if (lVar7 != 0) {
          fVar1 = *param_2;
          *param_2 = param_3 + fVar1;
          param_4 = *(UMeshComponent **)(lVar7 + 0x18);
          this_00 = *(UCanvas **)&this->field_0x310;
          ::FName::ToString((FName *)&param_4,&local_a8);
          ::FString::PrintfImpl((FString *)&local_d8._s_0,L"Material: \'%s\'");
          local_c8._s_0.X = local_d8._s_0.X;
          iVar5 = SUB84(local_d8._s_0.Y,0) + -1;
          if (SUB84(local_d8._s_0.Y,0) == 0) {
            iVar5 = 0;
          }
          local_c8._8_4_ = iVar5;
          local_b8._0_8_ = local_d8._s_0.X;
          local_b8._8_8_ = local_c8._s_0.Y;
          UCanvas::DrawText(this_00,pUVar6,(TStringView<wchar_t> *)&local_b8._s_0,param_1 + param_3,
                            param_3 + fVar1,fVar2,fVar2,local_98);
          if ((void *)local_d8._s_0.X != (void *)0x0) {
            FMemory::Free((void *)local_d8._s_0.X);
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          bVar4 = true;
        }
        iVar8 = iVar8 + 1;
        iVar5 = (**(code **)(pUVar3->_padding_ + 0x810))(pUVar3);
      } while (iVar8 < iVar5);
    }
  }
  return bVar4;
}

// GetPrivateStaticClass @ 147aeaf00

UClass * __cdecl ADebugCameraHUD::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADebugCameraHUD.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DebugCameraHUD",
               &Z_Registration_Info_UClass_ADebugCameraHUD.InnerSingleton,
               StaticRegisterNativesADebugCameraHUD,0x3b0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<ADebugCameraHUD>,InternalVTableHelperCtorCaller<ADebugCameraHUD>,
               local_res8,AHUD::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADebugCameraHUD.InnerSingleton;
}

// PostRender @ 147afccc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADebugCameraHUD::PostRender(ADebugCameraHUD *this)

{
  FWeakObjectPtr *this_00;
  uint uVar1;
  UCanvas *pUVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  TConsoleVariableData<int> *pTVar7;
  float fVar8;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar9;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar10;
  bool bVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  UClass *pUVar15;
  UFont *pUVar16;
  FBufferVisualizationData *this_01;
  FName *pFVar17;
  UMaterialInterface *pUVar18;
  longlong lVar19;
  longlong *plVar20;
  UWorld *pUVar21;
  UGameViewportClient *pUVar22;
  TStatId TVar23;
  TVector<double> *pTVar24;
  UObject *pUVar25;
  UObject *pUVar26;
  AActor *this_02;
  byte bVar27;
  wchar_t *pwVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar33;
  UCanvas *pUVar34;
  uint *puVar35;
  ulonglong uVar36;
  float fVar37;
  float fVar38;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar39 [16];
  float fVar40;
  undefined1 auStackY_af8 [32];
  float local_ab8;
  uint local_ab4;
  UCanvas *local_ab0;
  undefined1 local_aa8 [8];
  undefined8 local_aa0;
  float local_a98 [4];
  FFontRenderInfo local_a88;
  FString local_a48;
  FString local_a38;
  undefined8 local_a28;
  TVector<double>_u_0 local_a20;
  float local_a08;
  float local_a04;
  int local_a00;
  FName local_9fc;
  FName local_9f4;
  FName local_9ec;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_9e0;
  UFont *local_9d8;
  FName local_9d0;
  FName local_9c8;
  FName local_9c0;
  FString local_9b8;
  FString local_9a8;
  FString local_998;
  FString local_988;
  FString local_978;
  FString local_968;
  FString local_958;
  FString local_948;
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
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_898;
  uint uStack_890;
  undefined4 uStack_88c;
  undefined1 *local_888;
  undefined4 uStack_880;
  uint uStack_87c;
  uint local_878;
  undefined4 uStack_874;
  int iStack_870;
  undefined4 uStack_86c;
  FString local_868;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_858;
  undefined1 auStack_850 [16];
  uint uStack_840;
  uint uStack_83c;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined4 uStack_810;
  undefined1 uStack_80c;
  undefined2 uStack_80b;
  undefined1 uStack_809;
  TRotator<double> local_808;
  FScriptContainerElement *local_7e8;
  uint uStack_7e0;
  undefined4 uStack_7dc;
  FScriptContainerElement *local_7d8;
  uint uStack_7d0;
  undefined4 uStack_7cc;
  FScriptContainerElement *local_7c8;
  uint uStack_7c0;
  undefined4 uStack_7bc;
  FScriptContainerElement *local_7b8;
  uint uStack_7b0;
  undefined4 uStack_7ac;
  FScriptContainerElement *local_7a8;
  uint uStack_7a0;
  undefined4 uStack_79c;
  FScriptContainerElement *local_798;
  uint uStack_790;
  undefined4 uStack_78c;
  FScriptContainerElement *local_788;
  uint uStack_780;
  undefined4 uStack_77c;
  FScriptContainerElement *local_778;
  uint uStack_770;
  undefined4 uStack_76c;
  FScriptContainerElement *local_768;
  uint uStack_760;
  undefined4 uStack_75c;
  FScriptContainerElement *local_758;
  uint uStack_750;
  undefined4 uStack_74c;
  FScriptContainerElement *local_748;
  uint uStack_740;
  undefined4 uStack_73c;
  FScriptContainerElement *local_738;
  uint uStack_730;
  undefined4 uStack_72c;
  FScriptContainerElement *local_728;
  uint uStack_720;
  undefined4 uStack_71c;
  wchar_t *local_718;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  wchar_t *local_708;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  FScriptContainerElement *local_6f8;
  int iStack_6f0;
  undefined4 uStack_6ec;
  FScriptContainerElement *local_6e8;
  int iStack_6e0;
  undefined4 uStack_6dc;
  FScriptContainerElement *local_6d8;
  int iStack_6d0;
  undefined4 uStack_6cc;
  wchar_t *local_6c8;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  wchar_t *local_6b8;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  wchar_t *local_6a8;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  wchar_t *local_698;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  wchar_t *local_688;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  wchar_t *local_678;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  wchar_t *local_668;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  wchar_t *local_658;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  wchar_t *local_648;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  FScriptContainerElement *local_638;
  uint uStack_630;
  undefined4 uStack_62c;
  FScriptContainerElement *local_628;
  uint uStack_620;
  undefined4 uStack_61c;
  FScriptContainerElement *local_618;
  uint uStack_610;
  undefined4 uStack_60c;
  FScriptContainerElement *local_608;
  uint uStack_600;
  undefined4 uStack_5fc;
  TVector<double>_u_0 local_5f8;
  TVector<double>_u_0 local_5e0;
  TVector<double>_u_0 local_5c8;
  FLinearColor_u_0 local_5a8;
  TStringView<wchar_t> local_598;
  TStringView<wchar_t> local_588;
  TStringView<wchar_t> local_578;
  TStringView<wchar_t> local_568;
  TStringView<wchar_t> local_558;
  TStringView<wchar_t> local_548;
  TStringView<wchar_t> local_538;
  TStringView<wchar_t> local_528;
  TStringView<wchar_t> local_518;
  TStringView<wchar_t> local_508;
  TStringView<wchar_t> local_4f8;
  FString local_4e8;
  TStringView<wchar_t> local_4d8;
  FString local_4c8;
  TStringView<wchar_t> local_4b8;
  TStringView<wchar_t> local_4a8;
  FString local_498;
  TStringView<wchar_t> local_488;
  FString local_478;
  TStringView<wchar_t> local_468;
  TStringView<wchar_t> local_458;
  TStringView<wchar_t> local_448;
  FString local_438;
  TStringView<wchar_t> local_428;
  FString local_418;
  TStringView<wchar_t> local_408;
  FString local_3f8;
  TStringView<wchar_t> local_3e8;
  TStringView<wchar_t> local_3d8;
  TStringView<wchar_t> local_3c8;
  TStringView<wchar_t> local_3b8;
  TStringView<wchar_t> local_3a8;
  TStringView<wchar_t> local_398;
  TStringView<wchar_t> local_388;
  TStringView<wchar_t> local_378;
  TStringView<wchar_t> local_368;
  TVector2<double>_u_0 local_358;
  FName local_340;
  TStringView<wchar_t> local_338;
  TVector2<double>_u_0 local_328;
  TVector2<double>_u_0 local_318;
  TVector2<double>_u_0 local_308;
  FLinearColor_u_0 local_2f8;
  TStringView<wchar_t> local_2e8;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  double local_2b8;
  double local_298;
  double dStack_290;
  double local_288;
  int local_234;
  FWeakObjectPtr local_228;
  FActorInstanceHandle local_220;
  FWeakObjectPtr local_200 [5];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  TVector<double> local_1a8 [2];
  undefined4 local_174;
  FFontRenderInfo local_168;
  FCollisionQueryParams local_128;
  ulonglong local_98;
  ulonglong uVar32;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_af8;
  uVar32 = 0;
  uVar31 = 0;
  local_a98[0] = 0.0;
  AHUD::PostRender((AHUD *)this);
  if ((this->field_0x2c8 & 2) == 0) {
    return;
  }
  uVar36 = uVar32;
  if (*(longlong *)&this->field_0x2c0 != 0) {
    pUVar15 = ADebugCameraController::StaticClass();
    bVar11 = FObjectPtr::IsA((FObjectPtr *)&this->field_0x2c0,pUVar15);
    if (bVar11) {
      uVar36 = *(ulonglong *)&this->field_0x2c0;
    }
  }
  pUVar16 = UEngine::GetSmallFont();
  if (uVar36 == 0) {
    return;
  }
  local_9d8 = pUVar16;
  bVar11 = AllowDebugViewmodes();
  if ((!bVar11) || ((*(byte *)(uVar36 + 0x788) & 0x20) == 0)) {
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_328._s_0.X = 0.0;
    local_328._s_0.Y = 0.0;
    local_318._s_0.X = 0.0;
    local_318._s_0.Y = 0.0;
    local_5a8._0_8_ = 0;
    local_5a8._8_8_ = 0;
    UCanvas::CreateFontRenderInfo
              (*(UCanvas **)&this->field_0x310,&local_a88,false,true,(FLinearColor *)&local_5a8._s_0
               ,(TVector2<double> *)&local_318._s_0,(TVector2<double> *)&local_328._s_0);
    UCanvas::SetDrawColor(*(UCanvas **)&this->field_0x310,'@','@',0xff,0xff);
    ::FString::FString(&local_a38,L"Debug Camera");
    local_618 = local_a38.Data.AllocatorInstance.Data;
    uStack_610 = uVar31;
    if (local_a38.Data.ArrayNum != 0) {
      uStack_610 = local_a38.Data.ArrayNum - 1;
    }
    local_598._12_4_ = uStack_60c;
    local_598.Size = uStack_610;
    local_598.DataPtr = (wchar_t *)local_a38.Data.AllocatorInstance.Data;
    UCanvas::StrLen(*(UCanvas **)&this->field_0x310,pUVar16,&local_598,&local_a04,&local_ab8,false);
    fVar8 = local_ab8;
    fVar37 = __real_3f800000;
    local_608 = local_a38.Data.AllocatorInstance.Data;
    auVar39 = roundps(unaff_XMM8,
                      ZEXT416((uint)((float)(*(UCanvas **)&this->field_0x310)->SizeX *
                                    __real_3d4ccccd)),1);
    local_ab8 = local_ab8 + local_ab8 + local_ab8;
    uStack_600 = uVar31;
    if (local_a38.Data.ArrayNum != 0) {
      uStack_600 = local_a38.Data.ArrayNum - 1;
    }
    fVar38 = auVar39._0_4_;
    local_588._12_4_ = uStack_5fc;
    local_588.Size = uStack_600;
    local_588.DataPtr = (wchar_t *)local_a38.Data.AllocatorInstance.Data;
    UCanvas::DrawText(*(UCanvas **)&this->field_0x310,pUVar16,&local_588,fVar38,local_ab8,
                      __real_3f800000,__real_3f800000,&local_a88);
    UCanvas::SetDrawColor(*(UCanvas **)&this->field_0x310,200,200,0x80,0xff);
    (**(code **)(**(longlong **)(uVar36 + 0x390) + 0x848))
              (*(longlong **)(uVar36 + 0x390),&local_a20);
    (**(code **)(**(longlong **)(uVar36 + 0x390) + 0x840))
              (*(longlong **)(uVar36 + 0x390),&local_808);
    (**(code **)(**(longlong **)(uVar36 + 0x390) + 0x800))();
    local_ab8 = local_ab8 + fVar8;
    ::FString::PrintfImpl(&local_8a8,L"Loc=(%.1f, %.1f, %.1f) Rot=(%.1f, %.1f, %.1f)");
    local_7e8 = local_8a8.Data.AllocatorInstance.Data;
    uStack_7e0 = uVar31;
    if (local_8a8.Data.ArrayNum != 0) {
      uStack_7e0 = local_8a8.Data.ArrayNum - 1;
    }
    local_578._12_4_ = uStack_7dc;
    local_578.Size = uStack_7e0;
    local_578.DataPtr = (wchar_t *)local_8a8.Data.AllocatorInstance.Data;
    UCanvas::DrawText(*(UCanvas **)&this->field_0x310,pUVar16,&local_578,fVar38,local_ab8,fVar37,
                      fVar37,&local_a88);
    local_ab8 = local_ab8 + fVar8;
    ::FString::PrintfImpl(&local_868,L"HFOV=%.1f");
    local_7d8 = local_868.Data.AllocatorInstance.Data;
    uStack_7d0 = uVar31;
    if (local_868.Data.ArrayNum != 0) {
      uStack_7d0 = local_868.Data.ArrayNum - 1;
    }
    local_568._12_4_ = uStack_7cc;
    local_568.Size = uStack_7d0;
    local_568.DataPtr = (wchar_t *)local_868.Data.AllocatorInstance.Data;
    UCanvas::DrawText(*(UCanvas **)&this->field_0x310,pUVar16,&local_568,fVar38,local_ab8,fVar37,
                      fVar37,&local_a88);
    local_ab8 = local_ab8 + fVar8;
    ::FString::PrintfImpl(&local_8c8,L"SpeedScale=%.2fx");
    local_7c8 = local_8c8.Data.AllocatorInstance.Data;
    uStack_7c0 = uVar31;
    if (local_8c8.Data.ArrayNum != 0) {
      uStack_7c0 = local_8c8.Data.ArrayNum - 1;
    }
    local_558._12_4_ = uStack_7bc;
    local_558.Size = uStack_7c0;
    local_558.DataPtr = (wchar_t *)local_8c8.Data.AllocatorInstance.Data;
    UCanvas::DrawText(*(UCanvas **)&this->field_0x310,pUVar16,&local_558,fVar38,local_ab8,fVar37,
                      fVar37,&local_a88);
    local_ab8 = local_ab8 + fVar8;
    if ((*(longlong **)(uVar36 + 0x6f8) != (longlong *)0x0) &&
       (lVar19 = (**(code **)(**(longlong **)(uVar36 + 0x6f8) + 0x760))(), lVar19 != 0)) {
      plVar20 = (longlong *)(**(code **)(**(longlong **)(uVar36 + 0x6f8) + 0x760))();
      (**(code **)(*plVar20 + 0x500))(plVar20);
    }
    ::FString::PrintfImpl(&local_8d8,L"MaxSpeed=%.1f");
    local_7b8 = local_8d8.Data.AllocatorInstance.Data;
    uStack_7b0 = uVar31;
    if (local_8d8.Data.ArrayNum != 0) {
      uStack_7b0 = local_8d8.Data.ArrayNum - 1;
    }
    local_548._12_4_ = uStack_7ac;
    local_548.Size = uStack_7b0;
    local_548.DataPtr = (wchar_t *)local_8d8.Data.AllocatorInstance.Data;
    UCanvas::DrawText(*(UCanvas **)&this->field_0x310,pUVar16,&local_548,fVar38,local_ab8,fVar37,
                      fVar37,&local_a88);
    local_ab8 = local_ab8 + fVar8;
    bVar11 = AllowDebugViewmodes();
    if (bVar11) {
      pUVar21 = AActor::GetWorld((AActor *)this);
      pUVar22 = UWorld::GetGameViewport(pUVar21);
      if (pUVar22 != (UGameViewportClient *)0x0) {
        pUVar21 = AActor::GetWorld((AActor *)this);
        pUVar22 = UWorld::GetGameViewport(pUVar21);
        GetViewModeName(pUVar22->ViewModeIndex);
      }
      ::FString::PrintfImpl(&local_9b8,L"ViewMode=%s");
      local_7a8 = local_9b8.Data.AllocatorInstance.Data;
      uStack_7a0 = uVar31;
      if (local_9b8.Data.ArrayNum != 0) {
        uStack_7a0 = local_9b8.Data.ArrayNum - 1;
      }
      local_538._12_4_ = uStack_79c;
      local_538.Size = uStack_7a0;
      local_538.DataPtr = (wchar_t *)local_9b8.Data.AllocatorInstance.Data;
      UCanvas::DrawText(*(UCanvas **)&this->field_0x310,pUVar16,&local_538,fVar38,local_ab8,fVar37,
                        fVar37,&local_a88);
      local_ab8 = local_ab8 + fVar8;
      if (local_9b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9b8.Data.AllocatorInstance.Data);
      }
    }
    pTVar7 = CVarDebugCameraTraceComplex.Ref;
    bVar11 = IsInParallelGameThread();
    if (((!bVar11) && (bVar11 = IsInGameThread(), !bVar11)) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar14 = pTVar7->ShadowedValue[0];
    TVar23 = FCollisionQueryParams::GetUnknownStatId();
    local_a28 = 0;
    FCollisionQueryParams::FCollisionQueryParams
              (&local_128,(FName)0x0,(TStatId *)TVar23.StatIdPtr,iVar14 != 0,(AActor *)this);
    local_128.bReturnPhysicalMaterial = true;
    memset(local_2d8,0,0x100);
    uStack_80b = 0;
    local_828 = 0;
    uStack_820 = 0;
    uStack_809 = 0;
    local_220.ReferenceObject.WeakPtr.ObjectIndex = 0;
    local_220.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
    local_220.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
    local_220.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
    local_818 = 0;
    uStack_810 = 0xffffffff;
    uStack_80c = 0;
    local_220.InstanceIndex = -1;
    local_220.ResolutionStatus = Invalid;
    local_220._29_3_ = 0;
    local_2d8._4_4_ = 1.0;
    local_234 = -1;
    local_220.ManagerInterface.InterfaceInstance = (IActorInstanceManagerInterface *)0x0;
    pUVar21 = AActor::GetWorld((AActor *)this);
    pTVar24 = UE::Math::TRotator<double>::Vector(&local_808,local_1a8);
    local_5f8._s_0.Z = (pTVar24->field0_0x0)._s_0.Z * __real_40f86a0000000000 + local_a20._s_0.Z;
    local_5f8._s_0.Y = (pTVar24->field0_0x0)._s_0.Y * __real_40f86a0000000000 + local_a20._s_0.Y;
    local_5f8._s_0.X = (pTVar24->field0_0x0)._s_0.X * __real_40f86a0000000000 + local_a20._s_0.X;
    bVar11 = UWorld::LineTraceSingleByChannel
                       (pUVar21,(FHitResult *)local_2d8,(TVector<double> *)&local_a20._s_0,
                        (TVector<double> *)&local_5f8._s_0,ECC_Visibility,&local_128,
                        &FCollisionResponseParams::DefaultResponseParam);
    fVar40 = local_ab8 + fVar8;
    local_ab0 = *(UCanvas **)&this->field_0x310;
    local_ab8 = fVar40;
    ::FString::PrintfImpl(&local_9a8,L"Trace info (%s = %d):");
    local_798 = local_9a8.Data.AllocatorInstance.Data;
    uStack_790 = uVar31;
    if (local_9a8.Data.ArrayNum != 0) {
      uStack_790 = local_9a8.Data.ArrayNum - 1;
    }
    local_528._12_4_ = uStack_78c;
    local_528.Size = uStack_790;
    local_528.DataPtr = (wchar_t *)local_9a8.Data.AllocatorInstance.Data;
    UCanvas::DrawText(local_ab0,pUVar16,&local_528,fVar38,fVar40,fVar37,fVar37,&local_a88);
    if (local_9a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9a8.Data.AllocatorInstance.Data);
    }
    local_ab0 = *(UCanvas **)&this->field_0x310;
    if (bVar11) {
      fVar40 = local_ab8 + fVar8;
      local_ab8 = fVar40;
      ::FString::PrintfImpl(&local_978,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_988,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_998,L"HitLoc:%s HitNorm:%s");
      local_788 = local_998.Data.AllocatorInstance.Data;
      uStack_780 = uVar31;
      if (local_998.Data.ArrayNum != 0) {
        uStack_780 = local_998.Data.ArrayNum - 1;
      }
      local_518._12_4_ = uStack_77c;
      local_518.Size = uStack_780;
      local_518.DataPtr = (wchar_t *)local_998.Data.AllocatorInstance.Data;
      UCanvas::DrawText(local_ab0,pUVar16,&local_518,fVar38,fVar40,fVar37,fVar37,&local_a88);
      if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_998.Data.AllocatorInstance.Data);
      }
      if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_988.Data.AllocatorInstance.Data);
      }
      if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_978.Data.AllocatorInstance.Data);
      }
      fVar40 = local_ab8 + fVar8;
      pUVar2 = *(UCanvas **)&this->field_0x310;
      local_ab8 = fVar40;
      ::FString::PrintfImpl(&local_968,L"HitDist: %f");
      local_778 = local_968.Data.AllocatorInstance.Data;
      uStack_770 = uVar31;
      if (local_968.Data.ArrayNum != 0) {
        uStack_770 = local_968.Data.ArrayNum - 1;
      }
      local_508._12_4_ = uStack_76c;
      local_508.Size = uStack_770;
      local_508.DataPtr = (wchar_t *)local_968.Data.AllocatorInstance.Data;
      UCanvas::DrawText(pUVar2,pUVar16,&local_508,fVar38,fVar40,fVar37,fVar37,&local_a88);
      if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_968.Data.AllocatorInstance.Data);
      }
      pUVar2 = *(UCanvas **)&this->field_0x310;
      fVar40 = local_ab8 + fVar8;
      local_ab8 = fVar40;
      FActorInstanceHandle::GetName(&local_220,&local_4e8);
      ::FString::PrintfImpl(&local_958,L"HitObject: \'%s\'");
      local_768 = local_958.Data.AllocatorInstance.Data;
      uStack_760 = uVar31;
      if (local_958.Data.ArrayNum != 0) {
        uStack_760 = local_958.Data.ArrayNum - 1;
      }
      local_4f8._12_4_ = uStack_75c;
      local_4f8.Size = uStack_760;
      local_4f8.DataPtr = (wchar_t *)local_958.Data.AllocatorInstance.Data;
      UCanvas::DrawText(pUVar2,pUVar16,&local_4f8,fVar38,fVar40,fVar37,fVar37,&local_a88);
      if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_958.Data.AllocatorInstance.Data);
      }
      if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
      }
      local_ab0 = *(UCanvas **)&this->field_0x310;
      fVar40 = local_ab8 + fVar8;
      local_ab8 = fVar40;
      pUVar25 = FWeakObjectPtr::Get(local_200);
      local_aa0 = 1;
      if (pUVar25 != (UObject *)0x0) {
        pUVar26 = FWeakObjectPtr::Get(local_200);
        local_9f4.ComparisonIndex.Value = *(uint *)&pUVar26->field_0x18;
        local_9f4.Number = *(uint *)&pUVar26->field_0x1c;
        ::FName::ToString(&local_9f4,&local_4c8);
      }
      ::FString::PrintfImpl(&local_948,L"HitComponent: \'%s\'");
      local_758 = local_948.Data.AllocatorInstance.Data;
      uStack_750 = uVar31;
      if (local_948.Data.ArrayNum != 0) {
        uStack_750 = local_948.Data.ArrayNum - 1;
      }
      local_4d8._12_4_ = uStack_74c;
      local_4d8.Size = uStack_750;
      local_4d8.DataPtr = (wchar_t *)local_948.Data.AllocatorInstance.Data;
      UCanvas::DrawText(local_ab0,pUVar16,&local_4d8,fVar38,fVar40,fVar37,fVar37,&local_a88);
      if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_948.Data.AllocatorInstance.Data);
      }
      if ((pUVar25 != (UObject *)0x0) &&
         (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
      }
      local_ab8 = local_ab8 + fVar8;
      pUVar15 = FActorInstanceHandle::GetRepresentedClass(&local_220);
      fVar40 = local_ab8;
      local_ab0 = *(UCanvas **)&this->field_0x310;
      if (pUVar15 != (UClass *)0x0) {
        local_9ec = (FName)pUVar15->_padding_;
        ::FName::ToString(&local_9ec,&local_928);
      }
      ::FString::PrintfImpl(&local_938,L"HitHandle Class: \'%s\'");
      local_748 = local_938.Data.AllocatorInstance.Data;
      uStack_740 = uVar31;
      if (local_938.Data.ArrayNum != 0) {
        uStack_740 = local_938.Data.ArrayNum - 1;
      }
      local_4b8._12_4_ = uStack_73c;
      local_4b8.Size = uStack_740;
      local_4b8.DataPtr = (wchar_t *)local_938.Data.AllocatorInstance.Data;
      UCanvas::DrawText(local_ab0,pUVar16,&local_4b8,fVar38,fVar40,fVar37,fVar37,&local_a88);
      if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_938.Data.AllocatorInstance.Data);
      }
      if ((pUVar15 != (UClass *)0x0) &&
         (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_928.Data.AllocatorInstance.Data);
      }
      local_ab8 = local_ab8 + fVar8;
      this_02 = FActorInstanceHandle::FetchActor(&local_220);
      fVar40 = local_ab8;
      local_ab0 = *(UCanvas **)&this->field_0x310;
      if (this_02 != (AActor *)0x0) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_02,&local_498,(UObject *)0x0);
      }
      ::FString::PrintfImpl(&local_918,L"HitActorPath: \'%s\'");
      local_738 = local_918.Data.AllocatorInstance.Data;
      uStack_730 = uVar31;
      if (local_918.Data.ArrayNum != 0) {
        uStack_730 = local_918.Data.ArrayNum - 1;
      }
      local_4a8._12_4_ = uStack_72c;
      local_4a8.Size = uStack_730;
      local_4a8.DataPtr = (wchar_t *)local_918.Data.AllocatorInstance.Data;
      UCanvas::DrawText(local_ab0,pUVar16,&local_4a8,fVar38,fVar40,fVar37,fVar37,&local_a88);
      if (local_918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_918.Data.AllocatorInstance.Data);
      }
      if ((this_02 != (AActor *)0x0) &&
         (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_498.Data.AllocatorInstance.Data);
      }
      local_ab0 = *(UCanvas **)&this->field_0x310;
      fVar40 = local_ab8 + fVar8;
      local_ab8 = fVar40;
      pUVar25 = FWeakObjectPtr::Get(&local_228);
      if (pUVar25 != (UObject *)0x0) {
        pUVar26 = FWeakObjectPtr::Get(&local_228);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar26,&local_478,(UObject *)0x0);
      }
      ::FString::PrintfImpl(&local_908,L"HitPhysMat: \'%s\'");
      local_728 = local_908.Data.AllocatorInstance.Data;
      uStack_720 = uVar31;
      if (local_908.Data.ArrayNum != 0) {
        uStack_720 = local_908.Data.ArrayNum - 1;
      }
      local_488._12_4_ = uStack_71c;
      local_488.Size = uStack_720;
      local_488.DataPtr = (wchar_t *)local_908.Data.AllocatorInstance.Data;
      UCanvas::DrawText(local_ab0,pUVar16,&local_488,fVar38,fVar40,fVar37,fVar37,&local_a88);
      if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_908.Data.AllocatorInstance.Data);
      }
      if ((pUVar25 != (UObject *)0x0) &&
         (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_478.Data.AllocatorInstance.Data);
      }
      local_ab8 = local_ab8 + fVar8;
      cVar12 = '\0';
      bVar11 = TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>::UEOpEquals
                         ((TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)local_200,
                          (void *)0x0);
      if (bVar11) {
        local_9e0 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                              ((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                                *)&this->field_0x248);
        uVar1 = *(uint *)&(local_9e0->Elements).field_0x28;
        uStack_87c = 0;
        local_ab0 = (UCanvas *)&(local_9e0->Elements).field_0x10;
        iVar14 = 0;
        local_878 = uStack_87c;
        if (uVar1 != 0) {
          puVar35 = *(uint **)&(local_9e0->Elements).field_0x20;
          if (puVar35 == (uint *)0x0) {
            puVar35 = (uint *)local_ab0;
          }
          uVar30 = *puVar35;
          uVar33 = uVar32;
          uVar31 = 0;
          local_878 = 0;
          while (uVar30 == 0) {
            uVar31 = (int)uVar32 + 1;
            uVar32 = (ulonglong)uVar31;
            local_878 = (int)uVar33 + 0x20;
            uVar33 = (ulonglong)local_878;
            uStack_87c = uVar1;
            if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar31)
            goto LAB_147afdff1;
            uVar30 = puVar35[(int)uVar31];
          }
          local_aa0 = (ulonglong)(~(uVar30 - 1) & uVar30);
          uVar32 = local_aa0 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar32 != 0) {
            for (; uVar32 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_a00 = (int)lVar19;
          uStack_87c = local_a00 + -1 + local_878;
          if ((int)uVar1 < (int)uStack_87c) {
            uStack_87c = uVar1;
          }
LAB_147afdff1:
          iVar14 = *(int *)&(local_9e0->Elements).field_0x28;
        }
        uStack_874 = local_174;
        iStack_870 = *(int *)&(local_9e0->Elements).field_0x8 -
                     *(int *)&(local_9e0->Elements).field_0x34;
        uStack_88c = (undefined4)local_aa0;
        local_ab4 = *(uint *)&(local_9e0->Elements).field_0x28;
        auStack_850._0_8_ = CONCAT44(uStack_88c,uVar31);
        uStack_880 = 0xffffffff;
        uStack_840 = 0xffffffff;
        auStack_850._8_8_ = local_ab0;
        uStack_83c = uStack_87c;
        iVar29 = (int)local_ab4 >> 5;
        bVar27 = (byte)local_ab4;
        local_aa0 = CONCAT44(local_aa0._4_4_,local_ab4) & 0xffffffffffffffe0;
        local_838._4_4_ = local_174;
        local_838._0_4_ = local_878;
        uStack_830 = CONCAT44(uStack_86c,iStack_870);
        local_898 = local_9e0;
        uStack_890 = uVar31;
        local_888 = (undefined1 *)local_ab0;
        local_858 = local_9e0;
        if (((int)local_ab4 < 0) || (uVar31 = local_ab4 & 0xffffffe0, iVar14 < (int)local_ab4)) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L"");
          if (bVar11) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar31 = (uint)local_aa0;
        }
        pTVar9 = local_9e0;
        pUVar2 = local_ab0;
        uVar1 = (uint)local_ab0->_padding_;
        uVar30 = local_ab4;
        if (local_ab4 != uVar1) {
          pUVar34 = local_ab0;
          if ((UCanvas *)local_ab0->_padding_ != (UCanvas *)0x0) {
            pUVar34 = (UCanvas *)local_ab0->_padding_;
          }
          uVar30 = -1 << (bVar27 & 0x1f) &
                   *(uint *)((longlong)&pUVar34->_padding_ + (longlong)iVar29 * 4);
          while (uVar30 == 0) {
            iVar29 = iVar29 + 1;
            uVar31 = uVar31 + 0x20;
            local_ab4 = uVar1;
            uVar30 = uVar1;
            if ((int)(((int)(uVar1 - 1) >> 0x1f & 0x1fU) + (uVar1 - 1)) >> 5 < iVar29)
            goto LAB_147afe150;
            uVar30 = *(uint *)((longlong)&pUVar34->_padding_ + (longlong)iVar29 * 4);
          }
          uVar32 = (ulonglong)(~(uVar30 - 1) & uVar30) * 2 + 1;
          lVar19 = 0x3f;
          if (uVar32 != 0) {
            for (; uVar32 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          local_ab4 = (int)lVar19 + -1 + uVar31;
          uVar30 = local_ab4;
          if ((int)uVar1 < (int)local_ab4) {
            local_ab4 = uVar1;
            uVar30 = uVar1;
          }
        }
LAB_147afe150:
        while( true ) {
          pTVar10 = local_858;
          if (*(int *)&(local_858->Elements).field_0x8 - *(int *)&(local_858->Elements).field_0x34
              != (int)uStack_830) {
            `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_aa8);
          }
          if (((uStack_83c == uVar30) && ((UCanvas *)auStack_850._8_8_ == pUVar2)) &&
             (pUVar16 = local_9d8, pTVar10 == pTVar9)) break;
          lVar19 = *(longlong *)(*(longlong *)&pTVar10->Elements + (longlong)(int)uStack_83c * 0x10)
          ;
          if (lVar19 != 0) {
            pUVar15 = Z_Construct_UClass_UMeshComponent_NoRegister();
            lVar3 = *(longlong *)(lVar19 + 0x10);
            iVar14 = (int)pUVar15->_padding_;
            if (((iVar14 <= *(int *)(lVar3 + 0x38)) &&
                ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar14 * 8) ==
                 &pUVar15->_padding_)) &&
               (((*(byte *)(lVar19 + 0x98) & 1) != 0 &&
                ((cVar12 != '\0' ||
                 (cVar13 = (**(code **)(*(longlong *)this + 0x810))(this,lVar3,&local_ab8),
                 cVar13 != '\0')))))) {
              cVar12 = '\x01';
            }
          }
          uStack_840 = uStack_840 & ~auStack_850._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_850);
        }
      }
      else {
        pcVar4 = *(code **)(*(longlong *)this + 0x810);
        pUVar25 = FWeakObjectPtr::Get(local_200);
        if (pUVar25 != (UObject *)0x0) {
          Z_Construct_UClass_UMeshComponent_NoRegister();
        }
        cVar12 = (*pcVar4)(this);
      }
      if (cVar12 == '\0') {
        local_ab8 = local_ab8 + fVar8;
        local_718 = L"Material: NULL";
        uStack_710 = 0xe;
        local_468._12_4_ = uStack_70c;
        local_468.Size = 0xe;
        local_468.DataPtr = L"Material: NULL";
        UCanvas::DrawText(*(UCanvas **)&this->field_0x310,pUVar16,&local_468,fVar38 + fVar8,
                          local_ab8,fVar37,fVar37,&local_a88);
      }
      dVar6 = ___xmm_403e000000000000403e000000000000;
      if ((*(byte *)(uVar36 + 0x788) & 4) == 0) {
        dVar5 = dStack_290 * _UNK_15185d548 + (double)local_2c8._8_8_;
        local_5e0._s_0.Z = local_288 * ___xmm_403e000000000000403e000000000000 + local_2b8;
        local_5e0._8_4_ = SUB84(dVar5,0);
        local_5e0._0_8_ =
             local_298 * ___xmm_403e000000000000403e000000000000 + (double)local_2c8._0_8_;
        local_5e0._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        pUVar21 = AActor::GetWorld((AActor *)this);
        fVar40 = __real_bf800000;
        DrawDebugLine(pUVar21,(TVector<double> *)(local_2d8 + 0x10),
                      (TVector<double> *)&local_5e0._s_0,&FColor::White,false,__real_bf800000,'\0',
                      0.0);
        bVar11 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(uVar36 + 0x798));
        if (bVar11) {
          local_5c8._s_0.X = *(double *)(uVar36 + 0x7e8) * dVar6 + *(double *)(uVar36 + 0x7b8);
          local_5c8._s_0.Y = *(double *)(uVar36 + 0x7f0) * dVar6 + *(double *)(uVar36 + 0x7c0);
          local_5c8._s_0.Z = *(double *)(uVar36 + 0x7f8) * dVar6 + *(double *)(uVar36 + 0x7c8);
          pUVar21 = AActor::GetWorld((AActor *)this);
          DrawDebugLine(pUVar21,(TVector<double> *)(uVar36 + 0x7b8),
                        (TVector<double> *)&local_5c8._s_0,&FColor::Red,false,fVar40,'\0',0.0);
        }
      }
    }
    else {
      local_708 = L"No trace Hit";
      local_ab8 = local_ab8 + fVar8;
      uStack_700 = 0xc;
      local_458._12_4_ = uStack_6fc;
      local_458.Size = 0xc;
      local_458.DataPtr = L"No trace Hit";
      UCanvas::DrawText(local_ab0,pUVar16,&local_458,fVar38,local_ab8,fVar37,fVar37,&local_a88);
    }
    if (((*(byte *)(uVar36 + 0x788) & 1) != 0) &&
       (bVar11 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(uVar36 + 0x798)), bVar11)) {
      this_00 = (FWeakObjectPtr *)(uVar36 + 0x798);
      fVar40 = local_ab8 + fVar8;
      pUVar2 = *(UCanvas **)&this->field_0x310;
      iVar14 = 0;
      local_ab8 = fVar40;
      if ((*(uint *)(uVar36 + 0x788) & 4) == 0) {
        pUVar25 = FWeakObjectPtr::Get(this_00);
        local_9c0.ComparisonIndex.Value = *(uint *)&pUVar25->field_0x18;
        local_9c0.Number = *(uint *)&pUVar25->field_0x1c;
        ::FName::ToString(&local_9c0,&local_3f8);
        ::FString::PrintfImpl(&local_8e8,L"Selected actor: \'%s\'");
        local_6d8 = local_8e8.Data.AllocatorInstance.Data;
        if (local_8e8.Data.ArrayNum != 0) {
          iVar14 = local_8e8.Data.ArrayNum + -1;
        }
        local_408._12_4_ = uStack_6cc;
        local_408.Size = iVar14;
        local_408.DataPtr = (wchar_t *)local_8e8.Data.AllocatorInstance.Data;
        iStack_6d0 = iVar14;
        UCanvas::DrawText(pUVar2,pUVar16,&local_408,fVar38,fVar40,fVar37,fVar37,&local_a88);
        if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
        }
      }
      else if ((*(uint *)(uVar36 + 0x788) & 8) == 0) {
        pUVar25 = FWeakObjectPtr::Get(this_00);
        local_9c8.ComparisonIndex.Value = *(uint *)&pUVar25->field_0x18;
        local_9c8.Number = *(uint *)&pUVar25->field_0x1c;
        ::FName::ToString(&local_9c8,&local_418);
        ::FString::PrintfImpl(&local_8f8,L"Orbiting actor (hitpoint): \'%s\'");
        local_6e8 = local_8f8.Data.AllocatorInstance.Data;
        if (local_8f8.Data.ArrayNum != 0) {
          iVar14 = local_8f8.Data.ArrayNum + -1;
        }
        local_428._12_4_ = uStack_6dc;
        local_428.Size = iVar14;
        local_428.DataPtr = (wchar_t *)local_8f8.Data.AllocatorInstance.Data;
        iStack_6e0 = iVar14;
        UCanvas::DrawText(pUVar2,pUVar16,&local_428,fVar38,fVar40,fVar37,fVar37,&local_a88);
        local_3f8.Data.AllocatorInstance.Data = local_418.Data.AllocatorInstance.Data;
        if (local_8f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8f8.Data.AllocatorInstance.Data);
          local_3f8.Data.AllocatorInstance.Data = local_418.Data.AllocatorInstance.Data;
        }
      }
      else {
        pUVar25 = FWeakObjectPtr::Get(this_00);
        local_9d0.ComparisonIndex.Value = *(uint *)&pUVar25->field_0x18;
        local_9d0.Number = *(uint *)&pUVar25->field_0x1c;
        ::FName::ToString(&local_9d0,&local_438);
        ::FString::PrintfImpl(&local_8b8,L"Orbiting actor (center): \'%s\'");
        local_6f8 = local_8b8.Data.AllocatorInstance.Data;
        if (local_8b8.Data.ArrayNum != 0) {
          iVar14 = local_8b8.Data.ArrayNum + -1;
        }
        local_448._12_4_ = uStack_6ec;
        local_448.Size = iVar14;
        local_448.DataPtr = (wchar_t *)local_8b8.Data.AllocatorInstance.Data;
        iStack_6f0 = iVar14;
        UCanvas::DrawText(pUVar2,pUVar16,&local_448,fVar38,fVar40,fVar37,fVar37,&local_a88);
        local_3f8.Data.AllocatorInstance.Data = local_438.Data.AllocatorInstance.Data;
        if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
          local_3f8.Data.AllocatorInstance.Data = local_438.Data.AllocatorInstance.Data;
        }
      }
      if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
      }
      pcVar4 = *(code **)(*(longlong *)this + 0x810);
      pUVar25 = FWeakObjectPtr::Get((FWeakObjectPtr *)(uVar36 + 0x7a0));
      if (pUVar25 != (UObject *)0x0) {
        Z_Construct_UClass_UMeshComponent_NoRegister();
      }
      (*pcVar4)(this);
    }
    local_ab8 = local_ab8 + fVar8 * __real_40000000;
    UCanvas::SetDrawColor(*(UCanvas **)&this->field_0x310,'@','@',0xff,0xff);
    local_6c8 = L"Controls";
    uStack_6c0 = 8;
    local_3e8._12_4_ = uStack_6bc;
    local_3e8.Size = 8;
    local_3e8.DataPtr = L"Controls";
    UCanvas::DrawText(*(UCanvas **)&this->field_0x310,pUVar16,&local_3e8,fVar38,local_ab8,fVar37,
                      fVar37,&local_a88);
    local_ab8 = local_ab8 + fVar8;
    UCanvas::SetDrawColor(*(UCanvas **)&this->field_0x310,200,200,0x80,0xff);
    local_6b8 = L"FOV +/-: ,/. or DPad Up/Down";
    uStack_6b0 = 0x1c;
    local_3d8._12_4_ = uStack_6ac;
    local_3d8.Size = 0x1c;
    local_3d8.DataPtr = L"FOV +/-: ,/. or DPad Up/Down";
    UCanvas::DrawText(*(UCanvas **)&this->field_0x310,pUVar16,&local_3d8,fVar38,local_ab8,fVar37,
                      fVar37,&local_a88);
    local_ab8 = local_ab8 + fVar8;
    local_6a8 = L"Speed +/-: MouseWheel or +/- or LB/RB";
    uStack_6a0 = 0x25;
    local_3c8._12_4_ = uStack_69c;
    local_3c8.Size = 0x25;
    local_3c8.DataPtr = L"Speed +/-: MouseWheel or +/- or LB/RB";
    UCanvas::DrawText(*(UCanvas **)&this->field_0x310,pUVar16,&local_3c8,fVar38,local_ab8,fVar37,
                      fVar37,&local_a88);
    local_698 = L"Freeze Rendering: F or YButton";
    local_ab8 = local_ab8 + fVar8;
    uStack_690 = 0x1e;
    local_3b8._12_4_ = uStack_68c;
    local_3b8.Size = 0x1e;
    local_3b8.DataPtr = L"Freeze Rendering: F or YButton";
    UCanvas::DrawText(*(UCanvas **)&this->field_0x310,pUVar16,&local_3b8,fVar38,local_ab8,fVar37,
                      fVar37,&local_a88);
    local_ab8 = local_ab8 + fVar8;
    local_688 = L"Toggle Display: BackSpace or XButton";
    uStack_680 = 0x24;
    local_3a8._12_4_ = uStack_67c;
    local_3a8.Size = 0x24;
    local_3a8.DataPtr = L"Toggle Display: BackSpace or XButton";
    UCanvas::DrawText(*(UCanvas **)&this->field_0x310,pUVar16,&local_3a8,fVar38,local_ab8,fVar37,
                      fVar37,&local_a88);
    local_ab8 = local_ab8 + fVar8;
    local_678 = L"Orbit Selected Hitpoint: O";
    uStack_670 = 0x1a;
    local_398._12_4_ = uStack_66c;
    local_398.Size = 0x1a;
    local_398.DataPtr = L"Orbit Selected Hitpoint: O";
    UCanvas::DrawText(*(UCanvas **)&this->field_0x310,pUVar16,&local_398,fVar38,local_ab8,fVar37,
                      fVar37,&local_a88);
    local_ab8 = local_ab8 + fVar8;
    local_668 = L"Orbit Selected Actor: Shift-O";
    uStack_660 = 0x1d;
    local_388._12_4_ = uStack_65c;
    local_388.Size = 0x1d;
    local_388.DataPtr = L"Orbit Selected Actor: Shift-O";
    UCanvas::DrawText(*(UCanvas **)&this->field_0x310,pUVar16,&local_388,fVar38,local_ab8,fVar37,
                      fVar37,&local_a88);
    local_ab8 = local_ab8 + fVar8;
    bVar11 = AllowDebugViewmodes();
    if (bVar11) {
      local_658 = L"Toggle Buffer Visualization: B (\'Enter\' to toggle full buffer mode)";
      uStack_650 = 0x43;
      local_378._12_4_ = uStack_64c;
      local_378.Size = 0x43;
      local_378.DataPtr = L"Toggle Buffer Visualization: B (\'Enter\' to toggle full buffer mode)";
      UCanvas::DrawText(*(UCanvas **)&this->field_0x310,pUVar16,&local_378,fVar38,local_ab8,fVar37,
                        fVar37,&local_a88);
      local_ab8 = local_ab8 + fVar8;
    }
    bVar11 = AllowDebugViewmodes();
    if (bVar11) {
      local_648 = L"Cycle View Mode: V";
      uStack_640 = 0x12;
      local_368._12_4_ = uStack_63c;
      local_368.Size = 0x12;
      local_368.DataPtr = L"Cycle View Mode: V";
      UCanvas::DrawText(*(UCanvas **)&this->field_0x310,pUVar16,&local_368,fVar38,local_ab8,fVar37,
                        fVar37,&local_a88);
      local_ab8 = local_ab8 + fVar8;
    }
    if (local_128.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_128.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_128.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_128.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
    if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
    }
    if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
    }
    if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_868.Data.AllocatorInstance.Data);
    }
    local_a48.Data.AllocatorInstance.Data = local_a38.Data.AllocatorInstance.Data;
    if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
      local_a48.Data.AllocatorInstance.Data = local_a38.Data.AllocatorInstance.Data;
    }
    goto LAB_147afec31;
  }
  pUVar16 = UEngine::GetMediumFont();
  local_358._s_0.X = 0.0;
  local_358._s_0.Y = 0.0;
  local_308._s_0.X = 0.0;
  local_308._s_0.Y = 0.0;
  local_2f8._0_8_ = 0;
  local_2f8._8_8_ = 0;
  UCanvas::CreateFontRenderInfo
            (*(UCanvas **)&this->field_0x310,&local_168,false,true,(FLinearColor *)&local_2f8._s_0,
             (TVector2<double> *)&local_308._s_0,(TVector2<double> *)&local_358._s_0);
  UCanvas::SetDrawColor(*(UCanvas **)&this->field_0x310,0xff,0xff,'@',0xff);
  if (*(int *)(uVar36 + 0x918) < 2) {
LAB_147afce66:
    ::FString::FString(&local_a48,L"");
  }
  else {
    this_01 = GetBufferVisualizationData();
    if (*(int *)(uVar36 + 0x918) == 0) {
      pwVar28 = L"";
    }
    else {
      pwVar28 = *(wchar_t **)(uVar36 + 0x910);
    }
    pFVar17 = ::FName::FName(&local_340,pwVar28);
    pUVar18 = FBufferVisualizationData::GetMaterial(this_01,*pFVar17);
    if (pUVar18 == (UMaterialInterface *)0x0) goto LAB_147afce66;
    local_9fc = (FName)pUVar18->_padding_;
    ::FName::ToString(&local_9fc,&local_a48);
  }
  local_638 = local_a48.Data.AllocatorInstance.Data;
  uStack_630 = uVar31;
  if (local_a48.Data.ArrayNum != 0) {
    uStack_630 = local_a48.Data.ArrayNum - 1;
  }
  local_2e8._12_4_ = uStack_62c;
  local_2e8.Size = uStack_630;
  local_2e8.DataPtr = (wchar_t *)local_a48.Data.AllocatorInstance.Data;
  UCanvas::StrLen(*(UCanvas **)&this->field_0x310,pUVar16,&local_2e8,&local_a08,local_a98,false);
  pUVar2 = *(UCanvas **)&this->field_0x310;
  if (local_a98[0] * __real_40400000 <= (float)pUVar2->SizeY) {
    fVar37 = (float)pUVar2->SizeY - local_a98[0] * __real_40400000;
  }
  else {
    fVar37 = 0.0;
  }
  local_628 = local_a48.Data.AllocatorInstance.Data;
  if (local_a48.Data.ArrayNum != 0) {
    uVar31 = local_a48.Data.ArrayNum - 1;
  }
  local_338._12_4_ = uStack_61c;
  local_338.Size = uVar31;
  local_338.DataPtr = (wchar_t *)local_a48.Data.AllocatorInstance.Data;
  uStack_620 = uVar31;
  UCanvas::DrawText(pUVar2,pUVar16,&local_338,(float)pUVar2->SizeX * __real_3d4ccccd,fVar37,
                    __real_3f800000,__real_3f800000,&local_168);
LAB_147afec31:
  if (local_a48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a48.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesADebugCameraHUD @ 147b17190

void __cdecl ADebugCameraHUD::StaticRegisterNativesADebugCameraHUD(void)

{
  return;
}

