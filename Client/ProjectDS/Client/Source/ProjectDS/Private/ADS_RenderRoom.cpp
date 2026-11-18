// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b47f540

UClass * __cdecl ADS_RenderRoom::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ADS_RenderRoom.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RenderRoom",
               &Z_Registration_Info_UClass_ADS_RenderRoom.InnerSingleton,
               StaticRegisterNativesADS_RenderRoom,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_RenderRoom>,
               InternalVTableHelperCtorCaller<ADS_RenderRoom>,aFStackX_8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_RenderRoom.InnerSingleton;
}

// ADS_RenderRoom @ 14b57d960

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_RenderRoom * __thiscall
ADS_RenderRoom::ADS_RenderRoom(ADS_RenderRoom *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_RenderRoom__6B_;
  (this->StreamingSourceActor).field0_0x0.DebugPtr = (ADS_StreamingSourceActor *)0x0;
  return this;
}

// ADS_RenderRoom @ 14b57d9a0

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_RenderRoom * __thiscall
ADS_RenderRoom::ADS_RenderRoom(ADS_RenderRoom *this,FObjectInitializer *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_RenderRoom__6B_;
  (this->StreamingSourceActor).field0_0x0.DebugPtr = (ADS_StreamingSourceActor *)0x0;
  return this;
}

// ~ADS_RenderRoom @ 14b57e210

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_RenderRoom::~ADS_RenderRoom(ADS_RenderRoom *this)

{
  this->_padding_ = (longlong)&___7ADS_RenderRoom__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetPrivateStaticClass @ 14b57f8d0

UClass * __cdecl ADS_RenderRoom::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_RenderRoom.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RenderRoom",
               &Z_Registration_Info_UClass_ADS_RenderRoom.InnerSingleton,
               StaticRegisterNativesADS_RenderRoom,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_RenderRoom>,
               InternalVTableHelperCtorCaller<ADS_RenderRoom>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_RenderRoom.InnerSingleton;
}

// StaticRegisterNativesADS_RenderRoom @ 14b580890

void __cdecl ADS_RenderRoom::StaticRegisterNativesADS_RenderRoom(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ADS_RenderRoom_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnStreamingComplete @ 14b582400

void __cdecl ADS_RenderRoom::execOnStreamingComplete(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014b582418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x760))();
  return;
}

// BeginPlay @ 14bc890f0

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

void __thiscall ADS_RenderRoom::BeginPlay(ADS_RenderRoom *this)

{
  int iVar1;
  UWorld *this_00;
  FActorSpawnParameters *pFVar2;
  UClass *pUVar3;
  ADS_StreamingSourceActor *pAVar4;
  FString *pFVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  TTransform<double> *pTVar9;
  undefined1 auStack_d8 [32];
  FWeakObjectPtr local_b8;
  FString local_b0;
  FString local_a0;
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  AActor::BeginPlay((AActor *)this);
  if ((this->StreamingSourceActor).field0_0x0.DebugPtr == (ADS_StreamingSourceActor *)0x0) {
    this_00 = AActor::GetWorld((AActor *)this);
    pFVar2 = FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_88);
    if (this->_padding_ == 0) {
      pTVar9 = &UE::Math::TTransform<double>::Identity;
    }
    else {
      pTVar9 = (TTransform<double> *)(this->_padding_ + 0x1f0);
    }
    pUVar3 = Z_Construct_UClass_ADS_StreamingSourceActor_NoRegister();
    pAVar4 = (ADS_StreamingSourceActor *)UWorld::SpawnActor(this_00,pUVar3,pTVar9,pFVar2);
    if (pAVar4 == (ADS_StreamingSourceActor *)0x0) {
      pAVar4 = (ADS_StreamingSourceActor *)0x0;
    }
    else {
      pUVar3 = Z_Construct_UClass_ADS_StreamingSourceActor_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(pAVar4->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        pFVar5 = GetTypeName<ADS_StreamingSourceActor>(&local_a0);
        pwVar7 = L"";
        if ((pFVar5->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
        pFVar5 = GetFullNameForCastLogError<AActor>(&local_b0,(AActor *)pAVar4);
        if ((pFVar5->Data).ArrayNum != 0) {
          pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar7,pwVar8);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar4 != (ADS_StreamingSourceActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar4);
    }
    (this->StreamingSourceActor).field0_0x0.DebugPtr = pAVar4;
    if (local_88._64_8_ != 0) {
      plVar6 = (longlong *)(local_88 + 0x50);
      if ((longlong *)local_88._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_88._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  pAVar4 = (this->StreamingSourceActor).field0_0x0.DebugPtr;
  ::FName::FName((FName *)&local_a0,"OnStreamingComplete");
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_b8.ObjectIndex = 0;
  local_b8.ObjectSerialNumber = 0;
  local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_b0);
  ADS_StreamingSourceActor::BindStreamingCompleteNotify
            (pAVar4,(TWeakObjectPtr<UObject,FWeakObjectPtr>)local_b8,(FName *)&local_a0);
  ADS_StreamingSourceActor::EnableStreamingSource((this->StreamingSourceActor).field0_0x0.DebugPtr);
  return;
}

// EndPlay @ 14bc96f50

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_RenderRoom::EndPlay(ADS_RenderRoom *this,Type param_1)

{
  ADS_StreamingSourceActor::DisableStreamingSource((this->StreamingSourceActor).field0_0x0.DebugPtr)
  ;
  AActor::Destroy((AActor *)(this->StreamingSourceActor).field0_0x0.DebugPtr,false,true);
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// OnStreamingComplete @ 14bcbb700

/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ADS_RenderRoom::OnStreamingComplete(ADS_RenderRoom *this)

{
  ADS_CameraManager *this_00;
  float local_res10 [2];
  EDS_CameraFadeState local_res18 [4];
  
  this_00 = ADS_CameraManager::GetInst();
  if (this_00 != (ADS_CameraManager *)0x0) {
    local_res10[0] = 0.0;
    local_res18[0] = FadeIn;
    ADS_CameraManager::RequestFade(this_00,local_res18,local_res10);
  }
  return;
}

