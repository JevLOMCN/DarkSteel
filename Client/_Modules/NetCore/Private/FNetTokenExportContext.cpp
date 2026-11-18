// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 6

// FNetTokenExportContext @ 1441d1f00

FNetTokenExportContext * __thiscall
UE::Net::FNetTokenExportContext::FNetTokenExportContext
          (FNetTokenExportContext *this,FNetTokenStore *param_1,
          TArray<UE::Net::FNetToken,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  this->NetTokenStore = param_1;
  this->NetTokensPendingExport = param_2;
  return this;
}

// AddNetTokenPendingExport @ 1441d5a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::FNetTokenExportContext::AddNetTokenPendingExport
          (FNetTokenExportContext *this,FNetToken param_1)

{
  ForElementType<UE::Net::FNetToken> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<UE::Net::FNetToken> FVar5;
  ForElementType<UE::Net::FNetToken> FVar6;
  FNetToken_u_0 local_res10 [6];
  FString local_18;
  
  FVar6 = (ForElementType<UE::Net::FNetToken>)this->NetTokensPendingExport;
  local_res10[0] = param_1.field0_0x0;
  if (FVar6 == (ForElementType<UE::Net::FNetToken>)0x0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5432610072926617536>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\NetToken\\NetTokenExportContext.cpp"
                       ,0x40,"NetTokensPendingExport");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (((uint)param_1.field0_0x0 & 0xfffff) != 0) {
    FVar1 = *(ForElementType<UE::Net::FNetToken> *)((longlong)FVar6 + 0x10);
    FVar5 = FVar6;
    if (FVar1 != (ForElementType<UE::Net::FNetToken>)0x0) {
      FVar5 = FVar1;
    }
    if ((ulonglong)FVar5 <= local_res10) {
      FVar5 = FVar6;
      if (FVar1 != (ForElementType<UE::Net::FNetToken>)0x0) {
        FVar5 = FVar1;
      }
      if ((local_res10 <
           (FNetToken_u_0 *)((longlong)FVar5 + (longlong)*(int *)((longlong)FVar6 + 0x1c) * 4)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = *(int *)((longlong)FVar6 + 0x18);
    if (iVar4 == *(int *)((longlong)FVar6 + 0x1c)) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
                        (0x404,(ForElementType<UE::Net::FNetToken> *)FVar6,
                         (int *)((longlong)FVar6 + 0x1c));
    }
    *(int *)((longlong)FVar6 + 0x18) = iVar4 + 1;
    if (*(ForElementType<UE::Net::FNetToken> *)((longlong)FVar6 + 0x10) !=
        (ForElementType<UE::Net::FNetToken>)0x0) {
      FVar6 = *(ForElementType<UE::Net::FNetToken> *)((longlong)FVar6 + 0x10);
    }
    ((FNetToken_u_0 *)((longlong)FVar6 + (longlong)iVar4 * 4))->_s_0 =
         (FNetToken_u_0_s_0)local_res10[0];
    if (5 < (byte)LogNetToken._0_1_) {
      ::FString::PrintfImpl(&local_18,L"NetToken (Auth:%u TypeId=%u Index=%u)");
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetToken);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// AppendNetTokensPendingExport @ 1441d6ca0

void __thiscall
UE::Net::FNetTokenExportContext::AppendNetTokensPendingExport
          (FNetTokenExportContext *this,TArrayView<UE::Net::FNetToken_const_,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<UE::Net::FNetToken> FVar5;
  
  FVar5 = (ForElementType<UE::Net::FNetToken>)this->NetTokensPendingExport;
  if (FVar5 == (ForElementType<UE::Net::FNetToken>)0x0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5432610072926617544>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\NetToken\\NetTokenExportContext.cpp"
                       ,0x38,"NetTokensPendingExport");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    iVar1 = param_1->ArrayNum;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9a9,L"Invalid range size: %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else if (iVar1 == 0) {
      return;
    }
    iVar4 = Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FNetToken>_>
                      (4,4,iVar1,(ForElementType<UE::Net::FNetToken> *)FVar5,
                       (int *)((longlong)FVar5 + 0x18),(int *)((longlong)FVar5 + 0x1c));
    if (*(ForElementType<UE::Net::FNetToken> *)((longlong)FVar5 + 0x10) !=
        (ForElementType<UE::Net::FNetToken>)0x0) {
      FVar5 = *(ForElementType<UE::Net::FNetToken> *)((longlong)FVar5 + 0x10);
    }
    memcpy((void *)((longlong)FVar5 + (longlong)iVar4 * 4),param_1->DataPtr,(longlong)iVar1 << 2);
  }
  return;
}

// GetNetTokenExportContext @ 1441dc920

FNetTokenExportContext * __cdecl
UE::Net::FNetTokenExportContext::GetNetTokenExportContext(FArchive *param_1)

{
  bool bVar1;
  undefined1 local_res8 [32];
  
  if ((param_1->field_0x28 & 4) == 0) {
    return (FNetTokenExportContext *)0x0;
  }
  if ((-1 < (char)param_1->field_0x2b) &&
     (bVar1 = `UE::Net::FNetTokenExportContext::GetNetTokenExportContext'::__l3::<lambda_1>::
              operator()(local_res8), !bVar1)) {
    return (FNetTokenExportContext *)0x0;
  }
  return *(FNetTokenExportContext **)&param_1[1].field_0x38;
}

// GetNetTokensPendingExport @ 1441dc960

TArrayView<UE::Net::FNetToken_const_,int> * __thiscall
UE::Net::FNetTokenExportContext::GetNetTokensPendingExport
          (FNetTokenExportContext *this,
          TArrayView<UE::Net::FNetToken_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Net::FNetToken_const_,int> *pTVar4;
  ForElementType<UE::Net::FNetToken> FVar5;
  undefined4 uStack_1c;
  uint uStack_c;
  
  FVar5 = (ForElementType<UE::Net::FNetToken>)this->NetTokensPendingExport;
  if (FVar5 == (ForElementType<UE::Net::FNetToken>)0x0) {
    __return_storage_ptr__->DataPtr = (FNetToken *)0x0;
    *(ulonglong *)&__return_storage_ptr__->ArrayNum = (ulonglong)uStack_c << 0x20;
    return __return_storage_ptr__;
  }
  iVar1 = *(int *)((longlong)FVar5 + 0x18);
  if (*(ForElementType<UE::Net::FNetToken> *)((longlong)FVar5 + 0x10) !=
      (ForElementType<UE::Net::FNetToken>)0x0) {
    FVar5 = *(ForElementType<UE::Net::FNetToken> *)((longlong)FVar5 + 0x10);
  }
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<UE::Net::FNetToken_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->DataPtr = (FNetToken *)FVar5;
  *(ulonglong *)&__return_storage_ptr__->ArrayNum = CONCAT44(uStack_1c,iVar1);
  return __return_storage_ptr__;
}

// operator() @ 1504b1a20

bool __thiscall
`UE::Net::FNetTokenExportContext::GetNetTokenExportContext'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5432610072926617556>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5432610072926617556>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

