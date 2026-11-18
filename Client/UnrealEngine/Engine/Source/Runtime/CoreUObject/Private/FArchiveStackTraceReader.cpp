// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FArchiveStackTraceReader @ 141ed2000

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FArchiveStackTraceReader * __thiscall
FArchiveStackTraceReader::FArchiveStackTraceReader
          (FArchiveStackTraceReader *this,wchar_t *param_1,uchar *param_2,long64 param_3)

{
  FName *pFVar1;
  uint *puVar2;
  FUObjectThreadContext *pFVar3;
  FName local_res8;
  code *local_18;
  FName *local_10;
  
  pFVar1 = ::FName::FName(&local_res8,param_1);
  FLargeMemoryReader::FLargeMemoryReader
            ((FLargeMemoryReader *)this,param_2,param_3,TakeOwnership,*pFVar1);
  this->_padding_ = (longlong)&___7FArchiveStackTraceReader__6B_;
  (this->SerializeTrace).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SerializeTrace).ArrayNum = 0;
  (this->SerializeTrace).ArrayMax = 0;
  puVar2 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_10 = &local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar3 = (FUObjectThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar2);
  this->ThreadContext = pFVar3;
  return this;
}

// CreateFromFile @ 141ee61b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FArchiveStackTraceReader * __cdecl FArchiveStackTraceReader::CreateFromFile(wchar_t *param_1)

{
  bool bVar1;
  FArchiveStackTraceReader *this;
  FName *pFVar2;
  uint *puVar3;
  FUObjectThreadContext *pFVar4;
  TUniquePtr<unsigned_char,UE::ArchiveStackTrace::FDeleteByFree> TVar5;
  FArchiveStackTraceReader *pFVar6;
  TUniquePtr<unsigned_char,UE::ArchiveStackTrace::FDeleteByFree> local_res10;
  FName local_res18 [2];
  FPackageData local_38;
  
  pFVar6 = (FArchiveStackTraceReader *)0x0;
  local_res10.Ptr = (uchar *)0x0;
  local_38.Data = (uchar *)0x0;
  local_38.Size = 0;
  local_38.HeaderSize = 0;
  local_38.StartOffset = 0;
  bVar1 = UE::ArchiveStackTrace::LoadPackageIntoMemory(param_1,&local_38,&local_res10);
  TVar5.Ptr = local_res10.Ptr;
  if ((bVar1) &&
     (this = ::operator_new(0xd0), TVar5.Ptr = local_res10.Ptr,
     this != (FArchiveStackTraceReader *)0x0)) {
    pFVar2 = ::FName::FName(local_res18,param_1);
    FLargeMemoryReader::FLargeMemoryReader
              ((FLargeMemoryReader *)this,local_res10.Ptr,local_38.Size,TakeOwnership,*pFVar2);
    this->_padding_ = (longlong)&___7FArchiveStackTraceReader__6B_;
    (this->SerializeTrace).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SerializeTrace).ArrayNum = 0;
    (this->SerializeTrace).ArrayMax = 0;
    puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_38.Size = (long64)&local_res10;
    local_38.Data =
         (uchar *)UE::Core::Private::Function::
                  TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                  ::Call;
    pFVar4 = (FUObjectThreadContext *)
             FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar3);
    this->ThreadContext = pFVar4;
    TVar5.Ptr = (uchar *)pFVar6;
    pFVar6 = this;
  }
  FMemory::Free(TVar5.Ptr);
  return pFVar6;
}

// Serialize @ 141f0f3f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FArchiveStackTraceReader::Serialize(FArchiveStackTraceReader *this,void *param_1,long64 param_2)

{
  int *piVar1;
  TArray<FArchiveStackTraceReader::FSerializeData,TSizedDefaultAllocator<32>_> *pTVar2;
  FField *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  UObject *local_40;
  FName local_38;
  FString local_30;
  
  pFVar3 = (FField *)this->_padding_;
  local_58 = this->_padding_;
  local_40 = ((this->ThreadContext->SerializeContext).Reference)->SerializedObject;
  local_48 = 1;
  local_50 = param_2;
  bVar5 = IsThisNotNull(pFVar3,"FField::GetFName");
  if (bVar5) {
    local_38 = pFVar3->NamePrivate;
  }
  else {
    local_38.ComparisonIndex.Value = 0;
    local_38.Number = 0;
  }
  GetFullNameSafe(&local_30,pFVar3);
  iVar6 = (this->SerializeTrace).ArrayNum;
  pTVar2 = &this->SerializeTrace;
  if (iVar6 == 0) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar7 <= (FScriptContainerElement *)&local_58) &&
       ((FScriptContainerElement *)&local_58 <
        pFVar7 + (longlong)(this->SerializeTrace).ArrayMax * 0x38)) {
LAB_141f0f594:
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
  }
  else {
    uVar8 = 0;
    if ((int)(iVar6 - 1U) < iVar6) {
      uVar8 = ~(iVar6 - 1U) >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (this->SerializeTrace).ArrayNum;
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (((local_40 != *(UObject **)(pFVar7 + (longlong)iVar6 * 0x38 + -0x20)) ||
        (local_38 != *(FName *)(pFVar7 + (longlong)iVar6 * 0x38 + -0x18))) ||
       ((local_58 != *(longlong *)(pFVar7 + (longlong)iVar6 * 0x38 + -0x38) &&
        (local_58 + local_50 != *(longlong *)(pFVar7 + (longlong)iVar6 * 0x38 + -0x38))))) {
      *(longlong *)(pFVar7 + (longlong)iVar6 * 0x38 + -0x30) =
           *(longlong *)(pFVar7 + (longlong)iVar6 * 0x38 + -0x30) + param_2;
      *(longlong *)(pFVar7 + (longlong)iVar6 * 0x38 + -0x28) =
           *(longlong *)(pFVar7 + (longlong)iVar6 * 0x38 + -0x28) + 1;
      goto LAB_141f0f61f;
    }
    if ((pFVar7 <= (FScriptContainerElement *)&local_58) &&
       ((FScriptContainerElement *)&local_58 <
        pFVar7 + (longlong)(this->SerializeTrace).ArrayMax * 0x38)) goto LAB_141f0f594;
  }
  iVar6 = (this->SerializeTrace).ArrayNum;
  piVar1 = &(this->SerializeTrace).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->SerializeTrace).ArrayNum = iVar6 + 1;
  pFVar7 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x38;
  *(longlong *)pFVar7 = local_58;
  *(longlong *)(pFVar7 + 8) = local_50;
  *(longlong *)(pFVar7 + 0x10) = local_48;
  *(UObject **)(pFVar7 + 0x18) = local_40;
  *(FName *)(pFVar7 + 0x20) = local_38;
  ::FString::FString((FString *)(pFVar7 + 0x28),&local_30);
LAB_141f0f61f:
  FLargeMemoryReader::Serialize((FLargeMemoryReader *)this,param_1,param_2);
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return;
}

