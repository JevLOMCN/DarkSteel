// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 69

// Construct<FInterchangePipelineStack> @ 14e4ca7c0

void __cdecl UE::CoreUObject::Private::Construct<FInterchangePipelineStack>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FInterchangePipelineStack> @ 14e4ca7e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInterchangePipelineStack>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FInterchangePipelineStack> @ 14e4ca800

void __cdecl UE::CoreUObject::Private::Destruct<FInterchangePipelineStack>(void *param_1)

{
  DestructItems<FInterchangeTranslatorPipelines,int>
            (*(FInterchangeTranslatorPipelines **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  DestructItems<FSoftObjectPath,int>(*(FSoftObjectPath **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FInterchangePipelineStack> @ 14e4ca850

bool __cdecl
UE::CoreUObject::Private::Copy<FInterchangePipelineStack>(void *param_1,void *param_2,int param_3)

{
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FInterchangeTranslatorPipelines *pFVar5;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar3 = (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::operator=(this,pTVar3);
      pTVar1 = this + 1;
      if (pTVar1 != pTVar3 + 1) {
        DestructItems<FInterchangeTranslatorPipelines,int>
                  ((FInterchangeTranslatorPipelines *)(pTVar1->AllocatorInstance).Data,
                   this[1].ArrayNum);
        iVar4 = pTVar3[1].ArrayNum;
        piVar2 = &this[1].ArrayMax;
        pFVar5 = (FInterchangeTranslatorPipelines *)pTVar3[1].AllocatorInstance.Data;
        this[1].ArrayNum = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
          ConstructItems<FInterchangeTranslatorPipelines,FInterchangeTranslatorPipelines,int>
                    ((pTVar1->AllocatorInstance).Data,pFVar5,iVar4);
        }
      }
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInterchangeTranslatorPipelines> @ 14e4caaf0

void __cdecl UE::CoreUObject::Private::Construct<FInterchangeTranslatorPipelines>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FInterchangeTranslatorPipelines> @ 14e4cab50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FInterchangeTranslatorPipelines>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FInterchangeTranslatorPipelines> @ 14e4caba0

void __cdecl UE::CoreUObject::Private::Destruct<FInterchangeTranslatorPipelines>(void *param_1)

{
  DestructItems<FSoftObjectPath,int>
            (*(FSoftObjectPath **)((longlong)param_1 + 0x28),*(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// Construct<FInterchangeFilePickerParameters> @ 14e4cabf0

void __cdecl UE::CoreUObject::Private::Construct<FInterchangeFilePickerParameters>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  FText::FText((FText *)((longlong)param_1 + 8));
  ::FString::FString((FString *)((longlong)param_1 + 0x18),L"");
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FInterchangeFilePickerParameters> @ 14e4cac40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FInterchangeFilePickerParameters>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  FText::FText((FText *)((longlong)param_1 + 8));
  ::FString::FString((FString *)((longlong)param_1 + 0x18),L"");
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FInterchangeFilePickerParameters> @ 14e4cac80

void __cdecl UE::CoreUObject::Private::Destruct<FInterchangeFilePickerParameters>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x30),*(int *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(longlong **)((longlong)param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e4cacc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x10))();
    return;
  }
  return;
}

// Copy<FInterchangeTranslatorPipelines> @ 14e4cad20

bool __cdecl
UE::CoreUObject::Private::Copy<FInterchangeTranslatorPipelines>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)((longlong)param_1 + 8),
                 (FSoftObjectPath *)((longlong)param_1 + lVar1 + 8));
      TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x28),
                 (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + lVar1 + 0x28));
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x38);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FInterchangeFilePickerParameters> @ 14e4cadc0

bool __cdecl
UE::CoreUObject::Private::Copy<FInterchangeFilePickerParameters>
          (void *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_res18 [16];
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar3);
      plVar1 = *(longlong **)((longlong)param_1 + lVar3 + 8);
      plVar2 = *(longlong **)((longlong)param_1 + 8);
      if (plVar2 != plVar1) {
        *(longlong **)((longlong)param_1 + 8) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1,local_res18);
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + lVar3 + 0x10);
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_1 + lVar3 + 0x18)
                );
      *(undefined1 *)((longlong)param_1 + 0x28) = *(undefined1 *)((longlong)param_1 + lVar3 + 0x28);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30),
                 (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + lVar3 + 0x30));
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x40);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FImportAssetParameters> @ 14e4cba60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Construct<FImportAssetParameters>(void *param_1)

{
  memset(param_1,0,0x108);
  FImportAssetParameters::FImportAssetParameters(param_1);
  return;
}

// ConstructForTests<FImportAssetParameters> @ 14e4cba90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FImportAssetParameters>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined2 *)((longlong)param_1 + 0x38) = 1;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0;
  return;
}

// Destruct<FImportAssetParameters> @ 14e4cbae0

void __cdecl UE::CoreUObject::Private::Destruct<FImportAssetParameters>(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0xe8));
  if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0xe8));
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0xd0));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0xb8));
  if (*(void **)((longlong)param_1 + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xc0));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0xb8));
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0xa0));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x88));
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0x88));
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0x70));
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x58));
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0x58));
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  DestructItems<FSoftObjectPath,int>
            (*(FSoftObjectPath **)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  return;
}

// Copy<FImportAssetParameters> @ 14e4cbaf0

bool __cdecl
UE::CoreUObject::Private::Copy<FImportAssetParameters>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
      *(undefined1 *)((longlong)puVar2 + 0xc) = *(undefined1 *)((longlong)puVar1 + 0xc);
      *(undefined1 *)((longlong)puVar2 + 0xd) = *(undefined1 *)((longlong)puVar1 + 0xd);
      TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)(puVar2 + 2),
                 (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *)(puVar1 + 2));
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[4] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[4]);
      }
      puVar2[4] = puVar1[4];
      ::FString::operator=((FString *)(puVar2 + 5),(FString *)(puVar1 + 5));
      *(undefined1 *)(puVar2 + 7) = *(undefined1 *)(puVar1 + 7);
      *(undefined1 *)((longlong)puVar2 + 0x39) = *(undefined1 *)((longlong)puVar1 + 0x39);
      TScriptDelegate<FNotThreadSafeDelegateMode>::operator=
                ((TScriptDelegate<FNotThreadSafeDelegateMode> *)(puVar2 + 8),
                 (TScriptDelegate<FNotThreadSafeDelegateMode> *)(puVar1 + 8));
      TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)(puVar2 + 0xb),
                 (TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)(puVar1 + 0xb));
      TScriptDelegate<FNotThreadSafeDelegateMode>::operator=
                ((TScriptDelegate<FNotThreadSafeDelegateMode> *)(puVar2 + 0xe),
                 (TScriptDelegate<FNotThreadSafeDelegateMode> *)(puVar1 + 0xe));
      TDelegate<void___cdecl(TArray<UObject_*,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
      ::operator=((TDelegate<void___cdecl(TArray<UObject_*,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                   *)(puVar2 + 0x11),
                  (TDelegate<void___cdecl(TArray<UObject_*,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                   *)(puVar1 + 0x11));
      TScriptDelegate<FNotThreadSafeDelegateMode>::operator=
                ((TScriptDelegate<FNotThreadSafeDelegateMode> *)(puVar2 + 0x14),
                 (TScriptDelegate<FNotThreadSafeDelegateMode> *)(puVar1 + 0x14));
      TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)(puVar2 + 0x17),
                 (TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)(puVar1 + 0x17));
      TScriptDelegate<FNotThreadSafeDelegateMode>::operator=
                ((TScriptDelegate<FNotThreadSafeDelegateMode> *)(puVar2 + 0x1a),
                 (TScriptDelegate<FNotThreadSafeDelegateMode> *)(puVar1 + 0x1a));
      TDelegate<void___cdecl(TArray<UObject_*,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
      ::operator=((TDelegate<void___cdecl(TArray<UObject_*,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                   *)(puVar2 + 0x1d),
                  (TDelegate<void___cdecl(TArray<UObject_*,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                   *)(puVar1 + 0x1d));
      *(undefined1 *)(puVar2 + 0x20) = *(undefined1 *)(puVar1 + 0x20);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0x21;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPropertyData> @ 14e4cca30

void __cdecl UE::CoreUObject::Private::Construct<FPropertyData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FPropertyData> @ 14e4cca50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPropertyData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FPropertyData> @ 14e4cca70

void __cdecl UE::CoreUObject::Private::Destruct<FPropertyData>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FPropertyData> @ 14e4ccb90

bool __cdecl UE::CoreUObject::Private::Copy<FPropertyData>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  int *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=((FString *)this,pFVar1);
      *(undefined1 *)(this + 4) = *(undefined1 *)&pFVar1[1].Data.AllocatorInstance.Data;
      param_3 = param_3 + -1;
      this = this + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInterchangeGroup> @ 14e4ccdc0

void __cdecl UE::CoreUObject::Private::Construct<FInterchangeGroup>(void *param_1)

{
  memset(param_1,0,200);
  FInterchangeGroup::FInterchangeGroup(param_1);
  return;
}

// ConstructForTests<FInterchangeGroup> @ 14e4ccdf0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInterchangeGroup>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FGuid::NewGuid((FGuid *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined2 *)((longlong)param_1 + 0x70) = 1;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  return;
}

// Destruct<FInterchangeGroup> @ 14e4cce00

void __cdecl UE::CoreUObject::Private::Destruct<FInterchangeGroup>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeTranslatorAssetType,FInterchangeDialogOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeTranslatorAssetType,FInterchangeDialogOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)param_1 + 0x78));
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeTranslatorAssetType,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeTranslatorAssetType,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)param_1 + 0x20));
  return;
}

// Copy<FInterchangeGroup> @ 14e4ccea0

bool __cdecl
UE::CoreUObject::Private::Copy<FInterchangeGroup>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    pvVar2 = param_2;
    puVar3 = param_1;
    do {
      *puVar3 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x10);
      puVar3[1] = *(undefined8 *)((longlong)pvVar2 + 8);
      puVar3[2] = uVar1;
      puVar3[3] = *(undefined8 *)((longlong)pvVar2 + 0x18);
      TMap<enum_EInterchangeTranslatorAssetType,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeTranslatorAssetType,FName,0>_>
      ::operator=(puVar3 + 4,
                  (TMap<EInterchangeTranslatorAssetType,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeTranslatorAssetType,FName,0>_>
                   *)((longlong)pvVar2 + 0x20));
      *(undefined1 *)(puVar3 + 0xe) = *(undefined1 *)((longlong)pvVar2 + 0x70);
      *(undefined1 *)((longlong)puVar3 + 0x71) = *(undefined1 *)((longlong)pvVar2 + 0x71);
      if ((TSparseArray<TSparseSetElement<TTuple<EInterchangeTranslatorAssetType,FInterchangeDialogOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)(puVar3 + 0xf) !=
          (TSparseArray<TSparseSetElement<TTuple<EInterchangeTranslatorAssetType,FInterchangeDialogOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)((longlong)pvVar2 + 0x78)) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(puVar3 + 0x16),(int *)(puVar3 + 0x18),
                   (ForElementType<FSetElementId> *)((longlong)pvVar2 + 0xb0),
                   *(int *)((longlong)pvVar2 + 0xc0));
        TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeTranslatorAssetType,FInterchangeDialogOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<EInterchangeTranslatorAssetType,FInterchangeDialogOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)(puVar3 + 0xf),
                    (TSparseArray<TSparseSetElement<TTuple<EInterchangeTranslatorAssetType,FInterchangeDialogOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)((longlong)pvVar2 + 0x78));
      }
      param_3 = param_3 + -1;
      pvVar2 = (void *)((longlong)pvVar2 + 200);
      puVar3 = puVar3 + 0x19;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInterchangeContentImportSettings> @ 14e4ccfd0

void __cdecl UE::CoreUObject::Private::Construct<FInterchangeContentImportSettings>(void *param_1)

{
  memset(param_1,0,0x128);
  FInterchangeContentImportSettings::FInterchangeContentImportSettings(param_1);
  return;
}

// ConstructForTests<FInterchangeContentImportSettings> @ 14e4cd000

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FInterchangeContentImportSettings>(void *param_1)

{
  FInterchangeImportSettings::FInterchangeImportSettings(param_1);
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0;
  return;
}

// Destruct<FInterchangeContentImportSettings> @ 14e4cd010

void __cdecl UE::CoreUObject::Private::Destruct<FInterchangeContentImportSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x120) = 0;
  if (*(void **)((longlong)param_1 + 0x118) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x118));
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeTranslatorAssetType,FInterchangeDialogOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeTranslatorAssetType,FInterchangeDialogOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)param_1 + 0xd8));
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  if (*(void **)((longlong)param_1 + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 200));
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeTranslatorAssetType,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeTranslatorAssetType,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)param_1 + 0x88));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelineStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelineStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FInterchangeContentImportSettings> @ 14e4cd020

bool __cdecl
UE::CoreUObject::Private::Copy<FInterchangeContentImportSettings>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FInterchangeImportSettings::operator=(param_1,param_2);
    TMap<enum_EInterchangeTranslatorAssetType,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EInterchangeTranslatorAssetType,FName,0>_>
    ::operator=((FInterchangeImportSettings *)((longlong)param_1 + 0x88),
                (TMap<EInterchangeTranslatorAssetType,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EInterchangeTranslatorAssetType,FName,0>_>
                 *)((longlong)param_2 + 0x88));
    if (&((FInterchangeImportSettings *)((longlong)param_1 + 0x88))->DefaultPipelineStack !=
        &((FInterchangeImportSettings *)((longlong)param_2 + 0x88))->DefaultPipelineStack) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)((longlong)param_1 + 0x110),
                 (int *)&(((FInterchangeImportSettings *)((longlong)param_1 + 0x110))->
                         PipelineStacks).field_0x10,
                 (ForElementType<FSetElementId> *)((longlong)param_2 + 0x110),
                 *(int *)&(((FInterchangeImportSettings *)((longlong)param_2 + 0x110))->
                          PipelineStacks).field_0x10);
      TSparseArray<TSparseSetElement<TTuple<enum_EInterchangeTranslatorAssetType,FInterchangeDialogOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=(&((FInterchangeImportSettings *)((longlong)param_1 + 0x88))->DefaultPipelineStack,
                  (TSparseArray<TSparseSetElement<TTuple<EInterchangeTranslatorAssetType,FInterchangeDialogOverride>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&((FInterchangeImportSettings *)((longlong)param_2 + 0x88))->
                      DefaultPipelineStack);
    }
    param_1 = &(((FInterchangeImportSettings *)((longlong)param_1 + 0x110))->PipelineStacks).
               field_0x18;
    param_2 = &(((FInterchangeImportSettings *)((longlong)param_2 + 0x110))->PipelineStacks).
               field_0x18;
  }
  return true;
}

// Construct<FInterchangeSceneImportSettings> @ 14e4cd790

void __cdecl UE::CoreUObject::Private::Construct<FInterchangeSceneImportSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  FInterchangeImportSettings::FInterchangeImportSettings(param_1);
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  return;
}

// ConstructForTests<FInterchangeSceneImportSettings> @ 14e4cd7f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FInterchangeSceneImportSettings>(void *param_1)

{
  FInterchangeImportSettings::FInterchangeImportSettings(param_1);
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  return;
}

// Destruct<FInterchangeSceneImportSettings> @ 14e4cd820

void __cdecl UE::CoreUObject::Private::Destruct<FInterchangeSceneImportSettings>(void *param_1)

{
  DestructItems<FInterchangePerTranslatorDialogOverride,int>
            (*(FInterchangePerTranslatorDialogOverride **)((longlong)param_1 + 0x88),
             *(int *)((longlong)param_1 + 0x90));
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelineStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelineStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FInterchangeSceneImportSettings> @ 14e4cd890

bool __cdecl
UE::CoreUObject::Private::Copy<FInterchangeSceneImportSettings>
          (void *param_1,void *param_2,int param_3)

{
  FInterchangeImportSettings *pFVar1;
  FInterchangeImportSettings *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FInterchangeImportSettings *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FInterchangeImportSettings::operator=(this,pFVar1);
      TArray<FInterchangePerTranslatorDialogOverride,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FInterchangePerTranslatorDialogOverride,TSizedDefaultAllocator<32>_> *)
                 (this + 1),
                 (TArray<FInterchangePerTranslatorDialogOverride,TSizedDefaultAllocator<32>_> *)
                 (pFVar1 + 1));
      param_3 = param_3 + -1;
      this = (FInterchangeImportSettings *)&this[1].PipelineStacks.field_0x10;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInterchangeImportSettings> @ 14e4cdc80

void __cdecl UE::CoreUObject::Private::Construct<FInterchangeImportSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  FInterchangeImportSettings::FInterchangeImportSettings(param_1);
  return;
}

// ConstructForTests<FInterchangeImportSettings> @ 14e4cdcc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInterchangeImportSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x70))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x70),0);
  *(undefined2 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// Destruct<FInterchangeImportSettings> @ 14e4cdce0

void __cdecl UE::CoreUObject::Private::Destruct<FInterchangeImportSettings>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelineStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelineStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FInterchangeImportSettings> @ 14e4cdd70

bool __cdecl
UE::CoreUObject::Private::Copy<FInterchangeImportSettings>(void *param_1,void *param_2,int param_3)

{
  TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelineStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar1;
  TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelineStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelineStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      if (this != pTVar1) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(this + 1),(int *)&this[1].field_0x10,
                   (ForElementType<FSetElementId> *)(pTVar1 + 1),*(int *)&pTVar1[1].field_0x10);
        TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelineStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=(this,pTVar1);
      }
      *(undefined8 *)&this[1].field_0x18 = *(undefined8 *)&pTVar1[1].field_0x18;
      *(undefined8 *)&this[1].field_0x20 = *(undefined8 *)&pTVar1[1].field_0x20;
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)&this[1].field_0x28,(FSoftObjectPath *)&pTVar1[1].field_0x28);
      this[2].field_0x10 = pTVar1[2].field_0x10;
      this[2].field_0x11 = pTVar1[2].field_0x11;
      param_3 = param_3 + -1;
      this = (TSparseArray<TSparseSetElement<TTuple<FName,FInterchangePipelineStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this[2].field_0x18;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInterchangeDialogOverride> @ 14e4cdf40

void __cdecl UE::CoreUObject::Private::Construct<FInterchangeDialogOverride>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 2) = 0;
  *(undefined2 *)((longlong)param_1 + 6) = 0;
  *(undefined2 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FInterchangeDialogOverride> @ 14e4cdf60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInterchangeDialogOverride>(void *param_1)

{
  *(undefined2 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FInterchangeDialogOverride> @ 14e4cdf80

void __cdecl UE::CoreUObject::Private::Destruct<FInterchangeDialogOverride>(void *param_1)

{
  DestructItems<FInterchangePerTranslatorDialogOverride,int>
            (*(FInterchangePerTranslatorDialogOverride **)((longlong)param_1 + 8),
             *(int *)((longlong)param_1 + 0x10));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FInterchangeDialogOverride> @ 14e4cdfc0

bool __cdecl
UE::CoreUObject::Private::Copy<FInterchangeDialogOverride>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_1 + lVar1 + 1);
      TArray<FInterchangePerTranslatorDialogOverride,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FInterchangePerTranslatorDialogOverride,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + 8),
                 (TArray<FInterchangePerTranslatorDialogOverride,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + lVar1 + 8));
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInterchangeStackInfo> @ 14e4ce190

void __cdecl UE::CoreUObject::Private::Construct<FInterchangeStackInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FInterchangeStackInfo> @ 14e4ce1b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInterchangeStackInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FInterchangeStackInfo> @ 14e4ce1d0

void __cdecl UE::CoreUObject::Private::Destruct<FInterchangeStackInfo>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FInterchangeStackInfo> @ 14e4ce1f0

bool __cdecl
UE::CoreUObject::Private::Copy<FInterchangeStackInfo>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType *pFVar4;
  ForAnyElementType *pFVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + lVar6 + 8);
      pFVar5 = (ForAnyElementType *)((longlong)param_1 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      if (pFVar5 != pFVar4) {
        iVar2 = *(int *)((longlong)param_1 + lVar6 + 0x10);
        piVar1 = (int *)((longlong)param_1 + 0x14);
        pFVar3 = pFVar4->Data;
        *(int *)((longlong)param_1 + 0x10) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar2,*piVar1,pFVar5,iVar2,piVar1);
          ConstructItems<TObjectPtr<UInterchangePipelineBase>,TObjectPtr<UInterchangePipelineBase>,int>
                    (pFVar5->Data,(TObjectPtr<UInterchangePipelineBase> *)pFVar3,iVar2);
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInterchangePerTranslatorDialogOverride> @ 14e4ce330

void __cdecl
UE::CoreUObject::Private::Construct<FInterchangePerTranslatorDialogOverride>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined2 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// ConstructForTests<FInterchangePerTranslatorDialogOverride> @ 14e4ce370

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FInterchangePerTranslatorDialogOverride>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined2 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Destruct<FInterchangePerTranslatorDialogOverride> @ 14e4ce3b0

void __cdecl
UE::CoreUObject::Private::Destruct<FInterchangePerTranslatorDialogOverride>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FInterchangePerTranslatorDialogOverride> @ 14e4ce410

bool __cdecl
UE::CoreUObject::Private::Copy<FInterchangePerTranslatorDialogOverride>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)((longlong)param_1 + 8),
                 (FSoftObjectPath *)((longlong)param_1 + lVar1 + 8));
      *(undefined1 *)((longlong)param_1 + 0x28) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x28);
      *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x29);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UInterchangeFactoryBaseNode_*>_> @ 14e4d68e0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UInterchangeFactoryBaseNode_*>_>
          (ushort param_1,ForElementType<UInterchangeFactoryBaseNode_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UInterchangeFactoryBaseNode_*>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// operator() @ 14e4dd8e0

void __thiscall
`UE::Interchange::Private::ShouldReimportFactoryNode'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,UInterchangeFactoryBaseNode *param_2)

{
  int *piVar1;
  longlong lVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  UInterchangeFactoryBaseNode *local_res18 [2];
  
  local_res18[0] = param_2;
  lVar7 = (**(code **)(param_2->_padding_ + 0x2f8))(param_2);
  if ((lVar7 != 0) && (lVar2 = *(longlong *)this, lVar2 != 0)) {
    if ((*(int *)(lVar7 + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      if ((pFVar3->Data <= (FScriptContainerElement *)local_res18) &&
         ((FScriptContainerElement *)local_res18 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar6 + 1;
      *(UInterchangeFactoryBaseNode **)(pFVar3->Data + (longlong)iVar6 * 8) = local_res18[0];
    }
  }
  return;
}

// AnalyticsConvertMapToJsonFragment @ 14e4e2ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FJsonFragment * __cdecl
UE::Interchange::Private::AnalyticsConvertMapToJsonFragment
          (FJsonFragment *__return_storage_ptr__,
          TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *pTVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  FJsonFragment *pFVar10;
  size_t sVar11;
  undefined1 *puVar12;
  int iVar13;
  wchar_t *pwVar14;
  uint uVar15;
  code *pcVar16;
  uint uVar17;
  undefined8 *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 auStackY_258 [32];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  ForAnyElementType local_1e8;
  uint local_1e0;
  uint local_1dc;
  EJsonToken local_1d8;
  int local_1d4;
  void *local_1d0;
  int local_1c8;
  FString *local_1c0;
  undefined4 local_1b8 [2];
  undefined2 local_1b0 [4];
  undefined2 local_1a8 [4];
  undefined2 local_1a0 [4];
  undefined2 local_198 [4];
  undefined2 local_190 [4];
  undefined2 local_188 [4];
  undefined2 local_180 [4];
  FString local_178;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *local_168;
  int iStack_160;
  uint uStack_15c;
  undefined1 *local_158;
  undefined4 uStack_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  int local_138;
  int local_134;
  FJsonFragment *local_130;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  wchar_t *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  uint uStack_e0;
  undefined4 uStack_dc;
  wchar_t *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  TStringBuilderBase<wchar_t> local_98;
  wchar_t local_78 [32];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Data.ArrayNum = 0;
  local_178.Data.ArrayMax = 0;
  local_130 = __return_storage_ptr__;
  FAnalyticsJsonWriter::FAnalyticsJsonWriter((FAnalyticsJsonWriter *)local_1f8,&local_178);
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayStart
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8);
  iVar8 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_160 = 0;
  uStack_15c = 1;
  local_148 = 0;
  iStack_14c = iStack_160;
  if (iVar8 != 0) {
    puVar19 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar17 = *puVar19;
    local_148 = 0;
    iStack_160 = 0;
    while (uVar17 == 0) {
      lVar9 = (longlong)iStack_160;
      local_148 = local_148 + 0x20;
      iStack_160 = iStack_160 + 1;
      iStack_14c = iVar8;
      if ((int)((iVar8 + -1 >> 0x1f & 0x1fU) + iVar8 + -1) >> 5 < iStack_160) goto LAB_14e4e2d7d;
      uVar17 = puVar19[lVar9 + 1];
    }
    uStack_15c = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_15c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_138 = (int)lVar9;
    iStack_14c = local_138 + -1 + local_148;
    if (iVar8 < iStack_14c) {
      iStack_14c = iVar8;
    }
  }
LAB_14e4e2d7d:
  uVar17 = *(uint *)&param_1->field_0x28;
  uVar15 = uVar17 & 0xffffffe0;
  iStack_140 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_150 = 0xffffffff;
  TStack_120._padding_ = CONCAT44(uStack_15c,iStack_160);
  TStack_120.CurrentBitIndex = iStack_14c;
  TStack_120.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar17 >> 5;
  TStack_120._28_4_ = iStack_14c;
  TStack_120.BaseBitIndex = local_148;
  uStack_100 = CONCAT44(uStack_13c,iStack_140);
  local_168 = param_1;
  local_158 = puVar1;
  iStack_144 = iStack_14c;
  local_128 = param_1;
  TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar8 < (int)uVar17)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar16 = (code *)swi(3);
    pFVar10 = (FJsonFragment *)(*pcVar16)();
    return pFVar10;
  }
  uVar20 = *(uint *)&param_1->field_0x28;
  if (uVar17 != uVar20) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
    while (uVar17 == 0) {
      lVar9 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar17 = uVar20;
      if ((int)(((int)(uVar20 - 1) >> 0x1f & 0x1fU) + (uVar20 - 1)) >> 5 < iVar13)
      goto LAB_14e4e2e7c;
      uVar17 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_134 = (int)lVar9;
    uVar17 = local_134 + -1 + uVar15;
    if ((int)uVar20 < (int)uVar17) {
      uVar17 = uVar20;
    }
  }
LAB_14e4e2e7c:
  uVar15 = 0;
  do {
    pTVar4 = local_128;
    if (*(int *)&local_128->field_0x8 - *(int *)&local_128->field_0x34 != (int)uStack_100) {
      local_208[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_208);
    }
    uVar20 = 0;
    if (((TStack_120.CurrentBitIndex == uVar17) &&
        (TStack_120.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar4 == param_1)
       ) {
      TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
                ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_1f8);
      ::FString::Reset(local_1c0,(int)((ulonglong)(longlong)local_1c8 >> 1));
      pFVar10 = local_130;
      if (0 < local_1c8) {
        lVar9 = 0;
        do {
          uVar17 = 0;
          if ((int)uVar15 < local_1c8) {
            uVar17 = ~uVar15 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar16 = (code *)swi(3);
            pFVar10 = (FJsonFragment *)(*pcVar16)();
            return pFVar10;
          }
          ::FString::AppendChar(local_1c0,*(wchar_t *)((longlong)local_1d0 + lVar9));
          uVar15 = uVar15 + 2;
          lVar9 = lVar9 + 2;
        } while ((int)uVar15 < local_1c8);
      }
      (pFVar10->FragmentString).Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
      (pFVar10->FragmentString).Data.ArrayNum = local_178.Data.ArrayNum;
      (pFVar10->FragmentString).Data.ArrayMax = local_178.Data.ArrayMax;
      local_1f8._0_8_ = &___7__TJsonStringWriter_U__TCondensedJsonPrintPolicy__W____6B_;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.Data.ArrayNum = 0;
      local_178.Data.ArrayMax = 0;
      cVar6 = (**(code **)(*(longlong *)local_1f8._8_8_ + 0x210))();
      if ((cVar6 == '\0') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("this->Stream->Close()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                             ,0x2ef,L""), bVar5)) {
        pcVar16 = (code *)swi(3);
        pFVar10 = (FJsonFragment *)(*pcVar16)();
        return pFVar10;
      }
      if ((FArchive *)local_1f8._8_8_ != (FArchive *)0x0) {
        (*(code *)**(undefined8 **)local_1f8._8_8_)(local_1f8._8_8_,1);
      }
      if (local_1d0 != (void *)0x0) {
        FMemory::Free(local_1d0);
      }
      local_1f8._0_8_ = &___7__TJsonWriter__WU__TCondensedJsonPrintPolicy__W____6B_;
      if (local_1e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data);
      }
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      return pFVar10;
    }
    puVar18 = (undefined8 *)((longlong)TStack_120.CurrentBitIndex * 0x20 + *(longlong *)pTVar4);
    if ((int)local_1e0 < 1) {
LAB_14e4e2f68:
      if (local_1d8 < (Identifier|Comma)) goto LAB_14e4e2f6d;
LAB_14e4e2f72:
      local_1b0[0] = 0x2c;
      (**(code **)(*(longlong *)local_1f8._8_8_ + 0x188))(local_1f8._8_8_,local_1b0,2);
      local_1d8 = Comma;
    }
    else {
      uVar7 = uVar20;
      if ((int)(local_1e0 - 1) < (int)local_1e0) {
        uVar7 = ~(local_1e0 - 1) >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar16 = (code *)swi(3);
        pFVar10 = (FJsonFragment *)(*pcVar16)();
        return pFVar10;
      }
      if (*(int *)(local_1e8.Data + (longlong)(int)(local_1e0 - 1) * 4) == 5) goto LAB_14e4e2f68;
      if (local_1d8 != Identifier) {
        if ((local_1d8 != Colon) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CanWriteObjectWithoutIdentifier()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                               ,0x6f,L""), bVar5)) {
          pcVar16 = (code *)swi(3);
          pFVar10 = (FJsonFragment *)(*pcVar16)();
          return pFVar10;
        }
        goto LAB_14e4e2f68;
      }
LAB_14e4e2f6d:
      if ((0x1017U >> (local_1d8 & 0x1f) & 1) == 0) goto LAB_14e4e2f72;
    }
    local_1a8[0] = 0x7b;
    (**(code **)(*(longlong *)local_1f8._8_8_ + 0x188))(local_1f8._8_8_,local_1a8,2);
    local_1d4 = local_1d4 + 1;
    local_1b8[0] = 6;
    if (((local_1e8.Data <= (FScriptContainerElement *)local_1b8) &&
        ((FScriptContainerElement *)local_1b8 < local_1e8.Data + (longlong)(int)local_1dc * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar16 = (code *)swi(3);
      pFVar10 = (FJsonFragment *)(*pcVar16)();
      return pFVar10;
    }
    if (local_1e0 == local_1dc) {
      local_1e0 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_1e8,(int *)&local_1dc);
    }
    iVar8 = local_1e0 + 1;
    *(undefined4 *)(local_1e8.Data + (longlong)(int)local_1e0 * 4) = local_1b8[0];
    local_1d8 = CurlyOpen;
    uVar7 = uVar20;
    if ((int)local_1e0 < iVar8) {
      uVar7 = ~local_1e0 >> 0x1f;
    }
    local_1e0 = iVar8;
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar16 = (code *)swi(3);
      pFVar10 = (FJsonFragment *)(*pcVar16)();
      return pFVar10;
    }
    if ((*(int *)(local_1e8.Data + (longlong)(int)(local_1e0 + -1) * 4) != 6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L""), bVar5)) {
      pcVar16 = (code *)swi(3);
      pFVar10 = (FJsonFragment *)(*pcVar16)();
      return pFVar10;
    }
    if ((Identifier < local_1d8) || ((0x1017U >> (local_1d8 & 0x1f) & 1) == 0)) {
      local_1a0[0] = 0x2c;
      (**(code **)(*(longlong *)local_1f8._8_8_ + 0x188))(local_1f8._8_8_,local_1a0,2);
      local_1d8 = Comma;
    }
    uStack_f0 = 10;
    local_f8 = L"MessageKey";
    local_c8 = 0x52ec3ab0;
    uStack_c4 = 1;
    uStack_c0 = 10;
    uStack_bc = uStack_ec;
    (**(code **)(local_1f8._0_8_ + 0x28))(local_1f8,&local_c8);
    local_198[0] = 0x3a;
    (**(code **)(*(longlong *)local_1f8._8_8_ + 0x188))(local_1f8._8_8_,local_198,2);
    local_1d8 = Identifier;
    uVar3 = *puVar18;
    iVar8 = *(int *)(puVar18 + 1);
    uStack_e0 = iVar8 - 1;
    if (iVar8 == 0) {
      uStack_e0 = uVar20;
    }
    local_e8._0_4_ = (undefined4)uVar3;
    local_e8._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_b8 = (undefined4)local_e8;
    uStack_b4 = local_e8._4_4_;
    uStack_ac = uStack_dc;
    local_e8 = uVar3;
    uStack_b0 = uStack_e0;
    (**(code **)(local_1f8._0_8_ + 0x28))(local_1f8,&local_b8);
    local_1d8 = String;
    uVar7 = uVar20;
    if ((int)(local_1e0 - 1) < (int)local_1e0) {
      uVar7 = ~(local_1e0 - 1) >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar16 = (code *)swi(3);
      pFVar10 = (FJsonFragment *)(*pcVar16)();
      return pFVar10;
    }
    if ((*(int *)(local_1e8.Data + (longlong)(int)(local_1e0 + -1) * 4) != 6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x110,L""), bVar5)) {
      pcVar16 = (code *)swi(3);
      pFVar10 = (FJsonFragment *)(*pcVar16)();
      return pFVar10;
    }
    if ((Identifier < local_1d8) || ((0x1017U >> (local_1d8 & 0x1f) & 1) == 0)) {
      local_190[0] = 0x2c;
      (**(code **)(*(longlong *)local_1f8._8_8_ + 0x188))(local_1f8._8_8_,local_190,2);
      local_1d8 = Comma;
    }
    uStack_d0 = 0xc;
    local_d8 = L"MessageCount";
    local_a8 = 0x52ec3ac8;
    uStack_a4 = 1;
    uStack_a0 = 0xc;
    uStack_9c = uStack_cc;
    (**(code **)(local_1f8._0_8_ + 0x28))(local_1f8,&local_a8);
    local_188[0] = 0x3a;
    (**(code **)(*(longlong *)local_1f8._8_8_ + 0x188))(local_1f8._8_8_,local_188,2);
    local_98.Base = local_78;
    local_1d8 = Identifier;
    local_98.CurPos = local_78;
    local_98.bIsDynamic = false;
    local_98.bIsExternal = false;
    local_98.End = (wchar_t *)local_38;
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_98,L"%lld");
    pwVar14 = local_98.Base;
    uVar3 = local_1f8._8_8_;
    uVar7 = (uint)((longlong)local_98.CurPos - (longlong)local_98.Base >> 1);
    if (local_98.Base == (wchar_t *)0x0) {
      pwVar14 = (wchar_t *)0x0;
      pcVar16 = *(code **)(*(longlong *)local_1f8._8_8_ + 0x188);
    }
    else {
      uVar20 = uVar7;
      if ((0 < (int)uVar7) && (local_98.Base[(longlong)(int)uVar7 + -1] == L'\0')) {
        uVar20 = uVar7 - 1;
      }
      pcVar16 = *(code **)(*(longlong *)local_1f8._8_8_ + 0x188);
      if (uVar20 == 0xffffffff) {
        sVar11 = wcslen(local_98.Base);
        uVar20 = (uint)sVar11;
      }
    }
    (*pcVar16)(uVar3,pwVar14,(longlong)(int)uVar20 * 2);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_98);
    local_1d8 = Number;
    uVar20 = 0;
    if ((int)(local_1e0 - 1) < (int)local_1e0) {
      uVar20 = ~(local_1e0 - 1) >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar16 = (code *)swi(3);
      pFVar10 = (FJsonFragment *)(*pcVar16)();
      return pFVar10;
    }
    if ((*(int *)(local_1e8.Data + (longlong)(int)(local_1e0 + -1) * 4) != 6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Stack.Top() == EJson::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                           ,0x8e,L""), bVar5)) {
      pcVar16 = (code *)swi(3);
      pFVar10 = (FJsonFragment *)(*pcVar16)();
      return pFVar10;
    }
    local_1d4 = local_1d4 + -1;
    local_180[0] = 0x7d;
    (**(code **)(*(longlong *)local_1f8._8_8_ + 0x188))(local_1f8._8_8_,local_180,2);
    if (((int)local_1e0 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar16 = (code *)swi(3);
      pFVar10 = (FJsonFragment *)(*pcVar16)();
      return pFVar10;
    }
    iVar8 = ~(local_1e0 - 1) + local_1e0;
    if (iVar8 != 0) {
      memmove(local_1e8.Data + (longlong)(int)(local_1e0 - 1) * 4,
              local_1e8.Data + (longlong)(int)(local_1e0 - 1) * 4 + 4,(longlong)iVar8 << 2);
    }
    local_1e0 = local_1e0 - 1;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&local_1e8,local_1e0,(int *)&local_1dc);
    local_1d8 = CurlyClose;
    TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
  } while( true );
}

// AnalyticsPrimarySourceDataMetadataToJsonFragment @ 14e4e36a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FJsonFragment * __cdecl
UE::Interchange::Private::AnalyticsPrimarySourceDataMetadataToJsonFragment
          (FJsonFragment *__return_storage_ptr__,UInterchangeSourceData *param_1,
          UInterchangeSourceNode *param_2)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  FString *pFVar8;
  TTuple<FString,FString> *pTVar9;
  FJsonFragment *pFVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStackY_2f8 [32];
  undefined1 local_2b8 [16];
  ForAnyElementType local_2a8;
  int local_2a0;
  EJsonToken local_298;
  void *local_290;
  int local_288;
  FString *local_280;
  undefined2 local_278 [4];
  undefined2 local_270 [4];
  undefined2 local_268 [4];
  undefined2 local_260 [4];
  undefined2 local_258 [4];
  undefined2 local_250 [4];
  undefined2 local_248 [4];
  undefined2 local_240 [4];
  ForAnyElementType local_238;
  undefined8 local_230;
  ForAnyElementType local_228;
  undefined8 local_220;
  ForAnyElementType local_218;
  undefined8 local_210;
  ForAnyElementType local_208;
  int local_200;
  int local_1fc;
  ForAnyElementType local_1f8;
  int local_1f0;
  int local_1ec;
  ForAnyElementType local_1e8;
  int local_1e0;
  int local_1dc;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  undefined8 local_1a8;
  uint uStack_1a0;
  undefined4 uStack_19c;
  wchar_t *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  uint uStack_180;
  undefined4 uStack_17c;
  wchar_t *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  uint uStack_160;
  undefined4 uStack_15c;
  wchar_t *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  uint uStack_140;
  undefined4 uStack_13c;
  wchar_t *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  FString local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  uVar15 = 0;
  local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Data.ArrayNum = 0;
  local_1d8.Data.ArrayMax = 0;
  FAnalyticsJsonWriter::FAnalyticsJsonWriter((FAnalyticsJsonWriter *)local_2b8,&local_1d8);
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  UInterchangeSourceNode::GetExtraInformation
            (param_2,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)local_98);
  ::FString::FString(&local_1b8,L"N/A");
  FVar4.Data = local_1b8.Data.AllocatorInstance.Data;
  local_238.Data = (FScriptContainerElement *)0x0;
  iVar12 = local_1b8.Data.ArrayNum;
  local_230 = CONCAT44(local_230._4_4_,iVar12);
  if (iVar12 == 0) {
    local_230 = local_1b8.Data._8_8_ & 0xffffffff;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar12,0,&local_238,iVar12,(int *)((longlong)&local_230 + 4));
    memcpy(local_238.Data,FVar4.Data,(longlong)iVar12 * 2);
  }
  pFVar8 = FSourceNodeExtraInfoStaticData::GetApplicationVendorExtraInfoKey();
  pTVar9 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)local_98,pFVar8);
  if (pTVar9 == (TTuple<FString,FString> *)0x0) {
    local_1e8.Data = local_238.Data;
    local_1e0 = (int)local_230;
    local_1dc = local_230._4_4_;
    local_230 = 0;
    local_238.Data = (FScriptContainerElement *)0x0;
  }
  else {
    local_1e8.Data = (FScriptContainerElement *)0x0;
    local_1e0 = *(int *)&pTVar9->field_0x18;
    lVar14 = (longlong)local_1e0;
    pvVar1 = *(void **)&pTVar9->field_0x10;
    if (local_1e0 == 0) {
      local_1dc = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1e0,0,&local_1e8,local_1e0,&local_1dc);
      memcpy(local_1e8.Data,pvVar1,lVar14 * 2);
    }
    if (local_238.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data);
    }
  }
  FVar4.Data = local_1b8.Data.AllocatorInstance.Data;
  local_228.Data = (FScriptContainerElement *)0x0;
  iVar12 = local_1b8.Data.ArrayNum;
  local_220 = CONCAT44(local_220._4_4_,iVar12);
  if (iVar12 == 0) {
    local_220 = local_1b8.Data._8_8_ & 0xffffffff;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar12,0,&local_228,iVar12,(int *)((longlong)&local_220 + 4));
    memcpy(local_228.Data,FVar4.Data,(longlong)iVar12 * 2);
  }
  pFVar8 = FSourceNodeExtraInfoStaticData::GetApplicationNameExtraInfoKey();
  pTVar9 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)local_98,pFVar8);
  if (pTVar9 == (TTuple<FString,FString> *)0x0) {
    local_1f8.Data = local_228.Data;
    local_1f0 = (int)local_220;
    local_1ec = local_220._4_4_;
    local_220 = 0;
    local_228.Data = (FScriptContainerElement *)0x0;
  }
  else {
    local_1f8.Data = (FScriptContainerElement *)0x0;
    local_1f0 = *(int *)&pTVar9->field_0x18;
    lVar14 = (longlong)local_1f0;
    pvVar1 = *(void **)&pTVar9->field_0x10;
    if (local_1f0 == 0) {
      local_1ec = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1f0,0,&local_1f8,local_1f0,&local_1ec);
      memcpy(local_1f8.Data,pvVar1,lVar14 * 2);
    }
    if (local_228.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data);
    }
  }
  FVar4.Data = local_1b8.Data.AllocatorInstance.Data;
  local_218.Data = (FScriptContainerElement *)0x0;
  iVar12 = local_1b8.Data.ArrayNum;
  local_210 = CONCAT44(local_210._4_4_,iVar12);
  if (iVar12 == 0) {
    local_210 = local_1b8.Data._8_8_ & 0xffffffff;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar12,0,&local_218,iVar12,(int *)((longlong)&local_210 + 4));
    memcpy(local_218.Data,FVar4.Data,(longlong)iVar12 * 2);
  }
  pFVar8 = FSourceNodeExtraInfoStaticData::GetApplicationVersionExtraInfoKey();
  pTVar9 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)local_98,pFVar8);
  if (pTVar9 == (TTuple<FString,FString> *)0x0) {
    local_208.Data = local_218.Data;
    local_200 = (int)local_210;
    local_1fc = local_210._4_4_;
    local_210 = 0;
    local_218.Data = (FScriptContainerElement *)0x0;
  }
  else {
    local_208.Data = (FScriptContainerElement *)0x0;
    local_200 = *(int *)&pTVar9->field_0x18;
    lVar14 = (longlong)local_200;
    pvVar1 = *(void **)&pTVar9->field_0x10;
    if (local_200 == 0) {
      local_1fc = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_200,0,&local_208,local_200,&local_1fc);
      memcpy(local_208.Data,pvVar1,lVar14 * 2);
    }
    if (local_218.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data);
    }
  }
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectStart
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_2b8);
  local_1c8.Data.ArrayNum = (param_1->Filename).Data.ArrayNum;
  lVar14 = (longlong)local_1c8.Data.ArrayNum;
  pFVar2 = (param_1->Filename).Data.AllocatorInstance.Data;
  local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_1c8.Data.ArrayNum == 0) {
    local_1c8.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1c8.Data.ArrayNum,0,(ForAnyElementType *)&local_1c8,local_1c8.Data.ArrayNum
               ,&local_1c8.Data.ArrayMax);
    memcpy(local_1c8.Data.AllocatorInstance.Data,pFVar2,lVar14 * 2);
  }
  pFVar8 = FPaths::GetExtension(&local_118,&local_1c8,false);
  uVar11 = 0;
  if ((int)(local_2a0 - 1U) < local_2a0) {
    uVar11 = ~(local_2a0 - 1U) >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FJsonFragment *)(*pcVar3)();
    return pFVar10;
  }
  if ((*(int *)(local_2a8.Data + (longlong)(local_2a0 + -1) * 4) != 6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FJsonFragment *)(*pcVar3)();
    return pFVar10;
  }
  if ((Identifier < local_298) || ((0x1017U >> (local_298 & 0x1f) & 1) == 0)) {
    local_278[0] = 0x2c;
    (**(code **)(*(longlong *)local_2b8._8_8_ + 0x188))(local_2b8._8_8_,local_278,2);
    local_298 = Comma;
  }
  uStack_130 = 0xf;
  local_138 = L"SourceExtension";
  local_a8 = 0x52ec3ae8;
  uStack_a4 = 1;
  uStack_a0 = 0xf;
  uStack_9c = uStack_12c;
  (**(code **)(local_2b8._0_8_ + 0x28))(local_2b8,&local_a8);
  local_270[0] = 0x3a;
  (**(code **)(*(longlong *)local_2b8._8_8_ + 0x188))(local_2b8._8_8_,local_270,2);
  local_298 = Identifier;
  pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
  iVar12 = (pFVar8->Data).ArrayNum;
  uVar11 = 0;
  uStack_1a0 = iVar12 - 1;
  if (iVar12 == 0) {
    uStack_1a0 = uVar11;
  }
  local_1a8._0_4_ = SUB84(pFVar2,0);
  local_1a8._4_4_ = (undefined4)((ulonglong)pFVar2 >> 0x20);
  local_128 = (undefined4)local_1a8;
  uStack_124 = local_1a8._4_4_;
  uStack_11c = uStack_19c;
  local_1a8 = pFVar2;
  uStack_120 = uStack_1a0;
  (**(code **)(local_2b8._0_8_ + 0x28))(local_2b8,&local_128);
  local_298 = String;
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  uVar7 = uVar11;
  if ((int)(local_2a0 - 1U) < local_2a0) {
    uVar7 = ~(local_2a0 - 1U) >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FJsonFragment *)(*pcVar3)();
    return pFVar10;
  }
  if ((*(int *)(local_2a8.Data + (longlong)(local_2a0 + -1) * 4) != 6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FJsonFragment *)(*pcVar3)();
    return pFVar10;
  }
  if ((Identifier < local_298) || ((0x1017U >> (local_298 & 0x1f) & 1) == 0)) {
    local_268[0] = 0x2c;
    (**(code **)(*(longlong *)local_2b8._8_8_ + 0x188))(local_2b8._8_8_,local_268,2);
    local_298 = Comma;
  }
  uStack_190 = 0x11;
  local_198 = L"ApplicationVendor";
  local_108 = 0x52ec3b08;
  uStack_104 = 1;
  uStack_100 = 0x11;
  uStack_fc = uStack_18c;
  (**(code **)(local_2b8._0_8_ + 0x28))(local_2b8,&local_108);
  local_260[0] = 0x3a;
  (**(code **)(*(longlong *)local_2b8._8_8_ + 0x188))(local_2b8._8_8_,local_260,2);
  local_188 = local_1e8.Data;
  pFVar2 = local_188;
  local_298 = Identifier;
  uStack_180 = local_1e0 - 1;
  if (local_1e0 == 0) {
    uStack_180 = uVar11;
  }
  local_188._0_4_ = SUB84(local_1e8.Data,0);
  local_188._4_4_ = (undefined4)((ulonglong)local_1e8.Data >> 0x20);
  local_f8 = (undefined4)local_188;
  uStack_f4 = local_188._4_4_;
  uStack_ec = uStack_17c;
  local_188 = pFVar2;
  uStack_f0 = uStack_180;
  (**(code **)(local_2b8._0_8_ + 0x28))(local_2b8,&local_f8);
  local_298 = String;
  if ((int)(local_2a0 - 1U) < local_2a0) {
    uVar11 = ~(local_2a0 - 1U) >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FJsonFragment *)(*pcVar3)();
    return pFVar10;
  }
  if ((*(int *)(local_2a8.Data + (longlong)(local_2a0 + -1) * 4) != 6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FJsonFragment *)(*pcVar3)();
    return pFVar10;
  }
  if ((Identifier < local_298) || ((0x1017U >> (local_298 & 0x1f) & 1) == 0)) {
    local_258[0] = 0x2c;
    (**(code **)(*(longlong *)local_2b8._8_8_ + 0x188))(local_2b8._8_8_,local_258,2);
    local_298 = Comma;
  }
  uStack_170 = 0xf;
  local_178 = L"ApplicationName";
  local_e8 = 0x52ec3b30;
  uStack_e4 = 1;
  uStack_e0 = 0xf;
  uStack_dc = uStack_16c;
  (**(code **)(local_2b8._0_8_ + 0x28))(local_2b8,&local_e8);
  local_250[0] = 0x3a;
  (**(code **)(*(longlong *)local_2b8._8_8_ + 0x188))(local_2b8._8_8_,local_250,2);
  local_168 = local_1f8.Data;
  pFVar2 = local_168;
  local_298 = Identifier;
  uVar11 = 0;
  uStack_160 = local_1f0 - 1;
  if (local_1f0 == 0) {
    uStack_160 = uVar11;
  }
  local_168._0_4_ = SUB84(local_1f8.Data,0);
  local_168._4_4_ = (undefined4)((ulonglong)local_1f8.Data >> 0x20);
  local_d8 = (undefined4)local_168;
  uStack_d4 = local_168._4_4_;
  uStack_cc = uStack_15c;
  local_168 = pFVar2;
  uStack_d0 = uStack_160;
  (**(code **)(local_2b8._0_8_ + 0x28))(local_2b8,&local_d8);
  local_298 = String;
  uVar7 = uVar11;
  if ((int)(local_2a0 - 1U) < local_2a0) {
    uVar7 = ~(local_2a0 - 1U) >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FJsonFragment *)(*pcVar3)();
    return pFVar10;
  }
  if ((*(int *)(local_2a8.Data + (longlong)(local_2a0 + -1) * 4) != 6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Stack.Top() == EJson::Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x110,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FJsonFragment *)(*pcVar3)();
    return pFVar10;
  }
  if ((Identifier < local_298) || ((0x1017U >> (local_298 & 0x1f) & 1) == 0)) {
    local_248[0] = 0x2c;
    (**(code **)(*(longlong *)local_2b8._8_8_ + 0x188))(local_2b8._8_8_,local_248,2);
    local_298 = Comma;
  }
  uStack_150 = 0x12;
  local_158 = L"ApplicationVersion";
  local_c8 = 0x52ec3b50;
  uStack_c4 = 1;
  uStack_c0 = 0x12;
  uStack_bc = uStack_14c;
  (**(code **)(local_2b8._0_8_ + 0x28))(local_2b8,&local_c8);
  local_240[0] = 0x3a;
  (**(code **)(*(longlong *)local_2b8._8_8_ + 0x188))(local_2b8._8_8_,local_240,2);
  local_148 = local_208.Data;
  pFVar2 = local_148;
  local_298 = Identifier;
  uStack_140 = local_200 - 1;
  if (local_200 == 0) {
    uStack_140 = uVar11;
  }
  local_148._0_4_ = SUB84(local_208.Data,0);
  local_148._4_4_ = (undefined4)((ulonglong)local_208.Data >> 0x20);
  local_b8 = (undefined4)local_148;
  uStack_b4 = local_148._4_4_;
  uStack_ac = uStack_13c;
  local_148 = pFVar2;
  uStack_b0 = uStack_140;
  (**(code **)(local_2b8._0_8_ + 0x28))(local_2b8,&local_b8);
  local_298 = String;
  TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>::WriteObjectEnd
            ((TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)local_2b8);
  ::FString::Reset(local_280,(int)((ulonglong)(longlong)local_288 >> 1));
  uVar16 = uVar15;
  if (0 < local_288) {
    do {
      uVar13 = (uint)uVar15;
      uVar7 = uVar11;
      if ((int)uVar13 < local_288) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FJsonFragment *)(*pcVar3)();
        return pFVar10;
      }
      ::FString::AppendChar(local_280,*(wchar_t *)((longlong)local_290 + uVar16));
      uVar15 = (ulonglong)(uVar13 + 2);
      uVar16 = uVar16 + 2;
    } while ((int)(uVar13 + 2) < local_288);
  }
  (__return_storage_ptr__->FragmentString).Data.AllocatorInstance.Data =
       local_1d8.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->FragmentString).Data.ArrayNum = local_1d8.Data.ArrayNum;
  (__return_storage_ptr__->FragmentString).Data.ArrayMax = local_1d8.Data.ArrayMax;
  local_1d8.Data.ArrayNum = 0;
  local_1d8.Data.ArrayMax = 0;
  local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_208.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data);
  }
  if (local_1f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data);
  }
  if (local_1e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data);
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar12 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar12 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
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
  local_2b8._0_8_ = &___7__TJsonStringWriter_U__TCondensedJsonPrintPolicy__W____6B_;
  cVar6 = (**(code **)(*(longlong *)local_2b8._8_8_ + 0x210))();
  if ((cVar6 == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("this->Stream->Close()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Public\\Serialization\\JsonWriter.h"
                         ,0x2ef,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar10 = (FJsonFragment *)(*pcVar3)();
    return pFVar10;
  }
  if ((FArchive *)local_2b8._8_8_ != (FArchive *)0x0) {
    (*(code *)**(undefined8 **)local_2b8._8_8_)(local_2b8._8_8_,1);
  }
  if (local_290 != (void *)0x0) {
    FMemory::Free(local_290);
  }
  local_2b8._0_8_ = &___7__TJsonWriter__WU__TCondensedJsonPrintPolicy__W____6B_;
  if (local_2a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data);
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// BeginSetupAssetData @ 14e4e4a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeAssetImportData * __cdecl
UE::Interchange::Private::ImportCommon::BeginSetupAssetData
          (FUpdateImportAssetDataParameters *param_1)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UInterchangeAssetImportData *pUVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStackY_d8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId28,
               "UE::Interchange::Private::ImportCommon::BeginSetupAssetData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeImportCommon.cpp"
               ,0x1c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId28);
  }
  bVar4 = IsInGameThread();
  if (bVar4) {
    if ((param_1->SourceData != (UInterchangeSourceData *)0x0) &&
       (param_1->AssetImportDataOuter != (UObject *)0x0)) {
      pUVar6 = (UInterchangeAssetImportData *)param_1->AssetImportData;
      if (pUVar6 != (UInterchangeAssetImportData *)0x0) {
        pUVar5 = UInterchangeAssetImportData::StaticClass();
        iVar1 = (int)pUVar5->_padding_;
        if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar5->_padding_)) goto LAB_14e4e4c32;
      }
      pUVar2 = param_1->AssetImportDataOuter;
      FObjectInitializer::AssertIfInConstructor
                (pUVar2,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar5 = UInterchangeAssetImportData::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar5);
      local_98._48_8_ = (FObjectInstancingGraph *)0x0;
      local_98._56_8_ = (UPackage *)0x0;
      local_98._16_4_ = 0;
      local_98._20_4_ = 0;
      local_98._24_4_ = RF_NoFlags;
      local_98._40_8_ = (UObject *)0x0;
      local_98[0x20] = false;
      local_98._8_8_ = pUVar2;
      pUVar6 = (UInterchangeAssetImportData *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar7 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if ((pUVar6 == (UInterchangeAssetImportData *)0x0) &&
         (bVar4 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_554463325677682643>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeImportCommon.cpp"
                             ,0x2d,"AssetImportData"), bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar6 = (UInterchangeAssetImportData *)(*pcVar3)();
        return pUVar6;
      }
      goto LAB_14e4e4c32;
    }
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_554463325677682655>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeImportCommon.cpp"
                       ,0x21,"Parameters.SourceData && Parameters.AssetImportDataOuter");
    if (bVar4) goto code_r0x00014e4e4c2f;
  }
  else {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_554463325677682659>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeImportCommon.cpp"
                       ,0x1d,"IsInGameThread()");
    if (bVar4) {
code_r0x00014e4e4c2f:
      pcVar3 = (code *)swi(3);
      pUVar6 = (UInterchangeAssetImportData *)(*pcVar3)();
      return pUVar6;
    }
  }
  pUVar6 = (UInterchangeAssetImportData *)0x0;
LAB_14e4e4c32:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pUVar6;
}

// CanExecuteResetPhaseForNode @ 14e4e5250

bool __cdecl
UE::Interchange::InterchangeReset::Private::CanExecuteResetPhaseForNode
          (FInterchangeResetParameters *param_1,UInterchangeFactoryBaseNode *param_2,
          TDelegate<bool___cdecl(FInterchangeResetParameters_&,UInterchangeFactoryBaseNode_const_*),FDefaultDelegateUserPolicy>
          *param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  ForElementType<FSetElementId> FVar8;
  FReadAccessScope local_38;
  
  if (param_2 == (UInterchangeFactoryBaseNode *)0x0) {
    return false;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_38);
  if (((*(int *)&param_3->field_0x10 == 0) || (*(longlong **)&param_3->field_0x8 == (longlong *)0x0)
      ) || (cVar4 = (**(code **)(**(longlong **)&param_3->field_0x8 + 0x38))(), cVar4 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  if (bVar3) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_38);
    if (*(int *)&param_3->field_0x10 == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)&param_3->field_0x8;
    }
    cVar4 = (**(code **)(*plVar7 + 0x60))(plVar7,param_1,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    if (cVar4 == '\0') {
      return false;
    }
  }
  else {
    iVar5 = *(int *)&(param_1->FilteredNodes).Elements.field_0x34;
    iVar1 = *(int *)&(param_1->FilteredNodes).Elements.field_0x8;
    if (iVar1 != iVar5) {
      uVar6 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
              -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      if (iVar1 == iVar5) {
        return false;
      }
      FVar8 = (param_1->FilteredNodes).Hash.SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&(param_1->FilteredNodes).Hash;
      }
      iVar5 = *(int *)((longlong)FVar8 +
                      (ulonglong)((param_1->FilteredNodes).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6))
                      * 4);
      if (iVar5 == -1) {
        return false;
      }
      lVar2 = *(longlong *)&(param_1->FilteredNodes).Elements;
      do {
        if (*(UInterchangeFactoryBaseNode **)(lVar2 + (longlong)iVar5 * 0x10) == param_2) {
          return true;
        }
        iVar5 = *(int *)(lVar2 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
      return false;
    }
  }
  return true;
}

// CanImportClass @ 14e4e53c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
UE::Interchange::Private::CanImportClass
          (FImportAsyncHelper *param_1,UInterchangeFactoryBaseNode *param_2,int param_3,bool param_4
          )

{
  char cVar1;
  longlong lVar2;
  undefined4 in_register_00000084;
  void *local_18 [2];
  
  if ((param_1->bRuntimeOrPIE != false) &&
     (cVar1 = (**(code **)(param_2->_padding_ + 0x308))
                        (param_2,param_2,CONCAT44(in_register_00000084,param_3)), cVar1 == '\0')) {
    if ((param_4) && (1 < (byte)LogInterchangeEngine._0_1_)) {
      (**(code **)(param_2->_padding_ + 0x2b0))(param_2,local_18);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeEngine);
      if (local_18[0] != (void *)0x0) {
        FMemory::Free(local_18[0]);
      }
    }
    return false;
  }
  lVar2 = (**(code **)(param_2->_padding_ + 0x2f8))(param_2);
  return lVar2 != 0;
}

// CreateTasksFromData @ 14e4e79e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ulong64 __cdecl
UE::InterchangeTaskParsing::Private::CreateTasksFromData
          (FTaskData *param_1,TSharedPtr<UE::Interchange::FImportAsyncHelper,1> *param_2,
          TMap<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo,0>_>
          *param_3,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_4)

{
  int *piVar1;
  FImportAsyncHelper *pFVar2;
  UInterchangeTranslatorBase *this;
  ForElementType<UInterchangeFactoryBaseNode_*> FVar3;
  UInterchangeFactoryBaseNode *pUVar4;
  UInterchangeResultsContainer *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  FTaskImportObject_GameThread *pFVar7;
  FTaskImportObject_Async *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FTaskImportObjectFinalize_GameThread *pFVar10;
  code *pcVar11;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  ForAnyElementType _Src;
  FTaskData *pFVar12;
  bool bVar13;
  char cVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  ulong64 uVar21;
  UClass *pUVar22;
  UPackage *pUVar23;
  UInterchangeResultWarning_Generic *pUVar24;
  FText *pFVar25;
  TIntrusiveReferenceController<UE::Interchange::FTaskCreateSceneObjects_GameThread,1> *pTVar26;
  FInterchangeTaskSystem *pFVar27;
  undefined8 *puVar28;
  FTaskParsingRenameInfo *pFVar29;
  FString *pFVar30;
  FAttributeKey *pFVar31;
  UInterchangeFactoryBase *pUVar32;
  ulonglong uVar33;
  TSharedRef<UE::Interchange::FTaskImportObject_GameThread,1> *pTVar34;
  TSharedRef<UE::Interchange::FTaskImportObject_Async,1> *pTVar35;
  TSharedRef<UE::Interchange::FTaskImportObjectFinalize_GameThread,1> *pTVar36;
  ForElementType<UInterchangeFactoryBaseNode_*> FVar37;
  wchar_t *pwVar38;
  ulonglong uVar39;
  longlong lVar40;
  FScriptContainerElement *pFVar41;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar42;
  TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> *pTVar43;
  int iVar44;
  FTaskData *pFVar45;
  TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> *pTVar46;
  FInterchangeTaskBase *pFVar47;
  bool bVar48;
  undefined1 auStackY_348 [32];
  uint local_2f4;
  undefined1 local_2f0;
  undefined1 local_2ef [7];
  UInterchangeFactoryBaseNode *local_2e8;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_2e0;
  FString local_2d0;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_2c0;
  FString local_2b0;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_2a0;
  ulong64 local_290;
  FLLMScope local_288;
  FLLMScope local_284;
  ulong64 local_280;
  TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> *local_278;
  undefined8 local_270;
  ulong64 local_268;
  ulong64 local_260;
  ulong64 local_258;
  FTaskData *local_250;
  TMap<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo,0>_>
  *local_248;
  UClass *local_240;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_238;
  TReferenceControllerBase<1> *local_230;
  FString local_228;
  FString local_218;
  FString local_208;
  undefined8 local_1f8;
  undefined8 local_1f0;
  FString local_1e8;
  undefined8 local_1d8;
  FString local_1d0;
  UInterchangeFactoryBaseNode *local_1c0;
  longlong *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  FMemScope local_198;
  FMemScope local_190;
  FString *local_188;
  undefined1 local_180 [8];
  TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> local_178;
  FString local_168;
  TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> local_158;
  TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> local_148;
  TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> local_138;
  TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> local_128;
  FText local_118;
  void *local_108 [2];
  FString local_f8;
  FString local_e8;
  FString local_d8;
  TSharedRef<UE::Interchange::FTaskImportObject_GameThread,1> local_c8;
  TSharedRef<UE::Interchange::FTaskImportObject_Async,1> local_b8;
  TSharedRef<UE::Interchange::FTaskImportObjectFinalize_GameThread,1> local_a8;
  FString local_98;
  TStringView<wchar_t> local_88;
  FScriptContainerElement *local_78;
  uint local_70;
  undefined8 local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_250 = param_1;
  local_248 = param_3;
  local_238 = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name130,L"Interchange");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_284,LLMScope_Name130,false,None,Default,true);
  FMemScope::FMemScope(&local_198,&LLMScope_Name130,true);
  bVar48 = -1 < CpuChannel->Enabled;
  if (bVar48) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId131,"CreateTasksFromData::CreateTasksFromData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskParsing.cpp"
               ,0x83);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId131);
  }
  if ((param_1->Nodes).ArrayNum != 1) {
    bVar13 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<261293646941257864>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskParsing.cpp"
                        ,0x88,"InTaskData.Nodes.Num() == 1");
    if (bVar13) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    if ((param_2->Object == (FImportAsyncHelper *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    pFVar2 = param_2->Object;
    uVar21 = 0;
    pFVar45 = (FTaskData *)(pFVar2->Translators).AllocatorInstance.Data;
    iVar16 = (pFVar2->Translators).ArrayNum;
    local_250 = (FTaskData *)
                ((longlong)&(((FTaskData *)(&pFVar45->Nodes + -3))->UniqueID).Data.AllocatorInstance
                + (longlong)iVar16 * 8);
    while( true ) {
      pFVar12 = local_250;
      if ((pFVar2->Translators).ArrayNum != iVar16) {
        local_2f0 = 0;
        `TCheckedPointerIterator<TObjectPtr<UInterchangeTranslatorBase>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_2f0);
      }
      if (pFVar45 == pFVar12) break;
      this = (UInterchangeTranslatorBase *)(pFVar45->UniqueID).Data.AllocatorInstance.Data;
      if (GC::GIsIncrementalReachabilityPending == false) {
        if (this != (UInterchangeTranslatorBase *)0x0) goto LAB_14e4e7bd9;
      }
      else if (this != (UInterchangeTranslatorBase *)0x0) {
        GC::MarkAsReachable((UObject *)this);
LAB_14e4e7bd9:
        if ((param_2->Object == (FImportAsyncHelper *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          uVar21 = (*pcVar11)();
          return uVar21;
        }
        if (param_2->Object->bCancel == (atomic<bool>)0x0) {
          local_1f8 = 0;
          pUVar22 = Z_Construct_UClass_UInterchangeResultWarning_Generic_NoRegister();
          pUVar23 = GetTransientPackage();
          pUVar24 = NewObject<UInterchangeResultWarning_Generic>
                              ((UObject *)pUVar23,pUVar22,(FName)0x0,RF_NoFlags,(UObject *)0x0,false
                               ,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
          pFVar25 = FText::AsLocalizable_Advanced_LocText
                              (&local_118,L"InterchangeTaskParsing",
                               L"TranslatorNoAssetImported_MultipleNodes",
                               L"Found multiple nodes in an asset task.");
          FText::operator=(&pUVar24->Text,pFVar25);
          if (local_118.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
          }
          UInterchangeTranslatorBase::AddMessage(this,(UInterchangeResult *)pUVar24);
        }
      }
      pFVar45 = (FTaskData *)&(pFVar45->UniqueID).Data.ArrayNum;
    }
    goto LAB_14e4e91b5;
  }
  local_2f4 = param_1->SourceIndex;
  pUVar22 = param_1->FactoryClass;
  FVar3 = (param_1->Nodes).AllocatorInstance.SecondaryData;
  FVar37 = (ForElementType<UInterchangeFactoryBaseNode_*>)&param_1->Nodes;
  if (FVar3 != (ForElementType<UInterchangeFactoryBaseNode_*>)0x0) {
    FVar37 = FVar3;
  }
  pUVar4 = *(UInterchangeFactoryBaseNode **)FVar37;
  local_2e8 = pUVar4;
  local_240 = pUVar22;
  if (param_1->bIsSceneNode != false) {
    if ((param_2->Object == (FImportAsyncHelper *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    pFVar2 = param_2->Object;
    pTVar26 = ::operator_new(0xb0);
    if (pTVar26 ==
        (TIntrusiveReferenceController<UE::Interchange::FTaskCreateSceneObjects_GameThread,1> *)0x0)
    {
      pTVar26 = (TIntrusiveReferenceController<UE::Interchange::FTaskCreateSceneObjects_GameThread,1>
                 *)0x0;
      pFVar47 = (FInterchangeTaskBase *)&DAT_00000010;
    }
    else {
      pTVar26 = SharedPointerInternals::
                TIntrusiveReferenceController<UE::Interchange::FTaskCreateSceneObjects_GameThread,1>
                ::
                TIntrusiveReferenceController<UE::Interchange::FTaskCreateSceneObjects_GameThread,1><FString_&,int_const_&,TSharedPtr<UE::Interchange::FImportAsyncHelper,1>_const_&,TArray<UInterchangeFactoryBaseNode_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_&,UClass_const_*_const_&>
                          (pTVar26,&pFVar2->ContentBasePath,(int *)&local_2f4,param_2,
                           &param_1->Nodes,&local_240);
      pFVar47 = (FInterchangeTaskBase *)&pTVar26->ObjectStorage;
      if ((pFVar47 == (FInterchangeTaskBase *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar13)) {
        pcVar11 = (code *)swi(3);
        uVar21 = (*pcVar11)();
        return uVar21;
      }
      if (pTVar26 !=
          (TIntrusiveReferenceController<UE::Interchange::FTaskCreateSceneObjects_GameThread,1> *)
          0x0) {
        LOCK();
        *(int *)&pTVar26->_padding_ = (int)pTVar26->_padding_ + 1;
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar26);
    if ((param_2->Object == (FImportAsyncHelper *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    pFVar2 = param_2->Object;
    pTVar42 = &pFVar2->SceneTasks;
    pFVar27 = Interchange::FInterchangeTaskSystem::Get();
    if (pTVar26 !=
        (TIntrusiveReferenceController<UE::Interchange::FTaskCreateSceneObjects_GameThread,1> *)0x0)
    {
      LOCK();
      *(int *)&pTVar26->_padding_ = (int)pTVar26->_padding_ + 1;
      UNLOCK();
    }
    local_178.Object = pFVar47;
    local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar26;
    local_290 = Interchange::FInterchangeTaskSystem::AddTask
                          (pFVar27,&local_178,&param_1->Prerequisites);
    pFVar41 = (pTVar42->AllocatorInstance).Data;
    if (((pFVar41 <= (FScriptContainerElement *)&local_290) &&
        ((FScriptContainerElement *)&local_290 <
         pFVar41 + (longlong)(pFVar2->SceneTasks).ArrayMax * 8)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    iVar16 = (pFVar2->SceneTasks).ArrayNum;
    piVar1 = &(pFVar2->SceneTasks).ArrayMax;
    if (iVar16 == *piVar1) {
      iVar16 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar42->AllocatorInstance,piVar1);
    }
    uVar21 = local_290;
    (pFVar2->SceneTasks).ArrayNum = iVar16 + 1;
    *(ulong64 *)((pTVar42->AllocatorInstance).Data + (longlong)iVar16 * 8) = local_290;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar26);
    goto LAB_14e4e91b5;
  }
  uVar21 = 0;
  iVar16 = 0;
  local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.Data.ArrayNum = 0;
  local_218.Data.ArrayMax = 0;
  UInterchangeFactoryBaseNode::GetCustomSubPath(pUVar4,&local_218);
  puVar28 = (undefined8 *)(**(code **)(pUVar4->_padding_ + 0x2d8))(pUVar4,local_108);
  if ((param_2->Object == (FImportAsyncHelper *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    uVar21 = (*pcVar11)();
    return uVar21;
  }
  local_88.DataPtr = (wchar_t *)(param_2->Object->ContentBasePath).Data.AllocatorInstance.Data;
  iVar18 = (param_2->Object->ContentBasePath).Data.ArrayNum;
  local_88.Size = iVar18 + -1;
  if (iVar18 == 0) {
    local_88.Size = iVar16;
  }
  local_78 = local_218.Data.AllocatorInstance.Data;
  local_68 = *puVar28;
  uVar19 = 0;
  local_70 = local_218.Data.ArrayNum - 1;
  if (local_218.Data.ArrayNum == 0) {
    local_70 = uVar19;
  }
  local_60 = *(int *)(puVar28 + 1) - 1;
  if (*(int *)(puVar28 + 1) == 0) {
    local_60 = uVar19;
  }
  FPaths::CombineInternal(&local_2b0,&local_88,3);
  if (local_108[0] != (void *)0x0) {
    FMemory::Free(local_108[0]);
  }
  bVar13 = UInterchangeBaseNode::IsEnabled((UInterchangeBaseNode *)local_2e8);
  _Src.Data = local_2b0.Data.AllocatorInstance.Data;
  iVar18 = local_2b0.Data.ArrayNum;
  if (bVar13) {
    local_2d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d0.Data.ArrayNum = local_2b0.Data.ArrayNum;
    uVar33 = uVar21;
    if (local_2b0.Data.ArrayNum == 0) {
      local_2d0.Data.ArrayMax = 0;
      uVar39 = local_2b0.Data._8_8_;
      this_00 = local_238;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_2b0.Data.ArrayNum,0,(ForAnyElementType *)&local_2d0,
                 local_2b0.Data.ArrayNum,&local_2d0.Data.ArrayMax);
      memcpy(local_2d0.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar18 * 2);
      uVar39 = (ulonglong)(uint)local_2d0.Data.ArrayNum;
      this_00 = local_238;
    }
    while( true ) {
      if ((int)uVar39 == 0) {
        pwVar38 = L"";
        iVar18 = iVar16;
      }
      else {
        pwVar38 = (wchar_t *)local_2d0.Data.AllocatorInstance.Data;
        iVar18 = (int)uVar39 + -1;
      }
      uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,pwVar38);
      iVar18 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
               FindIndexByHash<FString>(this_00,uVar17,&local_2d0);
      iVar44 = (int)uVar33;
      if (iVar18 == -1) break;
      uVar17 = iVar44 + 1;
      local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_208.Data.ArrayNum = 0;
      local_208.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_208,uVar17);
      ::FString::ConcatFF(&local_228,&local_2b0,&local_208);
      if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
      }
      local_2d0.Data.AllocatorInstance.Data = local_228.Data.AllocatorInstance.Data;
      local_2d0.Data.ArrayNum = local_228.Data.ArrayNum;
      uVar39 = local_228.Data._8_8_ & 0xffffffff;
      local_2d0.Data.ArrayMax = local_228.Data.ArrayMax;
      local_228.Data.ArrayNum = 0;
      local_228.Data.ArrayMax = 0;
      local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar33 = (ulonglong)uVar17;
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
        uVar39 = (ulonglong)(uint)local_2d0.Data.ArrayNum;
      }
    }
    if (iVar44 != 0) {
      if (local_2b0.Data.ArrayNum == 0) {
        pwVar38 = L"";
        iVar18 = iVar16;
      }
      else {
        pwVar38 = (wchar_t *)local_2b0.Data.AllocatorInstance.Data;
        iVar18 = local_2b0.Data.ArrayNum - 1;
      }
      uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,pwVar38);
      pFVar29 = TMapBase<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo,0>_>
                ::FindOrAddImpl<FString_const_&>
                          ((TMapBase<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo,0>_>
                            *)local_248,uVar17,&local_2b0);
      pUVar4 = local_2e8;
      pFVar29->FactoryNode = local_2e8;
      iVar18 = local_2b0.Data.ArrayNum - 1;
      if (local_2b0.Data.ArrayNum == 0) {
        iVar18 = iVar16;
      }
      ::FString::AssignRange
                (&pFVar29->OriginalName,(wchar_t *)local_2b0.Data.AllocatorInstance.Data,iVar18);
      iVar18 = local_2d0.Data.ArrayNum - 1;
      if (local_2d0.Data.ArrayNum == 0) {
        iVar18 = iVar16;
      }
      ::FString::AssignRange
                (&pFVar29->NewName,(wchar_t *)local_2d0.Data.AllocatorInstance.Data,iVar18);
      pFVar29->SourceIndex = local_2f4;
      local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.Data.ArrayNum = 0;
      local_1e8.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_1e8,iVar44);
      pFVar30 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)pUVar4,&local_f8);
      ::FString::ConcatFF(&local_168,pFVar30,&local_1e8);
      UInterchangeBaseNode::SetDisplayLabel((UInterchangeBaseNode *)pUVar4,&local_168);
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      pUVar4 = local_2e8;
      pcVar11 = *(code **)(local_2e8->_padding_ + 0x2c0);
      pFVar31 = Interchange::FBaseNodeStaticData::AssetNameKey();
      cVar14 = (*pcVar11)(pUVar4,pFVar31);
      if (cVar14 != '\0') {
        pcVar11 = *(code **)(pUVar4->_padding_ + 0x2e0);
        pFVar30 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)pUVar4,&local_e8);
        (*pcVar11)(pUVar4,pFVar30);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
      }
      iVar18 = local_2d0.Data.ArrayNum - 1;
      if (local_2d0.Data.ArrayNum == 0) {
        iVar18 = 0;
      }
      ::FString::AssignRange(&local_2b0,(wchar_t *)local_2d0.Data.AllocatorInstance.Data,iVar18);
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
    }
    if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
    }
  }
  bVar13 = UInterchangeBaseNode::IsEnabled((UInterchangeBaseNode *)local_2e8);
  if (bVar13) {
    if (local_2b0.Data.ArrayNum == 0) {
      pwVar38 = L"";
    }
    else {
      iVar16 = local_2b0.Data.ArrayNum - 1;
      pwVar38 = (wchar_t *)local_2b0.Data.AllocatorInstance.Data;
    }
    uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,pwVar38);
    iVar16 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                       (local_238,uVar17,&local_2b0);
    if (iVar16 == -1) goto LAB_14e4e8271;
    local_188 = &local_2b0;
    bVar13 = `UE::InterchangeTaskParsing::Private::CreateTasksFromData'::__l29::<lambda_1>::
             operator()(&local_188);
    if (bVar13) goto LAB_14e4e8271;
  }
  else {
LAB_14e4e8271:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      ::FName::FName(&LLMScope_Name213,L"Interchange");
      _Init_thread_footer(&::_TSS2);
    }
    FLLMScope::FLLMScope(&local_288,LLMScope_Name213,false,None,Default,true);
    FMemScope::FMemScope(&local_190,&LLMScope_Name213,true);
    local_1f0 = 0;
    pUVar23 = GetTransientPackage();
    pUVar32 = NewObject<UInterchangeFactoryBase>
                        ((UObject *)pUVar23,pUVar22,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                         (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if ((param_2->Object == (FImportAsyncHelper *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    pUVar5 = (((param_2->Object->AssetImportResult).Object)->Results).field0_0x0.DebugPtr;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UInterchangeResultsContainer *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar5);
    }
    (pUVar32->Results).field0_0x0.DebugPtr = pUVar5;
    if ((param_2->Object == (FImportAsyncHelper *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    pFVar2 = param_2->Object;
    pFVar30 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)local_2e8,&local_98);
    Interchange::FImportAsyncHelper::AddCreatedFactory(pFVar2,pFVar30,pUVar32);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    local_2e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d0.Data.ArrayNum = 0;
    local_1d0.Data.ArrayMax = 0;
    local_2e0.ArrayNum = 0;
    local_2e0.ArrayMax = 0;
    local_278 = (TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> *)0x0;
    local_270 = 0;
    local_1d8 = 0;
    local_1c0 = (UInterchangeFactoryBaseNode *)0x0;
    local_1b8 = (longlong *)0x0;
    uStack_1b0 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    pFVar30 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)local_2e8,&local_d8);
    if (&local_1d0 != pFVar30) {
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      local_1d0.Data.AllocatorInstance.Data = (pFVar30->Data).AllocatorInstance.Data;
      (pFVar30->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d0.Data.ArrayNum = (pFVar30->Data).ArrayNum;
      local_1d0.Data.ArrayMax = (pFVar30->Data).ArrayMax;
      (pFVar30->Data).ArrayNum = 0;
      (pFVar30->Data).ArrayMax = 0;
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    local_1c0 = local_2e8;
    if ((param_2->Object == (FImportAsyncHelper *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    lVar40 = (longlong)(int)local_2f4;
    pFVar2 = param_2->Object;
    uVar17 = uVar19;
    if ((int)local_2f4 < (pFVar2->BaseNodeContainers).ArrayNum) {
      uVar17 = ~local_2f4 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    local_1a8 = *(undefined8 *)((pFVar2->BaseNodeContainers).AllocatorInstance.Data + lVar40 * 8);
    if ((param_2->Object == (FImportAsyncHelper *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    lVar40 = (longlong)(int)local_2f4;
    pFVar2 = param_2->Object;
    uVar17 = uVar19;
    if ((int)local_2f4 < (pFVar2->SourceDatas).ArrayNum) {
      uVar17 = ~local_2f4 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    uStack_1b0 = *(undefined8 *)((pFVar2->SourceDatas).AllocatorInstance.Data + lVar40 * 8);
    if ((param_2->Object == (FImportAsyncHelper *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    lVar40 = (longlong)(int)local_2f4;
    pFVar2 = param_2->Object;
    if ((int)local_2f4 < (pFVar2->Translators).ArrayNum) {
      uVar19 = ~local_2f4 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    local_1b8 = *(longlong **)((pFVar2->Translators).AllocatorInstance.Data + lVar40 * 8);
    if ((param_2->Object == (FImportAsyncHelper *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    bVar13 = param_2->Object->bRunSynchronous == false;
    if ((local_1b8 == (longlong *)0x0) ||
       (cVar14 = (**(code **)(*local_1b8 + 0x2b8))(), cVar14 == '\0')) {
      bVar13 = false;
    }
    if ((param_2->Object == (FImportAsyncHelper *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    if ((param_2->Object->bRuntimeOrPIE == false) ||
       (cVar14 = (**(code **)(local_2e8->_padding_ + 0x308))(local_2e8), cVar14 != '\0')) {
      (**(code **)(pUVar32->_padding_ + 0x2c8))(pUVar32,&local_1d8,bVar13,&local_278);
    }
    uVar33 = (ulonglong)(int)local_270;
    local_248 = (TMap<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::InterchangeTaskParsing::Private::FTaskParsingRenameInfo,0>_>
                 *)CONCAT44(local_248._4_4_,(int)local_270);
    uVar19 = 0;
    if ((int)local_270 == 0) {
      if (&local_2e0 != &local_250->Prerequisites) {
        iVar16 = (local_250->Prerequisites).ArrayNum;
        pFVar41 = (local_250->Prerequisites).AllocatorInstance.Data;
        local_2e0.ArrayNum = iVar16;
        if (((iVar16 != 0) || (local_2e0.ArrayMax != 0)) &&
           (Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar16,local_2e0.ArrayMax,&local_2e0.AllocatorInstance,iVar16,
                       &local_2e0.ArrayMax), iVar16 != 0)) {
          memcpy(local_2e0.AllocatorInstance.Data,pFVar41,(longlong)iVar16 << 3);
        }
      }
    }
    else {
      pTVar43 = local_278 + uVar33;
      pTVar46 = local_278;
      while( true ) {
        if ((int)local_270 != (int)uVar33) {
          local_2ef[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_2ef);
        }
        if (pTVar46 == pTVar43) break;
        pTVar6 = (pTVar46->SharedReferenceCount).ReferenceController;
        pFVar47 = pTVar46->Object;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((param_2->Object == (FImportAsyncHelper *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          uVar21 = (*pcVar11)();
          return uVar21;
        }
        pFVar2 = param_2->Object;
        pTVar42 = &pFVar2->ImportObjectQueryPayloadsTasks;
        pFVar27 = Interchange::FInterchangeTaskSystem::Get();
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_158.Object = pFVar47;
        local_158.SharedReferenceCount.ReferenceController = pTVar6;
        local_268 = Interchange::FInterchangeTaskSystem::AddTask
                              (pFVar27,&local_158,&local_250->Prerequisites);
        pFVar41 = (pTVar42->AllocatorInstance).Data;
        if (((pFVar41 <= (FScriptContainerElement *)&local_268) &&
            ((FScriptContainerElement *)&local_268 <
             pFVar41 + (longlong)(pFVar2->ImportObjectQueryPayloadsTasks).ArrayMax * 8)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          uVar21 = (*pcVar11)();
          return uVar21;
        }
        uVar17 = (pFVar2->ImportObjectQueryPayloadsTasks).ArrayNum;
        piVar1 = &(pFVar2->ImportObjectQueryPayloadsTasks).ArrayMax;
        if (uVar17 == *piVar1) {
          uVar17 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar42->AllocatorInstance,piVar1);
        }
        pFVar41 = (pTVar42->AllocatorInstance).Data;
        (pFVar2->ImportObjectQueryPayloadsTasks).ArrayNum = uVar17 + 1;
        local_230 = (TReferenceControllerBase<1> *)((longlong)(int)uVar17 * 8);
        *(ulong64 *)(pFVar41 + (longlong)&local_230->_padding_) = local_268;
        if ((param_2->Object == (FImportAsyncHelper *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          uVar21 = (*pcVar11)();
          return uVar21;
        }
        pFVar2 = param_2->Object;
        uVar20 = uVar19;
        if ((int)uVar17 < (pFVar2->ImportObjectQueryPayloadsTasks).ArrayNum) {
          uVar20 = ~uVar17 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          uVar21 = (*pcVar11)();
          return uVar21;
        }
        pFVar41 = (FScriptContainerElement *)
                  ((longlong)&local_230->_padding_ +
                  (longlong)(pFVar2->ImportObjectQueryPayloadsTasks).AllocatorInstance.Data);
        if (((local_2e0.AllocatorInstance.Data <= pFVar41) &&
            (pFVar41 < local_2e0.AllocatorInstance.Data + (longlong)local_2e0.ArrayMax * 8)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          uVar21 = (*pcVar11)();
          return uVar21;
        }
        iVar16 = local_2e0.ArrayNum;
        if (local_2e0.ArrayNum == local_2e0.ArrayMax) {
          iVar16 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_2e0.AllocatorInstance,&local_2e0.ArrayMax);
        }
        local_2e0.ArrayNum = iVar16 + 1;
        *(undefined8 *)(local_2e0.AllocatorInstance.Data + (longlong)iVar16 * 8) =
             *(undefined8 *)pFVar41;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        uVar33 = (ulonglong)local_248 & 0xffffffff;
        pTVar46 = pTVar46 + 1;
      }
    }
    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
    }
    DestructItems<TSharedPtr<UE::Interchange::FInterchangeTaskBase,1>,int>(local_278,(int)local_270)
    ;
    if (local_278 != (TSharedPtr<UE::Interchange::FInterchangeTaskBase,1> *)0x0) {
      FMemory::Free(local_278);
    }
    local_2a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2a0.ArrayNum = 0;
    local_2a0.ArrayMax = 0;
    if ((param_2->Object == (FImportAsyncHelper *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    pTVar34 = MakeShared<UE::Interchange::FTaskImportObject_GameThread,1,FString_&,int_const_&,TSharedPtr<UE::Interchange::FImportAsyncHelper,1>_const_&,UInterchangeFactoryBaseNode_*_&,UClass_const_*_const_&>
                        (&local_c8,&param_2->Object->ContentBasePath,(int *)&local_2f4,param_2,
                         &local_2e8,&local_240);
    pTVar6 = (pTVar34->SharedReferenceCount).ReferenceController;
    pFVar7 = pTVar34->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_230 = pTVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    if ((param_2->Object == (FImportAsyncHelper *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    pFVar2 = param_2->Object;
    pTVar42 = &pFVar2->BeginImportObjectTasks;
    pFVar27 = Interchange::FInterchangeTaskSystem::Get();
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_148.Object = (FInterchangeTaskBase *)pFVar7;
    local_148.SharedReferenceCount.ReferenceController = pTVar6;
    local_260 = Interchange::FInterchangeTaskSystem::AddTask(pFVar27,&local_148,&local_2e0);
    pFVar41 = (pTVar42->AllocatorInstance).Data;
    if (((pFVar41 <= (FScriptContainerElement *)&local_260) &&
        ((FScriptContainerElement *)&local_260 <
         pFVar41 + (longlong)(pFVar2->BeginImportObjectTasks).ArrayMax * 8)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    uVar17 = (pFVar2->BeginImportObjectTasks).ArrayNum;
    piVar1 = &(pFVar2->BeginImportObjectTasks).ArrayMax;
    if (uVar17 == *piVar1) {
      uVar17 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar42->AllocatorInstance,piVar1);
    }
    pFVar41 = (pTVar42->AllocatorInstance).Data;
    (pFVar2->BeginImportObjectTasks).ArrayNum = uVar17 + 1;
    *(ulong64 *)(pFVar41 + (longlong)(int)uVar17 * 8) = local_260;
    if ((param_2->Object == (FImportAsyncHelper *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    pFVar2 = param_2->Object;
    uVar20 = uVar19;
    if ((int)uVar17 < (pFVar2->BeginImportObjectTasks).ArrayNum) {
      uVar20 = ~uVar17 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    pFVar41 = (pFVar2->BeginImportObjectTasks).AllocatorInstance.Data + (longlong)(int)uVar17 * 8;
    if (((local_2a0.AllocatorInstance.Data <= pFVar41) &&
        (pFVar41 < local_2a0.AllocatorInstance.Data + (longlong)local_2a0.ArrayMax * 8)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    iVar16 = local_2a0.ArrayNum;
    if (local_2a0.ArrayNum == local_2a0.ArrayMax) {
      iVar16 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_2a0.AllocatorInstance,&local_2a0.ArrayMax);
    }
    local_2a0.ArrayNum = iVar16 + 1;
    *(undefined8 *)(local_2a0.AllocatorInstance.Data + (longlong)iVar16 * 8) =
         *(undefined8 *)pFVar41;
    if ((param_2->Object == (FImportAsyncHelper *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    pTVar35 = MakeShared<UE::Interchange::FTaskImportObject_Async,1,FString_&,int_const_&,TSharedPtr<UE::Interchange::FImportAsyncHelper,1>_const_&,UInterchangeFactoryBaseNode_*_&>
                        (&local_b8,&param_2->Object->ContentBasePath,(int *)&local_2f4,param_2,
                         &local_2e8);
    pTVar6 = (pTVar35->SharedReferenceCount).ReferenceController;
    pFVar8 = pTVar35->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
    if ((param_2->Object == (FImportAsyncHelper *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    pFVar2 = param_2->Object;
    pTVar42 = &pFVar2->ImportObjectTasks;
    pFVar27 = Interchange::FInterchangeTaskSystem::Get();
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_128.Object = (FInterchangeTaskBase *)pFVar8;
    local_128.SharedReferenceCount.ReferenceController = pTVar6;
    local_280 = Interchange::FInterchangeTaskSystem::AddTask(pFVar27,&local_128,&local_2a0);
    pFVar41 = (pTVar42->AllocatorInstance).Data;
    if (((pFVar41 <= (FScriptContainerElement *)&local_280) &&
        ((FScriptContainerElement *)&local_280 <
         pFVar41 + (longlong)(pFVar2->ImportObjectTasks).ArrayMax * 8)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    uVar17 = (pFVar2->ImportObjectTasks).ArrayNum;
    piVar1 = &(pFVar2->ImportObjectTasks).ArrayMax;
    if (uVar17 == *piVar1) {
      uVar17 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar42->AllocatorInstance,piVar1);
    }
    pFVar41 = (pTVar42->AllocatorInstance).Data;
    (pFVar2->ImportObjectTasks).ArrayNum = uVar17 + 1;
    *(ulong64 *)(pFVar41 + (longlong)(int)uVar17 * 8) = local_280;
    local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c0.ArrayNum = 0;
    local_2c0.ArrayMax = 0;
    if ((param_2->Object == (FImportAsyncHelper *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    pFVar2 = param_2->Object;
    uVar20 = uVar19;
    if ((int)uVar17 < (pFVar2->ImportObjectTasks).ArrayNum) {
      uVar20 = ~uVar17 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    pFVar41 = (pFVar2->ImportObjectTasks).AllocatorInstance.Data + (longlong)(int)uVar17 * 8;
    if (((local_2c0.AllocatorInstance.Data <= pFVar41) &&
        (pFVar41 < local_2c0.AllocatorInstance.Data + (longlong)local_2c0.ArrayMax * 8)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    if (local_2c0.ArrayNum == local_2c0.ArrayMax) {
      local_2c0.ArrayNum =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_2c0.AllocatorInstance,&local_2c0.ArrayMax);
    }
    lVar40 = (longlong)local_2c0.ArrayNum;
    local_2c0.ArrayNum = local_2c0.ArrayNum + 1;
    *(undefined8 *)(local_2c0.AllocatorInstance.Data + lVar40 * 8) = *(undefined8 *)pFVar41;
    if ((param_2->Object == (FImportAsyncHelper *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    pTVar36 = MakeShared<UE::Interchange::FTaskImportObjectFinalize_GameThread,1,FString_&,int_const_&,TSharedPtr<UE::Interchange::FImportAsyncHelper,1>_const_&,UInterchangeFactoryBaseNode_*_&>
                        (&local_a8,&param_2->Object->ContentBasePath,(int *)&local_2f4,param_2,
                         &local_2e8);
    pTVar9 = (pTVar36->SharedReferenceCount).ReferenceController;
    pFVar10 = pTVar36->Object;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    if ((param_2->Object == (FImportAsyncHelper *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    pFVar2 = param_2->Object;
    pTVar42 = &pFVar2->FinalizeImportObjectTasks;
    pFVar27 = Interchange::FInterchangeTaskSystem::Get();
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_138.Object = (FInterchangeTaskBase *)pFVar10;
    local_138.SharedReferenceCount.ReferenceController = pTVar9;
    local_258 = Interchange::FInterchangeTaskSystem::AddTask(pFVar27,&local_138,&local_2c0);
    pFVar41 = (pTVar42->AllocatorInstance).Data;
    if (((pFVar41 <= (FScriptContainerElement *)&local_258) &&
        ((FScriptContainerElement *)&local_258 <
         pFVar41 + (longlong)(pFVar2->FinalizeImportObjectTasks).ArrayMax * 8)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    uVar17 = (pFVar2->FinalizeImportObjectTasks).ArrayNum;
    piVar1 = &(pFVar2->FinalizeImportObjectTasks).ArrayMax;
    if (uVar17 == *piVar1) {
      uVar17 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar42->AllocatorInstance,piVar1);
    }
    pFVar41 = (pTVar42->AllocatorInstance).Data;
    (pFVar2->FinalizeImportObjectTasks).ArrayNum = uVar17 + 1;
    *(ulong64 *)(pFVar41 + (longlong)(int)uVar17 * 8) = local_258;
    bVar13 = UInterchangeBaseNode::IsEnabled((UInterchangeBaseNode *)local_2e8);
    if (bVar13) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (local_238,(FString *)local_180,(bool *)&local_2b0);
    }
    if ((param_2->Object == (FImportAsyncHelper *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    pFVar2 = param_2->Object;
    if ((int)uVar17 < (pFVar2->FinalizeImportObjectTasks).ArrayNum) {
      uVar19 = ~uVar17 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar11 = (code *)swi(3);
      uVar21 = (*pcVar11)();
      return uVar21;
    }
    uVar21 = *(ulong64 *)
              ((pFVar2->FinalizeImportObjectTasks).AllocatorInstance.Data +
              (longlong)(int)uVar17 * 8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    if (local_2c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_230);
    if (local_2a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.AllocatorInstance.Data);
    }
    if (local_2e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e0.AllocatorInstance.Data);
    }
    FMemScope::~FMemScope(&local_190);
    FLLMScope::~FLLMScope(&local_288);
  }
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
LAB_14e4e91b5:
  if (bVar48) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FMemScope::~FMemScope(&local_198);
  FLLMScope::~FLLMScope(&local_284);
  return uVar21;
}

// DeletePathAssets @ 14e4e9890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UE::Interchange::Private::DeletePathAssets(FString *param_1)

{
  FName FVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  FName *pFVar8;
  FModuleManager *this;
  IModuleInterface *pIVar9;
  longlong *plVar10;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar11;
  UObjectBase *this_00;
  UPackage *this_01;
  FUObjectItem *this_02;
  ForElementType<int> _Dst;
  wchar_t *pwVar12;
  ForElementType<int> *pFVar13;
  longlong lVar14;
  ForElementType<int> _Src;
  FAssetData *pFVar15;
  undefined1 auStackY_1b8 [32];
  undefined1 local_178 [8];
  FAssetData *local_170;
  undefined8 local_168;
  undefined1 local_160 [24];
  undefined8 uStack_148;
  void *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  ForElementType<FSetElementId> local_128;
  ulonglong local_118;
  FName local_110;
  FName local_108;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_100;
  FAssetData local_b0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pFVar8 = ::FName::FName(&local_110,"AssetRegistry");
  FVar1 = *pFVar8;
  this = FModuleManager::Get();
  pIVar9 = FModuleManager::LoadModuleChecked(this,FVar1);
  local_170 = (FAssetData *)0x0;
  local_168 = 0;
  plVar10 = (longlong *)(**(code **)((longlong)*pIVar9 + 0x40))(pIVar9);
  pcVar2 = *(code **)(*plVar10 + 0x20);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar8 = ::FName::FName(&local_108,pwVar12);
  (*pcVar2)(plVar10,*pFVar8,&local_170);
  uVar5 = _UNK_150631d98;
  uVar4 = ___xmm_00000000ffffffff0000008000000000;
  iVar6 = (int)local_168;
  pFVar13 = &(local_170->ChunkIDs).AllocatorInstance.SecondaryData;
  pFVar15 = local_170 + (int)local_168;
  while( true ) {
    if ((int)local_168 != iVar6) {
      `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_178);
    }
    if ((FAssetData *)(pFVar13 + -0xb) == pFVar15) break;
    local_b0.PackageName = ((FAssetData *)(pFVar13 + -0xb))->PackageName;
    local_b0.AssetClassPath.PackageName = *(FName *)(pFVar13 + -7);
    local_b0.AssetClassPath.AssetName = *(FName *)(pFVar13 + -6);
    local_b0.PackagePath = *(FName *)(pFVar13 + -10);
    local_b0.AssetName = *(FName *)(pFVar13 + -9);
    local_b0.AssetClass = *(FName *)(pFVar13 + -8);
    local_b0.ChunkArrayRegistryHandle.Index = *(int *)(pFVar13 + -5);
    local_b0.PackageFlags = *(uint *)&pFVar13[-5].field_0x4;
    FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
              (&local_b0.TagsAndValues,(FAssetDataTagMapSharedView *)(pFVar13 + -4));
    local_b0.TaggedAssetBundles.Object = *(FAssetBundleData **)(pFVar13 + -3);
    local_b0.TaggedAssetBundles.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar13 + -2);
    if ((ForElementType<int>)local_b0.TaggedAssetBundles.SharedReferenceCount.ReferenceController !=
        (ForElementType<int>)0x0) {
      LOCK();
      *(int *)((longlong)local_b0.TaggedAssetBundles.SharedReferenceCount.ReferenceController + 8) =
           *(int *)((longlong)local_b0.TaggedAssetBundles.SharedReferenceCount.ReferenceController +
                   8) + 1;
      UNLOCK();
    }
    local_b0.ChunkIDs.ArrayNum = *(int *)(pFVar13 + 1);
    lVar14 = (longlong)local_b0.ChunkIDs.ArrayNum;
    local_b0.ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    _Src = *pFVar13;
    if (*pFVar13 == (ForElementType<int>)0x0) {
      _Src = (ForElementType<int>)(pFVar13 + -1);
    }
    if (local_b0.ChunkIDs.ArrayNum == 0) {
      local_b0.ChunkIDs.ArrayMax = 2;
    }
    else {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                (4,4,local_b0.ChunkIDs.ArrayNum,0,&local_b0.ChunkIDs.AllocatorInstance,
                 local_b0.ChunkIDs.ArrayNum,&local_b0.ChunkIDs.ArrayMax);
      _Dst = (ForElementType<int>)&local_b0.ChunkIDs;
      if (local_b0.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        _Dst = local_b0.ChunkIDs.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)_Dst,(void *)_Src,lVar14 << 2);
    }
    local_128.InlineData[0] = '\0';
    local_128.InlineData[1] = '\0';
    local_128.InlineData[2] = '\0';
    local_128.InlineData[3] = '\0';
    local_128._padding_ = 0;
    local_118 = 0;
    local_160._0_8_ = (FScriptContainerElement *)0x0;
    local_160._16_8_ = 0;
    uStack_148 = 0;
    local_160._8_8_ = 0;
    local_140 = (void *)0x0;
    local_138 = uVar4;
    uStack_130 = uVar5;
    local_128.SecondaryData = (ForElementType<FSetElementId>)0x0;
    pTVar11 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
              TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
                        (&local_100,
                         (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_160);
    this_00 = (UObjectBase *)FAssetData::FastGetAsset(&local_b0,true,pTVar11);
    local_118 = local_118 & 0xffffffff00000000;
    if (local_128.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_128.SecondaryData);
    }
    iVar3 = SUB84(local_160._8_8_,4);
    local_160._8_8_ = local_160._8_8_ & 0xffffffff00000000;
    if (iVar3 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)local_160,0,(int *)(local_160 + 0xc));
    }
    uVar7 = local_138._4_4_;
    uStack_130 = 0xffffffff;
    local_138 = (ulonglong)local_138._4_4_ << 0x20;
    if (0x80 < uVar7) {
      local_138 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_160 + 0x10),0);
    }
    if (local_140 != (void *)0x0) {
      FMemory::Free(local_140);
    }
    if ((FScriptContainerElement *)local_160._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_160._0_8_);
    }
    if (this_00 != (UObjectBase *)0x0) {
      this_01 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_00);
      UPackage::SetDirtyFlag(this_01,false);
      UObjectBase::AtomicallyClearFlags(this_00,RF_Standalone);
      this_02 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
      FUObjectItem::ClearRootFlags(this_02,Async);
      UObjectBase::AtomicallySetFlags(this_00,RF_Transient);
    }
    if (local_b0.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_b0.ChunkIDs.AllocatorInstance.SecondaryData);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
    FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_b0.TagsAndValues);
    pFVar13 = pFVar13 + 0xd;
  }
  DestructItems<FAssetData,int>(local_170,(int)local_168);
  if (local_170 != (FAssetData *)0x0) {
    FMemory::Free(local_170);
  }
  return;
}

// EndSetupAssetData @ 14e4eafb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UE::Interchange::Private::ImportCommon::EndSetupAssetData
          (FUpdateImportAssetDataParameters *param_1,UInterchangeAssetImportData *param_2)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UInterchangeBaseNodeContainer *pUVar8;
  UInterchangeFactoryBaseNode *pUVar9;
  UInterchangeTranslatorSettings *pUVar10;
  UClass *pUVar11;
  UPackage *pUVar13;
  UObject *pUVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  UObject *local_68;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_60;
  TArray<FString,TSizedDefaultAllocator<32>_> local_50;
  longlong lVar12;
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId73,
               "UE::Interchange::Private::ImportCommon::EndSetupAssetData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeImportCommon.cpp"
               ,0x49);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId73);
  }
  pUVar8 = NewObject<UInterchangeBaseNodeContainer>((UObject *)param_2);
  pUVar9 = UInterchangeBaseNodeContainer::GetFactoryNode
                     (param_1->NodeContainer,&param_1->NodeUniqueID);
  if (pUVar9 != (UInterchangeFactoryBaseNode *)0x0) {
    iVar7 = (param_1->NodeUniqueID).Data.ArrayNum;
    iVar6 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange
              (&param_2->NodeUniqueID,(wchar_t *)(param_1->NodeUniqueID).Data.AllocatorInstance.Data
               ,iVar6);
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.ArrayNum = 0;
    local_50.ArrayMax = 0;
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_50.AllocatorInstance,&local_50.ArrayMax);
    local_50.ArrayNum = iVar6 + 1;
    ::FString::FString((FString *)(local_50.AllocatorInstance.Data + (longlong)iVar6 * 0x10),
                       &param_2->NodeUniqueID);
    RecursivelyDuplicateFactoryNodeDependencies(param_1->NodeContainer,pUVar8,&local_50);
    DestructItems<FString,int>((FString *)local_50.AllocatorInstance.Data,local_50.ArrayNum);
    if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
  }
  UInterchangeAssetImportData::SetNodeContainer(param_2,pUVar8);
  pUVar10 = (UInterchangeTranslatorSettings *)
            (**(code **)(param_1->Translator->_padding_ + 0x2f0))();
  if (pUVar10 != (UInterchangeTranslatorSettings *)0x0) {
    UInterchangeAssetImportData::SetTranslatorSettings(param_2,pUVar10);
  }
  pFVar15 = (param_1->Pipelines).AllocatorInstance.Data;
  iVar6 = (param_1->Pipelines).ArrayNum;
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  pFVar1 = pFVar15 + (longlong)iVar6 * 8;
  do {
    while( true ) {
      if ((param_1->Pipelines).ArrayNum != iVar6) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UObject_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar15 == pFVar1) {
        UInterchangeAssetImportData::SetPipelines(param_2,&local_60);
        if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.AllocatorInstance.Data);
        }
        if (bVar16) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return;
      }
      pUVar2 = *(UObject **)pFVar15;
      if (pUVar2 != (UObject *)0x0) break;
LAB_14e4eb2af:
      pFVar15 = pFVar15 + 8;
    }
    pUVar11 = UInterchangePythonPipelineAsset::StaticClass();
    iVar7 = (int)pUVar11->_padding_;
    if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar7) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar11->_padding_)) {
      if (pUVar2 != (UObject *)0x0) {
        pUVar11 = Z_Construct_UClass_UInterchangePipelineBase_NoRegister();
        iVar7 = (int)pUVar11->_padding_;
        if ((iVar7 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar7 * 8) ==
            &pUVar11->_padding_)) {
          lVar12 = *(longlong *)pUVar2;
          pUVar14 = pUVar2;
          goto LAB_14e4eb1a7;
        }
      }
      goto LAB_14e4eb2af;
    }
    pUVar14 = *(UObject **)(pUVar2 + 2);
    if (pUVar14 == (UObject *)0x0) goto LAB_14e4eb2af;
    lVar12 = *(longlong *)pUVar14;
LAB_14e4eb1a7:
    cVar4 = (**(code **)(lVar12 + 0x2f0))(pUVar14);
    if (cVar4 == '\0') goto LAB_14e4eb2af;
    local_res20 = 0;
    local_68 = StaticDuplicateObject
                         (pUVar2,(UObject *)param_2,(FName)0x0,
                          RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                          RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                          RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                          RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                          RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                          RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                          RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                          RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                          RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|
                          RF_Public,(UClass *)0x0,Normal,
                          PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                          ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                          AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                          ReachabilityFlag0);
    if (local_68 == (UObject *)0x0) {
      local_68 = (UObject *)0x0;
      goto LAB_14e4eb2af;
    }
    pUVar13 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)local_68);
    if ((atomic<unsigned_int>)((uint)pUVar13->PackageFlagsPrivate & 0xffffffbf) !=
        pUVar13->PackageFlagsPrivate) {
      LOCK();
      pUVar13->PackageFlagsPrivate =
           (atomic<unsigned_int>)((uint)pUVar13->PackageFlagsPrivate & 0xffffffbf);
      UNLOCK();
    }
    if (((local_60.AllocatorInstance.Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         local_60.AllocatorInstance.Data + (longlong)local_60.ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = local_60.ArrayNum;
    if (local_60.ArrayNum == local_60.ArrayMax) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_60.AllocatorInstance,&local_60.ArrayMax);
    }
    pFVar15 = pFVar15 + 8;
    local_60.ArrayNum = iVar7 + 1;
    *(UObject **)(local_60.AllocatorInstance.Data + (longlong)iVar7 * 8) = local_68;
  } while( true );
}

// ExtractNamespace @ 14e4f2560

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl UE::Interchange::Private::ExtractNamespace(FText *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  FText *pFVar2;
  FString *pFVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  FString local_68;
  TArray<FHistoricTextFormatData,TSizedDefaultAllocator<32>_> local_58;
  TOptional<FString>_u_0 local_48;
  TOptional<FString>_u_0 local_38;
  FText local_28;
  FText local_18;
  
  local_28.TextData.Reference = (param_1->TextData).Reference;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 8))
              (local_28.TextData.Reference,local_res8);
  }
  local_28.Flags = param_1->Flags;
  bVar4 = false;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  FTextInspector::GetHistoricFormatData(param_1,&local_58);
  if (0 < local_58.ArrayNum) {
    pFVar2 = FTextFormat::GetSourceText
                       ((FTextFormat *)(local_58.AllocatorInstance.Data + 0x10),&local_18);
    FText::operator=(&local_28,pFVar2);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  FTextInspector::GetNamespace((TOptional<FString> *)&local_38.TypedValue,&local_28);
  FTextInspector::GetKey((TOptional<FString> *)&local_48.TypedValue,&local_28);
  if ((local_38.TypedValue.Data.ArrayMax == -1) || (local_48.TypedValue.Data.ArrayMax == -1)) {
    pFVar3 = ::FString::FString((FString *)&local_18,L"UnknownError");
    if (param_2 != pFVar3) {
      pFVar1 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_2->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->Data).ArrayNum = (pFVar3->Data).ArrayNum;
      (param_2->Data).ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_18.TextData.Reference);
    }
  }
  else {
    ::FString::PrintfImpl(&local_68,L"%s_%s");
    if (param_2 != &local_68) {
      pFVar1 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_2->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      (param_2->Data).ArrayNum = local_68.Data.ArrayNum;
      (param_2->Data).ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    bVar4 = true;
  }
  if ((local_48.TypedValue.Data.ArrayMax != -1) &&
     (local_48.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_48.TypedValue.Data.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  DestructItems<FHistoricTextFormatData,int>
            ((FHistoricTextFormatData *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if ((FHistoricTextFormatData *)local_58.AllocatorInstance.Data != (FHistoricTextFormatData *)0x0)
  {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return bVar4;
}

// FillPipelineAnalyticData @ 14e4f2830

/* WARNING: Removing unreachable block (ram,0x00014e4f39a5) */
/* WARNING: Removing unreachable block (ram,0x00014e4f2da3) */
/* WARNING: Removing unreachable block (ram,0x00014e4f2b78) */
/* WARNING: Removing unreachable block (ram,0x00014e4f2fbe) */
/* WARNING: Removing unreachable block (ram,0x00014e4f345c) */
/* WARNING: Removing unreachable block (ram,0x00014e4f39b3) */
/* WARNING: Removing unreachable block (ram,0x00014e4f2db1) */
/* WARNING: Removing unreachable block (ram,0x00014e4f2b86) */
/* WARNING: Removing unreachable block (ram,0x00014e4f2fcc) */
/* WARNING: Removing unreachable block (ram,0x00014e4f346a) */

void __cdecl
UE::Interchange::Private::FillPipelineAnalyticData
          (UInterchangePipelineBase *param_1,int param_2,FString *param_3)

{
  FName *this;
  EArrayPropertyFlags EVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FName this_00;
  code *pcVar4;
  FScriptArrayHelper_u_8 FVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  FString *pFVar10;
  longlong lVar11;
  FName FVar12;
  FName FVar13;
  void *pvVar14;
  IAnalyticsProviderET *pIVar15;
  int *piVar16;
  wchar_t *pwVar17;
  undefined1 *puVar18;
  ForAnyElementType FVar19;
  longlong lVar20;
  undefined1 *puVar21;
  FName this_01;
  FName local_res20;
  int *in_stack_fffffffffffffd28;
  ForAnyElementType local_2b8;
  undefined8 local_2b0;
  FString local_2a8;
  FString local_298;
  FAnalyticsEventAttribute local_288;
  FAnalyticsEventAttribute local_258;
  FAnalyticsEventAttribute local_228;
  FString local_1f8;
  FAnalyticsEventAttribute local_1e8;
  FAnalyticsEventAttribute local_1b8;
  FString local_188;
  void *local_178;
  ulonglong local_170;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FName local_128;
  FName local_120;
  FString local_118;
  FString local_108;
  FString local_f8;
  FScriptArrayHelper local_e8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98 [2];
  FString local_78;
  FString local_68;
  FString local_58 [2];
  
  local_res20 = (FName)((ulonglong)local_res20 & 0xffffffff00000000);
  if (FEngineAnalytics::Analytics.Object == (IAnalyticsProviderET *)0x0) {
    return;
  }
  lVar20 = param_1->_padding_;
  bVar6 = 1 < (param_3->Data).ArrayNum;
  if (bVar6) {
    local_128 = (FName)param_1->_padding_;
    ::FName::ToString(&local_128,&local_b8);
    ::FString::ConcatFC(&local_c8,param_3,L".");
    ::FString::ConcatFF(&local_118,&local_c8,&local_b8);
    pFVar10 = &local_118;
    local_148.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
  }
  else {
    local_res20 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res20,&local_108);
    pFVar10 = &local_108;
    local_148.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
  }
  (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Data.ArrayNum = (pFVar10->Data).ArrayNum;
  local_148.Data.ArrayMax = (pFVar10->Data).ArrayMax;
  (pFVar10->Data).ArrayNum = 0;
  (pFVar10->Data).ArrayMax = 0;
  if ((bVar6) && (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if ((!bVar6) && (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  local_2b8.Data = (FScriptContainerElement *)0x0;
  local_2b0 = 0;
  pFVar10 = ::FString::FString(&local_78,L"UniqueId");
  if (((pFVar10->Data).ArrayNum < 2) ||
     (iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,L"EventName"), iVar7 == 0
     )) {
LAB_14e4f29f1:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp(pwVar17,L"DateOffset");
    if (iVar7 == 0) goto LAB_14e4f29f1;
  }
  local_1b8.AttrName.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
  (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.AttrName.Data.ArrayNum = (pFVar10->Data).ArrayNum;
  local_1b8.AttrName.Data.ArrayMax = (pFVar10->Data).ArrayMax;
  (pFVar10->Data).ArrayNum = 0;
  (pFVar10->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_1b8.AttrValueString,L"%d");
  local_1b8.AttrValueBool = false;
  local_1b8.AttrValueNumber = 0.0;
  local_1b8.AttrType = JsonFragment;
  pFVar3 = (pFVar10->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if (local_2b8.Data <= &local_1b8) {
    piVar16 = (int *)(longlong)local_2b0._4_4_;
    if ((&local_1b8 < (FAnalyticsEventAttribute *)(local_2b8.Data + (longlong)piVar16 * 0x30)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), in_stack_fffffffffffffd28 = piVar16, bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (int)local_2b0;
  if ((int)local_2b0 == local_2b0._4_4_) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_2b8,(int *)((longlong)&local_2b0 + 4));
  }
  lVar11 = (longlong)iVar7;
  local_2b0 = CONCAT44(local_2b0._4_4_,iVar7 + 1);
  *(undefined8 *)&local_2b8.Data[lVar11 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_2b8.Data[lVar11 * 0x30].field_0x0 =
       local_1b8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_2b8.Data + lVar11 * 0x30 + 8) = local_1b8.AttrName.Data.ArrayNum;
  *(int *)(local_2b8.Data + lVar11 * 0x30 + 0xc) = local_1b8.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_2b8.Data + lVar11 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_2b8.Data + lVar11 * 0x30 + 0x10) =
       local_1b8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_2b8.Data + lVar11 * 0x30 + 0x18) = local_1b8.AttrValueString.Data.ArrayNum;
  *(int *)(local_2b8.Data + lVar11 * 0x30 + 0x1c) = local_1b8.AttrValueString.Data.ArrayMax;
  *(double *)(local_2b8.Data + lVar11 * 0x30 + 0x20) = local_1b8.AttrValueNumber;
  local_2b8.Data[lVar11 * 0x30 + 0x28] = (FScriptContainerElement)local_1b8.AttrValueBool;
  *(AttrTypeEnum *)(local_2b8.Data + lVar11 * 0x30 + 0x2c) = local_1b8.AttrType;
  local_1b8.AttrValueString.Data.ArrayNum = 0;
  local_1b8.AttrValueString.Data.ArrayMax = 0;
  local_1b8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.AttrName.Data.ArrayNum = 0;
  local_1b8.AttrName.Data.ArrayMax = 0;
  local_1b8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar10 = ::FString::FString(&local_68,L"Name");
  if (((pFVar10->Data).ArrayNum < 2) ||
     (iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,L"EventName"), iVar7 == 0
     )) {
LAB_14e4f2bdc:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp(pwVar17,L"DateOffset");
    if (iVar7 == 0) goto LAB_14e4f2bdc;
  }
  FVar19.Data = local_148.Data.AllocatorInstance.Data;
  local_288.AttrName.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
  (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.AttrName.Data.ArrayNum = (pFVar10->Data).ArrayNum;
  local_288.AttrName.Data.ArrayMax = (pFVar10->Data).ArrayMax;
  (pFVar10->Data).ArrayNum = 0;
  (pFVar10->Data).ArrayMax = 0;
  lVar11 = (longlong)local_148.Data.ArrayNum;
  local_288.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.AttrValueString.Data.ArrayNum = local_148.Data.ArrayNum;
  if (local_148.Data.ArrayNum == 0) {
    local_288.AttrValueString.Data.ArrayNum = 0;
    local_288.AttrValueString.Data.ArrayMax = 0;
  }
  else {
    in_stack_fffffffffffffd28 = &local_288.AttrValueString.Data.ArrayMax;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_148.Data.ArrayNum,0,(ForAnyElementType *)&local_288.AttrValueString,
               local_148.Data.ArrayNum,in_stack_fffffffffffffd28);
    memcpy(local_288.AttrValueString.Data.AllocatorInstance.Data,FVar19.Data,lVar11 * 2);
  }
  local_288.AttrValueNumber = 0.0;
  local_288.AttrValueBool = false;
  local_288.AttrType = String;
  pFVar3 = (pFVar10->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if (local_2b8.Data <= &local_288) {
    piVar16 = (int *)(longlong)local_2b0._4_4_;
    if ((&local_288 < (FAnalyticsEventAttribute *)(local_2b8.Data + (longlong)piVar16 * 0x30)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), in_stack_fffffffffffffd28 = piVar16, bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (int)local_2b0;
  if ((int)local_2b0 == local_2b0._4_4_) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_2b8,(int *)((longlong)&local_2b0 + 4));
  }
  lVar11 = (longlong)iVar7;
  local_2b0 = CONCAT44(local_2b0._4_4_,iVar7 + 1);
  *(undefined8 *)&local_2b8.Data[lVar11 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_2b8.Data[lVar11 * 0x30].field_0x0 =
       local_288.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_2b8.Data + lVar11 * 0x30 + 8) = local_288.AttrName.Data.ArrayNum;
  *(int *)(local_2b8.Data + lVar11 * 0x30 + 0xc) = local_288.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_2b8.Data + lVar11 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_2b8.Data + lVar11 * 0x30 + 0x10) =
       local_288.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_2b8.Data + lVar11 * 0x30 + 0x18) = local_288.AttrValueString.Data.ArrayNum;
  *(int *)(local_2b8.Data + lVar11 * 0x30 + 0x1c) = local_288.AttrValueString.Data.ArrayMax;
  *(double *)(local_2b8.Data + lVar11 * 0x30 + 0x20) = local_288.AttrValueNumber;
  local_2b8.Data[lVar11 * 0x30 + 0x28] = (FScriptContainerElement)local_288.AttrValueBool;
  *(AttrTypeEnum *)(local_2b8.Data + lVar11 * 0x30 + 0x2c) = local_288.AttrType;
  local_288.AttrValueString.Data.ArrayNum = 0;
  local_288.AttrValueString.Data.ArrayMax = 0;
  local_288.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.AttrName.Data.ArrayNum = 0;
  local_288.AttrName.Data.ArrayMax = 0;
  local_288.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120 = *(FName *)(lVar20 + 0x18);
  ::FName::ToString(&local_120,&local_188);
  pFVar10 = ::FString::FString(local_58,L"Class");
  if ((1 < (pFVar10->Data).ArrayNum) &&
     (iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,L"EventName"), iVar7 != 0
     )) {
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp(pwVar17,L"DateOffset");
    if (iVar7 != 0) goto LAB_14e4f2e4b;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14e4f2e4b:
  local_1e8.AttrName.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
  (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.AttrName.Data.ArrayNum = (pFVar10->Data).ArrayNum;
  local_1e8.AttrName.Data.ArrayMax = (pFVar10->Data).ArrayMax;
  (pFVar10->Data).ArrayNum = 0;
  (pFVar10->Data).ArrayMax = 0;
  local_1e8.AttrValueString.Data.AllocatorInstance.Data = local_188.Data.AllocatorInstance.Data;
  local_1e8.AttrValueString.Data.ArrayNum = local_188.Data.ArrayNum;
  local_1e8.AttrValueString.Data.ArrayMax = local_188.Data.ArrayMax;
  local_188.Data.ArrayNum = 0;
  local_188.Data.ArrayMax = 0;
  local_1e8.AttrValueNumber = 0.0;
  local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.AttrValueBool = false;
  local_1e8.AttrType = String;
  pFVar3 = (pFVar10->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if (local_2b8.Data <= &local_1e8) {
    piVar16 = (int *)(longlong)local_2b0._4_4_;
    if ((&local_1e8 < (FAnalyticsEventAttribute *)(local_2b8.Data + (longlong)piVar16 * 0x30)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), in_stack_fffffffffffffd28 = piVar16, bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (int)local_2b0;
  if ((int)local_2b0 == local_2b0._4_4_) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_2b8,(int *)((longlong)&local_2b0 + 4));
  }
  lVar11 = (longlong)iVar7;
  local_2b0 = CONCAT44(local_2b0._4_4_,iVar7 + 1);
  *(undefined8 *)&local_2b8.Data[lVar11 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_2b8.Data[lVar11 * 0x30].field_0x0 =
       local_1e8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_2b8.Data + lVar11 * 0x30 + 8) = local_1e8.AttrName.Data.ArrayNum;
  *(int *)(local_2b8.Data + lVar11 * 0x30 + 0xc) = local_1e8.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_2b8.Data + lVar11 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_2b8.Data + lVar11 * 0x30 + 0x10) =
       local_1e8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_2b8.Data + lVar11 * 0x30 + 0x18) = local_1e8.AttrValueString.Data.ArrayNum;
  *(int *)(local_2b8.Data + lVar11 * 0x30 + 0x1c) = local_1e8.AttrValueString.Data.ArrayMax;
  *(double *)(local_2b8.Data + lVar11 * 0x30 + 0x20) = local_1e8.AttrValueNumber;
  local_2b8.Data[lVar11 * 0x30 + 0x28] = (FScriptContainerElement)local_1e8.AttrValueBool;
  *(AttrTypeEnum *)(local_2b8.Data + lVar11 * 0x30 + 0x2c) = local_1e8.AttrType;
  local_1e8.AttrValueString.Data.ArrayNum = 0;
  local_1e8.AttrValueString.Data.ArrayMax = 0;
  local_1e8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.AttrName.Data.ArrayNum = 0;
  local_1e8.AttrName.Data.ArrayMax = 0;
  local_1e8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  this_00 = *(FName *)(lVar20 + 0x70);
  do {
    if (this_00 == (FName)0x0) {
      ::FString::FString(local_98,L"Interchange.Usage.Import.Pipeline");
      pIVar15 = FEngineAnalytics::GetProvider();
      (**(code **)(pIVar15->_padding_ + 0x80))(pIVar15,local_98,&local_2b8);
      if (local_98[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98[0].Data.AllocatorInstance.Data);
      }
      DestructItems<FAnalyticsEventAttribute,int>
                ((FAnalyticsEventAttribute *)local_2b8.Data,(int)local_2b0);
      if ((FAnalyticsEventAttribute *)local_2b8.Data != (FAnalyticsEventAttribute *)0x0) {
        FMemory::Free(local_2b8.Data);
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      return;
    }
    this_01.ComparisonIndex.Value = 0;
    this_01.Number = 0;
    if ((*(uint *)((longlong)this_00 + 0x38) >> 0xd & 1) == 0) {
      FVar12 = UInterchangePipelineBase::GetPropertiesStatesPropertyName();
      bVar6 = IsThisNotNull((void *)this_00,"FField::GetFName");
      this = (FName *)((longlong)this_00 + 0x20);
      FVar13 = this_01;
      if (bVar6) {
        FVar13 = *this;
      }
      if (FVar13 != *(FName *)FVar12) {
        FVar12 = UInterchangePipelineBase::GetResultsPropertyName();
        bVar6 = IsThisNotNull((void *)this_00,"FField::GetFName");
        FVar13 = this_01;
        if (bVar6) {
          FVar13 = *this;
        }
        if (FVar13 != *(FName *)FVar12) {
          bVar6 = IsThisNotNull((void *)this_00,"FField::GetName");
          if (bVar6) {
            ::FName::ToString(this,&local_158);
          }
          else {
            ::FString::FString(&local_158,L"None");
          }
          if ((((*(uint *)(*(longlong *)((longlong)this_00 + 8) + 0x18) >> 0x10 & 1) == 0) ||
              (FVar13 = (FName)(**(code **)(*(longlong *)this_00 + 0x208))(this_00,param_1),
              FVar13 == (FName)0x0)) ||
             (bVar6 = UObjectBaseUtility::IsA<UInterchangePipelineBase>
                                ((UObjectBaseUtility *)FVar13), !bVar6)) {
            FVar13 = this_01;
          }
          if ((*(uint *)(*(longlong *)((longlong)this_00 + 8) + 0x18) >> 0x15 & 1) != 0) {
            this_01 = this_00;
          }
          if (this_01 == (FName)0x0) {
            if (FVar13 == (FName)0x0) {
              iVar7 = 0;
              if (0 < *(int *)((longlong)this_00 + 0x30)) {
                do {
                  iVar9 = local_158.Data.ArrayNum;
                  FVar19.Data = local_158.Data.AllocatorInstance.Data;
                  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  if (local_158.Data.ArrayNum == 0) {
                    local_1f8.Data.ArrayMax = 0;
                  }
                  else {
                    Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,local_158.Data.ArrayNum,0,(ForAnyElementType *)&local_1f8,
                               local_158.Data.ArrayNum,&local_1f8.Data.ArrayMax);
                    memcpy(local_1f8.Data.AllocatorInstance.Data,FVar19.Data,(longlong)iVar9 * 2);
                  }
                  if (*(int *)((longlong)this_00 + 0x30) != 1) {
                    local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_138.Data.ArrayNum = 0;
                    local_138.Data.ArrayMax = 0;
                    ::FString::AppendInt(&local_138,iVar7);
                    ::FString::ConcatCF(&local_a8,L"[",&local_138);
                    ::FString::ConcatFC(&local_f8,&local_a8,L"]");
                    iVar9 = local_f8.Data.ArrayNum + -1;
                    if (local_f8.Data.ArrayNum == 0) {
                      iVar9 = 0;
                    }
                    ::FString::AppendChars
                              (&local_1f8,(wchar_t *)local_f8.Data.AllocatorInstance.Data,iVar9);
                    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                    }
                    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                    }
                    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_138.Data.AllocatorInstance.Data);
                    }
                  }
                  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_168.Data.ArrayNum = 0;
                  local_168.Data.ArrayMax = 0;
                  if (((iVar7 < 0) || (*(int *)((longlong)this_00 + 0x30) <= iVar7)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x2dd,
                                         L"Array index out of bounds: %i from an array of size %i"),
                     bVar6)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar9 = *(int *)((longlong)this_00 + 0x34);
                  iVar2 = *(int *)((longlong)this_00 + 0x44);
                  if (((iVar7 < 0) || (*(int *)((longlong)this_00 + 0x30) <= iVar7)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x2dd,
                                         L"Array index out of bounds: %i from an array of size %i"),
                     bVar6)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  in_stack_fffffffffffffd28 = (int *)0x0;
                  FProperty::ExportText_Direct
                            ((FProperty *)this_00,&local_168,
                             (void *)((longlong)&param_1->_padding_ +
                                     (longlong)*(int *)((longlong)this_00 + 0x44) +
                                     (longlong)*(int *)((longlong)this_00 + 0x34) * (longlong)iVar7)
                             ,(void *)((longlong)&param_1->_padding_ +
                                      (longlong)iVar2 + (longlong)iVar9 * (longlong)iVar7),
                             (UObject *)param_1,0,(UObject *)0x0);
                  ::FString::PrintfImpl(&local_298,L"Property%s.%s");
                  if ((local_298.Data.ArrayNum < 2) ||
                     (iVar9 = FGenericPlatformStricmp::Stricmp
                                        ((wchar_t *)local_298.Data.AllocatorInstance.Data,
                                         L"EventName"), iVar9 == 0)) {
LAB_14e4f37d2:
                    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValidAttributeName(InName)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                                       ,0x78,L"");
                    if (bVar6) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                  }
                  else {
                    FVar19.Data = (FScriptContainerElement *)L"";
                    if (local_298.Data.ArrayNum != 0) {
                      FVar19.Data = local_298.Data.AllocatorInstance.Data;
                    }
                    iVar9 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar19.Data,L"DateOffset");
                    if (iVar9 == 0) goto LAB_14e4f37d2;
                  }
                  FVar19.Data = local_168.Data.AllocatorInstance.Data;
                  lVar20 = (longlong)local_168.Data.ArrayNum;
                  local_228.AttrName.Data.AllocatorInstance.Data =
                       local_298.Data.AllocatorInstance.Data;
                  local_228.AttrName.Data.ArrayNum = local_298.Data.ArrayNum;
                  local_228.AttrName.Data.ArrayMax = local_298.Data.ArrayMax;
                  local_298.Data.ArrayNum = 0;
                  local_298.Data.ArrayMax = 0;
                  local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_228.AttrValueString.Data.AllocatorInstance.Data =
                       (FScriptContainerElement *)0x0;
                  local_228.AttrValueString.Data.ArrayNum = local_168.Data.ArrayNum;
                  if (local_168.Data.ArrayNum == 0) {
                    local_228.AttrValueString.Data._8_8_ = local_168.Data._8_8_ & 0xffffffff;
                  }
                  else {
                    in_stack_fffffffffffffd28 = &local_228.AttrValueString.Data.ArrayMax;
                    Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,local_168.Data.ArrayNum,0,
                               (ForAnyElementType *)&local_228.AttrValueString,
                               local_168.Data.ArrayNum,in_stack_fffffffffffffd28);
                    memcpy(local_228.AttrValueString.Data.AllocatorInstance.Data,FVar19.Data,
                           lVar20 * 2);
                  }
                  local_228.AttrValueNumber = 0.0;
                  local_228.AttrValueBool = false;
                  local_228.AttrType = String;
                  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_298.Data.AllocatorInstance.Data);
                  }
                  if (local_2b8.Data <= &local_228) {
                    piVar16 = (int *)(longlong)local_2b0._4_4_;
                    if ((&local_228 <
                         (FAnalyticsEventAttribute *)(local_2b8.Data + (longlong)piVar16 * 0x30)) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), in_stack_fffffffffffffd28 = piVar16, bVar6)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                  }
                  iVar9 = (int)local_2b0;
                  if ((int)local_2b0 == local_2b0._4_4_) {
                    iVar9 = Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x830,&local_2b8,(int *)((longlong)&local_2b0 + 4));
                  }
                  lVar20 = (longlong)iVar9;
                  local_2b0 = CONCAT44(local_2b0._4_4_,iVar9 + 1);
                  *(undefined8 *)&local_2b8.Data[lVar20 * 0x30].field_0x0 = 0;
                  *(FScriptContainerElement **)&local_2b8.Data[lVar20 * 0x30].field_0x0 =
                       local_228.AttrName.Data.AllocatorInstance.Data;
                  *(int *)(local_2b8.Data + lVar20 * 0x30 + 8) = local_228.AttrName.Data.ArrayNum;
                  *(int *)(local_2b8.Data + lVar20 * 0x30 + 0xc) = local_228.AttrName.Data.ArrayMax;
                  *(undefined8 *)(local_2b8.Data + lVar20 * 0x30 + 0x10) = 0;
                  *(FScriptContainerElement **)(local_2b8.Data + lVar20 * 0x30 + 0x10) =
                       local_228.AttrValueString.Data.AllocatorInstance.Data;
                  *(int *)(local_2b8.Data + lVar20 * 0x30 + 0x18) =
                       local_228.AttrValueString.Data.ArrayNum;
                  *(int *)(local_2b8.Data + lVar20 * 0x30 + 0x1c) =
                       local_228.AttrValueString.Data.ArrayMax;
                  *(double *)(local_2b8.Data + lVar20 * 0x30 + 0x20) = local_228.AttrValueNumber;
                  local_2b8.Data[lVar20 * 0x30 + 0x28] =
                       (FScriptContainerElement)local_228.AttrValueBool;
                  *(AttrTypeEnum *)(local_2b8.Data + lVar20 * 0x30 + 0x2c) = local_228.AttrType;
                  local_228.AttrValueString.Data.ArrayNum = 0;
                  local_228.AttrValueString.Data.ArrayMax = 0;
                  local_228.AttrValueString.Data.AllocatorInstance.Data =
                       (FScriptContainerElement *)0x0;
                  local_228.AttrName.Data.ArrayNum = 0;
                  local_228.AttrName.Data.ArrayMax = 0;
                  local_228.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_168.Data.AllocatorInstance.Data);
                  }
                  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < *(int *)((longlong)this_00 + 0x30));
              }
            }
            else {
              bVar6 = UObjectBaseUtility::IsInOuter((UObjectBaseUtility *)FVar13,(UObject *)param_1)
              ;
              if (bVar6) {
                FillPipelineAnalyticData((UInterchangePipelineBase *)FVar13,param_2,&local_148);
              }
            }
          }
          else {
            pvVar14 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                ((FProperty *)this_01,(UObject *)param_1,0);
            EVar1 = *(EArrayPropertyFlags *)((longlong)this_01 + 0x70);
            uVar8 = (**(code **)(**(longlong **)((longlong)this_01 + 0x78) + 0x168))();
            in_stack_fffffffffffffd28 =
                 (int *)CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd28 >> 8),EVar1);
            FScriptArrayHelper::FScriptArrayHelper
                      (&local_e8,Internal,*(FProperty **)((longlong)this_01 + 0x78),pvVar14,
                       (*(FProperty **)((longlong)this_01 + 0x78))->ElementSize,uVar8,EVar1);
            FVar5 = local_e8.field1_0x8;
            iVar7 = 0;
            while( true ) {
              puVar21 = (undefined1 *)0x0;
              if ((FVar5.FreezableArray)->ArrayNum <= iVar7) break;
              local_178 = (void *)0x0;
              local_170 = 0;
              puVar18 = puVar21;
              if ((FVar5.FreezableArray)->ArrayNum != 0) {
                puVar18 = (undefined1 *)(FVar5.FreezableArray)->_padding_;
                if (((local_e8.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                   (((ulonglong)puVar18 & 1) != 0)) {
                  puVar18 = &(FVar5.HeapArray)->field_0x0 + ((longlong)puVar18 >> 0x18);
                }
                puVar18 = puVar18 + (longlong)local_e8.ElementSize * (longlong)iVar7;
              }
              if ((FVar5.FreezableArray)->ArrayNum != 0) {
                puVar21 = (undefined1 *)(FVar5.FreezableArray)->_padding_;
                if (((local_e8.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                   (((ulonglong)puVar21 & 1) != 0)) {
                  puVar21 = &(FVar5.HeapArray)->field_0x0 + ((longlong)puVar21 >> 0x18);
                }
                puVar21 = puVar21 + (longlong)local_e8.ElementSize * (longlong)iVar7;
              }
              in_stack_fffffffffffffd28 =
                   (int *)((ulonglong)in_stack_fffffffffffffd28 & 0xffffffff00000000);
              (**(code **)(**(longlong **)((longlong)this_01 + 0x78) + 0xe0))
                        (*(longlong **)((longlong)this_01 + 0x78),&local_178,puVar21,0,puVar18,
                         param_1,in_stack_fffffffffffffd28,0);
              ::FString::PrintfImpl(&local_2a8,L"Property%s.%s");
              if ((local_2a8.Data.ArrayNum < 2) ||
                 (iVar9 = FGenericPlatformStricmp::Stricmp
                                    ((wchar_t *)local_2a8.Data.AllocatorInstance.Data,L"EventName"),
                 iVar9 == 0)) {
LAB_14e4f326d:
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidAttributeName(InName)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                                   ,0x78,L"");
                if (bVar6) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              else {
                FVar19.Data = (FScriptContainerElement *)L"";
                if (local_2a8.Data.ArrayNum != 0) {
                  FVar19.Data = local_2a8.Data.AllocatorInstance.Data;
                }
                iVar9 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar19.Data,L"DateOffset");
                if (iVar9 == 0) goto LAB_14e4f326d;
              }
              pvVar14 = local_178;
              local_258.AttrName.Data.AllocatorInstance.Data = local_2a8.Data.AllocatorInstance.Data
              ;
              local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_258.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
              ;
              lVar20 = (longlong)(int)local_170;
              local_258.AttrName.Data.ArrayNum = local_2a8.Data.ArrayNum;
              local_258.AttrName.Data.ArrayMax = local_2a8.Data.ArrayMax;
              local_2a8.Data.ArrayNum = 0;
              local_2a8.Data.ArrayMax = 0;
              local_258.AttrValueString.Data.ArrayNum = (int)local_170;
              if ((int)local_170 == 0) {
                local_258.AttrValueString.Data._8_8_ = local_170 & 0xffffffff;
              }
              else {
                in_stack_fffffffffffffd28 = &local_258.AttrValueString.Data.ArrayMax;
                Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,(int)local_170,0,(ForAnyElementType *)&local_258.AttrValueString,
                           (int)local_170,in_stack_fffffffffffffd28);
                memcpy(local_258.AttrValueString.Data.AllocatorInstance.Data,pvVar14,lVar20 * 2);
              }
              local_258.AttrValueNumber = 0.0;
              local_258.AttrValueBool = false;
              local_258.AttrType = String;
              if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
              }
              if (local_2b8.Data <= &local_258) {
                piVar16 = (int *)(longlong)local_2b0._4_4_;
                if ((&local_258 <
                     (FAnalyticsEventAttribute *)(local_2b8.Data + (longlong)piVar16 * 0x30)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), in_stack_fffffffffffffd28 = piVar16, bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              iVar9 = (int)local_2b0;
              if ((int)local_2b0 == local_2b0._4_4_) {
                iVar9 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x830,&local_2b8,(int *)((longlong)&local_2b0 + 4));
              }
              lVar20 = (longlong)iVar9;
              local_2b0 = CONCAT44(local_2b0._4_4_,iVar9 + 1);
              *(undefined8 *)&local_2b8.Data[lVar20 * 0x30].field_0x0 = 0;
              *(FScriptContainerElement **)&local_2b8.Data[lVar20 * 0x30].field_0x0 =
                   local_258.AttrName.Data.AllocatorInstance.Data;
              *(int *)(local_2b8.Data + lVar20 * 0x30 + 8) = local_258.AttrName.Data.ArrayNum;
              *(int *)(local_2b8.Data + lVar20 * 0x30 + 0xc) = local_258.AttrName.Data.ArrayMax;
              *(undefined8 *)(local_2b8.Data + lVar20 * 0x30 + 0x10) = 0;
              *(FScriptContainerElement **)(local_2b8.Data + lVar20 * 0x30 + 0x10) =
                   local_258.AttrValueString.Data.AllocatorInstance.Data;
              *(int *)(local_2b8.Data + lVar20 * 0x30 + 0x18) =
                   local_258.AttrValueString.Data.ArrayNum;
              *(int *)(local_2b8.Data + lVar20 * 0x30 + 0x1c) =
                   local_258.AttrValueString.Data.ArrayMax;
              *(double *)(local_2b8.Data + lVar20 * 0x30 + 0x20) = local_258.AttrValueNumber;
              local_2b8.Data[lVar20 * 0x30 + 0x28] =
                   (FScriptContainerElement)local_258.AttrValueBool;
              *(AttrTypeEnum *)(local_2b8.Data + lVar20 * 0x30 + 0x2c) = local_258.AttrType;
              local_258.AttrValueString.Data.ArrayNum = 0;
              local_258.AttrValueString.Data.ArrayMax = 0;
              local_258.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
              ;
              local_258.AttrName.Data.ArrayNum = 0;
              local_258.AttrName.Data.ArrayMax = 0;
              local_258.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if (local_178 != (void *)0x0) {
                FMemory::Free(local_178);
              }
              iVar7 = iVar7 + 1;
            }
          }
          if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    this_00 = *(FName *)((longlong)this_00 + 0x48);
  } while( true );
}

// GeneratePipelineInstance @ 14e4f5130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UInterchangePipelineBase * __cdecl
UE::Interchange::GeneratePipelineInstance(FSoftObjectPath *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UPackage *pUVar5;
  UInterchangePipelineBase *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  longlong *plVar9;
  ForAnyElementType FVar10;
  undefined1 auStackY_1b8 [32];
  FSoftObjectPath local_168;
  FSoftObjectPath local_148;
  FSoftObjectPath local_128;
  FTopLevelAssetPath local_108;
  FString local_f8;
  FTopLevelAssetPath local_e8;
  FString local_d8;
  FTopLevelAssetPath local_c8;
  FString local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pUVar5 = GetTransientPackage();
  if (pUVar5 == (UPackage *)0x0) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6687235758857649215>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\InterchangeManager.cpp"
                       ,0x3c1,"PipelineInstancePackage");
    if (!bVar4) {
      return (UInterchangePipelineBase *)0x0;
    }
    pcVar3 = (code *)swi(3);
    pUVar6 = (UInterchangePipelineBase *)(*pcVar3)();
    return pUVar6;
  }
  pUVar6 = (UInterchangePipelineBase *)
           FSoftObjectPath::TryLoad(param_1,(FUObjectSerializeContext *)0x0);
  if (pUVar6 == (UInterchangePipelineBase *)0x0) {
    return (UInterchangePipelineBase *)0x0;
  }
  pUVar8 = (UClass *)0x0;
  pUVar7 = UInterchangeBlueprintPipelineBase::StaticClass();
  iVar1 = (int)pUVar7->_padding_;
  if ((iVar1 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar7->_padding_)) {
    lVar2 = *(longlong *)&(pUVar6->DestinationName).Data.ArrayNum;
    if ((lVar2 != 0) && (pUVar7 = Z_Construct_UClass_UObject_NoRegister(), pUVar7 != (UClass *)0x0))
    {
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (lVar2 = *(longlong *)&(pUVar6->DestinationName).Data.ArrayNum, lVar2 != 0)) {
        pUVar7 = Z_Construct_UClass_UObject_NoRegister();
        if (pUVar7 != (UClass *)0x0) {
          iVar1 = (int)pUVar7->_padding_;
          if ((*(int *)(lVar2 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar7->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            pUVar8 = *(UClass **)&(pUVar6->DestinationName).Data.ArrayNum;
          }
        }
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar5,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar7 = Z_Construct_UClass_UInterchangePipelineBase_NoRegister();
        CheckIsClassChildOf_Internal(pUVar7,pUVar8);
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_a8,pUVar8);
        local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
        local_a8._56_8_ = (UPackage *)0x0;
        local_a8._16_4_ = 0;
        local_a8._20_4_ = 0;
        local_a8._24_4_ = RF_NoFlags;
        local_a8._40_8_ = (UObject *)0x0;
        local_a8[0x20] = false;
        local_a8._8_8_ = pUVar5;
        pUVar6 = (UInterchangePipelineBase *)
                 StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
        if (local_a8._64_8_ != 0) {
          plVar9 = (longlong *)(local_a8 + 0x50);
          if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
            plVar9 = (longlong *)local_a8._104_8_;
          }
          (**(code **)(*plVar9 + 0x10))();
        }
        goto LAB_14e4f5480;
      }
    }
    if ((byte)LogInterchangeEngine._0_1_ < 2) {
      return (UInterchangePipelineBase *)0x0;
    }
    local_108.PackageName = (param_1->AssetPath).PackageName;
    local_108.AssetName = (param_1->AssetPath).AssetName;
    local_168.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_168.AssetPath.PackageName.Number = 0;
    local_168.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_168.AssetPath.AssetName.Number = 0;
    local_168.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.SubPathString.Data.ArrayNum = 0;
    local_168.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_168,&local_108);
    FSoftObjectPath::ToString(&local_168,&local_f8);
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeEngine);
    FVar10.Data = local_168.SubPathString.Data.AllocatorInstance.Data;
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      FVar10.Data = local_168.SubPathString.Data.AllocatorInstance.Data;
    }
LAB_14e4f5509:
    if (FVar10.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar10.Data);
      return (UInterchangePipelineBase *)0x0;
    }
    return (UInterchangePipelineBase *)0x0;
  }
  pUVar8 = UInterchangePythonPipelineAsset::StaticClass();
  iVar1 = (int)pUVar8->_padding_;
  if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar8->_padding_)) {
    pUVar8 = Z_Construct_UClass_UInterchangePipelineBase_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar8->_padding_)) {
      if ((byte)LogInterchangeEngine._0_1_ < 2) {
        return (UInterchangePipelineBase *)0x0;
      }
      local_c8.PackageName = (param_1->AssetPath).PackageName;
      local_c8.AssetName = (param_1->AssetPath).AssetName;
      local_128.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_128.AssetPath.PackageName.Number = 0;
      local_128.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_128.AssetPath.AssetName.Number = 0;
      local_128.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.SubPathString.Data.ArrayNum = 0;
      local_128.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_128,&local_c8);
      FSoftObjectPath::ToString(&local_128,&local_b8);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeEngine);
      FVar10.Data = local_128.SubPathString.Data.AllocatorInstance.Data;
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        FVar10.Data = local_128.SubPathString.Data.AllocatorInstance.Data;
      }
      goto LAB_14e4f5509;
    }
  }
  else {
    pUVar6 = (UInterchangePipelineBase *)(pUVar6->Results).field0_0x0.DebugPtr;
    if (pUVar6 == (UInterchangePipelineBase *)0x0) {
      if ((byte)LogInterchangeEngine._0_1_ < 2) {
        return (UInterchangePipelineBase *)0x0;
      }
      local_e8.PackageName = (param_1->AssetPath).PackageName;
      local_e8.AssetName = (param_1->AssetPath).AssetName;
      local_148.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_148.AssetPath.PackageName.Number = 0;
      local_148.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_148.AssetPath.AssetName.Number = 0;
      local_148.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_148.SubPathString.Data.ArrayNum = 0;
      local_148.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_148,&local_e8);
      FSoftObjectPath::ToString(&local_148,&local_d8);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeEngine);
      FVar10.Data = local_148.SubPathString.Data.AllocatorInstance.Data;
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        FVar10.Data = local_148.SubPathString.Data.AllocatorInstance.Data;
      }
      goto LAB_14e4f5509;
    }
  }
  pUVar6 = DuplicateObject<UInterchangePipelineBase>(pUVar6,(UObject *)pUVar5,(FName)0x0);
LAB_14e4f5480:
  if (pUVar6 != (UInterchangePipelineBase *)0x0) {
    UObjectBaseUtility::ClearFlags
              ((UObjectBaseUtility *)pUVar6,RF_Transactional|RF_Standalone|RF_Public);
    return pUVar6;
  }
  return (UInterchangePipelineBase *)0x0;
}

// GetLogInterchangePtr @ 14e4f6dc0

/* WARNING: Enum "Type": Some values do not have unique names */

FLogCategoryBase * __cdecl UE::Interchange::Private::GetLogInterchangePtr(void)

{
  return (FLogCategoryBase *)&LogInterchangeEngine;
}

// GetPipelineArrayFromSoftObjectArray @ 14e4f7200

TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> * __cdecl
UE::Interchange::Private::GetPipelineArrayFromSoftObjectArray
          (TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> *pTVar8;
  FSoftObjectPath *pFVar9;
  FSoftObjectPath *pFVar10;
  undefined1 local_res8 [8];
  UInterchangePipelineBase *local_28 [2];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = param_1->ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar3 = param_1->ArrayNum;
  pFVar10 = (FSoftObjectPath *)(param_1->AllocatorInstance).Data;
  pFVar9 = pFVar10 + iVar3;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSoftObjectPath_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar9) break;
    local_28[0] = GeneratePipelineInstance(pFVar10);
    if (local_28[0] != (UInterchangePipelineBase *)0x0) {
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar4 <= (FScriptContainerElement *)local_28) &&
         ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)*piVar1 * 8)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar8;
        }
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(UInterchangePipelineBase **)
       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_28[0];
    }
    pFVar10 = pFVar10 + 1;
  }
  return __return_storage_ptr__;
}

// InternalGetPackageName @ 14e4fd9d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Interchange::Private::InternalGetPackageName
          (FImportAsyncHelper *param_1,int param_2,FString *param_3,
          UInterchangeFactoryBaseNode *param_4,FString *param_5,FString *param_6)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  UInterchangeManager *pUVar7;
  size_t sVar8;
  FString *pFVar9;
  ForAnyElementType FVar10;
  wchar_t *_Str;
  bool bVar11;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  wchar_t *local_98;
  int local_90;
  FString local_88;
  TStringView<wchar_t> local_78;
  FScriptContainerElement *local_68;
  int local_60;
  TStringView<wchar_t> local_58;
  FScriptContainerElement *local_48;
  int local_40;
  FString local_38;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId34,"UE::Interchange::Private::InternalGetPackageName",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskImportObject.cpp"
               ,0x22);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId34);
  }
  uVar4 = 0;
  if (param_2 < (param_1->SourceDatas).ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(longlong *)((param_1->SourceDatas).AllocatorInstance.Data + (longlong)param_2 * 8) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskImportObject.cpp"
                         ,0x24,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (**(code **)(param_4->_padding_ + 0x2d8))(param_4,&local_98);
  uVar4 = local_90 - 1;
  if (local_90 == 0) {
    uVar4 = 0;
  }
  ::FString::AssignRange(param_6,local_98,uVar4);
  pUVar7 = UInterchangeManager::GetInterchangeManager();
  UInterchangeManager::SanitizeNameInline(pUVar7,param_6,LongPackage|ObjectPath|ObjectName);
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  UInterchangeFactoryBaseNode::GetCustomSubPath(param_4,&local_b8);
  local_68 = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    local_68 = local_b8.Data.AllocatorInstance.Data;
  }
  if ((param_3->Data).ArrayNum == 0) {
    local_78.DataPtr = L"";
  }
  else {
    local_78.DataPtr = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  iVar5 = 0;
  local_78.Size = iVar5;
  if ((FScriptContainerElement *)local_78.DataPtr != (FScriptContainerElement *)0x0) {
    sVar8 = wcslen(local_78.DataPtr);
    local_78.Size = (int)sVar8;
  }
  local_60 = iVar5;
  if (local_68 != (FScriptContainerElement *)0x0) {
    sVar8 = wcslen((wchar_t *)local_68);
    local_60 = (int)sVar8;
  }
  FPaths::CombineInternal(&local_a8,&local_78,2);
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_a8.Data.ArrayNum != 0) {
    FVar10.Data = local_a8.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_88,(wchar_t *)FVar10.Data);
  iVar6 = GetAssetNameMaxCharCount(&local_88);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pFVar9 = GetAssetNameWBudget(&local_38,param_6,iVar6,L'_');
  if (param_6 != pFVar9) {
    pFVar1 = (param_6->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_6->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_6->Data).ArrayNum = (pFVar9->Data).ArrayNum;
    (param_6->Data).ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((param_6->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_6->Data).AllocatorInstance.Data;
  }
  local_58.DataPtr = L"";
  if (local_a8.Data.ArrayNum != 0) {
    local_58.DataPtr = (wchar_t *)local_a8.Data.AllocatorInstance.Data;
  }
  local_58.Size = iVar5;
  if ((FScriptContainerElement *)local_58.DataPtr != (FScriptContainerElement *)0x0) {
    sVar8 = wcslen(local_58.DataPtr);
    local_58.Size = (int)sVar8;
  }
  local_48 = (FScriptContainerElement *)_Str;
  if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
    sVar8 = wcslen(_Str);
    iVar5 = (int)sVar8;
  }
  local_40 = iVar5;
  FPaths::CombineInternal(&local_c8,&local_58,2);
  if (param_5 != &local_c8) {
    pFVar1 = (param_5->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_5->Data).AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
    (param_5->Data).ArrayNum = local_c8.Data.ArrayNum;
    (param_5->Data).ArrayMax = local_c8.Data.ArrayMax;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pUVar7 = UInterchangeManager::GetInterchangeManager();
  UInterchangeManager::SanitizeNameInline(pUVar7,param_5,LongPackage|ObjectPath);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_98 != (wchar_t *)0x0) {
    FMemory::Free(local_98);
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InternalImportObjectStartup @ 14e4fddb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FImportAssetResult * __cdecl
UE::Interchange::Private::InternalImportObjectStartup
          (FImportAssetResult *__return_storage_ptr__,
          TSharedPtr<UE::Interchange::FImportAsyncHelper,1> *param_1,
          UInterchangeFactoryBaseNode *param_2,int param_3,FString *param_4,
          TFunction<UInterchangeFactoryBase::FImportAssetResult___cdecl(UInterchangeFactoryBase::FImportAssetObjectParams_&)>
          *param_5)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  void *_Src;
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  FImportAssetResult *pFVar9;
  longlong lVar10;
  FImportAsyncHelper *pFVar11;
  FString *pFVar12;
  UInterchangeFactoryBase *pUVar13;
  UObject *pUVar14;
  UPackage *this;
  undefined8 uVar15;
  undefined8 *puVar16;
  UInterchangeResultError_Generic *pUVar17;
  UObject *pUVar18;
  FText *pFVar19;
  uint uVar20;
  longlong *plVar21;
  UInterchangeBaseNodeContainer *pUVar22;
  uint uVar23;
  UInterchangeBaseNodeContainer *pUVar24;
  longlong lVar25;
  FString local_1d8;
  FString local_1c8;
  FImportAsyncHelper *local_1b8;
  FImportAssetResult *local_1a8;
  UObject *local_1a0;
  FImportAsyncHelper *local_198;
  undefined1 local_190;
  undefined7 uStack_18f;
  UObject *pUStack_188;
  FString local_180;
  FString local_170;
  void *local_160;
  undefined8 local_158;
  UPackage *local_148;
  FString local_140;
  UInterchangeFactoryBaseNode *local_130;
  UInterchangeFactoryBase *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  UObject *pUStack_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  undefined1 local_48 [16];
  
  pUVar24 = (UInterchangeBaseNodeContainer *)0x0;
  lVar25 = (longlong)param_3;
  local_1b8 = (FImportAsyncHelper *)param_4;
  local_1a0 = (UObject *)((ulonglong)local_1a0 & 0xffffffff00000000);
  local_1a8 = __return_storage_ptr__;
  if ((param_1->Object == (FImportAsyncHelper *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AsyncHelper.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskImportObject.cpp"
                         ,0x96,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FImportAssetResult *)(*pcVar1)();
    return pFVar9;
  }
  local_190 = 0;
  pUStack_188 = (UObject *)0x0;
  if ((param_1->Object == (FImportAsyncHelper *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    pFVar9 = (FImportAssetResult *)(*pcVar1)();
    return pFVar9;
  }
  if ((param_1->Object->bCancel == (atomic<bool>)0x0) &&
     (param_2 != (UInterchangeFactoryBaseNode *)0x0)) {
    if ((param_1->Object == (FImportAsyncHelper *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      pFVar9 = (FImportAssetResult *)(*pcVar1)();
      return pFVar9;
    }
    if ((((param_1->Object->bRuntimeOrPIE != false) &&
         (cVar6 = (**(code **)(param_2->_padding_ + 0x308))(param_2), cVar6 == '\0')) ||
        (lVar10 = (**(code **)(param_2->_padding_ + 0x2f8))(param_2), lVar10 == 0)) ||
       (bVar5 = UInterchangeFactoryBaseNode::ShouldSkipNodeImport(param_2), bVar5))
    goto LAB_14e4fdfd2;
    pFVar11 = TSharedPtr<UE::Interchange::FImportAsyncHelper,1>::operator->(param_1);
    pFVar12 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_b8);
    pUVar13 = FImportAsyncHelper::GetCreatedFactory(pFVar11,pFVar12);
    local_198 = (FImportAsyncHelper *)pUVar13;
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (pUVar13 == (UInterchangeFactoryBase *)0x0) {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2649133002084319397>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskImportObject.cpp"
                         ,0xa5,"Factory");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pFVar9 = (FImportAssetResult *)(*pcVar1)();
        return pFVar9;
      }
      if (1 < (byte)LogInterchangeEngine._0_1_) {
        UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_2,&local_a8);
        lVar25 = (**(code **)(param_2->_padding_ + 0x2f8))(param_2);
        local_108 = *(FName *)(lVar25 + 0x18);
        ::FName::ToString(&local_108,&local_e8);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeEngine);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_14e4fdfd2;
    }
    local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1c8.Data.ArrayNum = 0;
    local_1c8.Data.ArrayMax = 0;
    local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.Data.ArrayNum = 0;
    local_1d8.Data.ArrayMax = 0;
    pFVar11 = TSharedPtr<UE::Interchange::FImportAsyncHelper,1>::
              operator*<UE::Interchange::FImportAsyncHelper>(param_1);
    InternalGetPackageName(pFVar11,param_3,(FString *)local_1b8,param_2,&local_1c8,&local_1d8);
    local_160 = (void *)0x0;
    local_158 = 0;
    pFVar11 = TSharedPtr<UE::Interchange::FImportAsyncHelper,1>::operator->(param_1);
    local_1a0 = (pFVar11->TaskData).ReimportObject;
    pUVar14 = (UObject *)
              (**(code **)(pUVar13->_padding_ + 0x348))
                        (pUVar13,local_1a0,param_2,&local_1c8,&local_1d8,&local_160);
    pUVar18 = local_1a0;
    if (pUVar14 != local_1a0) {
      pUVar18 = pUVar14;
    }
    local_1a0 = pUVar18;
    if (local_160 != (void *)0x0) {
      FMemory::Free(local_160);
    }
    uVar20 = 0;
    if (pUVar18 == (UObject *)0x0) {
      TSharedPtr<UE::Interchange::FImportAsyncHelper,1>::operator->(param_1);
      local_1b8 = TSharedPtr<UE::Interchange::FImportAsyncHelper,1>::operator->(param_1);
      lpCriticalSection = &local_1b8->CreatedPackagesLock;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_1b8 = (FImportAsyncHelper *)&local_1b8->CreatedPackages;
      uVar7 = local_1c8.Data.ArrayNum - 1;
      FVar2.Data = local_1c8.Data.AllocatorInstance.Data;
      if (local_1c8.Data.ArrayNum == 0) {
        uVar7 = uVar20;
        FVar2.Data = (FScriptContainerElement *)L"";
      }
      uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar7,(wchar_t *)FVar2.Data);
      pFVar11 = local_1b8;
      iVar8 = TSet<TTuple<FString,UPackage_*>,TDefaultMapHashableKeyFuncs<FString,UPackage_*,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,UPackage_*>,TDefaultMapHashableKeyFuncs<FString,UPackage_*,0>,FDefaultSetAllocator>
                          *)local_1b8,uVar7,&local_1c8);
      if (iVar8 == -1) {
LAB_14e4fe729:
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
LAB_14e4fe732:
        pUVar17 = UInterchangeFactoryBase::AddMessage<UInterchangeResultError_Generic>
                            ((UInterchangeFactoryBase *)local_198);
        pFVar11 = TSharedPtr<UE::Interchange::FImportAsyncHelper,1>::operator->(param_1);
        uVar7 = uVar20;
        if (param_3 < (pFVar11->SourceDatas).ArrayNum) {
          uVar7 = (uint)~param_3 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          pFVar9 = (FImportAssetResult *)(*pcVar1)();
          return pFVar9;
        }
        lVar25 = *(longlong *)((pFVar11->SourceDatas).AllocatorInstance.Data + lVar25 * 8);
        local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_180.Data.ArrayNum = *(int *)(lVar25 + 0x30);
        lVar10 = (longlong)local_180.Data.ArrayNum;
        _Src = *(void **)(lVar25 + 0x28);
        if (local_180.Data.ArrayNum == 0) {
          local_180.Data.ArrayMax = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_180.Data.ArrayNum,0,(ForAnyElementType *)&local_180,
                     local_180.Data.ArrayNum,&local_180.Data.ArrayMax);
          memcpy(local_180.Data.AllocatorInstance.Data,_Src,lVar10 * 2);
        }
        ::FString::operator=((FString *)&pUVar17->_padding_,&local_180);
        if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data.AllocatorInstance.Data);
        }
        uVar7 = local_1d8.Data.ArrayNum - 1;
        if (local_1d8.Data.ArrayNum == 0) {
          uVar7 = uVar20;
        }
        ::FString::AssignRange
                  ((FString *)&pUVar17->_padding_,(wchar_t *)local_1d8.Data.AllocatorInstance.Data,
                   uVar7);
        pUVar18 = (UObject *)(**(code **)(param_2->_padding_ + 0x2f8))(param_2);
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UObject *)0x0)) {
          GC::MarkAsReachable(pUVar18);
        }
        pUVar17->_padding_ = (longlong)pUVar18;
        pFVar19 = FText::AsLocalizable_Advanced_LocText
                            (&local_58,L"InternalImportObjectStartup",L"BadPackage",
                             L"It was not possible to create the asset because its package was not created correctly."
                            );
        FText::operator=(&pUVar17->Text,pFVar19);
        local_68.TextData.Reference = local_58.TextData.Reference;
      }
      else {
        lVar10 = (longlong)iVar8 * 0x20 + pFVar11->_padding_;
        pUVar22 = (UInterchangeBaseNodeContainer *)(lVar10 + 0x10);
        if (lVar10 == 0) {
          pUVar22 = pUVar24;
        }
        if (pUVar22 == (UInterchangeBaseNodeContainer *)0x0) goto LAB_14e4fe729;
        this = (UPackage *)pUVar22->_padding_;
        local_1b8 = (FImportAsyncHelper *)this;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (this == (UPackage *)0x0) goto LAB_14e4fe732;
        pFVar11 = TSharedPtr<UE::Interchange::FImportAsyncHelper,1>::operator->(param_1);
        if (((-1 < param_3) && (param_3 < (pFVar11->SourceDatas).ArrayNum)) &&
           (pFVar11 = TSharedPtr<UE::Interchange::FImportAsyncHelper,1>::operator->(param_1),
           param_3 < (pFVar11->Translators).ArrayNum)) goto LAB_14e4fe31f;
        pUVar17 = UInterchangeFactoryBase::AddMessage<UInterchangeResultError_Generic>
                            ((UInterchangeFactoryBase *)local_198);
        uVar7 = local_1d8.Data.ArrayNum - 1;
        if (local_1d8.Data.ArrayNum == 0) {
          uVar7 = uVar20;
        }
        ::FString::AssignRange
                  ((FString *)&pUVar17->_padding_,(wchar_t *)local_1d8.Data.AllocatorInstance.Data,
                   uVar7);
        pUVar18 = (UObject *)(**(code **)(param_2->_padding_ + 0x2f8))(param_2);
        if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UObject *)0x0)) {
          GC::MarkAsReachable(pUVar18);
        }
        pUVar17->_padding_ = (longlong)pUVar18;
        pFVar19 = FText::AsLocalizable_Advanced_LocText
                            (&local_68,L"InternalImportObjectStartup",
                             L"SourceDataOrTranslatorInvalid",
                             L"It was not possible to create the asset because its translator was not created correctly."
                            );
        FText::operator=(&pUVar17->Text,pFVar19);
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
    }
    else {
      pFVar11 = TSharedPtr<UE::Interchange::FImportAsyncHelper,1>::operator->(param_1);
      if ((-1 < param_3) && (param_3 < (pFVar11->BaseNodeContainers).ArrayNum)) {
        pFVar11 = TSharedPtr<UE::Interchange::FImportAsyncHelper,1>::operator->(param_1);
        uVar7 = 0;
        if (param_3 < (pFVar11->BaseNodeContainers).ArrayNum) {
          uVar7 = (uint)~param_3 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          pFVar9 = (FImportAssetResult *)(*pcVar1)();
          return pFVar9;
        }
        pUVar24 = *(UInterchangeBaseNodeContainer **)
                   ((pFVar11->BaseNodeContainers).AllocatorInstance.Data + lVar25 * 8);
      }
      pUVar18 = local_1a0;
      bVar5 = ShouldReimportFactoryNode(param_2,pUVar24,local_1a0);
      if (bVar5) {
        this = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)pUVar18);
        local_1b8 = (FImportAsyncHelper *)this;
        pFVar12 = UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)this,&local_98,(UObject *)0x0);
        if (&local_1c8 != pFVar12) {
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
          local_1c8.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
          (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1c8.Data.ArrayNum = (pFVar12->Data).ArrayNum;
          local_1c8.Data.ArrayMax = (pFVar12->Data).ArrayMax;
          (pFVar12->Data).ArrayNum = 0;
          (pFVar12->Data).ArrayMax = 0;
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        local_100.ComparisonIndex.Value = *(uint *)&local_1a0->field_0x18;
        local_100.Number = *(uint *)&local_1a0->field_0x1c;
        ::FName::ToString(&local_100,&local_170);
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        local_1d8.Data.AllocatorInstance.Data = local_170.Data.AllocatorInstance.Data;
        local_1d8.Data.ArrayNum = local_170.Data.ArrayNum;
        local_1d8.Data.ArrayMax = local_170.Data.ArrayMax;
        local_170.Data.ArrayNum = 0;
        local_170.Data.ArrayMax = 0;
        local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_14e4fe31f:
        pFVar11 = TSharedPtr<UE::Interchange::FImportAsyncHelper,1>::operator->(param_1);
        if ((pFVar11->TaskData).bFollowRedirectors != false) {
          local_f8 = (FName)this->_padding_;
          ::FName::ToString(&local_f8,&local_d8);
          if (local_d8.Data.ArrayNum == local_1c8.Data.ArrayNum) {
            if (1 < local_d8.Data.ArrayNum) {
              iVar8 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)local_d8.Data.AllocatorInstance.Data,
                                 (wchar_t *)local_1c8.Data.AllocatorInstance.Data);
              bVar5 = iVar8 == 0;
              goto LAB_14e4fe371;
            }
            bVar3 = false;
LAB_14e4fe3ca:
            bVar5 = false;
            bVar4 = false;
            if (bVar3) goto LAB_14e4fe3d0;
          }
          else {
            bVar5 = local_d8.Data.ArrayNum + local_1c8.Data.ArrayNum == 1;
LAB_14e4fe371:
            bVar3 = false;
            if (bVar5) goto LAB_14e4fe3ca;
            pFVar12 = FPackageName::GetLongPackageAssetName(&local_88,&local_1c8);
            iVar8 = (pFVar12->Data).ArrayNum;
            if (iVar8 == local_1d8.Data.ArrayNum) {
              if (1 < iVar8) {
                iVar8 = FGenericPlatformStricmp::Stricmp
                                  ((wchar_t *)(pFVar12->Data).AllocatorInstance.Data,
                                   (wchar_t *)local_1d8.Data.AllocatorInstance.Data);
                bVar5 = iVar8 == 0;
                goto LAB_14e4fe3b5;
              }
            }
            else {
              bVar5 = iVar8 + local_1d8.Data.ArrayNum == 1;
LAB_14e4fe3b5:
              bVar3 = true;
              if (!bVar5) goto LAB_14e4fe3ca;
            }
            bVar4 = true;
LAB_14e4fe3d0:
            bVar5 = bVar4;
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
          }
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          if (bVar5) {
            local_f0 = (FName)this->_padding_;
            ::FName::ToString(&local_f0,&local_c8);
            pFVar12 = FPackageName::GetLongPackageAssetName(&local_78,&local_c8);
            if (&local_1d8 != pFVar12) {
              if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
              }
              local_1d8.Data.AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
              (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1d8.Data.ArrayNum = (pFVar12->Data).ArrayNum;
              local_1d8.Data.ArrayMax = (pFVar12->Data).ArrayMax;
              (pFVar12->Data).ArrayNum = 0;
              (pFVar12->Data).ArrayMax = 0;
            }
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
          }
        }
        local_198 = TSharedPtr<UE::Interchange::FImportAsyncHelper,1>::operator->(param_1);
        uVar23 = (uint)~param_3 >> 0x1f;
        uVar7 = uVar20;
        if (param_3 < (local_198->Translators).ArrayNum) {
          uVar7 = uVar23;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          pFVar9 = (FImportAssetResult *)(*pcVar1)();
          return pFVar9;
        }
        local_198 = *(FImportAsyncHelper **)
                     ((local_198->Translators).AllocatorInstance.Data + lVar25 * 8);
        local_148 = (UPackage *)0x0;
        local_140.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_140.Data.ArrayNum = 0;
        local_140.Data.ArrayMax = 0;
        local_130 = (UInterchangeFactoryBaseNode *)0x0;
        uVar7 = local_1d8.Data.ArrayNum - 1;
        if (local_1d8.Data.ArrayNum == 0) {
          uVar7 = uVar20;
        }
        local_128 = (UInterchangeFactoryBase *)0x0;
        uStack_120 = 0;
        local_118 = 0;
        pUStack_110 = (UObject *)0x0;
        ::FString::AssignRange(&local_140,(wchar_t *)local_1d8.Data.AllocatorInstance.Data,uVar7);
        local_148 = (UPackage *)local_1b8;
        local_130 = param_2;
        pFVar11 = TSharedPtr<UE::Interchange::FImportAsyncHelper,1>::operator->(param_1);
        if (param_3 < (pFVar11->SourceDatas).ArrayNum) {
          uVar20 = uVar23;
        }
        if ((uVar20 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          pFVar9 = (FImportAssetResult *)(*pcVar1)();
          return pFVar9;
        }
        uStack_120 = *(undefined8 *)((pFVar11->SourceDatas).AllocatorInstance.Data + lVar25 * 8);
        local_128 = (UInterchangeFactoryBase *)local_198;
        pFVar11 = TSharedPtr<UE::Interchange::FImportAsyncHelper,1>::operator->(param_1);
        if ((-1 < param_3) && (param_3 < (pFVar11->BaseNodeContainers).ArrayNum)) {
          pFVar11 = TSharedPtr<UE::Interchange::FImportAsyncHelper,1>::operator->(param_1);
          uVar20 = 0;
          if (param_3 < (pFVar11->BaseNodeContainers).ArrayNum) {
            uVar20 = uVar23;
          }
          if ((uVar20 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar1 = (code *)swi(3);
            pFVar9 = (FImportAssetResult *)(*pcVar1)();
            return pFVar9;
          }
          local_118 = *(undefined8 *)
                       ((pFVar11->BaseNodeContainers).AllocatorInstance.Data + lVar25 * 8);
        }
        pUStack_110 = local_1a0;
        Core::Private::Function::CheckCallable(*(void **)param_5);
        pcVar1 = *(code **)param_5;
        plVar21 = (longlong *)&param_5->field_0x10;
        if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
          plVar21 = *(longlong **)&param_5->field_0x28;
        }
        uVar15 = (**(code **)(*plVar21 + 8))();
        puVar16 = (undefined8 *)(*pcVar1)(local_48,uVar15,&local_148);
        pFVar9 = local_1a8;
        pUVar18 = (UObject *)puVar16[1];
        *(undefined8 *)local_1a8 = *puVar16;
        local_1a8->ImportedObject = pUVar18;
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->SharedReferenceCount).ReferenceController);
        if (*(longlong *)param_5 == 0) {
          return pFVar9;
        }
        plVar21 = (longlong *)&param_5->field_0x10;
        if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
          plVar21 = *(longlong **)&param_5->field_0x28;
        }
        lVar25 = *plVar21;
        goto LAB_14e4fdffe;
      }
    }
    pFVar9 = local_1a8;
    *(ulonglong *)local_1a8 = CONCAT71(uStack_18f,local_190);
    local_1a8->ImportedObject = pUStack_188;
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
  }
  else {
LAB_14e4fdfd2:
    *(ulonglong *)local_1a8 = CONCAT71(uStack_18f,local_190);
    local_1a8->ImportedObject = pUStack_188;
    pFVar9 = local_1a8;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  if (*(longlong *)param_5 == 0) {
    return pFVar9;
  }
  plVar21 = (longlong *)&param_5->field_0x10;
  if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
    plVar21 = *(longlong **)&param_5->field_0x28;
  }
  lVar25 = *plVar21;
LAB_14e4fdffe:
  (**(code **)(lVar25 + 0x10))(plVar21);
  return pFVar9;
}

// PurgeObject @ 14e500690

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UE::Interchange::Private::ObjectDeletionUtils::PurgeObject(UObject *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FUObjectItem *pFVar4;
  UPackage *pUVar5;
  uint uVar6;
  
  if (param_1 != (UObject *)0x0) {
    UObjectBase::AtomicallyClearFlags
              ((UObjectBase *)param_1,RF_Transactional|RF_Standalone|RF_Public);
    pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
    FUObjectItem::ClearRootFlags(pFVar4,Async);
    UObjectBase::AtomicallySetFlags((UObjectBase *)param_1,RF_Transient);
    pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
    if ((((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsRooted()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                           ,0xb8,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UObjectBase::AtomicallySetFlags((UObjectBase *)param_1,RF_MirroredGarbage);
    pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
    do {
      lVar1 = (pFVar4->field0_0x0).FlagsAndRefCount;
      uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
      if ((uVar6 >> 0x15 & 1) != 0) break;
      if (((ulonglong)pFVar4 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar3 = lVar1 == (pFVar4->field0_0x0).FlagsAndRefCount;
      if (bVar3) {
        (pFVar4->field0_0x0).FlagsAndRefCount =
             (longlong)(int)uVar6 << 0x20 | (longlong)(int)lVar1 | 0x20000000000000;
      }
      UNLOCK();
    } while (!bVar3);
    pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
    FUObjectItem::ClearRootFlags(pFVar4,Async);
    pUVar5 = GetTransientPackage();
    UObject::Rename(param_1,(wchar_t *)0x0,(UObject *)pUVar5,0x30);
  }
  return;
}

// RecursivelyDuplicateFactoryNodeDependencies @ 14e500800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UE::Interchange::Private::ImportCommon::RecursivelyDuplicateFactoryNodeDependencies
          (UInterchangeBaseNodeContainer *param_1,UInterchangeBaseNodeContainer *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  int iVar2;
  UInterchangeFactoryBaseNode *this;
  UInterchangeBaseNode *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_158 [32];
  undefined1 local_138 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  undefined1 local_e8 [128];
  void *local_68;
  undefined4 local_60;
  ulonglong local_48;
  
  if (param_2 != (UInterchangeBaseNodeContainer *)0x0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
    pFVar6 = (param_3->AllocatorInstance).Data;
    iVar1 = param_3->ArrayNum;
    pFVar9 = pFVar6 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (param_3->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_138);
      }
      if (pFVar6 == pFVar9) break;
      this = UInterchangeBaseNodeContainer::GetFactoryNode(param_1,(FString *)pFVar6);
      if (this != (UInterchangeFactoryBaseNode *)0x0) {
        FObjectDuplicationParameters::FObjectDuplicationParameters
                  ((FObjectDuplicationParameters *)local_e8,(UObject *)this,(UObject *)param_2);
        pUVar3 = (UInterchangeBaseNode *)
                 StaticDuplicateObjectEx((FObjectDuplicationParameters *)local_e8);
        if (pUVar3 == (UInterchangeBaseNode *)0x0) {
          pFVar5 = GetTypeName<UInterchangeBaseNode>(&local_110);
          if ((pFVar5->Data).ArrayNum == 0) {
            pwVar7 = L"";
          }
          else {
            pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(L"nullptr",pwVar7);
        }
        pUVar4 = Z_Construct_UClass_UInterchangeBaseNode_NoRegister();
        iVar2 = (int)pUVar4->_padding_;
        if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar4->_padding_)) {
          pFVar5 = GetTypeName<UInterchangeBaseNode>(&local_100);
          pwVar7 = L"";
          if ((pFVar5->Data).ArrayNum == 0) {
            pwVar8 = L"";
          }
          else {
            pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
          }
          pFVar5 = GetFullNameForCastLogError<UObject>(&local_110,(UObject *)pUVar3);
          if ((pFVar5->Data).ArrayNum != 0) {
            pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar7,pwVar8);
        }
        UInterchangeBaseNodeContainer::AddNode(param_2,&local_120,pUVar3);
        if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data.AllocatorInstance.Data);
        }
        local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_130.ArrayNum = 0;
        local_130.ArrayMax = 0;
        UInterchangeFactoryBaseNode::GetFactoryDependencies(this,&local_130);
        RecursivelyDuplicateFactoryNodeDependencies(param_1,param_2,&local_130);
        DestructItems<FString,int>((FString *)local_130.AllocatorInstance.Data,local_130.ArrayNum);
        if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.AllocatorInstance.Data);
        }
        local_60 = 0;
        if (local_68 != (void *)0x0) {
          FMemory::Free(local_68);
        }
        TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_e8 + 0x40));
      }
      pFVar6 = pFVar6 + 0x10;
    }
  }
  return;
}

// ShouldReimportFactoryNode @ 14e508b40

bool __cdecl
UE::Interchange::Private::ShouldReimportFactoryNode
          (UInterchangeFactoryBaseNode *param_1,UInterchangeBaseNodeContainer *param_2,
          UObject *param_3)

{
  int iVar1;
  UInterchangeBaseNodeContainer *this;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  UInterchangeAssetImportData *this_00;
  UInterchangeFactoryBaseNode *this_01;
  longlong lVar7;
  FString *pFVar8;
  FString *pFVar9;
  bool bVar10;
  FString local_98;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  longlong **local_70;
  code *local_68;
  longlong *local_60;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId57,"UE::Interchange::Private::ShouldReimportFactoryNode",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskImportObject.cpp"
               ,0x39);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId57);
  }
  bVar3 = false;
  if (param_2 == (UInterchangeBaseNodeContainer *)0x0) goto LAB_14e508c8d;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  lVar6 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
  local_70 = &local_88;
  local_60 = &local_78;
  local_68 = Core::Private::Function::
             TFunctionRefCaller<`UE::Interchange::Private::ShouldReimportFactoryNode'::__l2::<lambda_1>,void,FString_const_&,UInterchangeFactoryBaseNode_*>
             ::Call;
  local_78 = lVar6;
  UInterchangeBaseNodeContainer::IterateNodesOfType<UInterchangeFactoryBaseNode>
            (param_2,(TFunctionRef<void___cdecl(FString_const_&,UInterchangeFactoryBaseNode_*)> *)
                     &local_68);
  if ((int)local_80 == 1) {
    if (((UInterchangeFactoryBaseNode *)*local_88 != param_1) &&
       (bVar3 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2649133002084319312>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskImportObject.cpp"
                           ,0x50,"PotentialFactoryNodes[0] == FactoryNode"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (lVar6 == 0) goto LAB_14e508c6c;
    if ((*(int *)(*(longlong *)&param_3->field_0x10 + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)&param_3->field_0x10 + 0x30) +
         (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) goto LAB_14e508c6c;
LAB_14e508e68:
    bVar3 = true;
  }
  else {
    this_00 = UInterchangeAssetImportData::GetFromObject(param_3);
    if (this_00 != (UInterchangeAssetImportData *)0x0) {
      UInterchangeAssetImportData::ProcessContainerCache(this_00);
      this = (this_00->TransientNodeContainer).field0_0x0.DebugPtr;
      if (((this != (UInterchangeBaseNodeContainer *)0x0) &&
          (this_01 = UInterchangeBaseNodeContainer::GetFactoryNode(this,&this_00->NodeUniqueID),
          this_01 != (UInterchangeFactoryBaseNode *)0x0)) &&
         (lVar7 = (**(code **)(this_01->_padding_ + 0x2f8))(this_01), lVar6 != 0)) {
        if ((*(int *)(lVar7 + 0x38) < *(int *)(lVar6 + 0x38)) ||
           (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
            lVar6 + 0x30)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pFVar8 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this_01,&local_48);
          pFVar9 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_1,&local_58);
          iVar5 = (pFVar8->Data).ArrayNum;
          iVar1 = (pFVar9->Data).ArrayNum;
          if (iVar5 == iVar1) {
            if (iVar5 < 2) {
              bVar3 = true;
            }
            else {
              iVar5 = wcscmp((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                             (wchar_t *)(pFVar9->Data).AllocatorInstance.Data);
              bVar3 = iVar5 == 0;
            }
          }
          else {
            bVar3 = iVar1 + iVar5 == 1;
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (bVar3) {
            bVar3 = true;
            goto LAB_14e508c6f;
          }
          pFVar8 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)this_01,&local_28);
          pFVar9 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_1,&local_38);
          iVar5 = (pFVar8->Data).ArrayNum;
          iVar1 = (pFVar9->Data).ArrayNum;
          if (iVar5 == iVar1) {
            if (iVar5 < 2) {
              bVar3 = true;
            }
            else {
              iVar5 = wcscmp((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                             (wchar_t *)(pFVar9->Data).AllocatorInstance.Data);
              bVar3 = iVar5 == 0;
            }
          }
          else {
            bVar3 = iVar1 + iVar5 == 1;
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
          if (bVar3) {
            local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_98.Data.ArrayNum = 0;
            local_98.Data.ArrayMax = 0;
            UInterchangeFactoryBaseNode::GetCustomSubPath(param_1,&local_98);
            UInterchangeFactoryBaseNode::GetCustomSubPath(this_01,&local_98);
            if ((local_98.Data.ArrayNum == 0) || (local_98.Data.ArrayNum == 1)) {
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
              goto LAB_14e508e68;
            }
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
          }
        }
      }
    }
LAB_14e508c6c:
    bVar3 = false;
  }
LAB_14e508c6f:
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
LAB_14e508c8d:
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

// operator() @ 1505972c0

bool __thiscall
`UE::InterchangeTaskParsing::Private::CreateTasksFromData'::__l29::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<261293646941257939>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<261293646941257939>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

