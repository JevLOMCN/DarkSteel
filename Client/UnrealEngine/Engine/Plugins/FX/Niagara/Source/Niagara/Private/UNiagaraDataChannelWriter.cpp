// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 37

// StaticClass @ 14907bfc0

UClass * __cdecl UNiagaraDataChannelWriter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannelWriter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannelWriter",
               &Z_Registration_Info_UClass_UNiagaraDataChannelWriter.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannelWriter,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraDataChannelWriter>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannelWriter>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannelWriter.InnerSingleton;
}

// WriteData<UE::Math::TVector<double>_> @ 1490ad860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelWriter::WriteData<UE::Math::TVector<double>_>
          (UNiagaraDataChannelWriter *this,FNiagaraVariableBase *param_1,int param_2,
          TVector<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  FNiagaraDataChannelGameData *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  FNiagaraDataChannelVariableBuffer *pFVar6;
  
  this_00 = (this->Data).Object;
  if (this_00 == (FNiagaraDataChannelGameData *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5987388099448012904>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessor.h"
                       ,0x68,"Data.IsValid()");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pFVar6 = FNiagaraDataChannelGameData::FindVariableBuffer(this_00,param_1);
    if (pFVar6 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      if ((pFVar6->Size != 0x18) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("sizeof(T) == Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                             ,0x34,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((-1 < param_2) && (param_2 < (pFVar6->Data).ArrayNum / pFVar6->Size)) {
        pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
        dVar4 = (param_3->field0_0x0)._s_0.Y;
        pFVar1 = pFVar2 + (longlong)param_2 * 0x18;
        *(double *)pFVar1 = (param_3->field0_0x0)._s_0.X;
        *(double *)(pFVar1 + 8) = dVar4;
        *(double *)(pFVar2 + (longlong)param_2 * 0x18 + 0x10) = (param_3->field0_0x0)._s_0.Z;
      }
    }
  }
  return;
}

// UNiagaraDataChannelWriter @ 1490b2b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraDataChannelWriter * __thiscall
UNiagaraDataChannelWriter::UNiagaraDataChannelWriter
          (UNiagaraDataChannelWriter *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->StartIndex = -1;
  this->_padding_ = (longlong)&___7UNiagaraDataChannelWriter__6B_;
  (this->Data).Object = (FNiagaraDataChannelGameData *)0x0;
  (this->Data).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Owner).field0_0x0.DebugPtr = (UNiagaraDataChannelHandler *)0x0;
  return this;
}

// UNiagaraDataChannelWriter @ 1490b2b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraDataChannelWriter * __thiscall
UNiagaraDataChannelWriter::UNiagaraDataChannelWriter
          (UNiagaraDataChannelWriter *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->StartIndex = -1;
  this->_padding_ = (longlong)&___7UNiagaraDataChannelWriter__6B_;
  (this->Data).Object = (FNiagaraDataChannelGameData *)0x0;
  (this->Data).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Owner).field0_0x0.DebugPtr = (UNiagaraDataChannelHandler *)0x0;
  return this;
}

// ~UNiagaraDataChannelWriter @ 1490b8810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelWriter::~UNiagaraDataChannelWriter(UNiagaraDataChannelWriter *this)

{
  this->_padding_ = (longlong)&___7UNiagaraDataChannelWriter__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Data).SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  return;
}

// BeginWrite @ 1490d00e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraDataChannelWriter::BeginWrite
          (UNiagaraDataChannelWriter *this,FNDCAccessContextInst *param_1,int param_2,bool param_3,
          bool param_4,bool param_5,FString *param_6)

{
  TSharedPtr<FNiagaraDataChannelGameData,1> *pTVar1;
  int iVar2;
  UNiagaraDataChannelHandler *pUVar3;
  FNiagaraDataChannelGameData *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  FString *pFVar8;
  TSharedPtr<FNiagaraDataChannelGameData,1> *pTVar9;
  int iVar10;
  FString local_68;
  FNiagaraDataChannelData *local_58;
  TReferenceControllerBase<1> *local_50;
  FString local_48;
  FString local_38;
  TSharedPtr<FNiagaraDataChannelGameData,1> local_28;
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                         ,0xca,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if (param_2 == 0) {
    if (2 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
  }
  else {
    if (((this->Owner).field0_0x0.DebugPtr == (UNiagaraDataChannelHandler *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Owner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                           ,0xd2,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pUVar3 = (this->Owner).field0_0x0.DebugPtr;
    (**(code **)(pUVar3->_padding_ + 0x2d8))(pUVar3,&local_58,param_1,1);
    if (local_58 != (FNiagaraDataChannelData *)0x0) {
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      bVar6 = 1 < (param_6->Data).ArrayNum;
      if (bVar6) {
        pFVar8 = ::FString::FString(&local_48,param_6);
      }
      else {
        pFVar8 = UObjectBaseUtility::GetPathName
                           ((UObjectBaseUtility *)this,&local_38,(UObject *)0x0);
      }
      iVar2 = (pFVar8->Data).ArrayNum;
      iVar10 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar10 = 0;
      }
      ::FString::AssignRange(&local_68,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar10);
      if ((bVar6) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if ((!bVar6) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if ((local_58 == (FNiagaraDataChannelData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pTVar9 = FNiagaraDataChannelData::GetGameDataForWriteGT
                         (local_58,&local_28,param_2,param_3,param_4,param_5,&local_68);
      pTVar1 = &this->Data;
      if (pTVar1 != pTVar9) {
        pTVar1->Object = pTVar9->Object;
        pTVar9->Object = (FNiagaraDataChannelGameData *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Data).SharedReferenceCount,&pTVar9->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      if ((pTVar1->Object == (FNiagaraDataChannelGameData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar4 = pTVar1->Object;
      this->StartIndex = pFVar4->NumElements;
      if ((pFVar4 == (FNiagaraDataChannelGameData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FNiagaraDataChannelGameData::SetNum(pTVar1->Object,this->StartIndex + param_2);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
      return true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  }
  return false;
}

// Cleanup @ 1490d37e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraDataChannelWriter::Cleanup(UNiagaraDataChannelWriter *this)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Data != (TSharedPtr<FNiagaraDataChannelGameData,1> *)&local_18) {
    (this->Data).Object = (FNiagaraDataChannelGameData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Data).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// GetPrivateStaticClass @ 1491086b0

UClass * __cdecl UNiagaraDataChannelWriter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannelWriter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannelWriter",
               &Z_Registration_Info_UClass_UNiagaraDataChannelWriter.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannelWriter,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraDataChannelWriter>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannelWriter>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannelWriter.InnerSingleton;
}

// InitWrite @ 149116ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraDataChannelWriter::InitWrite
          (UNiagaraDataChannelWriter *this,FNiagaraDataChannelSearchParameters *param_1,int param_2,
          bool param_3,bool param_4,bool param_5,FString *param_6)

{
  TSharedPtr<FNiagaraDataChannelGameData,1> *pTVar1;
  int iVar2;
  UNiagaraDataChannelHandler *pUVar3;
  FNiagaraDataChannelGameData *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  FString *pFVar8;
  TSharedPtr<FNiagaraDataChannelGameData,1> *pTVar9;
  int iVar10;
  FString local_a8;
  FNiagaraDataChannelData *local_98;
  TReferenceControllerBase<1> *local_90;
  FString local_88;
  FString local_78;
  TSharedPtr<FNiagaraDataChannelGameData,1> local_68;
  TObjectPtr<USceneComponent>_u_0 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  double local_40;
  uint local_38;
  
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                         ,0xad,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  if (param_2 == 0) {
    if (2 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
  }
  else {
    if (((this->Owner).field0_0x0.DebugPtr == (UNiagaraDataChannelHandler *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Owner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                           ,0xb5,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pUVar3 = (this->Owner).field0_0x0.DebugPtr;
    local_58 = (TObjectPtr<USceneComponent>_u_0)(param_1->OwningComponent).field0_0x0.DebugPtr;
    pcVar5 = *(code **)(pUVar3->_padding_ + 0x2e0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_58.DebugPtr != (USceneComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_58.DebugPtr);
    }
    local_50 = *(undefined4 *)&(param_1->Location).field0_0x0;
    uStack_4c = *(undefined4 *)((longlong)&(param_1->Location).field0_0x0 + 4);
    uStack_48 = *(undefined4 *)((longlong)&(param_1->Location).field0_0x0 + 8);
    uStack_44 = *(undefined4 *)((longlong)&(param_1->Location).field0_0x0 + 0xc);
    local_40 = (param_1->Location).field0_0x0._s_0.Z;
    local_38 = local_38 ^ (local_38 ^ param_1->bOverrideLocation) & 1;
    (*pcVar5)(pUVar3,&local_98,&local_58,1);
    if (local_98 != (FNiagaraDataChannelData *)0x0) {
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      bVar6 = 1 < (param_6->Data).ArrayNum;
      if (bVar6) {
        pFVar8 = ::FString::FString(&local_88,param_6);
      }
      else {
        pFVar8 = UObjectBaseUtility::GetPathName
                           ((UObjectBaseUtility *)this,&local_78,(UObject *)0x0);
      }
      iVar2 = (pFVar8->Data).ArrayNum;
      iVar10 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar10 = 0;
      }
      ::FString::AssignRange(&local_a8,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar10);
      if ((bVar6) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if ((!bVar6) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if ((local_98 == (FNiagaraDataChannelData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pTVar9 = FNiagaraDataChannelData::GetGameDataForWriteGT
                         (local_98,&local_68,param_2,param_3,param_4,param_5,&local_a8);
      pTVar1 = &this->Data;
      if (pTVar1 != pTVar9) {
        pTVar1->Object = pTVar9->Object;
        pTVar9->Object = (FNiagaraDataChannelGameData *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->Data).SharedReferenceCount,&pTVar9->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      if ((pTVar1->Object == (FNiagaraDataChannelGameData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar4 = pTVar1->Object;
      this->StartIndex = pFVar4->NumElements;
      if ((pFVar4 == (FNiagaraDataChannelGameData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FNiagaraDataChannelGameData::SetNum(pTVar1->Object,this->StartIndex + param_2);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
      return true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
  }
  return false;
}

// Num @ 149119550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall UNiagaraDataChannelWriter::Num(UNiagaraDataChannelWriter *this)

{
  FNiagaraDataChannelGameData *pFVar1;
  
  pFVar1 = (this->Data).Object;
  if (pFVar1 != (FNiagaraDataChannelGameData *)0x0) {
    return pFVar1->NumElements;
  }
  return 0;
}

// StaticRegisterNativesUNiagaraDataChannelWriter @ 149139da0

void __cdecl UNiagaraDataChannelWriter::StaticRegisterNativesUNiagaraDataChannelWriter(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xe;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// WriteBool @ 14914b170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelWriter::WriteBool
          (UNiagaraDataChannelWriter *this,FName param_1,int param_2,bool param_3)

{
  FNiagaraDataChannelGameData *this_00;
  code *pcVar1;
  bool bVar2;
  FNiagaraDataChannelVariableBuffer *pFVar3;
  int iVar4;
  FNiagaraVariableBase local_18;
  
  iVar4 = this->StartIndex + param_2;
  local_18.Name = param_1;
  local_18.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_18.TypeDefHandle,&FNiagaraTypeDefinition::BoolDef);
  this_00 = (this->Data).Object;
  if (this_00 == (FNiagaraDataChannelGameData *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5987388099448012904>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessor.h"
                       ,0x68,"Data.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pFVar3 = FNiagaraDataChannelGameData::FindVariableBuffer(this_00,&local_18);
    if (pFVar3 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      if (pFVar3->Size != 4) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x34,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((-1 < iVar4) && (iVar4 < (pFVar3->Data).ArrayNum / pFVar3->Size)) {
        *(uint *)((pFVar3->Data).AllocatorInstance.Data + (longlong)iVar4 * 4) = (param_3 ^ 1) - 1;
      }
    }
  }
  return;
}

// WriteEnum @ 14914b260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelWriter::WriteEnum
          (UNiagaraDataChannelWriter *this,FName param_1,int param_2,uchar param_3)

{
  WriteInt(this,param_1,param_2,(uint)param_3);
  return;
}

// WriteFloat @ 14914b270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelWriter::WriteFloat
          (UNiagaraDataChannelWriter *this,FName param_1,int param_2,double param_3)

{
  FNiagaraDataChannelGameData *this_00;
  code *pcVar1;
  bool bVar2;
  FNiagaraDataChannelVariableBuffer *pFVar3;
  int iVar4;
  FNiagaraVariableBase local_28 [2];
  
  iVar4 = this->StartIndex + param_2;
  local_28[0].Name = param_1;
  local_28[0].TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_28[0].TypeDefHandle,&FNiagaraTypeHelper::DoubleDef);
  this_00 = (this->Data).Object;
  if (this_00 == (FNiagaraDataChannelGameData *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5987388099448012904>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessor.h"
                       ,0x68,"Data.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pFVar3 = FNiagaraDataChannelGameData::FindVariableBuffer(this_00,local_28);
    if (pFVar3 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      if (pFVar3->Size != 8) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x34,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((-1 < iVar4) && (iVar4 < (pFVar3->Data).ArrayNum / pFVar3->Size)) {
        *(double *)((pFVar3->Data).AllocatorInstance.Data + (longlong)iVar4 * 8) = param_3;
      }
    }
  }
  return;
}

// WriteID @ 14914b360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelWriter::WriteID
          (UNiagaraDataChannelWriter *this,FName param_1,int param_2,FNiagaraID param_3)

{
  FNiagaraDataChannelGameData *this_00;
  code *pcVar1;
  bool bVar2;
  FNiagaraDataChannelVariableBuffer *pFVar3;
  int iVar4;
  FNiagaraVariableBase local_18;
  
  iVar4 = this->StartIndex + param_2;
  local_18.Name = param_1;
  local_18.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_18.TypeDefHandle,&FNiagaraTypeDefinition::IDDef);
  this_00 = (this->Data).Object;
  if (this_00 == (FNiagaraDataChannelGameData *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5987388099448012904>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessor.h"
                       ,0x68,"Data.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pFVar3 = FNiagaraDataChannelGameData::FindVariableBuffer(this_00,&local_18);
    if (pFVar3 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      if (pFVar3->Size != 8) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x34,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((-1 < iVar4) && (iVar4 < (pFVar3->Data).ArrayNum / pFVar3->Size)) {
        *(FNiagaraID *)((pFVar3->Data).AllocatorInstance.Data + (longlong)iVar4 * 8) = param_3;
      }
    }
  }
  return;
}

// WriteInt @ 14914b450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelWriter::WriteInt
          (UNiagaraDataChannelWriter *this,FName param_1,int param_2,int param_3)

{
  FNiagaraDataChannelGameData *this_00;
  code *pcVar1;
  bool bVar2;
  FNiagaraDataChannelVariableBuffer *pFVar3;
  int iVar4;
  FNiagaraVariableBase local_18;
  
  iVar4 = this->StartIndex + param_2;
  local_18.Name = param_1;
  local_18.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_18.TypeDefHandle,&FNiagaraTypeDefinition::IntDef);
  this_00 = (this->Data).Object;
  if (this_00 == (FNiagaraDataChannelGameData *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5987388099448012904>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessor.h"
                       ,0x68,"Data.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pFVar3 = FNiagaraDataChannelGameData::FindVariableBuffer(this_00,&local_18);
    if (pFVar3 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      if (pFVar3->Size != 4) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x34,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((-1 < iVar4) && (iVar4 < (pFVar3->Data).ArrayNum / pFVar3->Size)) {
        *(int *)((pFVar3->Data).AllocatorInstance.Data + (longlong)iVar4 * 4) = param_3;
      }
    }
  }
  return;
}

// WriteLinearColor @ 14914b540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelWriter::WriteLinearColor
          (UNiagaraDataChannelWriter *this,FName param_1,int param_2,FLinearColor *param_3)

{
  FScriptContainerElement *pFVar1;
  FNiagaraDataChannelGameData *this_00;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  FNiagaraDataChannelVariableBuffer *pFVar5;
  int iVar6;
  FNiagaraVariableBase local_18;
  
  iVar6 = this->StartIndex + param_2;
  local_18.Name = param_1;
  local_18.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_18.TypeDefHandle,&FNiagaraTypeDefinition::ColorDef);
  this_00 = (this->Data).Object;
  if (this_00 == (FNiagaraDataChannelGameData *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5987388099448012904>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessor.h"
                       ,0x68,"Data.IsValid()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pFVar5 = FNiagaraDataChannelGameData::FindVariableBuffer(this_00,&local_18);
    if (pFVar5 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      if (pFVar5->Size != 0x10) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x34,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((-1 < iVar6) && (iVar6 < (pFVar5->Data).ArrayNum / pFVar5->Size)) {
        uVar3 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
        pFVar1 = (pFVar5->Data).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
        *(undefined8 *)pFVar1 = *(undefined8 *)&param_3->field0_0x0;
        *(undefined8 *)(pFVar1 + 8) = uVar3;
      }
    }
  }
  return;
}

// WritePosition @ 14914b630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelWriter::WritePosition
          (UNiagaraDataChannelWriter *this,FName param_1,int param_2,TVector<double> *param_3)

{
  int iVar1;
  FNiagaraVariableBase local_18;
  
  iVar1 = this->StartIndex;
  local_18.Name = param_1;
  local_18.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_18.TypeDefHandle,&FNiagaraTypeDefinition::PositionDef);
  WriteData<UE::Math::TVector<double>_>(this,&local_18,iVar1 + param_2,param_3);
  return;
}

// WriteQuat @ 14914b690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelWriter::WriteQuat
          (UNiagaraDataChannelWriter *this,FName param_1,int param_2,TQuat<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  FNiagaraDataChannelGameData *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  FNiagaraDataChannelVariableBuffer *pFVar8;
  int iVar9;
  FNiagaraVariableBase local_18;
  
  iVar9 = this->StartIndex + param_2;
  local_18.Name = param_1;
  local_18.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_18.TypeDefHandle,&FNiagaraTypeHelper::QuatDef);
  this_00 = (this->Data).Object;
  if (this_00 == (FNiagaraDataChannelGameData *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5987388099448012904>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessor.h"
                       ,0x68,"Data.IsValid()");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pFVar8 = FNiagaraDataChannelGameData::FindVariableBuffer(this_00,&local_18);
    if (pFVar8 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      if (pFVar8->Size != 0x20) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x34,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((-1 < iVar9) && (iVar9 < (pFVar8->Data).ArrayNum / pFVar8->Size)) {
        pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
        dVar4 = param_3->Y;
        dVar5 = param_3->Z;
        dVar6 = param_3->W;
        pFVar1 = pFVar2 + (longlong)iVar9 * 0x20;
        *(double *)pFVar1 = param_3->X;
        *(double *)(pFVar1 + 8) = dVar4;
        pFVar2 = pFVar2 + (longlong)iVar9 * 0x20 + 0x10;
        *(double *)pFVar2 = dVar5;
        *(double *)(pFVar2 + 8) = dVar6;
      }
    }
  }
  return;
}

// WriteSpawnInfo @ 14914b790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelWriter::WriteSpawnInfo
          (UNiagaraDataChannelWriter *this,FName param_1,int param_2,FNiagaraSpawnInfo *param_3)

{
  FScriptContainerElement *pFVar1;
  FNiagaraDataChannelGameData *this_00;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  FNiagaraDataChannelVariableBuffer *pFVar5;
  int iVar6;
  TObjectPtr<UObject>_u_0 local_res8;
  TObjectPtr<UObject>_u_0 *local_res10;
  FNiagaraVariableBase local_48;
  TObjectPtr<UObject>_u_0 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_2c;
  undefined4 local_24;
  
  iVar6 = this->StartIndex + param_2;
  local_res8.DebugPtr = (UObject *)FNiagaraSpawnInfo::StaticStruct();
  local_38.DebugPtr = local_res8.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UScriptStruct *)local_res8.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable(local_res8.DebugPtr);
  }
  local_2e = 0;
  local_30 = 2;
  local_2c = 0xffffffffffffffff;
  local_24 = 0xffffffff;
  bVar4 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct
                    ((UScriptStruct *)local_res8.DebugPtr,UserFacing);
  if (!bVar4) {
    local_res10 = &local_res8;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_res10);
  }
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_38.ObjectPtr);
  local_48.Name = param_1;
  local_48.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_48.TypeDefHandle,(FNiagaraTypeDefinition *)&local_38.ObjectPtr);
  this_00 = (this->Data).Object;
  if (this_00 == (FNiagaraDataChannelGameData *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5987388099448012904>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessor.h"
                       ,0x68,"Data.IsValid()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pFVar5 = FNiagaraDataChannelGameData::FindVariableBuffer(this_00,&local_48);
    if (pFVar5 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      if (pFVar5->Size != 0x10) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x34,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((-1 < iVar6) && (iVar6 < (pFVar5->Data).ArrayNum / pFVar5->Size)) {
        uVar3 = *(undefined8 *)&param_3->IntervalDt;
        pFVar1 = (pFVar5->Data).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
        *(undefined8 *)pFVar1 = *(undefined8 *)param_3;
        *(undefined8 *)(pFVar1 + 8) = uVar3;
      }
    }
  }
  return;
}

// WriteVector2D @ 14914c550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelWriter::WriteVector2D
          (UNiagaraDataChannelWriter *this,FName param_1,int param_2,TVector2<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  FNiagaraDataChannelGameData *this_00;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  FNiagaraDataChannelVariableBuffer *pFVar5;
  int iVar6;
  FNiagaraVariableBase local_18;
  
  iVar6 = this->StartIndex + param_2;
  local_18.Name = param_1;
  local_18.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_18.TypeDefHandle,&FNiagaraTypeHelper::Vector2DDef);
  this_00 = (this->Data).Object;
  if (this_00 == (FNiagaraDataChannelGameData *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5987388099448012904>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessor.h"
                       ,0x68,"Data.IsValid()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pFVar5 = FNiagaraDataChannelGameData::FindVariableBuffer(this_00,&local_18);
    if (pFVar5 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      if (pFVar5->Size != 0x10) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x34,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((-1 < iVar6) && (iVar6 < (pFVar5->Data).ArrayNum / pFVar5->Size)) {
        dVar3 = (param_3->field0_0x0)._s_0.Y;
        pFVar1 = (pFVar5->Data).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
        *(double *)pFVar1 = (param_3->field0_0x0)._s_0.X;
        *(double *)(pFVar1 + 8) = dVar3;
      }
    }
  }
  return;
}

// WriteVector4 @ 14914c640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelWriter::WriteVector4
          (UNiagaraDataChannelWriter *this,FName param_1,int param_2,TVector4<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  FNiagaraDataChannelGameData *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  FNiagaraDataChannelVariableBuffer *pFVar8;
  int iVar9;
  FNiagaraVariableBase local_18;
  
  iVar9 = this->StartIndex + param_2;
  local_18.Name = param_1;
  local_18.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_18.TypeDefHandle,&FNiagaraTypeHelper::Vector4Def);
  this_00 = (this->Data).Object;
  if (this_00 == (FNiagaraDataChannelGameData *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5987388099448012904>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessor.h"
                       ,0x68,"Data.IsValid()");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pFVar8 = FNiagaraDataChannelGameData::FindVariableBuffer(this_00,&local_18);
    if (pFVar8 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      if (pFVar8->Size != 0x20) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x34,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((-1 < iVar9) && (iVar9 < (pFVar8->Data).ArrayNum / pFVar8->Size)) {
        pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
        dVar4 = (param_3->field0_0x0)._s_0.Y;
        dVar5 = (param_3->field0_0x0)._s_0.Z;
        dVar6 = (param_3->field0_0x0)._s_0.W;
        pFVar1 = pFVar2 + (longlong)iVar9 * 0x20;
        *(double *)pFVar1 = (param_3->field0_0x0)._s_0.X;
        *(double *)(pFVar1 + 8) = dVar4;
        pFVar2 = pFVar2 + (longlong)iVar9 * 0x20 + 0x10;
        *(double *)pFVar2 = dVar5;
        *(double *)(pFVar2 + 8) = dVar6;
      }
    }
  }
  return;
}

// WriteVector @ 14914c740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelWriter::WriteVector
          (UNiagaraDataChannelWriter *this,FName param_1,int param_2,TVector<double> *param_3)

{
  int iVar1;
  FNiagaraVariableBase local_18;
  
  iVar1 = this->StartIndex;
  local_18.Name = param_1;
  local_18.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_18.TypeDefHandle,&FNiagaraTypeHelper::VectorDef);
  WriteData<UE::Math::TVector<double>_>(this,&local_18,iVar1 + param_2,param_3);
  return;
}

// execInitWrite @ 1491514c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelWriter::execInitWrite(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  void *_Src;
  bool bVar8;
  undefined1 uVar9;
  FString *pFVar10;
  UObject *pUVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  FString local_118;
  void *local_108;
  undefined8 local_100;
  FString local_f8;
  FNiagaraDataChannelData *local_e8;
  TReferenceControllerBase<1> *local_e0;
  UObject *local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  uint local_b8;
  UObject *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  uint local_90;
  FString local_88;
  TSharedPtr<FNiagaraDataChannelGameData,1> local_78;
  undefined8 local_60;
  undefined8 uStack_58;
  double local_50;
  
  local_b8 = local_b8 & 0xfffffffe;
  local_d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_d8 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_11c = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_11c,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_11c);
  }
  local_128 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  bVar15 = local_128 != 0;
  local_124 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_124,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_124);
  }
  bVar16 = local_124 != 0;
  local_120 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  bVar17 = local_120 != 0;
  local_108 = (void *)0x0;
  local_100 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  pUVar1 = local_d8;
  iVar7 = local_11c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_d8);
  }
  uVar12 = local_b8 & 1;
  local_60 = local_d0;
  uStack_58 = dStack_c8;
  local_50 = local_c0;
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                         ,0xad,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (iVar7 == 0) {
    if (2 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    uVar9 = 0;
  }
  else {
    if ((*(longlong *)&param_1[1].field_0x18 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Owner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelAccessor.cpp"
                           ,0xb5,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar4 = *(longlong **)&param_1[1].field_0x18;
    local_b0 = pUVar1;
    pcVar5 = *(code **)(*plVar4 + 0x2e0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    local_98 = local_50;
    local_90 = local_90 ^ (local_90 ^ uVar12) & 1;
    local_a8 = (undefined4)local_60;
    uStack_a4 = local_60._4_4_;
    uStack_a0 = (undefined4)uStack_58;
    uStack_9c = uStack_58._4_4_;
    (*pcVar5)(plVar4,&local_e8);
    _Src = local_108;
    if (local_e8 == (FNiagaraDataChannelData *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
      uVar9 = 0;
    }
    else {
      lVar13 = (longlong)(int)local_100;
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.Data.ArrayNum = 0;
      local_f8.Data.ArrayMax = 0;
      if ((int)local_100 < 2) {
        pFVar10 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)param_1,&local_88,(UObject *)0x0);
        bVar6 = true;
        bVar8 = false;
      }
      else {
        bVar6 = false;
        bVar8 = true;
        local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.Data.ArrayNum = (int)local_100;
        if ((int)local_100 == 0) {
          local_118.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_100,0,(ForAnyElementType *)&local_118,(int)local_100,
                     &local_118.Data.ArrayMax);
          memcpy(local_118.Data.AllocatorInstance.Data,_Src,lVar13 * 2);
        }
        pFVar10 = &local_118;
      }
      iVar2 = (pFVar10->Data).ArrayNum;
      iVar14 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar14 = 0;
      }
      ::FString::AssignRange(&local_f8,(wchar_t *)(pFVar10->Data).AllocatorInstance.Data,iVar14);
      if ((bVar8) && (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if ((bVar6) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if ((local_e8 == (FNiagaraDataChannelData *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar11 = (UObject *)
                FNiagaraDataChannelData::GetGameDataForWriteGT
                          (local_e8,&local_78,iVar7,bVar15,bVar16,bVar17,&local_f8);
      pUVar1 = param_1 + 1;
      if (pUVar1 != pUVar11) {
        *(longlong *)pUVar1 = *(longlong *)pUVar11;
        *(undefined8 *)pUVar11 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&param_1[1].field_0x8,
                   (FSharedReferencer<1> *)&pUVar11->field_0x8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      if ((*(longlong *)pUVar1 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar13 = *(longlong *)pUVar1;
      *(undefined4 *)&param_1[1].field_0x10 = *(undefined4 *)(lVar13 + 0x20);
      if ((lVar13 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FNiagaraDataChannelGameData::SetNum
                (*(FNiagaraDataChannelGameData **)pUVar1,*(int *)&param_1[1].field_0x10 + iVar7);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
      uVar9 = 1;
    }
  }
  *(undefined1 *)param_3 = uVar9;
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  return;
}

// execNum @ 149151c80

void __cdecl UNiagaraDataChannelWriter::execNum(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)(param_1 + 1) != 0) {
    *(undefined4 *)param_3 = *(undefined4 *)(*(longlong *)(param_1 + 1) + 0x20);
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execWriteBool @ 149157eb0

void __cdecl
UNiagaraDataChannelWriter::execWriteBool(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNiagaraDataChannelVariableBuffer *pFVar4;
  int iVar5;
  bool bVar6;
  int local_res8 [2];
  int local_res10 [2];
  FName local_res20;
  FNiagaraVariableBase local_28;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar6 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28.Name = local_res20;
  iVar5 = local_res10[0] + *(int *)&param_1[1].field_0x10;
  local_28.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_28.TypeDefHandle,&FNiagaraTypeDefinition::BoolDef);
  if (*(FNiagaraDataChannelGameData **)(param_1 + 1) == (FNiagaraDataChannelGameData *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5987388099448012904>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessor.h"
                       ,0x68,"Data.IsValid()");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pFVar4 = FNiagaraDataChannelGameData::FindVariableBuffer
                       (*(FNiagaraDataChannelGameData **)(param_1 + 1),&local_28);
    if (pFVar4 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      if (pFVar4->Size != 4) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x34,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((-1 < iVar5) && (iVar5 < (pFVar4->Data).ArrayNum / pFVar4->Size)) {
        *(uint *)((pFVar4->Data).AllocatorInstance.Data + (longlong)iVar5 * 4) = -(uint)bVar6;
      }
    }
  }
  return;
}

// execWriteEnum @ 149158070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelWriter::execWriteEnum(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res10 [8];
  int local_res20 [2];
  FName local_18 [2];
  
  local_18[0].ComparisonIndex.Value = 0;
  local_18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  WriteInt((UNiagaraDataChannelWriter *)param_1,local_18[0],local_res20[0],(uint)local_res10[0]);
  return;
}

// execWriteFloat @ 149158190

void __cdecl
UNiagaraDataChannelWriter::execWriteFloat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  FNiagaraDataChannelVariableBuffer *pFVar5;
  int iVar6;
  int local_res8 [2];
  FName local_res10 [2];
  undefined8 local_res20;
  FNiagaraVariableBase local_38 [2];
  
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res20 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  uVar3 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar6 = local_res8[0] + *(int *)&param_1[1].field_0x10;
  local_38[0].Name = local_res10[0];
  local_38[0].TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_38[0].TypeDefHandle,&FNiagaraTypeHelper::DoubleDef);
  if (*(FNiagaraDataChannelGameData **)(param_1 + 1) == (FNiagaraDataChannelGameData *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5987388099448012904>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessor.h"
                       ,0x68,"Data.IsValid()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pFVar5 = FNiagaraDataChannelGameData::FindVariableBuffer
                       (*(FNiagaraDataChannelGameData **)(param_1 + 1),local_38);
    if (pFVar5 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      if (pFVar5->Size != 8) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x34,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((-1 < iVar6) && (iVar6 < (pFVar5->Data).ArrayNum / pFVar5->Size)) {
        *(undefined8 *)((pFVar5->Data).AllocatorInstance.Data + (longlong)iVar6 * 8) = uVar3;
      }
    }
  }
  return;
}

// execWriteID @ 149158360

void __cdecl UNiagaraDataChannelWriter::execWriteID(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  FNiagaraDataChannelVariableBuffer *pFVar5;
  int iVar6;
  int local_res8 [2];
  undefined8 local_res10;
  FName local_res20;
  FNiagaraVariableBase local_28;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10 = 0xffffffffffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar6 = local_res8[0] + *(int *)&param_1[1].field_0x10;
  local_28.Name = local_res20;
  local_28.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_28.TypeDefHandle,&FNiagaraTypeDefinition::IDDef);
  if (*(FNiagaraDataChannelGameData **)(param_1 + 1) == (FNiagaraDataChannelGameData *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5987388099448012904>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessor.h"
                       ,0x68,"Data.IsValid()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pFVar5 = FNiagaraDataChannelGameData::FindVariableBuffer
                       (*(FNiagaraDataChannelGameData **)(param_1 + 1),&local_28);
    if (pFVar5 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      if (pFVar5->Size != 8) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x34,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((-1 < iVar6) && (iVar6 < (pFVar5->Data).ArrayNum / pFVar5->Size)) {
        *(undefined8 *)((pFVar5->Data).AllocatorInstance.Data + (longlong)iVar6 * 8) = uVar3;
      }
    }
  }
  return;
}

// execWriteInt @ 149158520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl UNiagaraDataChannelWriter::execWriteInt(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  int local_res20 [2];
  FName local_18 [2];
  
  local_18[0].ComparisonIndex.Value = 0;
  local_18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  WriteInt((UNiagaraDataChannelWriter *)param_1,local_18[0],local_res20[0],local_res10[0]);
  return;
}

// execWriteLinearColor @ 149158640

void __cdecl
UNiagaraDataChannelWriter::execWriteLinearColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  FNiagaraDataChannelVariableBuffer *pFVar5;
  int iVar6;
  int local_res8 [2];
  FName local_res10;
  FNiagaraVariableBase local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28 = local_38;
  uStack_20 = uStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar6 = local_res8[0] + *(int *)&param_1[1].field_0x10;
  local_48.Name = local_res10;
  local_48.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_48.TypeDefHandle,&FNiagaraTypeDefinition::ColorDef);
  if (*(FNiagaraDataChannelGameData **)(param_1 + 1) == (FNiagaraDataChannelGameData *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5987388099448012904>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessor.h"
                       ,0x68,"Data.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pFVar5 = FNiagaraDataChannelGameData::FindVariableBuffer
                       (*(FNiagaraDataChannelGameData **)(param_1 + 1),&local_48);
    if (pFVar5 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      if (pFVar5->Size != 0x10) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x34,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((-1 < iVar6) && (iVar6 < (pFVar5->Data).ArrayNum / pFVar5->Size)) {
        pFVar1 = (pFVar5->Data).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
        *(undefined8 *)pFVar1 = local_38;
        *(undefined8 *)(pFVar1 + 8) = uStack_30;
      }
    }
  }
  return;
}

// execWritePosition @ 149158820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelWriter::execWritePosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int local_res8 [2];
  FName local_res10;
  FNiagaraVariableBase local_58;
  double local_48;
  double dStack_40;
  double local_38;
  TVector<double>_u_0 local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  local_28._s_0.Z = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)&param_1[1].field_0x10 + local_res8[0];
  local_58.Name = local_res10;
  local_58.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_58.TypeDefHandle,&FNiagaraTypeDefinition::PositionDef);
  WriteData<UE::Math::TVector<double>_>
            ((UNiagaraDataChannelWriter *)param_1,&local_58,iVar2,(TVector<double> *)&local_28._s_0)
  ;
  return;
}

// execWriteQuat @ 149158990

void __cdecl
UNiagaraDataChannelWriter::execWriteQuat(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FNiagaraDataChannelVariableBuffer *pFVar6;
  int iVar7;
  int local_res8 [2];
  FName local_res10;
  FNiagaraVariableBase local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_68 = local_48;
  uStack_60 = uStack_40;
  local_28 = local_48;
  uStack_20 = uStack_40;
  local_58 = local_38;
  uStack_50 = uStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar7 = local_res8[0] + *(int *)&param_1[1].field_0x10;
  local_18 = local_38;
  uStack_10 = uStack_30;
  local_78.Name = local_res10;
  local_78.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_78.TypeDefHandle,&FNiagaraTypeHelper::QuatDef);
  if (*(FNiagaraDataChannelGameData **)(param_1 + 1) == (FNiagaraDataChannelGameData *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5987388099448012904>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessor.h"
                       ,0x68,"Data.IsValid()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pFVar6 = FNiagaraDataChannelGameData::FindVariableBuffer
                       (*(FNiagaraDataChannelGameData **)(param_1 + 1),&local_78);
    if (pFVar6 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      if (pFVar6->Size != 0x20) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x34,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((-1 < iVar7) && (iVar7 < (pFVar6->Data).ArrayNum / pFVar6->Size)) {
        pFVar3 = (pFVar6->Data).AllocatorInstance.Data;
        pFVar1 = pFVar3 + (longlong)iVar7 * 0x20;
        *(undefined8 *)pFVar1 = local_68;
        *(undefined8 *)(pFVar1 + 8) = uStack_60;
        pFVar3 = pFVar3 + (longlong)iVar7 * 0x20 + 0x10;
        *(undefined8 *)pFVar3 = local_58;
        *(undefined8 *)(pFVar3 + 8) = uStack_50;
      }
    }
  }
  return;
}

// execWriteSpawnInfo @ 149158bb0

void __cdecl
UNiagaraDataChannelWriter::execWriteSpawnInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  FNiagaraDataChannelVariableBuffer *pFVar8;
  int iVar9;
  int local_res8 [2];
  undefined8 local_res10;
  TObjectPtr<UObject>_u_0 local_res20;
  TObjectPtr<UObject>_u_0 *local_88;
  undefined8 local_80;
  FNiagaraVariableBase local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  TObjectPtr<UObject>_u_0 local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined8 local_3c;
  undefined4 local_34;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_68 = 0;
  uStack_60 = 0x3f800000;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  uVar6 = uStack_60;
  uVar5 = local_68;
  uVar4 = local_res10;
  local_58 = local_68;
  uStack_50 = uStack_60;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar9 = local_res8[0] + *(int *)&param_1[1].field_0x10;
  local_80 = local_res10;
  local_res20.DebugPtr = (UObject *)FNiagaraSpawnInfo::StaticStruct();
  local_48.DebugPtr = local_res20.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UScriptStruct *)local_res20.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable(local_res20.DebugPtr);
  }
  local_3e = 0;
  local_40 = 2;
  local_3c = 0xffffffffffffffff;
  local_34 = 0xffffffff;
  bVar7 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct
                    ((UScriptStruct *)local_res20.DebugPtr,UserFacing);
  if (!bVar7) {
    local_88 = &local_res20;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_88);
  }
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_48.ObjectPtr);
  local_78.Name.Number = local_80._4_4_;
  local_78.Name.ComparisonIndex.Value = (uint)uVar4;
  local_78.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_78.TypeDefHandle,(FNiagaraTypeDefinition *)&local_48.ObjectPtr);
  if (*(FNiagaraDataChannelGameData **)(param_1 + 1) == (FNiagaraDataChannelGameData *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5987388099448012904>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessor.h"
                       ,0x68,"Data.IsValid()");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pFVar8 = FNiagaraDataChannelGameData::FindVariableBuffer
                       (*(FNiagaraDataChannelGameData **)(param_1 + 1),&local_78);
    if (pFVar8 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      if (pFVar8->Size != 0x10) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x34,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((-1 < iVar9) && (iVar9 < (pFVar8->Data).ArrayNum / pFVar8->Size)) {
        pFVar1 = (pFVar8->Data).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
        *(undefined8 *)pFVar1 = uVar5;
        *(undefined8 *)(pFVar1 + 8) = uVar6;
      }
    }
  }
  return;
}

// execWriteVector2D @ 149159de0

void __cdecl
UNiagaraDataChannelWriter::execWriteVector2D(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  FNiagaraDataChannelVariableBuffer *pFVar5;
  int iVar6;
  int local_res8 [2];
  FName local_res10;
  FNiagaraVariableBase local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_28 = local_38;
  uStack_20 = uStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar6 = local_res8[0] + *(int *)&param_1[1].field_0x10;
  local_48.Name = local_res10;
  local_48.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_48.TypeDefHandle,&FNiagaraTypeHelper::Vector2DDef);
  if (*(FNiagaraDataChannelGameData **)(param_1 + 1) == (FNiagaraDataChannelGameData *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5987388099448012904>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessor.h"
                       ,0x68,"Data.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pFVar5 = FNiagaraDataChannelGameData::FindVariableBuffer
                       (*(FNiagaraDataChannelGameData **)(param_1 + 1),&local_48);
    if (pFVar5 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      if (pFVar5->Size != 0x10) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x34,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((-1 < iVar6) && (iVar6 < (pFVar5->Data).ArrayNum / pFVar5->Size)) {
        pFVar1 = (pFVar5->Data).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
        *(undefined8 *)pFVar1 = local_38;
        *(undefined8 *)(pFVar1 + 8) = uStack_30;
      }
    }
  }
  return;
}

// execWriteVector4 @ 149159fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UNiagaraDataChannelWriter::execWriteVector4(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  FNiagaraDataChannelVariableBuffer *pFVar10;
  int iVar11;
  int local_res8 [2];
  FName local_res10;
  FNiagaraVariableBase local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = ___xmm_3ff00000000000000000000000000000;
  uStack_50 = _UNK_15061cbc8;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  uVar8 = uStack_50;
  uVar7 = local_58;
  uVar6 = uStack_60;
  uVar5 = local_68;
  local_48 = local_68;
  uStack_40 = uStack_60;
  local_38 = local_58;
  uStack_30 = uStack_50;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar11 = local_res8[0] + *(int *)&param_1[1].field_0x10;
  local_78.Name = local_res10;
  local_78.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_78.TypeDefHandle,&FNiagaraTypeHelper::Vector4Def);
  if (*(FNiagaraDataChannelGameData **)(param_1 + 1) == (FNiagaraDataChannelGameData *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5987388099448012904>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessor.h"
                       ,0x68,"Data.IsValid()");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pFVar10 = FNiagaraDataChannelGameData::FindVariableBuffer
                        (*(FNiagaraDataChannelGameData **)(param_1 + 1),&local_78);
    if (pFVar10 != (FNiagaraDataChannelVariableBuffer *)0x0) {
      if (pFVar10->Size != 0x20) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                           ,0x34,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((-1 < iVar11) && (iVar11 < (pFVar10->Data).ArrayNum / pFVar10->Size)) {
        pFVar3 = (pFVar10->Data).AllocatorInstance.Data;
        pFVar1 = pFVar3 + (longlong)iVar11 * 0x20;
        *(undefined8 *)pFVar1 = uVar5;
        *(undefined8 *)(pFVar1 + 8) = uVar6;
        pFVar3 = pFVar3 + (longlong)iVar11 * 0x20 + 0x10;
        *(undefined8 *)pFVar3 = uVar7;
        *(undefined8 *)(pFVar3 + 8) = uVar8;
      }
    }
  }
  return;
}

// execWriteVector @ 14915a1e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UNiagaraDataChannelWriter::execWriteVector(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int local_res8 [2];
  FName local_res10;
  FNiagaraVariableBase local_58;
  double local_48;
  double dStack_40;
  double local_38;
  TVector<double>_u_0 local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  local_28._s_0.Z = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = *(int *)&param_1[1].field_0x10 + local_res8[0];
  local_58.Name = local_res10;
  local_58.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_58.TypeDefHandle,&FNiagaraTypeHelper::VectorDef);
  WriteData<UE::Math::TVector<double>_>
            ((UNiagaraDataChannelWriter *)param_1,&local_58,iVar2,(TVector<double> *)&local_28._s_0)
  ;
  return;
}

