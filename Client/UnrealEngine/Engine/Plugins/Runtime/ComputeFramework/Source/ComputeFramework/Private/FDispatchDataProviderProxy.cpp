// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 4

// FDispatchDataProviderProxy @ 1494c4570

FDispatchDataProviderProxy * __thiscall
FDispatchDataProviderProxy::FDispatchDataProviderProxy
          (FDispatchDataProviderProxy *this,TIntVector3<unsigned_int> *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  this->_padding_ = (longlong)&___7FDispatchDataProviderProxy__6B_;
  uVar2 = (param_1->field0_0x0)._s_0.Z;
  *(undefined8 *)&(this->ThreadCount).field0_0x0 = uVar1;
  (this->ThreadCount).field0_0x0._s_0.Z = uVar2;
  return this;
}

// GatherDispatchData @ 1494ce1e0

void __thiscall
FDispatchDataProviderProxy::GatherDispatchData
          (FDispatchDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uchar *puVar6;
  
  puVar6 = param_1->ParameterBuffer + param_1->ParameterBufferOffset;
  iVar1 = param_1->NumInvocations;
  iVar2 = param_1->ParameterBufferStride;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((iVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((((longlong)iVar2 & 0xfU) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = iVar5 + 1;
      *(undefined8 *)puVar6 = *(undefined8 *)&(this->ThreadCount).field0_0x0;
      *(uint *)(puVar6 + 8) = (this->ThreadCount).field0_0x0._s_0.Z;
      puVar6 = puVar6 + iVar2;
    } while (iVar5 < iVar1);
  }
  return;
}

// GetDispatchThreadCount @ 1494cf580

int __thiscall
FDispatchDataProviderProxy::GetDispatchThreadCount
          (FDispatchDataProviderProxy *this,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint local_18;
  uint uStack_14;
  uint local_10;
  
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_18 = (this->ThreadCount).field0_0x0._s_0.X;
  pFVar2 = (param_1->AllocatorInstance).Data;
  uStack_14 = (this->ThreadCount).field0_0x0._s_0.Y;
  local_10 = (this->ThreadCount).field0_0x0._s_0.Z;
  if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar2 + (longlong)*piVar1 * 0xc)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&param_1->AllocatorInstance,piVar1);
  }
  param_1->ArrayNum = iVar5 + 1;
  pFVar2 = (param_1->AllocatorInstance).Data;
  *(ulonglong *)(pFVar2 + (longlong)iVar5 * 0xc) = CONCAT44(uStack_14,local_18);
  *(uint *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = local_10;
  return 1;
}

// IsValid @ 1494d47e0

bool __thiscall
FDispatchDataProviderProxy::IsValid(FDispatchDataProviderProxy *this,FValidationData *param_1)

{
  if ((((param_1->ParameterStructSize == 0x10) && ((this->ThreadCount).field0_0x0._s_0.X != 0)) &&
      ((this->ThreadCount).field0_0x0._s_0.Y != 0)) && ((this->ThreadCount).field0_0x0._s_0.Z != 0))
  {
    return true;
  }
  return false;
}

