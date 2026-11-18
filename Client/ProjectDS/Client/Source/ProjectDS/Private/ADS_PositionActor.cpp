// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b569fe0

UClass * __cdecl ADS_PositionActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_PositionActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PositionActor",
               &Z_Registration_Info_UClass_ADS_PositionActor.InnerSingleton,
               StaticRegisterNativesADS_PositionActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_PositionActor>,
               InternalVTableHelperCtorCaller<ADS_PositionActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_PositionActor.InnerSingleton;
}

// ADS_PositionActor @ 14b56d370

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_PositionActor * __thiscall
ADS_PositionActor::ADS_PositionActor(ADS_PositionActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->PositionType = None;
  this->_padding_ = (longlong)&___7ADS_PositionActor__6B_;
  this->SubKey = 0;
  return this;
}

// ~ADS_PositionActor @ 14b56e1d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_PositionActor::~ADS_PositionActor(ADS_PositionActor *this)

{
  this->_padding_ = (longlong)&___7ADS_PositionActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14b56f040

UClass * __cdecl ADS_PositionActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_PositionActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PositionActor",
               &Z_Registration_Info_UClass_ADS_PositionActor.InnerSingleton,
               StaticRegisterNativesADS_PositionActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_PositionActor>,
               InternalVTableHelperCtorCaller<ADS_PositionActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_PositionActor.InnerSingleton;
}

// StaticRegisterNativesADS_PositionActor @ 14b56fc50

void __cdecl ADS_PositionActor::StaticRegisterNativesADS_PositionActor(void)

{
  return;
}

// ADS_PositionActor @ 14b998e40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_PositionActor * __thiscall
ADS_PositionActor::ADS_PositionActor(ADS_PositionActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  this->_padding_ = (longlong)&___7ADS_PositionActor__6B_;
  this->PositionType = None;
  this->SubKey = 0;
  pFVar3 = ::FName::FName(&local_res8,L"SceneComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  this->_padding_ = (longlong)pUVar5;
  return this;
}

// GetPositionActor @ 14b9b0ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TWeakObjectPtr<ADS_PositionActor,FWeakObjectPtr> __cdecl
ADS_PositionActor::GetPositionActor(EDS_PositionType param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UClass *pUVar3;
  int iVar4;
  UWorld *pUVar5;
  UClass *pUVar6;
  undefined7 in_register_00000009;
  FWeakObjectPtr this;
  ForAnyElementType FVar7;
  int in_R8D;
  UClass *local_res20;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_38;
  
  this._1_7_ = in_register_00000009;
  this.ObjectIndex._0_1_ = param_1;
  if (UDS_GameInstance::StaticInstance != (UDS_GameInstance *)0x0) {
    pUVar5 = UGameInstance::GetWorld((UGameInstance *)UDS_GameInstance::StaticInstance);
    if (pUVar5 != (UWorld *)0x0) {
      local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.ArrayNum = 0;
      local_38.ArrayMax = 0;
      local_res20 = Z_Construct_UClass_ADS_PositionActor_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res20);
      }
      UGameplayStatics::GetAllActorsOfClass
                ((UObject *)pUVar5,(TSubclassOf<AActor>)&local_res20,&local_38);
      iVar4 = local_38.ArrayNum;
      pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
      FVar7.Data = local_38.AllocatorInstance.Data;
      while( true ) {
        if (local_38.ArrayNum != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res20);
        }
        if (FVar7.Data == pFVar1) break;
        pUVar3 = *(UClass **)FVar7.Data;
        if (pUVar3 != (UClass *)0x0) {
          pUVar6 = Z_Construct_UClass_ADS_PositionActor_NoRegister();
          iVar2 = (int)pUVar6->_padding_;
          if ((((iVar2 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
                &pUVar6->_padding_)) &&
              (*(char *)&pUVar3[1].ClassVTableHelperCtorCaller == (char)param_2)) &&
             (*(int *)((longlong)&pUVar3[1].ClassVTableHelperCtorCaller + 4) == in_R8D)) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar3);
            }
            *(undefined8 *)this = 0;
            local_res20 = pUVar3;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar3);
            }
LAB_14b9b0dff:
            FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res20);
            if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.AllocatorInstance.Data);
            }
            return (TWeakObjectPtr<ADS_PositionActor,FWeakObjectPtr>)this;
          }
        }
        FVar7.Data = FVar7.Data + 8;
      }
      *(undefined8 *)this = 0;
      local_res20 = (UClass *)0x0;
      goto LAB_14b9b0dff;
    }
  }
  *(undefined8 *)this = 0;
  local_res20 = (UClass *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<ADS_PositionActor,FWeakObjectPtr>)this;
}

// GetPositionActorTransform @ 14b9b0e70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
ADS_PositionActor::GetPositionActorTransform
          (TTransform<double> *param_1,EDS_PositionType param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UClass *pUVar3;
  double dVar4;
  int iVar5;
  bool bVar6;
  UWorld *pUVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  TTransform<double> *pTVar10;
  ForAnyElementType FVar11;
  UClass *local_res20;
  FWeakObjectPtr local_58;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_50;
  
  if (UDS_GameInstance::StaticInstance != (UDS_GameInstance *)0x0) {
    pUVar7 = UGameInstance::GetWorld((UGameInstance *)UDS_GameInstance::StaticInstance);
    if (pUVar7 != (UWorld *)0x0) {
      local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.ArrayNum = 0;
      local_50.ArrayMax = 0;
      local_res20 = Z_Construct_UClass_ADS_PositionActor_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res20);
      }
      UGameplayStatics::GetAllActorsOfClass
                ((UObject *)pUVar7,(TSubclassOf<AActor>)&local_res20,&local_50);
      iVar5 = local_50.ArrayNum;
      pFVar1 = local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 8;
      FVar11.Data = local_50.AllocatorInstance.Data;
      do {
        if (local_50.ArrayNum != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res20);
        }
        if (FVar11.Data == pFVar1) {
          local_58.ObjectIndex = 0;
          local_58.ObjectSerialNumber = 0;
          local_res20 = (UClass *)0x0;
          FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_res20);
          if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.AllocatorInstance.Data);
          }
          goto LAB_14b9b0fe9;
        }
        pUVar3 = *(UClass **)FVar11.Data;
        if (pUVar3 != (UClass *)0x0) {
          pUVar8 = Z_Construct_UClass_ADS_PositionActor_NoRegister();
          iVar2 = (int)pUVar8->_padding_;
          if ((((iVar2 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
                &pUVar8->_padding_)) &&
              (*(EDS_PositionType *)&pUVar3[1].ClassVTableHelperCtorCaller == param_2)) &&
             (*(int *)((longlong)&pUVar3[1].ClassVTableHelperCtorCaller + 4) == param_3))
          goto LAB_14b9b0f62;
        }
        FVar11.Data = FVar11.Data + 8;
      } while( true );
    }
  }
  local_58.ObjectIndex = 0;
  local_58.ObjectSerialNumber = 0;
  local_res20 = (UClass *)0x0;
  FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_res20);
LAB_14b9b0fe9:
  bVar6 = TWeakObjectPtr<ADS_PositionActor,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<ADS_PositionActor,FWeakObjectPtr> *)&local_58,(void *)0x0);
  if (bVar6) {
    return false;
  }
  pUVar9 = FWeakObjectPtr::Get(&local_58);
  if (*(longlong *)(pUVar9 + 0xb) == 0) {
    pTVar10 = &UE::Math::TTransform<double>::Identity;
  }
  else {
    pTVar10 = (TTransform<double> *)(*(longlong *)(pUVar9 + 0xb) + 0x1f0);
  }
  dVar4 = (pTVar10->Rotation).XY.m128d_f64[1];
  (param_1->Rotation).XY.m128d_f64[0] = (pTVar10->Rotation).XY.m128d_f64[0];
  (param_1->Rotation).XY.m128d_f64[1] = dVar4;
  dVar4 = (pTVar10->Rotation).ZW.m128d_f64[1];
  (param_1->Rotation).ZW.m128d_f64[0] = (pTVar10->Rotation).ZW.m128d_f64[0];
  (param_1->Rotation).ZW.m128d_f64[1] = dVar4;
  dVar4 = (pTVar10->Translation).XY.m128d_f64[1];
  (param_1->Translation).XY.m128d_f64[0] = (pTVar10->Translation).XY.m128d_f64[0];
  (param_1->Translation).XY.m128d_f64[1] = dVar4;
  dVar4 = (pTVar10->Translation).ZW.m128d_f64[1];
  (param_1->Translation).ZW.m128d_f64[0] = (pTVar10->Translation).ZW.m128d_f64[0];
  (param_1->Translation).ZW.m128d_f64[1] = dVar4;
  dVar4 = (pTVar10->Scale3D).XY.m128d_f64[1];
  (param_1->Scale3D).XY.m128d_f64[0] = (pTVar10->Scale3D).XY.m128d_f64[0];
  (param_1->Scale3D).XY.m128d_f64[1] = dVar4;
  dVar4 = (pTVar10->Scale3D).ZW.m128d_f64[1];
  (param_1->Scale3D).ZW.m128d_f64[0] = (pTVar10->Scale3D).ZW.m128d_f64[0];
  (param_1->Scale3D).ZW.m128d_f64[1] = dVar4;
  return true;
LAB_14b9b0f62:
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  local_58.ObjectIndex = 0;
  local_58.ObjectSerialNumber = 0;
  local_res20 = pUVar3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_res20);
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  goto LAB_14b9b0fe9;
}

