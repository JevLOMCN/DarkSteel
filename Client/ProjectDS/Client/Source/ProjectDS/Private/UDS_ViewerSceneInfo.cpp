// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 29

// StaticClass @ 14b5d6f20

UClass * __cdecl UDS_ViewerSceneInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ViewerSceneInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ViewerSceneInfo",
               &Z_Registration_Info_UClass_UDS_ViewerSceneInfo.InnerSingleton,
               StaticRegisterNativesUDS_ViewerSceneInfo,0x1a0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ViewerSceneInfo>,
               InternalVTableHelperCtorCaller<UDS_ViewerSceneInfo>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ViewerSceneInfo.InnerSingleton;
}

// UDS_ViewerSceneInfo @ 14b5d9950

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDS_ViewerSceneInfo * __thiscall
UDS_ViewerSceneInfo::UDS_ViewerSceneInfo(UDS_ViewerSceneInfo *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDS_ViewerSceneInfo__6B_;
  (this->StreamingSourceActor).field0_0x0.DebugPtr = (ADS_StreamingSourceActor *)0x0;
  this->ViewerSceneType = None;
  this->bIsStreamingComplete = false;
  (this->ViewerCam).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->ViewerCam).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->ViewerCharacterInfoMap = 0;
  *(undefined8 *)&(this->ViewerCharacterInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->ViewerCharacterInfoMap).field_0x20 = 0;
  this->ViewerCharacterCount = 0;
  *(undefined4 *)&(this->ViewerCharacterInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->ViewerCharacterInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ViewerCharacterInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ViewerCharacterInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->ViewerCharacterInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->ViewerCharacterInfoMap).field_0x48 = 0;
  (this->TimerHandle_OnCompleteRefreshAsync).Handle = 0;
  this->bIsZoomIn = false;
  this->bIsZoomInOutProcess = false;
  *&(this->ZoomOutCamInfo).CamTrans.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ZoomOutCamInfo).CamTrans.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ZoomOutCamInfo).CamTrans.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ZoomOutCamInfo).CamTrans.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ZoomOutCamInfo).CamTrans.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ZoomOutCamInfo).CamTrans.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->ZoomOutCamInfo).CamFOV = 0.0;
  *&(this->ZoomInCamInfo).CamTrans.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ZoomInCamInfo).CamTrans.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ZoomInCamInfo).CamTrans.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ZoomInCamInfo).CamTrans.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ZoomInCamInfo).CamTrans.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ZoomInCamInfo).CamTrans.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->ZoomInCamInfo).CamFOV = 0.0;
  this->ZoomInOutSpeed = 0.0;
  return this;
}

// UDS_ViewerSceneInfo @ 14b5d9aa0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDS_ViewerSceneInfo * __thiscall
UDS_ViewerSceneInfo::UDS_ViewerSceneInfo(UDS_ViewerSceneInfo *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UDS_ViewerSceneInfo__6B_;
  (this->StreamingSourceActor).field0_0x0.DebugPtr = (ADS_StreamingSourceActor *)0x0;
  this->ViewerSceneType = None;
  this->bIsStreamingComplete = false;
  (this->ViewerCam).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->ViewerCam).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->ViewerCharacterInfoMap = 0;
  *(undefined8 *)&(this->ViewerCharacterInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->ViewerCharacterInfoMap).field_0x20 = 0;
  this->ViewerCharacterCount = 0;
  *(undefined4 *)&(this->ViewerCharacterInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->ViewerCharacterInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ViewerCharacterInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ViewerCharacterInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->ViewerCharacterInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->ViewerCharacterInfoMap).field_0x48 = 0;
  (this->TimerHandle_OnCompleteRefreshAsync).Handle = 0;
  this->bIsZoomIn = false;
  this->bIsZoomInOutProcess = false;
  *&(this->ZoomOutCamInfo).CamTrans.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ZoomOutCamInfo).CamTrans.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ZoomOutCamInfo).CamTrans.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ZoomOutCamInfo).CamTrans.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ZoomOutCamInfo).CamTrans.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ZoomOutCamInfo).CamTrans.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->ZoomOutCamInfo).CamFOV = 0.0;
  *&(this->ZoomInCamInfo).CamTrans.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ZoomInCamInfo).CamTrans.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ZoomInCamInfo).CamTrans.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ZoomInCamInfo).CamTrans.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ZoomInCamInfo).CamTrans.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ZoomInCamInfo).CamTrans.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->ZoomInCamInfo).CamFOV = 0.0;
  this->ZoomInOutSpeed = 0.0;
  return this;
}

// ~UDS_ViewerSceneInfo @ 14b5da6c0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_ViewerSceneInfo::~UDS_ViewerSceneInfo(UDS_ViewerSceneInfo *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &___7UDS_ViewerSceneInfo__6B_;
  *(undefined4 *)&(this->ViewerCharacterInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ViewerCharacterInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ViewerCharacterInfoMap);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5dbae0

UClass * __cdecl UDS_ViewerSceneInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ViewerSceneInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ViewerSceneInfo",
               &Z_Registration_Info_UClass_UDS_ViewerSceneInfo.InnerSingleton,
               StaticRegisterNativesUDS_ViewerSceneInfo,0x1a0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ViewerSceneInfo>,
               InternalVTableHelperCtorCaller<UDS_ViewerSceneInfo>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ViewerSceneInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_ViewerSceneInfo @ 14b5dbe50

void __cdecl UDS_ViewerSceneInfo::StaticRegisterNativesUDS_ViewerSceneInfo(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UDS_ViewerSceneInfo_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnCompleteRefreshAsync @ 14b5dd900

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDS_ViewerSceneInfo::execOnCompleteRefreshAsync(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnCompleteRefreshAsync((UDS_ViewerSceneInfo *)param_1);
  return;
}

// execOnCompleteWorldStreaming @ 14b5dd940

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDS_ViewerSceneInfo::execOnCompleteWorldStreaming(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnCompleteWorldStreaming((UDS_ViewerSceneInfo *)param_1);
  return;
}

// execOnOpenedCommonCenterLoading @ 14b5dd960

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDS_ViewerSceneInfo::execOnOpenedCommonCenterLoading(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_UserWidget *local_res10;
  
  local_res10 = (UDS_UserWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnOpenedCommonCenterLoading((UDS_ViewerSceneInfo *)param_1,local_res10);
  return;
}

// ChangeToViewerCam @ 14bb53c20

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall UDS_ViewerSceneInfo::ChangeToViewerCam(UDS_ViewerSceneInfo *this)

{
  TWeakObjectPtr<ADS_CameraActor_CharacterViewer,FWeakObjectPtr> *this_00;
  EDS_ViewerSceneType EVar1;
  int iVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  undefined1 uVar9;
  UObject *pUVar10;
  APlayerController *pAVar11;
  UClass *pUVar12;
  ADS_CameraActor *pAVar13;
  TObjectPtr<UClass>_u_0 TVar14;
  undefined1 *puVar15;
  EDS_DepthOfFieldType *pEVar16;
  FName FVar17;
  EDS_DepthOfFieldType local_res8 [8];
  EDS_DepthOfFieldType local_res10 [8];
  EDS_DepthOfFieldType local_res18 [8];
  FWeakObjectPtr local_res20;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_c8;
  FWeakObjectPtr local_b8;
  FWeakObjectPtr local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  uint local_9c;
  UClass *local_98;
  UClass *local_90;
  UClass *local_88;
  UClass *local_80;
  UClass *local_78;
  UObject *local_70;
  undefined8 local_68;
  undefined8 local_60;
  FWeakObjectPtr local_58;
  undefined4 local_4c;
  uint local_44;
  
  if (this->ViewerSceneType == None) {
    return false;
  }
  pUVar10 = (UObject *)(**(code **)(*(longlong *)this + 0x180))();
  pAVar11 = UGameplayStatics::GetPlayerController(pUVar10,0);
  FVar7 = DS_ViewerCamTagNames::MountManagement;
  FVar6 = DS_ViewerCamTagNames::Dungeon;
  FVar5 = DS_ViewerCamTagNames::CharacterDeck;
  FVar4 = DS_ViewerCamTagNames::CharacterGallery;
  FVar17 = DS_ViewerCamTagNames::CharacterEquip;
  if (pAVar11 == (APlayerController *)0x0) {
    return false;
  }
  EVar1 = this->ViewerSceneType;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  if (EVar1 == CharacterEquip) {
    local_78 = Z_Construct_UClass_ADS_CameraActor_CharacterViewer_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_78 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_78);
    }
    pUVar10 = (UObject *)(**(code **)(*(longlong *)this + 0x180))(this);
    TVar14.DebugPtr = (UClass *)&local_78;
LAB_14bb53dc7:
    UGameplayStatics::GetAllActorsOfClassWithTag
              (pUVar10,(TSubclassOf<AActor>)TVar14,FVar17,&local_c8);
    if (local_c8.ArrayNum != 0) {
      if ((local_c8.ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      pUVar10 = *(UObject **)local_c8.AllocatorInstance.Data;
      if (pUVar10 == (UObject *)0x0) {
LAB_14bb53e43:
        local_70 = (UObject *)0x0;
      }
      else {
        pUVar12 = Z_Construct_UClass_ADS_CameraActor_CharacterViewer_NoRegister();
        iVar2 = (int)pUVar12->_padding_;
        if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar2) ||
           (local_70 = pUVar10,
           (longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
           &pUVar12->_padding_)) goto LAB_14bb53e43;
      }
      this_00 = &this->ViewerCam;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_70 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_70);
      }
      FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_70);
      bVar8 = TWeakObjectPtr<ADS_CameraActor_CharacterViewer,FWeakObjectPtr>::UEOpEquals
                        (this_00,(void *)0x0);
      if (!bVar8) {
        UDS_ViewerSetting::GetInst();
        bVar8 = TWeakObjectPtr<UDS_ViewerSetting,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_ViewerSetting,FWeakObjectPtr> *)&local_b0,(void *)0x0
                          );
        if (!bVar8) {
          EVar1 = this->ViewerSceneType;
          if (EVar1 == CharacterEquip) {
            pUVar10 = FWeakObjectPtr::Get(&local_b0);
            puVar15 = &pUVar10[1].field_0x8;
            pAVar13 = (ADS_CameraActor *)FWeakObjectPtr::Get(&this_00->WeakPtr);
            ADS_CameraActor::SetViewportOffset(pAVar13,(TVector2<double> *)puVar15);
            ADS_PositionActor::GetPositionActor
                      ((EDS_PositionType)&local_58,(int)CONCAT71((int7)((ulonglong)puVar15 >> 8),1))
            ;
            pAVar13 = (ADS_CameraActor *)FWeakObjectPtr::Get(&this_00->WeakPtr);
            pEVar16 = local_res18;
            local_res18[0] = CharEquip;
LAB_14bb53f5b:
            ADS_CameraActor::EnableDepthOfField
                      (pAVar13,pEVar16,(TWeakObjectPtr<AActor,FWeakObjectPtr>)local_58);
          }
          else {
            if (EVar1 == CharacterDeck) {
              pAVar13 = (ADS_CameraActor *)FWeakObjectPtr::Get(&this_00->WeakPtr);
              local_b8.ObjectIndex = 0;
              local_b8.ObjectSerialNumber = 0;
              local_60 = 0;
              FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_60);
              pEVar16 = local_res10;
              local_res10[0] = CharChanger;
              local_58 = local_b8;
              goto LAB_14bb53f5b;
            }
            if (EVar1 == Dungeon) {
              pAVar13 = (ADS_CameraActor *)FWeakObjectPtr::Get(&this_00->WeakPtr);
              local_res20.ObjectIndex = 0;
              local_res20.ObjectSerialNumber = 0;
              local_68 = 0;
              FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_68);
              pEVar16 = local_res8;
              local_res8[0] = Dungeon;
              local_58 = local_res20;
              goto LAB_14bb53f5b;
            }
          }
          local_4c = CONCAT31(local_4c._1_3_,1);
          pcVar3 = *(code **)(pAVar11->_padding_ + 0xef8);
          pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          local_a4 = local_4c;
          local_a8 = 0;
          local_a0 = 0x40000000;
          local_9c = local_44 & 0xfffffffe;
          (*pcVar3)(pAVar11,pUVar10,&local_a8);
          bVar8 = true;
          goto LAB_14bb53fad;
        }
      }
    }
  }
  else {
    if (EVar1 == CharacterGallery) {
      local_80 = Z_Construct_UClass_ADS_CameraActor_CharacterViewer_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_80 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_80);
      }
      pUVar10 = (UObject *)(**(code **)(*(longlong *)this + 0x180))(this);
      TVar14.DebugPtr = (UClass *)&local_80;
      FVar17 = FVar4;
      goto LAB_14bb53dc7;
    }
    if (EVar1 == CharacterDeck) {
      local_88 = Z_Construct_UClass_ADS_CameraActor_CharacterViewer_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_88);
      }
      pUVar10 = (UObject *)(**(code **)(*(longlong *)this + 0x180))(this);
      TVar14.DebugPtr = (UClass *)&local_88;
      FVar17 = FVar5;
      goto LAB_14bb53dc7;
    }
    if (EVar1 == Dungeon) {
      local_90 = Z_Construct_UClass_ADS_CameraActor_CharacterViewer_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_90 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_90);
      }
      pUVar10 = (UObject *)(**(code **)(*(longlong *)this + 0x180))(this);
      TVar14.DebugPtr = (UClass *)&local_90;
      FVar17 = FVar6;
      goto LAB_14bb53dc7;
    }
    if (EVar1 == MountManagement) {
      local_98 = Z_Construct_UClass_ADS_CameraActor_CharacterViewer_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_98);
      }
      pUVar10 = (UObject *)(**(code **)(*(longlong *)this + 0x180))(this);
      TVar14.DebugPtr = (UClass *)&local_98;
      FVar17 = FVar7;
      goto LAB_14bb53dc7;
    }
  }
  bVar8 = false;
LAB_14bb53fad:
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  return bVar8;
}

// ClearInfo @ 14bb55050

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall UDS_ViewerSceneInfo::ClearInfo(UDS_ViewerSceneInfo *this)

{
  TMap<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
  *this_00;
  undefined1 *puVar1;
  ADS_StreamingSourceActor *this_01;
  UDS_ViewerCharacterInfo *this_02;
  ADS_ViewerCharacter *this_03;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
  *local_38;
  undefined2 local_30;
  
  ResetInfo(this);
  this_01 = (this->StreamingSourceActor).field0_0x0.DebugPtr;
  this->ViewerSceneType = None;
  this->ViewerCharacterCount = 0;
  if (this_01 != (ADS_StreamingSourceActor *)0x0) {
    AActor::Destroy((AActor *)this_01,false,true);
    (this->StreamingSourceActor).field0_0x0.DebugPtr = (ADS_StreamingSourceActor *)0x0;
  }
  this_00 = &this->ViewerCharacterInfoMap;
  TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
              *)this_00);
  local_30 = 0;
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar5 = local_98._24_8_ >> 0x20;
  local_38 = (TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      this_02 = *(UDS_ViewerCharacterInfo **)(*local_68 + 8 + (longlong)(int)uVar5 * 0x18);
      if (this_02 != (UDS_ViewerCharacterInfo *)0x0) {
        UDS_ViewerCharacterInfo::ResetInfo(this_02);
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res10 = 0;
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
        (this_02->ParentViewerSceneInfo).WeakPtr = local_res8;
        this_02->SlotIndex = 0;
        bVar2 = 1 < *(int *)&(this_02->ViewerCharacterTransformMap).field_0x48;
        if (!bVar2) {
          TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
          ::UnhashElements((TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                            *)&this_02->ViewerCharacterTransformMap);
        }
        puVar1 = &(this_02->ViewerCharacterTransformMap).field_0xc;
        *(undefined4 *)&(this_02->ViewerCharacterTransformMap).field_0x8 = 0;
        if (*(int *)puVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,0x10,0,(ForAnyElementType *)&this_02->ViewerCharacterTransformMap,0,
                     (int *)puVar1);
        }
        *(undefined4 *)&(this_02->ViewerCharacterTransformMap).field_0x30 = 0xffffffff;
        *(undefined4 *)&(this_02->ViewerCharacterTransformMap).field_0x34 = 0;
        iVar4 = *(int *)&(this_02->ViewerCharacterTransformMap).field_0x2c;
        *(undefined4 *)&(this_02->ViewerCharacterTransformMap).field_0x28 = 0;
        if ((iVar4 < 0) || (0x80 < iVar4)) {
          *(undefined4 *)&(this_02->ViewerCharacterTransformMap).field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(this_02->ViewerCharacterTransformMap).field_0x10,0);
        }
        if (bVar2) {
          *(undefined4 *)&(this_02->ViewerCharacterTransformMap).field_0x48 = 1;
          TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                    *)&this_02->ViewerCharacterTransformMap);
        }
        this_03 = (this_02->ViewerCharacter).field0_0x0.DebugPtr;
        if (this_03 != (ADS_ViewerCharacter *)0x0) {
          AActor::Destroy((AActor *)this_03,false,true);
        }
        (this_02->ViewerCharacter).field0_0x0.DebugPtr = (ADS_ViewerCharacter *)0x0;
      }
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar5 = (ulonglong)uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
      uVar6 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (uVar6 < 4) {
        iVar4 = 1;
      }
      else {
        uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar6) && (local_38->HashSize < iVar4)) || (iVar4 < local_38->HashSize)) {
        local_38->HashSize = iVar4;
        TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  bVar2 = 1 < *(int *)&(this->ViewerCharacterInfoMap).field_0x48;
  if (!bVar2) {
    TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->ViewerCharacterInfoMap).field_0xc;
  *(undefined4 *)&(this->ViewerCharacterInfoMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ViewerCharacterInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->ViewerCharacterInfoMap).field_0x30 = 0xffffffff;
  iVar4 = *(int *)&(this->ViewerCharacterInfoMap).field_0x2c;
  *(undefined4 *)&(this->ViewerCharacterInfoMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->ViewerCharacterInfoMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ViewerCharacterInfoMap).field_0x10,0)
    ;
  }
  if (bVar2) {
    *(undefined4 *)&(this->ViewerCharacterInfoMap).field_0x48 = 1;
    TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// GetStreamingSourceActor @ 14bb67f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TWeakObjectPtr<ADS_StreamingSourceActor,FWeakObjectPtr> __thiscall
UDS_ViewerSceneInfo::GetStreamingSourceActor(UDS_ViewerSceneInfo *this)

{
  int iVar1;
  TObjectPtr<ADS_StreamingSourceActor>_u_0 TVar2;
  UWorld *this_00;
  FActorSpawnParameters *pFVar3;
  UClass *pUVar4;
  ADS_StreamingSourceActor *pAVar5;
  FString *pFVar6;
  longlong *plVar7;
  FWeakObjectPtr in_RDX;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined1 auStackY_e8 [32];
  TObjectPtr<ADS_StreamingSourceActor>_u_0 local_b8 [2];
  FString local_a8;
  undefined1 local_98 [112];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if ((this->StreamingSourceActor).field0_0x0.DebugPtr == (ADS_StreamingSourceActor *)0x0) {
    this_00 = (UWorld *)(**(code **)(*(longlong *)this + 0x180))();
    pFVar3 = FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_98);
    pUVar4 = Z_Construct_UClass_ADS_StreamingSourceActor_NoRegister();
    pAVar5 = (ADS_StreamingSourceActor *)
             UWorld::SpawnActor(this_00,pUVar4,(TVector<double> *)0x0,(TRotator<double> *)0x0,pFVar3
                               );
    if (pAVar5 == (ADS_StreamingSourceActor *)0x0) {
      pAVar5 = (ADS_StreamingSourceActor *)0x0;
    }
    else {
      pUVar4 = Z_Construct_UClass_ADS_StreamingSourceActor_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(pAVar5->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        pFVar6 = GetTypeName<ADS_StreamingSourceActor>((FString *)&local_b8[0].ObjectPtr);
        pwVar9 = L"";
        if ((pFVar6->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
        pFVar6 = GetFullNameForCastLogError<AActor>(&local_a8,(AActor *)pAVar5);
        if ((pFVar6->Data).ArrayNum != 0) {
          pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar9,pwVar8);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar5 != (ADS_StreamingSourceActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar5);
    }
    (this->StreamingSourceActor).field0_0x0.DebugPtr = pAVar5;
    if (local_98._64_8_ != 0) {
      plVar7 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar7 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    pAVar5 = (this->StreamingSourceActor).field0_0x0.DebugPtr;
    if (pAVar5 != (ADS_StreamingSourceActor *)0x0) {
      ADS_StreamingSourceActor::DisableStreamingSource(pAVar5);
    }
  }
  TVar2 = (TObjectPtr<ADS_StreamingSourceActor>_u_0)(this->StreamingSourceActor).field0_0x0.DebugPtr
  ;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar2.DebugPtr != (ADS_StreamingSourceActor *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar2.DebugPtr != (ADS_StreamingSourceActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_b8[0] = TVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar2.DebugPtr != (ADS_StreamingSourceActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)local_b8);
  return (TWeakObjectPtr<ADS_StreamingSourceActor,FWeakObjectPtr>)in_RDX;
}

// InitInfo @ 14bb6b550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

bool __thiscall
UDS_ViewerSceneInfo::InitInfo(UDS_ViewerSceneInfo *this,EDS_ViewerSceneType *param_1)

{
  EDS_ViewerSceneType EVar1;
  undefined1 *puVar2;
  TObjectPtr<UDS_ViewerCharacterInfo> this_00;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  UClass *pUVar15;
  UObject *pUVar16;
  TObjectPtr<UDS_ViewerCharacterInfo>_u_0 *pTVar17;
  TQuat<double> *pTVar18;
  longlong *plVar19;
  undefined1 *puVar20;
  EDS_PositionType EVar21;
  double dVar22;
  undefined1 auStack_218 [32];
  uint local_1f8 [2];
  FWeakObjectPtr local_1f0;
  FWeakObjectPtr local_1e8;
  undefined1 local_1e0 [8];
  UObject *local_1d8;
  uint *local_1d0;
  UObject **local_1c8;
  int *local_1c0;
  TTransform<double> *local_1b8;
  TRotator<double> local_1b0;
  TQuat<double> local_198;
  undefined1 local_178 [128];
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_218;
  ResetInfo(this);
  EVar1 = *param_1;
  if (EVar1 == None) {
    return false;
  }
  this->ViewerSceneType = EVar1;
  if (EVar1 == CharacterEquip) {
    EVar21 = CharacterEquip;
  }
  else {
    if (EVar1 == CharacterGallery) {
      this->ViewerCharacterCount = 0;
      return true;
    }
    if (EVar1 == CharacterDeck) {
      this->ViewerCharacterCount = 3;
      EVar21 = CharacterDeck;
      goto LAB_14bb6b608;
    }
    if (EVar1 == Dungeon) {
      EVar21 = Dungeon;
    }
    else {
      if (EVar1 != MountManagement) {
        return false;
      }
      EVar21 = MountManagement;
    }
  }
  this->ViewerCharacterCount = 1;
LAB_14bb6b608:
  dVar12 = _UNK_1513b2f18;
  dVar11 = ___xmm_40568000000000000000000000000000;
  local_1f8[0] = 0;
  do {
    local_f8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_f8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_f8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_f8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_f8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_f8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_f8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_f8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_f8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_f8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    bVar13 = ADS_PositionActor::GetPositionActorTransform(&local_f8,EVar21,local_1f8[0]);
    if (!bVar13) {
      return false;
    }
    if (*(int *)&(this->ViewerCharacterInfoMap).field_0x8 !=
        *(int *)&(this->ViewerCharacterInfoMap).field_0x34) {
      puVar2 = *(undefined1 **)&(this->ViewerCharacterInfoMap).field_0x40;
      puVar20 = &(this->ViewerCharacterInfoMap).field_0x38;
      if (puVar2 != (undefined1 *)0x0) {
        puVar20 = puVar2;
      }
      iVar14 = *(int *)(puVar20 +
                       (ulonglong)
                       (*(int *)&(this->ViewerCharacterInfoMap).field_0x48 - 1U & local_1f8[0]) * 4)
      ;
      if (iVar14 != -1) {
        do {
          if (*(uint *)(*(longlong *)&this->ViewerCharacterInfoMap + (longlong)iVar14 * 0x18) ==
              local_1f8[0]) goto LAB_14bb6b758;
          iVar14 = *(int *)(*(longlong *)&this->ViewerCharacterInfoMap + 0x10 +
                           (longlong)iVar14 * 0x18);
        } while (iVar14 != -1);
      }
    }
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar15 = Z_Construct_UClass_UDS_ViewerCharacterInfo_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_178,pUVar15);
    local_178._8_8_ = this;
    pUVar16 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_178);
    if (local_178._64_8_ != 0) {
      plVar19 = (longlong *)(local_178 + 0x50);
      if ((longlong *)local_178._104_8_ != (longlong *)0x0) {
        plVar19 = (longlong *)local_178._104_8_;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    local_1d0 = local_1f8;
    local_1c8 = &local_1d8;
    local_1d8 = pUVar16;
    TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_&,UDS_ViewerCharacterInfo_*_&&>_>
              ((TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
                *)&this->ViewerCharacterInfoMap,
               (TPairInitializer<int_&,UDS_ViewerCharacterInfo_*_&&> *)local_1e0,(bool *)&local_1d0)
    ;
LAB_14bb6b758:
    pTVar17 = &TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
               ::FindChecked((TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                              *)&this->ViewerCharacterInfoMap,local_1f8[0])->field0_0x0;
    if (pTVar17->DebugPtr == (UDS_ViewerCharacterInfo *)0x0) {
      return false;
    }
    local_1b0.Roll = 0.0;
    local_1b0.Pitch = dVar11;
    local_1b0.Yaw = dVar12;
    pTVar18 = UE::Math::TRotator<double>::Quaternion(&local_1b0,&local_198);
    dVar6 = pTVar18->Z;
    dVar8 = pTVar18->W;
    dVar9 = pTVar18->X;
    dVar10 = pTVar18->Y;
    dVar5 = local_f8.Rotation.XY.m128d_f64[0] * dVar10;
    dVar3 = local_f8.Rotation.XY.m128d_f64[1] * dVar6;
    dVar22 = local_f8.Rotation.XY.m128d_f64[1] * dVar9;
    dVar7 = local_f8.Rotation.ZW.m128d_f64[1] * dVar6;
    dVar4 = local_f8.Rotation.XY.m128d_f64[0] * dVar6 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            local_f8.Rotation.ZW.m128d_f64[1] * dVar10 +
            local_f8.Rotation.XY.m128d_f64[1] * dVar8 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            local_f8.Rotation.ZW.m128d_f64[0] * dVar9 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar6 = local_f8.Rotation.XY.m128d_f64[0] * dVar9 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            local_f8.Rotation.ZW.m128d_f64[1] * dVar8 +
            local_f8.Rotation.XY.m128d_f64[1] * dVar10 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            local_f8.Rotation.ZW.m128d_f64[0] * dVar6 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_f8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar4,0);
    local_f8.Rotation.XY.m128d_f64[0] =
         local_f8.Rotation.XY.m128d_f64[0] * dVar8 *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         local_f8.Rotation.ZW.m128d_f64[1] * dVar9 +
         dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         local_f8.Rotation.ZW.m128d_f64[0] * dVar10 *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_f8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_f8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar6,0);
    local_f8.Rotation.ZW.m128d_f64[0] =
         dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar7 +
         dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         local_f8.Rotation.ZW.m128d_f64[0] * dVar8 *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_f8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar6 >> 0x20);
    pTVar17 = &TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
               ::FindChecked((TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                              *)&this->ViewerCharacterInfoMap,local_1f8[0])->field0_0x0;
    this_00.field0_0x0 = (TObjectPtr<UDS_ViewerCharacterInfo>_u_0)pTVar17->DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_1e8.ObjectIndex = 0;
    local_1e8.ObjectSerialNumber = 0;
    local_1f0 = (FWeakObjectPtr)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_1e8,(FObjectPtr)&local_1f0);
    local_1f0 = local_1e8;
    UDS_ViewerCharacterInfo::ResetInfo((UDS_ViewerCharacterInfo *)this_00.field0_0x0);
    bVar13 = TWeakObjectPtr<UDS_ViewerSceneInfo,FWeakObjectPtr>::UEOpEquals
                       ((TWeakObjectPtr<UDS_ViewerSceneInfo,FWeakObjectPtr> *)&local_1f0,(void *)0x0
                       );
    if (!bVar13) {
      local_1c0 = (int *)((longlong)this_00.field0_0x0 + 0x3c);
      *(FWeakObjectPtr *)((longlong)this_00.field0_0x0 + 0x34) = local_1f0;
      *local_1c0 = local_1f8[0];
      local_1b8 = &local_f8;
      TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_&,UE::Math::TTransform<double>_const_&>_>
                ((TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                  *)((longlong)this_00.field0_0x0 + 0x40),
                 (TPairInitializer<int_&,UE::Math::TTransform<double>_const_&> *)(local_1e0 + 4),
                 (bool *)&local_1c0);
    }
    local_1f8[0] = local_1f8[0] + 1;
    if (this->ViewerCharacterCount <= (int)local_1f8[0]) {
      return true;
    }
  } while( true );
}

// IsAllCompleteRefreshAsync @ 14bb6e3a0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDS_ViewerSceneInfo::IsAllCompleteRefreshAsync(UDS_ViewerSceneInfo *this)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
              *)&this->ViewerCharacterInfoMap);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar3 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
              *)&this->ViewerCharacterInfoMap;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar1 = *(longlong *)(*local_48 + 8 + (longlong)(int)uVar3 * 0x18);
      if ((lVar1 != 0) &&
         (((0 < *(int *)(lVar1 + 0x28) || (0 < *(int *)(lVar1 + 0x2c))) &&
          (*(char *)(lVar1 + 0x90) == '\0')))) {
        if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
          uVar4 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34
          ;
          if (uVar4 < 4) {
            iVar2 = 1;
          }
          else {
            uVar3 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
            lVar1 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
              }
            }
            iVar2 = 1 << ((byte)lVar1 & 0x1f);
          }
          if (((0 < (int)uVar4) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
            local_18->HashSize = iVar2;
            TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
            ::Rehash(local_18);
          }
        }
        return false;
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar3 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar4 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar4 < 4) {
        iVar2 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar2 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar4) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
        local_18->HashSize = iVar2;
        TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return true;
}

// OnCompleteRefreshAsync @ 14bb72950

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UDS_ViewerSceneInfo::OnCompleteRefreshAsync(UDS_ViewerSceneInfo *this)

{
  TMap<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
  *pTVar1;
  longlong lVar2;
  int iVar3;
  UDS_WindowManager *this_00;
  UDS_ViewerManager *pUVar4;
  FTimerManager *pFVar5;
  FTimerData *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  float local_res8 [2];
  uint local_res10 [2];
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  pTVar1 = &this->ViewerCharacterInfoMap;
  TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_20 = 0;
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar7 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      lVar2 = *(longlong *)(*local_58 + 8 + (longlong)(int)uVar7 * 0x18);
      if ((lVar2 != 0) &&
         (((0 < *(int *)(lVar2 + 0x28) || (0 < *(int *)(lVar2 + 0x2c))) &&
          (*(char *)(lVar2 + 0x90) == '\0')))) {
        if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
          uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34
          ;
          if (uVar8 < 4) {
            iVar3 = 1;
          }
          else {
            uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
            lVar2 = 0x3f;
            if (uVar7 != 0) {
              for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
              }
            }
            iVar3 = 1 << ((byte)lVar2 & 0x1f);
          }
          if (((0 < (int)uVar8) && (local_28->HashSize < iVar3)) || (iVar3 < local_28->HashSize)) {
            local_28->HashSize = iVar3;
            TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
            ::Rehash(local_28);
          }
        }
        goto LAB_14bb72b09;
      }
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar7 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
      uVar8 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar3 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_28->HashSize < iVar3)) || (iVar3 < local_28->HashSize)) {
        local_28->HashSize = iVar3;
        TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res8[0] = 0.0;
    local_res10[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,0x387,local_res10,local_res8);
  }
  UpdateViewerCamTransform(this);
LAB_14bb72b09:
  if ((this->ViewerSceneType == CharacterEquip) &&
     (pUVar4 = UDS_ViewerManager::GetInst(), pUVar4 != (UDS_ViewerManager *)0x0)) {
    local_res8[0] = (float)CONCAT31(local_res8[0]._1_3_,1);
    TMulticastDelegate<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>::Broadcast
              (&pUVar4->SelectViewerCharacterDelegate,(bool *)local_res8);
    if ((pUVar4->TimerHandle_BroadcastSelectViewerCharacterEnd).Handle != 0) {
      pFVar5 = FDS_TimerManager::Get((UObject *)0x0);
      pFVar6 = FTimerManager::FindTimer
                         (pFVar5,&pUVar4->TimerHandle_BroadcastSelectViewerCharacterEnd);
      if (pFVar6 != (FTimerData *)0x0) {
        FTimerManager::InternalClearTimer
                  (pFVar5,(FTimerHandle)
                          (pUVar4->TimerHandle_BroadcastSelectViewerCharacterEnd).Handle);
      }
      (pUVar4->TimerHandle_BroadcastSelectViewerCharacterEnd).Handle = 0;
    }
    pFVar5 = FDS_TimerManager::Get((UObject *)0x0);
    FTimerManager::SetTimer<UDS_ViewerManager>
              (pFVar5,&pUVar4->TimerHandle_BroadcastSelectViewerCharacterEnd,pUVar4,
               (pmf_84d966d2)0x14bb52a00,__real_3dcccccd,false,__real_bf800000);
  }
  return;
}

// OnCompleteWorldStreaming @ 14bb72db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ViewerSceneInfo::OnCompleteWorldStreaming(UDS_ViewerSceneInfo *this)

{
  bool bVar1;
  UDS_ViewerManager *pUVar2;
  UDS_LogManager *pUVar3;
  ADS_CameraManager *pAVar4;
  undefined1 auStackY_178 [32];
  uint uVar5;
  wchar_t *pwVar6;
  float local_148;
  float local_144;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this->bIsStreamingComplete = true;
  pUVar2 = UDS_ViewerManager::GetInst();
  if (pUVar2 == (UDS_ViewerManager *)0x0) {
    return;
  }
  if (((pUVar2->ViewerSceneInfo).field0_0x0.DebugPtr == (UDS_ViewerSceneInfo *)0x0) ||
     ((pUVar2->PreViewerSceneInfo).field0_0x0.DebugPtr == (UDS_ViewerSceneInfo *)0x0)) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ViewerManager::OnCompleteWorldStreaming",0x2b,Yes);
    pwVar6 = L"Invalid MemberVariables.";
    uVar5 = 0x5be;
  }
  else {
    UDS_ViewerManager::GetCameraManager();
    bVar1 = TWeakObjectPtr<ADS_CameraManager,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<ADS_CameraManager,FWeakObjectPtr> *)&local_140,(void *)0x0);
    if (!bVar1) {
      ResetInfo((pUVar2->PreViewerSceneInfo).field0_0x0.DebugPtr);
      if (((pUVar2->ViewerSceneInfo).field0_0x0.DebugPtr)->ViewerSceneType != CharacterGallery) {
        pAVar4 = (ADS_CameraManager *)FWeakObjectPtr::Get(&local_140);
        local_144 = DS_CommonDataHelper::CharacterViewerFadeInDuration();
        local_148 = 1.4013e-45;
        ADS_CameraManager::RequestFade(pAVar4,(EDS_CameraFadeState *)&local_148,&local_144);
        return;
      }
      if (pUVar2->bIsCompleteGallerySequenceLoading != true) {
        return;
      }
      pAVar4 = (ADS_CameraManager *)FWeakObjectPtr::Get(&local_140);
      local_148 = DS_CommonDataHelper::CharacterViewerFadeInDuration();
      local_144 = 1.4013e-45;
      ADS_CameraManager::RequestFade(pAVar4,(EDS_CameraFadeState *)&local_144,&local_148);
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ViewerManager::OnCompleteWorldStreaming",0x2b,Yes);
    pwVar6 = L"cameraMng is nullptr.";
    uVar5 = 0x5c5;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnOpenedCommonCenterLoading @ 14bb76540

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UDS_ViewerSceneInfo::OnOpenedCommonCenterLoading(UDS_ViewerSceneInfo *this,UDS_UserWidget *param_1)

{
  FTimerManager *pFVar1;
  FTimerData *pFVar2;
  FTimerHandle FVar3;
  
  if ((this->TimerHandle_OnCompleteRefreshAsync).Handle != 0) {
    pFVar1 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar2 = FTimerManager::FindTimer(pFVar1,&this->TimerHandle_OnCompleteRefreshAsync);
    if (pFVar2 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (pFVar1,(FTimerHandle)(this->TimerHandle_OnCompleteRefreshAsync).Handle);
    }
    (this->TimerHandle_OnCompleteRefreshAsync).Handle = 0;
  }
  pFVar1 = FDS_TimerManager::Get((UObject *)0x0);
  FVar3 = FTimerManager::SetTimerForNextTick<UDS_ViewerSceneInfo>
                    (pFVar1,(UDS_ViewerSceneInfo *)&stack0x00000008,(pmf_a321fe5f)this);
                    /* WARNING: Load size is inaccurate */
  (this->TimerHandle_OnCompleteRefreshAsync).Handle = *FVar3.Handle;
  return;
}

// ResetInfo @ 14bb86920

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall UDS_ViewerSceneInfo::ResetInfo(UDS_ViewerSceneInfo *this)

{
  TMap<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
  *pTVar1;
  FTimerHandle *pFVar2;
  ADS_StreamingSourceActor *this_00;
  UDS_ViewerCharacterInfo *this_01;
  longlong lVar3;
  int iVar4;
  FTimerManager *this_02;
  FTimerData *pFVar5;
  ulonglong uVar6;
  uint uVar7;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  this->bIsStreamingComplete = false;
  this_00 = (this->StreamingSourceActor).field0_0x0.DebugPtr;
  if (this_00 != (ADS_StreamingSourceActor *)0x0) {
    ADS_StreamingSourceActor::DisableStreamingSource(this_00);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  pTVar1 = &this->ViewerCharacterInfoMap;
  (this->ViewerCam).WeakPtr = local_res8;
  TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_88,
             (TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_20 = 0;
  stack0xffffffffffffffb8 = local_88._16_16_;
  local_58 = (longlong *)local_88._0_8_;
  auStack_50._0_8_ = local_88._8_8_;
  local_38 = local_68;
  pTStack_30 = pTStack_60;
  uVar6 = local_88._24_8_ >> 0x20;
  local_28 = (TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
    do {
      this_01 = *(UDS_ViewerCharacterInfo **)(*local_58 + 8 + (longlong)(int)uVar6 * 0x18);
      if (this_01 != (UDS_ViewerCharacterInfo *)0x0) {
        UDS_ViewerCharacterInfo::ResetInfo(this_01);
      }
      uStack_40 = uStack_40 & ~auStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
      uVar6 = (ulonglong)uStack_3c;
    } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
    if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
      uVar7 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
      if (uVar7 < 4) {
        iVar4 = 1;
      }
      else {
        uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar7) && (local_28->HashSize < iVar4)) || (iVar4 < local_28->HashSize)) {
        local_28->HashSize = iVar4;
        TSet<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>,FDefaultSetAllocator>
        ::Rehash(local_28);
      }
    }
  }
  pFVar2 = &this->TimerHandle_OnCompleteRefreshAsync;
  if (pFVar2->Handle != 0) {
    this_02 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar5 = FTimerManager::FindTimer(this_02,pFVar2);
    if (pFVar5 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_02,(FTimerHandle)pFVar2->Handle);
    }
    pFVar2->Handle = 0;
  }
  return;
}

// ResetZoomInOutState @ 14bb86ab0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_ViewerSceneInfo::ResetZoomInOutState(UDS_ViewerSceneInfo *this)

{
  bool *pbVar1;
  bool *pbVar2;
  UDS_ViewerManager *pUVar3;
  
  pbVar1 = &this->bIsZoomIn;
  pbVar2 = &this->bIsZoomInOutProcess;
  if ((*pbVar1 == false) && (*pbVar2 == false)) {
    *pbVar1 = false;
    *pbVar2 = false;
    return;
  }
  *pbVar1 = false;
  *pbVar2 = false;
  if (this->ViewerSceneType == CharacterEquip) {
    pUVar3 = UDS_ViewerManager::GetInst();
    if (pUVar3 != (UDS_ViewerManager *)0x0) {
      TMulticastDelegate<void___cdecl(bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>::
      Broadcast(&pUVar3->ChangedZoomInOutStateDelegate,pbVar1,pbVar2);
    }
  }
  return;
}

// SetIsZoomIn @ 14bb8ae30

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_ViewerSceneInfo::SetIsZoomIn(UDS_ViewerSceneInfo *this,bool *param_1)

{
  bool bVar1;
  bool bVar2;
  UDS_ViewerManager *pUVar3;
  float fVar4;
  
  bVar1 = this->bIsZoomIn;
  bVar2 = *param_1;
  this->bIsZoomIn = bVar2;
  if (bVar1 != bVar2) {
    bVar1 = this->bIsZoomInOutProcess;
    this->bIsZoomInOutProcess = true;
    fVar4 = DS_CommonDataHelper::CharViewerInitialZoomInOutSpeed();
    this->ZoomInOutSpeed = fVar4;
    if (bVar1 != true) {
      if (this->ViewerSceneType != CharacterEquip) {
        return;
      }
      pUVar3 = UDS_ViewerManager::GetInst();
      if (pUVar3 != (UDS_ViewerManager *)0x0) {
        TMulticastDelegate<void___cdecl(bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>::
        Broadcast(&pUVar3->ChangedZoomInOutStateDelegate,&this->bIsZoomIn,&this->bIsZoomInOutProcess
                 );
      }
    }
    if ((this->ViewerSceneType == CharacterEquip) &&
       (pUVar3 = UDS_ViewerManager::GetInst(), pUVar3 != (UDS_ViewerManager *)0x0)) {
      TMulticastDelegate<void___cdecl(bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>::
      Broadcast(&pUVar3->ChangedZoomInOutStateDelegate,&this->bIsZoomIn,&this->bIsZoomInOutProcess);
    }
  }
  return;
}

// SetIsZoomInOutProcess @ 14bb8af00

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_ViewerSceneInfo::SetIsZoomInOutProcess(UDS_ViewerSceneInfo *this,bool *param_1)

{
  bool bVar1;
  bool bVar2;
  UDS_ViewerManager *pUVar3;
  float fVar4;
  
  bVar1 = *param_1;
  bVar2 = this->bIsZoomInOutProcess;
  this->bIsZoomInOutProcess = bVar1;
  if (bVar1 == true) {
    fVar4 = DS_CommonDataHelper::CharViewerInitialZoomInOutSpeed();
  }
  else {
    fVar4 = 0.0;
  }
  this->ZoomInOutSpeed = fVar4;
  if ((bVar2 != bVar1) && (this->ViewerSceneType == CharacterEquip)) {
    pUVar3 = UDS_ViewerManager::GetInst();
    if (pUVar3 != (UDS_ViewerManager *)0x0) {
      TMulticastDelegate<void___cdecl(bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>::
      Broadcast(&pUVar3->ChangedZoomInOutStateDelegate,&this->bIsZoomIn,&this->bIsZoomInOutProcess);
    }
  }
  return;
}

// SetViewerCharacter @ 14bb8cc20

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

bool __thiscall
UDS_ViewerSceneInfo::SetViewerCharacter(UDS_ViewerSceneInfo *this,int *param_1,int *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  TObjectPtr<UDS_ViewerCharacterInfo>_u_0 *pTVar4;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar5;
  undefined1 *puVar6;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  uVar1 = *param_2;
  if (((-1 < (int)uVar1) && ((int)uVar1 < this->ViewerCharacterCount)) &&
     (*(int *)&(this->ViewerCharacterInfoMap).field_0x8 !=
      *(int *)&(this->ViewerCharacterInfoMap).field_0x34)) {
    puVar6 = *(undefined1 **)&(this->ViewerCharacterInfoMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ViewerCharacterInfoMap).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->ViewerCharacterInfoMap).field_0x48 - 1U & uVar1) * 4)
    ;
    if (iVar3 != -1) {
      do {
        if (*(uint *)(*(longlong *)&this->ViewerCharacterInfoMap + (longlong)iVar3 * 0x18) == uVar1)
        {
          pTVar4 = &TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                    ::FindChecked((TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                                   *)&this->ViewerCharacterInfoMap,uVar1)->field0_0x0;
          if (pTVar4->DebugPtr == (UDS_ViewerCharacterInfo *)0x0) {
            return false;
          }
          pTVar4 = &TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                    ::FindChecked((TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                                   *)&this->ViewerCharacterInfoMap,*param_2)->field0_0x0;
          bVar2 = UDS_ViewerCharacterInfo::SetViewerCharacter(pTVar4->DebugPtr,param_1);
          if (!bVar2) {
            return false;
          }
          TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
          CreateUObject<UDS_ViewerSceneInfo>
                    ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                     local_38,this,(pmf_fd984b4d)0x14bb76540);
          pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                   TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                             ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                               *)&local_20,
                              (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                               *)local_38);
          UDS_WindowManager::OpenCommonCenterLoading(pTVar5);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
                     (FWriteAccessScope *)&local_20);
          if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)local_30.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10)
            ;
            local_28 = 0;
          }
          if (local_20.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
          }
          if (local_30.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_30.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_38);
          return true;
        }
        iVar3 = *(int *)(*(longlong *)&this->ViewerCharacterInfoMap + 0x10 + (longlong)iVar3 * 0x18)
        ;
      } while (iVar3 != -1);
    }
  }
  return false;
}

// SetViewerNpc @ 14bb8d180

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

bool __thiscall
UDS_ViewerSceneInfo::SetViewerNpc(UDS_ViewerSceneInfo *this,int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  TObjectPtr<UDS_ViewerCharacterInfo>_u_0 *pTVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar6;
  undefined1 *puVar7;
  UDS_ViewerSceneInfo *local_res8;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  if (*(int *)&(this->ViewerCharacterInfoMap).field_0x8 !=
      *(int *)&(this->ViewerCharacterInfoMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ViewerCharacterInfoMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ViewerCharacterInfoMap).field_0x38;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->ViewerCharacterInfoMap).field_0x48 - 1U & param_2) *
                              4);
    if (iVar2 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->ViewerCharacterInfoMap + (longlong)iVar2 * 0x18) == param_2
           ) {
          pTVar3 = &TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                    ::FindChecked((TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                                   *)&this->ViewerCharacterInfoMap,param_2)->field0_0x0;
          if (pTVar3->DebugPtr == (UDS_ViewerCharacterInfo *)0x0) {
            return false;
          }
          pTVar3 = &TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                    ::FindChecked((TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                                   *)&this->ViewerCharacterInfoMap,param_2)->field0_0x0;
          bVar1 = UDS_ViewerCharacterInfo::SetViewerNpc(pTVar3->DebugPtr,param_1);
          if (!bVar1) {
            return false;
          }
          local_58 = (undefined1  [8])0x0;
          local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_50.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                     (FWriteAccessScope *)&local_40);
          local_28 = &local_50;
          puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = &
                      ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar5 = FDelegateHandle::GenerateNewID();
            puVar4[2] = uVar5;
            *puVar4 = &
                      ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ViewerSceneInfo____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this != (UDS_ViewerSceneInfo *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar4[3] = 0;
            local_res8 = this;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this != (UDS_ViewerSceneInfo *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
            puVar4[4] = OnOpenedCommonCenterLoading;
          }
          if (local_40.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
          }
          pTVar6 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                   TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                             ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                               *)&local_40,
                              (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                               *)local_58);
          UDS_WindowManager::OpenCommonCenterLoading(pTVar6);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                     (FWriteAccessScope *)&local_40);
          if ((local_50.DelegateSize != 0) &&
             (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_50,0,0,0x10);
            local_50.DelegateSize = 0;
          }
          if (local_40.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
          }
          if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_50.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_58);
          return true;
        }
        iVar2 = *(int *)(*(longlong *)&this->ViewerCharacterInfoMap + 0x10 + (longlong)iVar2 * 0x18)
        ;
      } while (iVar2 != -1);
    }
  }
  return false;
}

// SetViewerPreset @ 14bb8d750

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

bool __thiscall
UDS_ViewerSceneInfo::SetViewerPreset(UDS_ViewerSceneInfo *this,int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  TObjectPtr<UDS_ViewerCharacterInfo>_u_0 *pTVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar6;
  undefined1 *puVar7;
  UDS_ViewerSceneInfo *local_res8;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  if (*(int *)&(this->ViewerCharacterInfoMap).field_0x8 !=
      *(int *)&(this->ViewerCharacterInfoMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ViewerCharacterInfoMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ViewerCharacterInfoMap).field_0x38;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->ViewerCharacterInfoMap).field_0x48 - 1U & param_2) *
                              4);
    if (iVar2 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->ViewerCharacterInfoMap + (longlong)iVar2 * 0x18) == param_2
           ) {
          pTVar3 = &TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                    ::FindChecked((TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                                   *)&this->ViewerCharacterInfoMap,param_2)->field0_0x0;
          if (pTVar3->DebugPtr == (UDS_ViewerCharacterInfo *)0x0) {
            return false;
          }
          pTVar3 = &TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                    ::FindChecked((TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                                   *)&this->ViewerCharacterInfoMap,param_2)->field0_0x0;
          bVar1 = UDS_ViewerCharacterInfo::SetViewerPreset(pTVar3->DebugPtr,param_1);
          if (!bVar1) {
            return false;
          }
          local_58 = (undefined1  [8])0x0;
          local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_50.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                     (FWriteAccessScope *)&local_40);
          local_28 = &local_50;
          puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
          if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = &
                      ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar5 = FDelegateHandle::GenerateNewID();
            puVar4[2] = uVar5;
            *puVar4 = &
                      ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ViewerSceneInfo____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this != (UDS_ViewerSceneInfo *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar4[3] = 0;
            local_res8 = this;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this != (UDS_ViewerSceneInfo *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
            puVar4[4] = OnOpenedCommonCenterLoading;
          }
          if (local_40.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
          }
          pTVar6 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                   TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                             ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                               *)&local_40,
                              (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                               *)local_58);
          UDS_WindowManager::OpenCommonCenterLoading(pTVar6);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
                     (FWriteAccessScope *)&local_40);
          if ((local_50.DelegateSize != 0) &&
             (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_50,0,0,0x10);
            local_50.DelegateSize = 0;
          }
          if (local_40.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
          }
          if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_50.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_58);
          return true;
        }
        iVar2 = *(int *)(*(longlong *)&this->ViewerCharacterInfoMap + 0x10 + (longlong)iVar2 * 0x18)
        ;
      } while (iVar2 != -1);
    }
  }
  return false;
}

// StartWorldStreaming @ 14bb916e0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDS_ViewerSceneInfo::StartWorldStreaming(UDS_ViewerSceneInfo *this,EDS_ViewerSceneType *param_1)

{
  EDS_ViewerSceneType EVar1;
  bool bVar2;
  TWeakObjectPtr<ADS_PositionActor,FWeakObjectPtr> TVar3;
  AActor *this_00;
  UObject *pUVar4;
  ADS_StreamingSourceActor *pAVar5;
  ADS_CameraManager *this_01;
  int iVar6;
  FObjectPtr_u_0 FVar7;
  undefined7 uVar9;
  TTransform<double> *pTVar8;
  FWeakObjectPtr local_res10;
  UDS_ViewerSceneInfo *local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  FWeakObjectPtr local_30;
  FName local_28 [2];
  
  if (*param_1 == None) {
    return false;
  }
  GetStreamingSourceActor(this);
  bVar2 = TWeakObjectPtr<ADS_StreamingSourceActor,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_StreamingSourceActor,FWeakObjectPtr> *)&local_38,
                     (void *)0x0);
  if (bVar2) {
    return false;
  }
  FVar7.Handle = (UObject *)&local_res10;
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)FVar7);
  EVar1 = *param_1;
  uVar9 = FVar7._1_7_;
  if (EVar1 == CharacterEquip) {
    iVar6 = (int)CONCAT71(uVar9,1);
  }
  else if (EVar1 == CharacterGallery) {
    iVar6 = (int)CONCAT71(uVar9,2);
  }
  else if (EVar1 == CharacterDeck) {
    iVar6 = (int)CONCAT71(uVar9,3);
  }
  else if (EVar1 == Dungeon) {
    iVar6 = (int)CONCAT71(uVar9,7);
  }
  else {
    if (EVar1 != MountManagement) goto LAB_14bb91771;
    iVar6 = (int)CONCAT71(uVar9,4);
  }
  TVar3 = ADS_PositionActor::GetPositionActor((EDS_PositionType)&local_res10,iVar6);
                    /* WARNING: Load size is inaccurate */
  local_res20 = *TVar3.WeakPtr;
LAB_14bb91771:
  bVar2 = TWeakObjectPtr<ADS_PositionActor,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PositionActor,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if ((!bVar2) && (bVar2 = InitInfo(this,param_1), bVar2)) {
    this_00 = (AActor *)FWeakObjectPtr::Get(&local_38);
    pUVar4 = FWeakObjectPtr::Get(&local_res20);
    if (*(longlong *)(pUVar4 + 0xb) == 0) {
      pTVar8 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar8 = (TTransform<double> *)(*(longlong *)(pUVar4 + 0xb) + 0x1f0);
    }
    AActor::SetActorTransform(this_00,pTVar8,false,(FHitResult *)0x0,None);
    pAVar5 = (ADS_StreamingSourceActor *)FWeakObjectPtr::Get(&local_38);
    ::FName::FName(local_28,"OnCompleteWorldStreaming");
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ViewerSceneInfo *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ViewerSceneInfo *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    ADS_StreamingSourceActor::BindStreamingCompleteNotify
              (pAVar5,(TWeakObjectPtr<UObject,FWeakObjectPtr>)local_res10,local_28);
    pAVar5 = (ADS_StreamingSourceActor *)FWeakObjectPtr::Get(&local_38);
    ADS_StreamingSourceActor::EnableStreamingSource(pAVar5);
    bVar2 = ChangeToViewerCam(this);
    if (bVar2) {
      UDS_ViewerManager::GetCameraManager();
      bVar2 = TWeakObjectPtr<ADS_CameraManager,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<ADS_CameraManager,FWeakObjectPtr> *)&local_30,(void *)0x0);
      if (!bVar2) {
        this_01 = (ADS_CameraManager *)FWeakObjectPtr::Get(&local_30);
        local_res10 = (FWeakObjectPtr)((ulonglong)local_res10 & 0xffffffff00000000);
        local_res18 = (UDS_ViewerSceneInfo *)CONCAT44(local_res18._4_4_,2);
        ADS_CameraManager::RequestFade
                  (this_01,(EDS_CameraFadeState *)&local_res18,(float *)&local_res10);
        return true;
      }
    }
  }
  return false;
}

// SwitchInfo @ 14bb92400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDS_ViewerSceneInfo::SwitchInfo(UDS_ViewerSceneInfo *this,TObjectPtr<UDS_ViewerSceneInfo> param_1)

{
  TMap<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
  *this_00;
  bool bVar1;
  EDS_ViewerSceneType EVar2;
  int iVar3;
  ADS_StreamingSourceActor *pAVar4;
  FWeakObjectPtr FVar5;
  longlong lVar6;
  UObject *pUVar7;
  uint uVar8;
  void *_Dst;
  ForElementType<FSetElementId> _Src;
  longlong lVar9;
  uint uVar10;
  undefined1 auStackY_d8 [32];
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_60;
  uint local_50 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if (*(longlong *)param_1.field0_0x0 == 0) {
    return false;
  }
  EVar2 = this->ViewerSceneType;
  pAVar4 = (this->StreamingSourceActor).field0_0x0.DebugPtr;
  bVar1 = this->bIsStreamingComplete;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pAVar4 != (ADS_StreamingSourceActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar4);
  }
  iVar3 = this->ViewerCharacterCount;
  this_00 = &this->ViewerCharacterInfoMap;
  FVar5 = (this->ViewerCam).WeakPtr;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_60.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_50[0] = 0;
  if ((TMap<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
       *)local_98 != this_00) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&local_60,(int *)local_50,
               (ForElementType<FSetElementId> *)&(this->ViewerCharacterInfoMap).field_0x38,
               *(int *)&(this->ViewerCharacterInfoMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_98,
                (TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00);
  }
  this->ViewerSceneType = *(EDS_ViewerSceneType *)(*(longlong *)param_1.field0_0x0 + 0x28);
  this->bIsStreamingComplete = *(bool *)(*(longlong *)param_1.field0_0x0 + 0x2c);
  lVar6 = *(longlong *)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 = *(UObject **)(lVar6 + 0x30), pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  (this->StreamingSourceActor).field0_0x0 =
       *(TObjectPtr<ADS_StreamingSourceActor>_u_0 *)(lVar6 + 0x30);
  (this->ViewerCam).WeakPtr = *(FWeakObjectPtr *)(*(longlong *)param_1.field0_0x0 + 0x38);
  this->ViewerCharacterCount = *(int *)(*(longlong *)param_1.field0_0x0 + 0x40);
  lVar6 = *(longlong *)param_1.field0_0x0;
  if (this_00 !=
      (TMap<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
       *)(lVar6 + 0x48)) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->ViewerCharacterInfoMap).field_0x38,
               (int *)&(this->ViewerCharacterInfoMap).field_0x48,
               (ForElementType<FSetElementId> *)(lVar6 + 0x80),*(int *)(lVar6 + 0x90));
    TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)(lVar6 + 0x48));
  }
  *(EDS_ViewerSceneType *)(*(longlong *)param_1.field0_0x0 + 0x28) = EVar2;
  *(bool *)(*(longlong *)param_1.field0_0x0 + 0x2c) = bVar1;
  lVar6 = *(longlong *)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar4 != (ADS_StreamingSourceActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar4);
  }
  uVar8 = local_50[0];
  *(ADS_StreamingSourceActor **)(lVar6 + 0x30) = pAVar4;
  *(FWeakObjectPtr *)(*(longlong *)param_1.field0_0x0 + 0x38) = FVar5;
  *(int *)(*(longlong *)param_1.field0_0x0 + 0x40) = iVar3;
  lVar6 = *(longlong *)param_1.field0_0x0;
  if ((TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)(lVar6 + 0x48) ==
      (TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)local_98) goto LAB_14bb9262c;
  lVar9 = (longlong)(int)local_50[0];
  uVar10 = local_50[0];
  if (local_50[0] < 2) {
    if (*(longlong *)(lVar6 + 0x88) != 0) {
      uVar10 = 0;
      goto LAB_14bb925e2;
    }
  }
  else {
LAB_14bb925e2:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(lVar6 + 0x88),0,uVar10,4);
  }
  _Src = (ForElementType<FSetElementId>)&local_60;
  if (local_60.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    _Src = local_60.SecondaryData;
  }
  _Dst = *(void **)(lVar6 + 0x88);
  if (*(void **)(lVar6 + 0x88) == (void *)0x0) {
    _Dst = (void *)(lVar6 + 0x80);
  }
  if (uVar8 != 0) {
    memcpy(_Dst,(void *)_Src,lVar9 << 2);
  }
  *(uint *)(lVar6 + 0x90) = uVar8;
  TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::operator=((TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)(lVar6 + 0x48),
              (TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_ViewerCharacterInfo>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98);
LAB_14bb9262c:
  local_50[0] = 0;
  if (local_60.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_60.SecondaryData);
  }
  iVar3 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_64 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return true;
}

// Update @ 14bb96270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_ViewerSceneInfo::Update(UDS_ViewerSceneInfo *this,float *param_1)

{
  bool bVar1;
  ADS_CameraActor *pAVar2;
  longlong lVar3;
  AActor *pAVar4;
  UDS_ViewerManager *pUVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStackY_238 [32];
  float fStack_208;
  float afStack_204 [3];
  TVector<double>_u_0 TStack_1f8;
  double dStack_1e0;
  TVector<double>_u_0 TStack_1d8;
  double dStack_1c0;
  TVector<double>_u_0 TStack_1b8;
  TQuat<double> TStack_198;
  TTransform<double> TStack_178;
  TTransform<double> TStack_118;
  TTransform<double> TStack_b8;
  ulonglong uStack_58;
  
  if (this->bIsZoomInOutProcess == true) {
    uStack_58 = __security_cookie.value ^ (ulonglong)auStackY_238;
    if ((this->bIsZoomInOutProcess != false) &&
       (bVar1 = TWeakObjectPtr<ADS_CameraActor_CharacterViewer,FWeakObjectPtr>::UEOpEquals
                          (&this->ViewerCam,(void *)0x0), !bVar1)) {
      pAVar2 = (ADS_CameraActor *)FWeakObjectPtr::Get(&(this->ViewerCam).WeakPtr);
      ADS_CameraActor::GetActorRelativeTransform(pAVar2,&TStack_b8);
      TStack_178.Rotation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      TStack_178.Rotation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      TStack_178.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      TStack_178.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      TStack_178.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      TStack_178.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      pAVar2 = (ADS_CameraActor *)FWeakObjectPtr::Get(&(this->ViewerCam).WeakPtr);
      fVar6 = ADS_CameraActor::GetFieldOfView(pAVar2);
      bVar1 = this->bIsZoomIn != true;
      if (bVar1) {
        TStack_178.Rotation.XY.m128d_f64[0] =
             (this->ZoomOutCamInfo).CamTrans.Rotation.XY.m128d_f64[0];
        TStack_178.Rotation.XY.m128d_f64[1] =
             (this->ZoomOutCamInfo).CamTrans.Rotation.XY.m128d_f64[1];
        TStack_178.Rotation.ZW.m128d_f64[0] =
             (this->ZoomOutCamInfo).CamTrans.Rotation.ZW.m128d_f64[0];
        TStack_178.Rotation.ZW.m128d_f64[1] =
             (this->ZoomOutCamInfo).CamTrans.Rotation.ZW.m128d_f64[1];
        TStack_178.Translation.XY.m128d_f64[0] =
             (this->ZoomOutCamInfo).CamTrans.Translation.XY.m128d_f64[0];
        TStack_178.Translation.XY.m128d_f64[1] =
             (this->ZoomOutCamInfo).CamTrans.Translation.XY.m128d_f64[1];
        TStack_178.Translation.ZW.m128d_f64 =
             *&(this->ZoomOutCamInfo).CamTrans.Translation.ZW.m128d_f64;
        TStack_178.Scale3D.XY.m128d_f64[0]._0_4_ =
             *(undefined4 *)(this->ZoomOutCamInfo).CamTrans.Scale3D.XY.m128d_f64;
        TStack_178.Scale3D.XY.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(this->ZoomOutCamInfo).CamTrans.Scale3D.XY.m128d_f64 + 4);
        TStack_178.Scale3D.XY.m128d_f64[1]._0_4_ =
             *(undefined4 *)((this->ZoomOutCamInfo).CamTrans.Scale3D.XY.m128d_f64 + 1);
        TStack_178.Scale3D.XY.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(this->ZoomOutCamInfo).CamTrans.Scale3D.XY.m128d_f64 + 0xc);
        TStack_178.Scale3D.ZW.m128d_f64[0]._0_4_ =
             *(undefined4 *)(this->ZoomOutCamInfo).CamTrans.Scale3D.ZW.m128d_f64;
        TStack_178.Scale3D.ZW.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(this->ZoomOutCamInfo).CamTrans.Scale3D.ZW.m128d_f64 + 4);
        TStack_178.Scale3D.ZW.m128d_f64[1]._0_4_ =
             *(undefined4 *)((this->ZoomOutCamInfo).CamTrans.Scale3D.ZW.m128d_f64 + 1);
        TStack_178.Scale3D.ZW.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(this->ZoomOutCamInfo).CamTrans.Scale3D.ZW.m128d_f64 + 0xc);
      }
      else {
        TStack_178.Rotation.XY.m128d_f64[0] =
             (this->ZoomInCamInfo).CamTrans.Rotation.XY.m128d_f64[0];
        TStack_178.Rotation.XY.m128d_f64[1] =
             (this->ZoomInCamInfo).CamTrans.Rotation.XY.m128d_f64[1];
        TStack_178.Rotation.ZW.m128d_f64[0] =
             (this->ZoomInCamInfo).CamTrans.Rotation.ZW.m128d_f64[0];
        TStack_178.Rotation.ZW.m128d_f64[1] =
             (this->ZoomInCamInfo).CamTrans.Rotation.ZW.m128d_f64[1];
        TStack_178.Scale3D.XY.m128d_f64[0]._0_4_ =
             *(undefined4 *)(this->ZoomInCamInfo).CamTrans.Scale3D.XY.m128d_f64;
        TStack_178.Scale3D.XY.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(this->ZoomInCamInfo).CamTrans.Scale3D.XY.m128d_f64 + 4);
        TStack_178.Scale3D.XY.m128d_f64[1]._0_4_ =
             *(undefined4 *)((this->ZoomInCamInfo).CamTrans.Scale3D.XY.m128d_f64 + 1);
        TStack_178.Scale3D.XY.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(this->ZoomInCamInfo).CamTrans.Scale3D.XY.m128d_f64 + 0xc);
        TStack_178.Translation.XY.m128d_f64[0] =
             (this->ZoomInCamInfo).CamTrans.Translation.XY.m128d_f64[0];
        TStack_178.Translation.XY.m128d_f64[1] =
             (this->ZoomInCamInfo).CamTrans.Translation.XY.m128d_f64[1];
        TStack_178.Translation.ZW.m128d_f64 =
             *&(this->ZoomInCamInfo).CamTrans.Translation.ZW.m128d_f64;
        TStack_178.Scale3D.ZW.m128d_f64[0]._0_4_ =
             *(undefined4 *)(this->ZoomInCamInfo).CamTrans.Scale3D.ZW.m128d_f64;
        TStack_178.Scale3D.ZW.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(this->ZoomInCamInfo).CamTrans.Scale3D.ZW.m128d_f64 + 4);
        TStack_178.Scale3D.ZW.m128d_f64[1]._0_4_ =
             *(undefined4 *)((this->ZoomInCamInfo).CamTrans.Scale3D.ZW.m128d_f64 + 1);
        TStack_178.Scale3D.ZW.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(this->ZoomInCamInfo).CamTrans.Scale3D.ZW.m128d_f64 + 0xc);
      }
      fVar8 = *param_1;
      lVar3 = 0x180;
      if (bVar1) {
        lVar3 = 0x110;
      }
      fStack_208 = *(float *)(&this->field_0x0 + lVar3);
      fVar7 = DS_CommonDataHelper::CharViewerZoomInOutAcceleration();
      TStack_1d8._s_0.Z = TStack_178.Translation.ZW.m128d_f64[0];
      TStack_1d8._s_0.X = TStack_178.Translation.XY.m128d_f64[0];
      TStack_1d8._s_0.Y = TStack_178.Translation.XY.m128d_f64[1];
      fVar8 = fVar7 * fVar8 + this->ZoomInOutSpeed;
      TStack_1f8._s_0.X = TStack_b8.Translation.XY.m128d_f64[0];
      TStack_1f8._s_0.Y = TStack_b8.Translation.XY.m128d_f64[1];
      TStack_1f8._s_0.Z = TStack_b8.Translation.ZW.m128d_f64[0];
      this->ZoomInOutSpeed = fVar8;
      FMath::VInterpTo((TVector<double> *)&TStack_1b8._s_0,(TVector<double> *)&TStack_1f8._s_0,
                       (TVector<double> *)&TStack_1d8._s_0,*param_1,fVar8);
      TStack_1f8._s_0.X = TStack_178.Rotation.XY.m128d_f64[0];
      TStack_1f8._s_0.Y = TStack_178.Rotation.XY.m128d_f64[1];
      TStack_1d8._s_0.X = TStack_b8.Rotation.XY.m128d_f64[0];
      TStack_1d8._s_0.Y = TStack_b8.Rotation.XY.m128d_f64[1];
      TStack_1f8._s_0.Z = TStack_178.Rotation.ZW.m128d_f64[0];
      dStack_1e0 = TStack_178.Rotation.ZW.m128d_f64[1];
      TStack_1d8._s_0.Z = TStack_b8.Rotation.ZW.m128d_f64[0];
      dStack_1c0 = TStack_b8.Rotation.ZW.m128d_f64[1];
      FMath::QInterpTo<double>
                (&TStack_198,(TQuat<double> *)&TStack_1d8._s_0,(TQuat<double> *)&TStack_1f8._s_0,
                 *param_1,this->ZoomInOutSpeed);
      afStack_204[0] = fStack_208;
      if ((0.0 < this->ZoomInOutSpeed) &&
         (fVar8 = fStack_208 - fVar6, __real_322bcc77 <= fVar8 * fVar8)) {
        fVar7 = this->ZoomInOutSpeed * *param_1;
        if (__real_3f800000 <= fVar7) {
          fVar7 = __real_3f800000;
        }
        if (fVar7 <= 0.0) {
          fVar7 = 0.0;
        }
        afStack_204[0] = fVar7 * fVar8 + fVar6;
      }
      if (__real_3f1a36e2e0000000 <=
          (TStack_178.Translation.XY.m128d_f64[1] - TStack_1b8._s_0.Y) *
          (TStack_178.Translation.XY.m128d_f64[1] - TStack_1b8._s_0.Y) +
          (TStack_178.Translation.XY.m128d_f64[0] - TStack_1b8._s_0.X) *
          (TStack_178.Translation.XY.m128d_f64[0] - TStack_1b8._s_0.X) +
          (TStack_178.Translation.ZW.m128d_f64[0] - TStack_1b8._s_0.Z) *
          (TStack_178.Translation.ZW.m128d_f64[0] - TStack_1b8._s_0.Z)) {
        TStack_118.Scale3D.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        TStack_118.Translation.ZW.m128d_f64[0] = TStack_1b8._s_0.Z;
        TStack_118.Translation.ZW.m128d_f64[1] = 0.0;
        TStack_118.Scale3D.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        TStack_118.Rotation.XY.m128d_f64[0] = TStack_198.X;
        TStack_118.Rotation.XY.m128d_f64[1] = TStack_198.Y;
        TStack_118.Translation.XY.m128d_f64[0] = TStack_1b8._s_0.X;
        TStack_118.Translation.XY.m128d_f64[1] = TStack_1b8._s_0.Y;
        TStack_118.Rotation.ZW.m128d_f64[0] = TStack_198.Z;
        TStack_118.Rotation.ZW.m128d_f64[1] = TStack_198.W;
        pAVar4 = (AActor *)FWeakObjectPtr::Get(&(this->ViewerCam).WeakPtr);
        AActor::SetActorRelativeTransform(pAVar4,&TStack_118,false,(FHitResult *)0x0,None);
        pAVar2 = (ADS_CameraActor *)FWeakObjectPtr::Get(&(this->ViewerCam).WeakPtr);
        ADS_CameraActor::SetFieldOfView(pAVar2,afStack_204);
      }
      else {
        pAVar4 = (AActor *)FWeakObjectPtr::Get(&(this->ViewerCam).WeakPtr);
        AActor::SetActorRelativeTransform(pAVar4,&TStack_178,false,(FHitResult *)0x0,None);
        pAVar2 = (ADS_CameraActor *)FWeakObjectPtr::Get(&(this->ViewerCam).WeakPtr);
        ADS_CameraActor::SetFieldOfView(pAVar2,&fStack_208);
        bVar1 = this->bIsZoomInOutProcess;
        this->bIsZoomInOutProcess = false;
        this->ZoomInOutSpeed = 0.0;
        if (((bVar1 != false) && (this->ViewerSceneType == CharacterEquip)) &&
           (pUVar5 = UDS_ViewerManager::GetInst(), pUVar5 != (UDS_ViewerManager *)0x0)) {
          TMulticastDelegate<void___cdecl(bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>::
          Broadcast(&pUVar5->ChangedZoomInOutStateDelegate,&this->bIsZoomIn,
                    &this->bIsZoomInOutProcess);
        }
      }
    }
    return;
  }
  return;
}

// UpdateViewerCamTransform @ 14bb98fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

bool __thiscall UDS_ViewerSceneInfo::UpdateViewerCamTransform(UDS_ViewerSceneInfo *this)

{
  EDS_ViewerSceneType EVar1;
  UDS_ViewerCharacterInfo *pUVar2;
  double dVar3;
  bool bVar4;
  int *piVar5;
  TObjectPtr<UDS_ViewerCharacterInfo> *pTVar6;
  UObject *pUVar7;
  TTransform<double> *pTVar8;
  AActor *pAVar9;
  UDS_ViewerManager *pUVar10;
  UObject *pUVar11;
  ADS_CameraActor *this_00;
  FDS_ViewerSetting_CamInfo *pFVar12;
  int iVar13;
  undefined1 *puVar14;
  uint uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_d8 [32];
  FWeakObjectPtr local_a8;
  FWeakObjectPtr local_a0;
  UDS_ViewerCharacterInfo *local_98;
  FWeakObjectPtr local_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  bVar4 = TWeakObjectPtr<ADS_CameraActor_CharacterViewer,FWeakObjectPtr>::UEOpEquals
                    (&this->ViewerCam,(void *)0x0);
  if (!bVar4) {
    UDS_ViewerSetting::GetInst();
    bVar4 = TWeakObjectPtr<UDS_ViewerSetting,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ViewerSetting,FWeakObjectPtr> *)&local_90,(void *)0x0);
    if (!bVar4) {
      EVar1 = this->ViewerSceneType;
      if (EVar1 == CharacterEquip) {
        if (*(int *)&(this->ViewerCharacterInfoMap).field_0x8 !=
            *(int *)&(this->ViewerCharacterInfoMap).field_0x34) {
          piVar5 = *(int **)&(this->ViewerCharacterInfoMap).field_0x40;
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)&(this->ViewerCharacterInfoMap).field_0x38;
          }
          iVar13 = *piVar5;
          if (iVar13 != -1) {
            do {
              if (*(int *)(*(longlong *)&this->ViewerCharacterInfoMap + (longlong)iVar13 * 0x18) ==
                  0) {
                pTVar6 = TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                         ::FindChecked((TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                                        *)&this->ViewerCharacterInfoMap,0);
                pUVar2 = (pTVar6->field0_0x0).DebugPtr;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  if (pUVar2 != (UDS_ViewerCharacterInfo *)0x0) {
                    UE::GC::MarkAsReachable((UObject *)pUVar2);
                  }
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar2 != (UDS_ViewerCharacterInfo *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)pUVar2);
                  }
                }
                local_a8.ObjectIndex = 0;
                local_a8.ObjectSerialNumber = 0;
                local_98 = pUVar2;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar2 != (UDS_ViewerCharacterInfo *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)pUVar2);
                }
                FWeakObjectPtr::operator=(&local_a8,(FObjectPtr)&local_98);
                bVar4 = TWeakObjectPtr<UDS_ViewerCharacterInfo,FWeakObjectPtr>::UEOpEquals
                                  ((TWeakObjectPtr<UDS_ViewerCharacterInfo,FWeakObjectPtr> *)
                                   &local_a8,(void *)0x0);
                if (bVar4) {
                  return false;
                }
                if ((this->bIsZoomIn == false) && (this->bIsZoomInOutProcess == false)) {
                  this->bIsZoomIn = false;
                  this->bIsZoomInOutProcess = false;
                }
                else {
                  this->bIsZoomIn = false;
                  this->bIsZoomInOutProcess = false;
                  if ((this->ViewerSceneType == CharacterEquip) &&
                     (pUVar10 = UDS_ViewerManager::GetInst(), pUVar10 != (UDS_ViewerManager *)0x0))
                  {
                    TMulticastDelegate<void___cdecl(bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
                    ::Broadcast(&pUVar10->ChangedZoomInOutStateDelegate,&this->bIsZoomIn,
                                &this->bIsZoomInOutProcess);
                  }
                }
                pUVar7 = FWeakObjectPtr::Get(&local_90);
                pUVar11 = FWeakObjectPtr::Get(&local_a8);
                if (*(int *)&pUVar7[4].field_0x18 == *(int *)&pUVar7[5].field_0x1c)
                goto LAB_14bb995d9;
                puVar14 = *(undefined1 **)(pUVar7 + 6);
                if (*(undefined1 **)(pUVar7 + 6) == (undefined1 *)0x0) {
                  puVar14 = &pUVar7[5].field_0x20;
                }
                iVar13 = *(int *)(puVar14 +
                                 (ulonglong)
                                 (*(int *)&pUVar7[6].field_0x8 - 1U & *(uint *)(pUVar11 + 1)) * 4);
                if (iVar13 == -1) goto LAB_14bb995d9;
                goto LAB_14bb995b0;
              }
              iVar13 = *(int *)(*(longlong *)&this->ViewerCharacterInfoMap + 0x10 +
                               (longlong)iVar13 * 0x18);
            } while (iVar13 != -1);
          }
        }
      }
      else if (EVar1 == Dungeon) {
        if (*(int *)&(this->ViewerCharacterInfoMap).field_0x8 !=
            *(int *)&(this->ViewerCharacterInfoMap).field_0x34) {
          piVar5 = *(int **)&(this->ViewerCharacterInfoMap).field_0x40;
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)&(this->ViewerCharacterInfoMap).field_0x38;
          }
          iVar13 = *piVar5;
          if (iVar13 != -1) {
            do {
              if (*(int *)(*(longlong *)&this->ViewerCharacterInfoMap + (longlong)iVar13 * 0x18) ==
                  0) {
                pTVar6 = TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                         ::FindChecked((TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                                        *)&this->ViewerCharacterInfoMap,0);
                pUVar2 = (pTVar6->field0_0x0).DebugPtr;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  if (pUVar2 != (UDS_ViewerCharacterInfo *)0x0) {
                    UE::GC::MarkAsReachable((UObject *)pUVar2);
                  }
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar2 != (UDS_ViewerCharacterInfo *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)pUVar2);
                  }
                }
                local_a8.ObjectIndex = 0;
                local_a8.ObjectSerialNumber = 0;
                local_98 = pUVar2;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar2 != (UDS_ViewerCharacterInfo *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)pUVar2);
                }
                FWeakObjectPtr::operator=(&local_a8,(FObjectPtr)&local_98);
                bVar4 = TWeakObjectPtr<UDS_ViewerCharacterInfo,FWeakObjectPtr>::UEOpEquals
                                  ((TWeakObjectPtr<UDS_ViewerCharacterInfo,FWeakObjectPtr> *)
                                   &local_a8,(void *)0x0);
                if (bVar4) {
                  return false;
                }
                pUVar7 = FWeakObjectPtr::Get(&local_a8);
                uVar15 = *(uint *)&pUVar7[1].field_0x4;
                pUVar7 = FWeakObjectPtr::Get(&local_90);
                local_88.Rotation.XY.m128d_f64[0] = *(double *)&pUVar7[0xb].field_0x8;
                local_88.Rotation.XY.m128d_f64[1] = *(double *)&pUVar7[0xb].field_0x10;
                local_88.Rotation.ZW.m128d_f64[0] = *(double *)&pUVar7[0xb].field_0x18;
                local_88.Rotation.ZW.m128d_f64[1] = *(double *)&pUVar7[0xb].field_0x20;
                local_88.Translation.XY.m128d_f64[0] = *(double *)(pUVar7 + 0xc);
                local_88.Translation.XY.m128d_f64[1] = *(double *)&pUVar7[0xc].field_0x8;
                local_88.Translation.ZW.m128d_f64[0] = *(double *)&pUVar7[0xc].field_0x10;
                local_88.Translation.ZW.m128d_f64[1] = *(double *)&pUVar7[0xc].field_0x18;
                local_88.Scale3D.XY.m128d_f64[0] = *(double *)&pUVar7[0xc].field_0x20;
                local_88.Scale3D.XY.m128d_f64[1] = *(double *)(pUVar7 + 0xd);
                local_88.Scale3D.ZW.m128d_f64[0] = *(double *)&pUVar7[0xd].field_0x8;
                local_88.Scale3D.ZW.m128d_f64[1] = *(double *)&pUVar7[0xd].field_0x10;
                if (*(int *)&pUVar7[0xd].field_0x20 == *(int *)&pUVar7[0xe].field_0x24)
                goto LAB_14bb99393;
                pUVar11 = *(UObject **)&pUVar7[0xf].field_0x8;
                if (*(UObject **)&pUVar7[0xf].field_0x8 == (UObject *)0x0) {
                  pUVar11 = pUVar7 + 0xf;
                }
                iVar13 = *(int *)(&pUVar11->field_0x0 +
                                 (ulonglong)(*(int *)&pUVar7[0xf].field_0x10 - 1U & uVar15) * 4);
                if (iVar13 == -1) goto LAB_14bb99393;
                goto LAB_14bb99340;
              }
              iVar13 = *(int *)(*(longlong *)&this->ViewerCharacterInfoMap + 0x10 +
                               (longlong)iVar13 * 0x18);
            } while (iVar13 != -1);
          }
        }
      }
      else {
        if (EVar1 != MountManagement) {
          return true;
        }
        if (*(int *)&(this->ViewerCharacterInfoMap).field_0x8 !=
            *(int *)&(this->ViewerCharacterInfoMap).field_0x34) {
          piVar5 = *(int **)&(this->ViewerCharacterInfoMap).field_0x40;
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)&(this->ViewerCharacterInfoMap).field_0x38;
          }
          iVar13 = *piVar5;
          if (iVar13 != -1) {
            do {
              if (*(int *)(*(longlong *)&this->ViewerCharacterInfoMap + (longlong)iVar13 * 0x18) ==
                  0) {
                pTVar6 = TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                         ::FindChecked((TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
                                        *)&this->ViewerCharacterInfoMap,0);
                pUVar2 = (pTVar6->field0_0x0).DebugPtr;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  if (pUVar2 != (UDS_ViewerCharacterInfo *)0x0) {
                    UE::GC::MarkAsReachable((UObject *)pUVar2);
                  }
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar2 != (UDS_ViewerCharacterInfo *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)pUVar2);
                  }
                }
                local_a8.ObjectIndex = 0;
                local_a8.ObjectSerialNumber = 0;
                local_98 = pUVar2;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar2 != (UDS_ViewerCharacterInfo *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)pUVar2);
                }
                FWeakObjectPtr::operator=(&local_a8,(FObjectPtr)&local_98);
                bVar4 = TWeakObjectPtr<UDS_ViewerCharacterInfo,FWeakObjectPtr>::UEOpEquals
                                  ((TWeakObjectPtr<UDS_ViewerCharacterInfo,FWeakObjectPtr> *)
                                   &local_a8,(void *)0x0);
                if (bVar4) {
                  return false;
                }
                pUVar7 = FWeakObjectPtr::Get(&local_a8);
                uVar15 = *(uint *)&pUVar7[1].field_0x4;
                pUVar7 = FWeakObjectPtr::Get(&local_90);
                local_88.Rotation.XY.m128d_f64[0] = *(double *)&pUVar7[0xb].field_0x8;
                local_88.Rotation.XY.m128d_f64[1] = *(double *)&pUVar7[0xb].field_0x10;
                local_88.Rotation.ZW.m128d_f64[0] = *(double *)&pUVar7[0xb].field_0x18;
                local_88.Rotation.ZW.m128d_f64[1] = *(double *)&pUVar7[0xb].field_0x20;
                local_88.Translation.XY.m128d_f64[0] = *(double *)(pUVar7 + 0xc);
                local_88.Translation.XY.m128d_f64[1] = *(double *)&pUVar7[0xc].field_0x8;
                local_88.Translation.ZW.m128d_f64[0] = *(double *)&pUVar7[0xc].field_0x10;
                local_88.Translation.ZW.m128d_f64[1] = *(double *)&pUVar7[0xc].field_0x18;
                local_88.Scale3D.XY.m128d_f64[0] = *(double *)&pUVar7[0xc].field_0x20;
                local_88.Scale3D.XY.m128d_f64[1] = *(double *)(pUVar7 + 0xd);
                local_88.Scale3D.ZW.m128d_f64[0] = *(double *)&pUVar7[0xd].field_0x8;
                local_88.Scale3D.ZW.m128d_f64[1] = *(double *)&pUVar7[0xd].field_0x10;
                if (*(int *)&pUVar7[0xd].field_0x20 == *(int *)&pUVar7[0xe].field_0x24)
                goto LAB_14bb99393;
                pUVar11 = *(UObject **)&pUVar7[0xf].field_0x8;
                if (*(UObject **)&pUVar7[0xf].field_0x8 == (UObject *)0x0) {
                  pUVar11 = pUVar7 + 0xf;
                }
                iVar13 = *(int *)(&pUVar11->field_0x0 +
                                 (ulonglong)(*(int *)&pUVar7[0xf].field_0x10 - 1U & uVar15) * 4);
                if (iVar13 == -1) goto LAB_14bb99393;
                goto LAB_14bb991b0;
              }
              iVar13 = *(int *)(*(longlong *)&this->ViewerCharacterInfoMap + 0x10 +
                               (longlong)iVar13 * 0x18);
            } while (iVar13 != -1);
          }
        }
      }
    }
  }
  return false;
  while (iVar13 = *(int *)((longlong)iVar13 * 0x80 + 0x70 + *(longlong *)&pUVar7[0xd].field_0x18),
        iVar13 != -1) {
LAB_14bb99340:
    if (*(uint *)((longlong)iVar13 * 0x80 + *(longlong *)&pUVar7[0xd].field_0x18) == uVar15)
    goto LAB_14bb99356;
  }
  goto LAB_14bb99393;
LAB_14bb99356:
  pTVar8 = TMapBase<int,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>_>
           ::FindChecked((TMapBase<int,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>_>
                          *)&pUVar7[0xd].field_0x18,uVar15);
  local_88.Rotation.XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
  local_88.Rotation.XY.m128d_f64[1] = (pTVar8->Rotation).XY.m128d_f64[1];
  local_88.Rotation.ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
  local_88.Rotation.ZW.m128d_f64[1] = (pTVar8->Rotation).ZW.m128d_f64[1];
  local_88.Translation.XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
  local_88.Translation.XY.m128d_f64[1] = (pTVar8->Translation).XY.m128d_f64[1];
  local_88.Translation.ZW.m128d_f64[0] = (pTVar8->Translation).ZW.m128d_f64[0];
  local_88.Translation.ZW.m128d_f64[1] = (pTVar8->Translation).ZW.m128d_f64[1];
  local_88.Scale3D.XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
  local_88.Scale3D.XY.m128d_f64[1] = (pTVar8->Scale3D).XY.m128d_f64[1];
  local_88.Scale3D.ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
  local_88.Scale3D.ZW.m128d_f64[1] = (pTVar8->Scale3D).ZW.m128d_f64[1];
  goto LAB_14bb99393;
  while (iVar13 = *(int *)(*(longlong *)&pUVar7[4].field_0x10 + 0x80 + (longlong)iVar13 * 0x90),
        iVar13 != -1) {
LAB_14bb995b0:
    if (*(uint *)(*(longlong *)&pUVar7[4].field_0x10 + (longlong)iVar13 * 0x90) ==
        *(uint *)(pUVar11 + 1)) {
      if (iVar13 != -1) {
        pUVar11 = FWeakObjectPtr::Get(&local_a8);
        pFVar12 = TMapBase<int,FDS_ViewerSetting_CamInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ViewerSetting_CamInfo,0>_>
                  ::FindChecked((TMapBase<int,FDS_ViewerSetting_CamInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ViewerSetting_CamInfo,0>_>
                                 *)&pUVar7[4].field_0x10,*(int *)(pUVar11 + 1));
        dVar3 = (pFVar12->CamTrans).Rotation.XY.m128d_f64[1];
        (this->ZoomOutCamInfo).CamTrans.Rotation.XY.m128d_f64[0] =
             (pFVar12->CamTrans).Rotation.XY.m128d_f64[0];
        (this->ZoomOutCamInfo).CamTrans.Rotation.XY.m128d_f64[1] = dVar3;
        dVar3 = (pFVar12->CamTrans).Rotation.ZW.m128d_f64[1];
        (this->ZoomOutCamInfo).CamTrans.Rotation.ZW.m128d_f64[0] =
             (pFVar12->CamTrans).Rotation.ZW.m128d_f64[0];
        (this->ZoomOutCamInfo).CamTrans.Rotation.ZW.m128d_f64[1] = dVar3;
        dVar3 = (pFVar12->CamTrans).Translation.XY.m128d_f64[1];
        (this->ZoomOutCamInfo).CamTrans.Translation.XY.m128d_f64[0] =
             (pFVar12->CamTrans).Translation.XY.m128d_f64[0];
        (this->ZoomOutCamInfo).CamTrans.Translation.XY.m128d_f64[1] = dVar3;
        dVar3 = (pFVar12->CamTrans).Translation.ZW.m128d_f64[1];
        (this->ZoomOutCamInfo).CamTrans.Translation.ZW.m128d_f64[0] =
             (pFVar12->CamTrans).Translation.ZW.m128d_f64[0];
        (this->ZoomOutCamInfo).CamTrans.Translation.ZW.m128d_f64[1] = dVar3;
        dVar3 = (pFVar12->CamTrans).Scale3D.XY.m128d_f64[1];
        (this->ZoomOutCamInfo).CamTrans.Scale3D.XY.m128d_f64[0] =
             (pFVar12->CamTrans).Scale3D.XY.m128d_f64[0];
        (this->ZoomOutCamInfo).CamTrans.Scale3D.XY.m128d_f64[1] = dVar3;
        dVar3 = (pFVar12->CamTrans).Scale3D.ZW.m128d_f64[1];
        (this->ZoomOutCamInfo).CamTrans.Scale3D.ZW.m128d_f64[0] =
             (pFVar12->CamTrans).Scale3D.ZW.m128d_f64[0];
        (this->ZoomOutCamInfo).CamTrans.Scale3D.ZW.m128d_f64[1] = dVar3;
        fVar16 = pFVar12->CamFOV;
        uVar17 = *(undefined4 *)&pFVar12->field_0x64;
        uVar18 = *(undefined4 *)&pFVar12->field_0x68;
        uVar19 = *(undefined4 *)&pFVar12->field_0x6c;
        goto LAB_14bb99615;
      }
      break;
    }
  }
LAB_14bb995d9:
  dVar3 = *(double *)&pUVar7[1].field_0x20;
  (this->ZoomOutCamInfo).CamTrans.Rotation.XY.m128d_f64[0] = *(double *)&pUVar7[1].field_0x18;
  (this->ZoomOutCamInfo).CamTrans.Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = *(double *)&pUVar7[2].field_0x8;
  (this->ZoomOutCamInfo).CamTrans.Rotation.ZW.m128d_f64[0] = *(double *)(pUVar7 + 2);
  (this->ZoomOutCamInfo).CamTrans.Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = *(double *)&pUVar7[2].field_0x18;
  (this->ZoomOutCamInfo).CamTrans.Translation.XY.m128d_f64[0] = *(double *)&pUVar7[2].field_0x10;
  (this->ZoomOutCamInfo).CamTrans.Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = *(double *)(pUVar7 + 3);
  (this->ZoomOutCamInfo).CamTrans.Translation.ZW.m128d_f64[0] = *(double *)&pUVar7[2].field_0x20;
  (this->ZoomOutCamInfo).CamTrans.Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = *(double *)&pUVar7[3].field_0x10;
  (this->ZoomOutCamInfo).CamTrans.Scale3D.XY.m128d_f64[0] = *(double *)&pUVar7[3].field_0x8;
  (this->ZoomOutCamInfo).CamTrans.Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = *(double *)&pUVar7[3].field_0x20;
  (this->ZoomOutCamInfo).CamTrans.Scale3D.ZW.m128d_f64[0] = *(double *)&pUVar7[3].field_0x18;
  (this->ZoomOutCamInfo).CamTrans.Scale3D.ZW.m128d_f64[1] = dVar3;
  fVar16 = *(float *)(pUVar7 + 4);
  uVar17 = *(undefined4 *)&pUVar7[4].field_0x4;
  uVar18 = *(undefined4 *)&pUVar7[4].field_0x8;
  uVar19 = *(undefined4 *)&pUVar7[4].field_0xc;
LAB_14bb99615:
  (this->ZoomOutCamInfo).CamFOV = fVar16;
  *(undefined4 *)&(this->ZoomOutCamInfo).field_0x64 = uVar17;
  *(undefined4 *)&(this->ZoomOutCamInfo).field_0x68 = uVar18;
  *(undefined4 *)&(this->ZoomOutCamInfo).field_0x6c = uVar19;
  pUVar11 = FWeakObjectPtr::Get(&local_a8);
  if (*(int *)&pUVar7[9].field_0x10 != *(int *)&pUVar7[10].field_0x14) {
    puVar14 = *(undefined1 **)&pUVar7[10].field_0x20;
    if (*(undefined1 **)&pUVar7[10].field_0x20 == (undefined1 *)0x0) {
      puVar14 = &pUVar7[10].field_0x18;
    }
    iVar13 = *(int *)(puVar14 +
                     (ulonglong)(*(int *)(pUVar7 + 0xb) - 1U & *(uint *)(pUVar11 + 1)) * 4);
    if (iVar13 != -1) {
      do {
        if (*(uint *)(*(longlong *)&pUVar7[9].field_0x8 + (longlong)iVar13 * 0x90) ==
            *(uint *)(pUVar11 + 1)) {
          if (iVar13 != -1) {
            pUVar11 = FWeakObjectPtr::Get(&local_a8);
            pFVar12 = TMapBase<int,FDS_ViewerSetting_CamInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ViewerSetting_CamInfo,0>_>
                      ::FindChecked((TMapBase<int,FDS_ViewerSetting_CamInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ViewerSetting_CamInfo,0>_>
                                     *)&pUVar7[9].field_0x8,*(int *)(pUVar11 + 1));
            dVar3 = (pFVar12->CamTrans).Rotation.XY.m128d_f64[1];
            (this->ZoomInCamInfo).CamTrans.Rotation.XY.m128d_f64[0] =
                 (pFVar12->CamTrans).Rotation.XY.m128d_f64[0];
            (this->ZoomInCamInfo).CamTrans.Rotation.XY.m128d_f64[1] = dVar3;
            dVar3 = (pFVar12->CamTrans).Rotation.ZW.m128d_f64[1];
            (this->ZoomInCamInfo).CamTrans.Rotation.ZW.m128d_f64[0] =
                 (pFVar12->CamTrans).Rotation.ZW.m128d_f64[0];
            (this->ZoomInCamInfo).CamTrans.Rotation.ZW.m128d_f64[1] = dVar3;
            dVar3 = (pFVar12->CamTrans).Translation.XY.m128d_f64[1];
            (this->ZoomInCamInfo).CamTrans.Translation.XY.m128d_f64[0] =
                 (pFVar12->CamTrans).Translation.XY.m128d_f64[0];
            (this->ZoomInCamInfo).CamTrans.Translation.XY.m128d_f64[1] = dVar3;
            dVar3 = (pFVar12->CamTrans).Translation.ZW.m128d_f64[1];
            (this->ZoomInCamInfo).CamTrans.Translation.ZW.m128d_f64[0] =
                 (pFVar12->CamTrans).Translation.ZW.m128d_f64[0];
            (this->ZoomInCamInfo).CamTrans.Translation.ZW.m128d_f64[1] = dVar3;
            dVar3 = (pFVar12->CamTrans).Scale3D.XY.m128d_f64[1];
            (this->ZoomInCamInfo).CamTrans.Scale3D.XY.m128d_f64[0] =
                 (pFVar12->CamTrans).Scale3D.XY.m128d_f64[0];
            (this->ZoomInCamInfo).CamTrans.Scale3D.XY.m128d_f64[1] = dVar3;
            dVar3 = (pFVar12->CamTrans).Scale3D.ZW.m128d_f64[1];
            (this->ZoomInCamInfo).CamTrans.Scale3D.ZW.m128d_f64[0] =
                 (pFVar12->CamTrans).Scale3D.ZW.m128d_f64[0];
            (this->ZoomInCamInfo).CamTrans.Scale3D.ZW.m128d_f64[1] = dVar3;
            fVar16 = pFVar12->CamFOV;
            uVar17 = *(undefined4 *)&pFVar12->field_0x64;
            uVar18 = *(undefined4 *)&pFVar12->field_0x68;
            uVar19 = *(undefined4 *)&pFVar12->field_0x6c;
            goto LAB_14bb996ed;
          }
          break;
        }
        iVar13 = *(int *)(*(longlong *)&pUVar7[9].field_0x8 + 0x80 + (longlong)iVar13 * 0x90);
      } while (iVar13 != -1);
    }
  }
  dVar3 = *(double *)&pUVar7[6].field_0x18;
  (this->ZoomInCamInfo).CamTrans.Rotation.XY.m128d_f64[0] = *(double *)&pUVar7[6].field_0x10;
  (this->ZoomInCamInfo).CamTrans.Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = *(double *)(pUVar7 + 7);
  (this->ZoomInCamInfo).CamTrans.Rotation.ZW.m128d_f64[0] = *(double *)&pUVar7[6].field_0x20;
  (this->ZoomInCamInfo).CamTrans.Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = *(double *)&pUVar7[7].field_0x10;
  (this->ZoomInCamInfo).CamTrans.Translation.XY.m128d_f64[0] = *(double *)&pUVar7[7].field_0x8;
  (this->ZoomInCamInfo).CamTrans.Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = *(double *)&pUVar7[7].field_0x20;
  (this->ZoomInCamInfo).CamTrans.Translation.ZW.m128d_f64[0] = *(double *)&pUVar7[7].field_0x18;
  (this->ZoomInCamInfo).CamTrans.Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = *(double *)&pUVar7[8].field_0x8;
  (this->ZoomInCamInfo).CamTrans.Scale3D.XY.m128d_f64[0] = *(double *)(pUVar7 + 8);
  (this->ZoomInCamInfo).CamTrans.Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = *(double *)&pUVar7[8].field_0x18;
  (this->ZoomInCamInfo).CamTrans.Scale3D.ZW.m128d_f64[0] = *(double *)&pUVar7[8].field_0x10;
  (this->ZoomInCamInfo).CamTrans.Scale3D.ZW.m128d_f64[1] = dVar3;
  fVar16 = *(float *)&pUVar7[8].field_0x20;
  uVar17 = *(undefined4 *)&pUVar7[8].field_0x24;
  uVar18 = *(undefined4 *)(pUVar7 + 9);
  uVar19 = *(undefined4 *)&pUVar7[9].field_0x4;
LAB_14bb996ed:
  (this->ZoomInCamInfo).CamFOV = fVar16;
  *(undefined4 *)&(this->ZoomInCamInfo).field_0x64 = uVar17;
  *(undefined4 *)&(this->ZoomInCamInfo).field_0x68 = uVar18;
  *(undefined4 *)&(this->ZoomInCamInfo).field_0x6c = uVar19;
  pAVar9 = (AActor *)FWeakObjectPtr::Get(&(this->ViewerCam).WeakPtr);
  AActor::SetActorRelativeTransform
            (pAVar9,&(this->ZoomOutCamInfo).CamTrans,false,(FHitResult *)0x0,None);
  this_00 = (ADS_CameraActor *)FWeakObjectPtr::Get(&(this->ViewerCam).WeakPtr);
  ADS_CameraActor::SetFieldOfView(this_00,&(this->ZoomOutCamInfo).CamFOV);
  return true;
  while (iVar13 = *(int *)((longlong)iVar13 * 0x80 + 0x70 + *(longlong *)&pUVar7[0xd].field_0x18),
        iVar13 != -1) {
LAB_14bb991b0:
    if (*(uint *)((longlong)iVar13 * 0x80 + *(longlong *)&pUVar7[0xd].field_0x18) == uVar15)
    goto LAB_14bb99356;
  }
LAB_14bb99393:
  pUVar7 = FWeakObjectPtr::Get(&local_a8);
  pUVar7 = *(UObject **)&pUVar7[3].field_0x20;
  bVar4 = UE::GC::GIsIncrementalReachabilityPending == false;
  if (!bVar4) {
    if (pUVar7 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    bVar4 = UE::GC::GIsIncrementalReachabilityPending == false;
    if (!bVar4) {
      if (pUVar7 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      bVar4 = UE::GC::GIsIncrementalReachabilityPending == false;
    }
  }
  local_a0.ObjectIndex = 0;
  local_a0.ObjectSerialNumber = 0;
  local_98 = (UDS_ViewerCharacterInfo *)pUVar7;
  if ((!bVar4) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=(&local_a0,(FObjectPtr)&local_98);
  bVar4 = FWeakObjectPtr::IsValid(&local_a0);
  if (bVar4) {
    pAVar9 = (AActor *)FWeakObjectPtr::Get(&local_a0);
    AActor::AddActorLocalTransform(pAVar9,&local_88,false,(FHitResult *)0x0,None);
  }
  return true;
}

// ZoomInOutProcess @ 14bb99f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_ViewerSceneInfo::ZoomInOutProcess(UDS_ViewerSceneInfo *this,float *param_1)

{
  bool bVar1;
  ADS_CameraActor *pAVar2;
  longlong lVar3;
  AActor *pAVar4;
  UDS_ViewerManager *pUVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStackY_238 [32];
  float local_208;
  float local_204 [3];
  TVector<double>_u_0 local_1f8;
  double dStack_1e0;
  TVector<double>_u_0 local_1d8;
  double dStack_1c0;
  TVector<double>_u_0 local_1b8;
  TQuat<double> local_198;
  TTransform<double> local_178;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_238;
  if ((this->bIsZoomInOutProcess != false) &&
     (bVar1 = TWeakObjectPtr<ADS_CameraActor_CharacterViewer,FWeakObjectPtr>::UEOpEquals
                        (&this->ViewerCam,(void *)0x0), !bVar1)) {
    pAVar2 = (ADS_CameraActor *)FWeakObjectPtr::Get(&(this->ViewerCam).WeakPtr);
    ADS_CameraActor::GetActorRelativeTransform(pAVar2,&local_b8);
    local_178.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_178.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_178.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_178.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_178.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_178.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    pAVar2 = (ADS_CameraActor *)FWeakObjectPtr::Get(&(this->ViewerCam).WeakPtr);
    fVar6 = ADS_CameraActor::GetFieldOfView(pAVar2);
    bVar1 = this->bIsZoomIn != true;
    if (bVar1) {
      local_178.Rotation.XY.m128d_f64[0] = (this->ZoomOutCamInfo).CamTrans.Rotation.XY.m128d_f64[0];
      local_178.Rotation.XY.m128d_f64[1] = (this->ZoomOutCamInfo).CamTrans.Rotation.XY.m128d_f64[1];
      local_178.Rotation.ZW.m128d_f64[0] = (this->ZoomOutCamInfo).CamTrans.Rotation.ZW.m128d_f64[0];
      local_178.Rotation.ZW.m128d_f64[1] = (this->ZoomOutCamInfo).CamTrans.Rotation.ZW.m128d_f64[1];
      local_178.Translation.XY.m128d_f64[0] =
           (this->ZoomOutCamInfo).CamTrans.Translation.XY.m128d_f64[0];
      local_178.Translation.XY.m128d_f64[1] =
           (this->ZoomOutCamInfo).CamTrans.Translation.XY.m128d_f64[1];
      local_178.Translation.ZW.m128d_f64 =
           *&(this->ZoomOutCamInfo).CamTrans.Translation.ZW.m128d_f64;
      local_178.Scale3D.XY.m128d_f64[0]._0_4_ =
           *(undefined4 *)(this->ZoomOutCamInfo).CamTrans.Scale3D.XY.m128d_f64;
      local_178.Scale3D.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(this->ZoomOutCamInfo).CamTrans.Scale3D.XY.m128d_f64 + 4);
      local_178.Scale3D.XY.m128d_f64[1]._0_4_ =
           *(undefined4 *)((this->ZoomOutCamInfo).CamTrans.Scale3D.XY.m128d_f64 + 1);
      local_178.Scale3D.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(this->ZoomOutCamInfo).CamTrans.Scale3D.XY.m128d_f64 + 0xc);
      local_178.Scale3D.ZW.m128d_f64[0]._0_4_ =
           *(undefined4 *)(this->ZoomOutCamInfo).CamTrans.Scale3D.ZW.m128d_f64;
      local_178.Scale3D.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(this->ZoomOutCamInfo).CamTrans.Scale3D.ZW.m128d_f64 + 4);
      local_178.Scale3D.ZW.m128d_f64[1]._0_4_ =
           *(undefined4 *)((this->ZoomOutCamInfo).CamTrans.Scale3D.ZW.m128d_f64 + 1);
      local_178.Scale3D.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(this->ZoomOutCamInfo).CamTrans.Scale3D.ZW.m128d_f64 + 0xc);
    }
    else {
      local_178.Rotation.XY.m128d_f64[0] = (this->ZoomInCamInfo).CamTrans.Rotation.XY.m128d_f64[0];
      local_178.Rotation.XY.m128d_f64[1] = (this->ZoomInCamInfo).CamTrans.Rotation.XY.m128d_f64[1];
      local_178.Rotation.ZW.m128d_f64[0] = (this->ZoomInCamInfo).CamTrans.Rotation.ZW.m128d_f64[0];
      local_178.Rotation.ZW.m128d_f64[1] = (this->ZoomInCamInfo).CamTrans.Rotation.ZW.m128d_f64[1];
      local_178.Scale3D.XY.m128d_f64[0]._0_4_ =
           *(undefined4 *)(this->ZoomInCamInfo).CamTrans.Scale3D.XY.m128d_f64;
      local_178.Scale3D.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(this->ZoomInCamInfo).CamTrans.Scale3D.XY.m128d_f64 + 4);
      local_178.Scale3D.XY.m128d_f64[1]._0_4_ =
           *(undefined4 *)((this->ZoomInCamInfo).CamTrans.Scale3D.XY.m128d_f64 + 1);
      local_178.Scale3D.XY.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(this->ZoomInCamInfo).CamTrans.Scale3D.XY.m128d_f64 + 0xc);
      local_178.Translation.XY.m128d_f64[0] =
           (this->ZoomInCamInfo).CamTrans.Translation.XY.m128d_f64[0];
      local_178.Translation.XY.m128d_f64[1] =
           (this->ZoomInCamInfo).CamTrans.Translation.XY.m128d_f64[1];
      local_178.Translation.ZW.m128d_f64 = *&(this->ZoomInCamInfo).CamTrans.Translation.ZW.m128d_f64
      ;
      local_178.Scale3D.ZW.m128d_f64[0]._0_4_ =
           *(undefined4 *)(this->ZoomInCamInfo).CamTrans.Scale3D.ZW.m128d_f64;
      local_178.Scale3D.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(this->ZoomInCamInfo).CamTrans.Scale3D.ZW.m128d_f64 + 4);
      local_178.Scale3D.ZW.m128d_f64[1]._0_4_ =
           *(undefined4 *)((this->ZoomInCamInfo).CamTrans.Scale3D.ZW.m128d_f64 + 1);
      local_178.Scale3D.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(this->ZoomInCamInfo).CamTrans.Scale3D.ZW.m128d_f64 + 0xc);
    }
    fVar8 = *param_1;
    lVar3 = 0x180;
    if (bVar1) {
      lVar3 = 0x110;
    }
    local_208 = *(float *)(&this->field_0x0 + lVar3);
    fVar7 = DS_CommonDataHelper::CharViewerZoomInOutAcceleration();
    local_1d8._s_0.Z = local_178.Translation.ZW.m128d_f64[0];
    local_1d8._s_0.X = local_178.Translation.XY.m128d_f64[0];
    local_1d8._s_0.Y = local_178.Translation.XY.m128d_f64[1];
    fVar8 = fVar7 * fVar8 + this->ZoomInOutSpeed;
    local_1f8._s_0.X = local_b8.Translation.XY.m128d_f64[0];
    local_1f8._s_0.Y = local_b8.Translation.XY.m128d_f64[1];
    local_1f8._s_0.Z = local_b8.Translation.ZW.m128d_f64[0];
    this->ZoomInOutSpeed = fVar8;
    FMath::VInterpTo((TVector<double> *)&local_1b8._s_0,(TVector<double> *)&local_1f8._s_0,
                     (TVector<double> *)&local_1d8._s_0,*param_1,fVar8);
    local_1f8._s_0.X = local_178.Rotation.XY.m128d_f64[0];
    local_1f8._s_0.Y = local_178.Rotation.XY.m128d_f64[1];
    local_1d8._s_0.X = local_b8.Rotation.XY.m128d_f64[0];
    local_1d8._s_0.Y = local_b8.Rotation.XY.m128d_f64[1];
    local_1f8._s_0.Z = local_178.Rotation.ZW.m128d_f64[0];
    dStack_1e0 = local_178.Rotation.ZW.m128d_f64[1];
    local_1d8._s_0.Z = local_b8.Rotation.ZW.m128d_f64[0];
    dStack_1c0 = local_b8.Rotation.ZW.m128d_f64[1];
    FMath::QInterpTo<double>
              (&local_198,(TQuat<double> *)&local_1d8._s_0,(TQuat<double> *)&local_1f8._s_0,*param_1
               ,this->ZoomInOutSpeed);
    local_204[0] = local_208;
    if ((0.0 < this->ZoomInOutSpeed) &&
       (fVar8 = local_208 - fVar6, __real_322bcc77 <= fVar8 * fVar8)) {
      fVar7 = this->ZoomInOutSpeed * *param_1;
      if (__real_3f800000 <= fVar7) {
        fVar7 = __real_3f800000;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      local_204[0] = fVar7 * fVar8 + fVar6;
    }
    if (__real_3f1a36e2e0000000 <=
        (local_178.Translation.XY.m128d_f64[1] - local_1b8._s_0.Y) *
        (local_178.Translation.XY.m128d_f64[1] - local_1b8._s_0.Y) +
        (local_178.Translation.XY.m128d_f64[0] - local_1b8._s_0.X) *
        (local_178.Translation.XY.m128d_f64[0] - local_1b8._s_0.X) +
        (local_178.Translation.ZW.m128d_f64[0] - local_1b8._s_0.Z) *
        (local_178.Translation.ZW.m128d_f64[0] - local_1b8._s_0.Z)) {
      local_118.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_118.Translation.ZW.m128d_f64[0] = local_1b8._s_0.Z;
      local_118.Translation.ZW.m128d_f64[1] = 0.0;
      local_118.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      local_118.Rotation.XY.m128d_f64[0] = local_198.X;
      local_118.Rotation.XY.m128d_f64[1] = local_198.Y;
      local_118.Translation.XY.m128d_f64[0] = local_1b8._s_0.X;
      local_118.Translation.XY.m128d_f64[1] = local_1b8._s_0.Y;
      local_118.Rotation.ZW.m128d_f64[0] = local_198.Z;
      local_118.Rotation.ZW.m128d_f64[1] = local_198.W;
      pAVar4 = (AActor *)FWeakObjectPtr::Get(&(this->ViewerCam).WeakPtr);
      AActor::SetActorRelativeTransform(pAVar4,&local_118,false,(FHitResult *)0x0,None);
      pAVar2 = (ADS_CameraActor *)FWeakObjectPtr::Get(&(this->ViewerCam).WeakPtr);
      ADS_CameraActor::SetFieldOfView(pAVar2,local_204);
    }
    else {
      pAVar4 = (AActor *)FWeakObjectPtr::Get(&(this->ViewerCam).WeakPtr);
      AActor::SetActorRelativeTransform(pAVar4,&local_178,false,(FHitResult *)0x0,None);
      pAVar2 = (ADS_CameraActor *)FWeakObjectPtr::Get(&(this->ViewerCam).WeakPtr);
      ADS_CameraActor::SetFieldOfView(pAVar2,&local_208);
      bVar1 = this->bIsZoomInOutProcess;
      this->bIsZoomInOutProcess = false;
      this->ZoomInOutSpeed = 0.0;
      if (((bVar1 != false) && (this->ViewerSceneType == CharacterEquip)) &&
         (pUVar5 = UDS_ViewerManager::GetInst(), pUVar5 != (UDS_ViewerManager *)0x0)) {
        TMulticastDelegate<void___cdecl(bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>::
        Broadcast(&pUVar5->ChangedZoomInOutStateDelegate,&this->bIsZoomIn,&this->bIsZoomInOutProcess
                 );
      }
    }
  }
  return;
}

