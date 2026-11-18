// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 31

// operator= @ 14a979140

FMeshBufferSet * __thiscall
UE::Mutable::Private::FMeshBufferSet::operator=(FMeshBufferSet *this,FMeshBufferSet *param_1)

{
  TArray<UE::Mutable::Private::FMeshBuffer,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FMeshBuffer *pFVar4;
  
  pTVar1 = &this->Buffers;
  this->ElementCount = param_1->ElementCount;
  this->Flags = param_1->Flags;
  if (pTVar1 != &param_1->Buffers) {
    DestructItems<UE::Mutable::Private::FMeshBuffer,int>
              ((FMeshBuffer *)(pTVar1->AllocatorInstance).Data,(this->Buffers).ArrayNum);
    iVar3 = (param_1->Buffers).ArrayNum;
    piVar2 = &(this->Buffers).ArrayMax;
    pFVar4 = (FMeshBuffer *)(param_1->Buffers).AllocatorInstance.Data;
    (this->Buffers).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<UE::Mutable::Private::FMeshBuffer,UE::Mutable::Private::FMeshBuffer,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  return this;
}

// AddBuffer @ 14aab9b70

void __thiscall
UE::Mutable::Private::FMeshBufferSet::AddBuffer
          (FMeshBufferSet *this,FMeshBufferSet *param_1,int param_2)

{
  int *piVar1;
  FMeshBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FMeshBuffer *pFVar7;
  FMemScope local_res8;
  FLLMScope local_res18 [2];
  
  if (this->ElementCount != param_1->ElementCount) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetElementCount() == Other.GetElementCount()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                       ,0x161,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name355,L"MutableRuntime");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res18,LLMScope_Name355,false,None,Default,true);
  FMemScope::FMemScope(&local_res8,&LLMScope_Name355,true);
  uVar5 = 0;
  if (param_2 < (param_1->Buffers).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (FMeshBuffer *)(this->Buffers).AllocatorInstance.Data;
  pFVar7 = (FMeshBuffer *)((param_1->Buffers).AllocatorInstance.Data + (longlong)param_2 * 0x30);
  if ((pFVar2 <= pFVar7) && (pFVar7 < pFVar2 + (this->Buffers).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->Buffers).ArrayNum;
  piVar1 = &(this->Buffers).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(this->Buffers).AllocatorInstance,piVar1);
  }
  (this->Buffers).ArrayNum = iVar6 + 1;
  FMeshBuffer::FMeshBuffer
            ((FMeshBuffer *)((this->Buffers).AllocatorInstance.Data + (longlong)iVar6 * 0x30),pFVar7
            );
  FMemScope::~FMemScope(&local_res8);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// CopyElement @ 14aac20d0

void __thiscall
UE::Mutable::Private::FMeshBufferSet::CopyElement(FMeshBufferSet *this,uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  uint local_res18;
  
  local_res18 = param_2;
  if (((this->Flags & IsDescriptor) != None) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsDescriptor()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                         ,0x1af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->ElementCount <= param_1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FromIndex < ElementCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                         ,0x1b0,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->ElementCount <= param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ToIndex < ElementCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                         ,0x1b1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_1 != param_2) {
    pFVar7 = (this->Buffers).AllocatorInstance.Data;
    iVar1 = (this->Buffers).ArrayNum;
    pFVar10 = pFVar7 + (longlong)iVar1 * 0x30;
    while( true ) {
      if ((this->Buffers).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UE::Mutable::Private::FMeshBuffer,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar7 == pFVar10) break;
      uVar2 = *(uint *)(pFVar7 + 0x28);
      uVar8 = uVar2 * param_1;
      uVar6 = 0;
      if ((int)uVar8 < *(int *)(pFVar7 + 0x20)) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)(pFVar7 + 0x10);
      uVar9 = local_res18 * *(int *)(pFVar7 + 0x28);
      uVar6 = 0;
      if ((int)uVar9 < *(int *)(pFVar7 + 0x20)) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      memcpy((void *)((longlong)(int)uVar9 + *(longlong *)(pFVar7 + 0x10)),
             (void *)((int)uVar8 + lVar3),(ulonglong)uVar2);
      pFVar7 = pFVar7 + 0x30;
    }
  }
  return;
}

// FindChannel @ 14aac8af0

void __thiscall
UE::Mutable::Private::FMeshBufferSet::FindChannel
          (FMeshBufferSet *this,EMeshBufferSemantic param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong local_res8;
  longlong local_68;
  
  if (((param_3 == (int *)0x0) || (param_4 == (int *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BufferPtr && ChannelPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                         ,0x139,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *param_3 = -1;
  uVar9 = 0;
  *param_4 = -1;
  iVar1 = (this->Buffers).ArrayNum;
  if (0 < iVar1) {
    local_68 = 0;
    local_res8 = 0;
    do {
      uVar10 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < (this->Buffers).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = 0;
      lVar11 = 0;
      iVar2 = *(int *)((this->Buffers).AllocatorInstance.Data + local_68 + 8);
      if (0 < iVar2) {
        lVar7 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar9 < (this->Buffers).ArrayNum) {
            uVar5 = uVar10;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar8 = (this->Buffers).AllocatorInstance.Data + local_68;
          uVar5 = 0;
          if ((int)uVar6 < *(int *)(pFVar8 + 8)) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(EMeshBufferSemantic *)(lVar7 + *(longlong *)pFVar8) == param_1) {
            uVar5 = 0;
            if ((int)uVar9 < (this->Buffers).ArrayNum) {
              uVar5 = uVar10;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar8 = (this->Buffers).AllocatorInstance.Data + local_68;
            uVar5 = 0;
            if ((int)uVar6 < *(int *)(pFVar8 + 8)) {
              uVar5 = ~uVar6 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(int *)(lVar7 + 8 + *(longlong *)pFVar8) == param_2) {
              *param_3 = uVar9;
              *param_4 = uVar6;
              return;
            }
          }
          uVar6 = uVar6 + 1;
          lVar11 = lVar11 + 1;
          lVar7 = lVar7 + 0x10;
        } while (lVar11 < iVar2);
      }
      local_res8 = local_res8 + 1;
      local_68 = local_68 + 0x30;
      uVar9 = uVar9 + 1;
    } while (local_res8 < iVar1);
  }
  return;
}

// GetAllocatedSize @ 14aacb490

int __thiscall UE::Mutable::Private::FMeshBufferSet::GetAllocatedSize(FMeshBufferSet *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = (longlong)(this->Buffers).ArrayNum;
  iVar4 = 0;
  uVar5 = 0;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Buffers).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + *(int *)((this->Buffers).AllocatorInstance.Data + lVar7 + 0x24);
      lVar7 = lVar7 + 0x30;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return iVar4;
}

// GetBufferChannelCount @ 14aacc140

int __thiscall
UE::Mutable::Private::FMeshBufferSet::GetBufferChannelCount(FMeshBufferSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1 < 0) || ((this->Buffers).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffers.IsValidIndex(BufferIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                       ,0x8e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    if (param_1 < 0) {
      return 0;
    }
  }
  if ((this->Buffers).ArrayNum <= param_1) {
    return 0;
  }
  uVar4 = 0;
  if (param_1 < (this->Buffers).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return *(int *)((this->Buffers).AllocatorInstance.Data + (longlong)param_1 * 0x30 + 8);
}

// GetBufferCount @ 14aacc210

int __thiscall UE::Mutable::Private::FMeshBufferSet::GetBufferCount(FMeshBufferSet *this)

{
  return (this->Buffers).ArrayNum;
}

// GetBufferData @ 14aacc220

uchar * __thiscall
UE::Mutable::Private::FMeshBufferSet::GetBufferData(FMeshBufferSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uchar *puVar4;
  
  if ((this->Flags & IsDescriptor) != None) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsDescriptor()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                       ,0x11c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar1)();
      return puVar4;
    }
  }
  if ((param_1 < 0) || ((this->Buffers).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffers.IsValidIndex(BufferIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                       ,0x11e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar1)();
      return puVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->Buffers).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar1)();
      return puVar4;
    }
  }
  return *(uchar **)((this->Buffers).AllocatorInstance.Data + (longlong)param_1 * 0x30 + 0x10);
}

// GetBufferData @ 14aacc300

uchar * __thiscall
UE::Mutable::Private::FMeshBufferSet::GetBufferData(FMeshBufferSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uchar *puVar4;
  
  if ((param_1 < 0) || ((this->Buffers).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffers.IsValidIndex(BufferIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                       ,0x125,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar1)();
      return puVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->Buffers).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar4 = (uchar *)(*pcVar1)();
      return puVar4;
    }
  }
  return *(uchar **)((this->Buffers).AllocatorInstance.Data + (longlong)param_1 * 0x30 + 0x10);
}

// GetBufferDataSize @ 14aacc3b0

uint __thiscall
UE::Mutable::Private::FMeshBufferSet::GetBufferDataSize(FMeshBufferSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((param_1 < 0) || ((this->Buffers).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffers.IsValidIndex(BufferIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                       ,300,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->Buffers).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(uint *)((this->Buffers).AllocatorInstance.Data + (longlong)param_1 * 0x30 + 0x20);
}

// GetChannel @ 14aacc460

void __thiscall
UE::Mutable::Private::FMeshBufferSet::GetChannel
          (FMeshBufferSet *this,int param_1,int param_2,EMeshBufferSemantic *param_3,int *param_4,
          EMeshBufferFormat *param_5,int *param_6,int *param_7)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  EMeshBufferSemantic *pEVar4;
  FScriptContainerElement *pFVar5;
  
  if ((param_1 < 0) || ((this->Buffers).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffers.IsValidIndex(BufferIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                       ,0xa1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->Buffers).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2 < 0) ||
     (*(int *)((this->Buffers).AllocatorInstance.Data + (longlong)param_1 * 0x30 + 8) <= param_2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffers[BufferIndex].Channels.IsValidIndex(ChannelIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                       ,0xa2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->Buffers).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar5 = (this->Buffers).AllocatorInstance.Data + (longlong)param_1 * 0x30;
  uVar3 = 0;
  if (param_2 < *(int *)(pFVar5 + 8)) {
    uVar3 = (uint)~param_2 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pEVar4 = (EMeshBufferSemantic *)((longlong)param_2 * 0x10 + *(longlong *)pFVar5);
  if (param_3 != (EMeshBufferSemantic *)0x0) {
    *param_3 = *pEVar4;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = pEVar4[2];
  }
  if (param_5 != (EMeshBufferFormat *)0x0) {
    *param_5 = pEVar4[1];
  }
  if (param_6 != (int *)0x0) {
    *param_6 = (uint)*(ushort *)((longlong)pEVar4 + 0xe);
  }
  if (param_7 != (int *)0x0) {
    *param_7 = (uint)(ushort)(short)pEVar4[3];
  }
  return;
}

// GetChannelOffset @ 14aacc650

int __thiscall
UE::Mutable::Private::FMeshBufferSet::GetChannelOffset(FMeshBufferSet *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  
  if ((param_1 < 0) || ((this->Buffers).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffers.IsValidIndex(BufferIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                       ,0x159,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->Buffers).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if ((param_2 < 0) ||
     (*(int *)((this->Buffers).AllocatorInstance.Data + (longlong)param_1 * 0x30 + 8) <= param_2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffers[BufferIndex].Channels.IsValidIndex(ChannelIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                       ,0x15a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->Buffers).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  pFVar5 = (this->Buffers).AllocatorInstance.Data + (longlong)param_1 * 0x30;
  uVar4 = 0;
  if (param_2 < *(int *)(pFVar5 + 8)) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return (int)*(ushort *)(*(longlong *)pFVar5 + 0xc + (longlong)param_2 * 0x10);
}

// GetDataSize @ 14aaccef0

int __thiscall UE::Mutable::Private::FMeshBufferSet::GetDataSize(FMeshBufferSet *this)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar5 = (this->Buffers).ArrayNum;
  lVar10 = (longlong)iVar5;
  iVar6 = 0;
  uVar9 = 0;
  iVar7 = iVar6;
  if (0 < iVar5) {
    if ((this->Flags & IsDescriptor) == None) {
      lVar10 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar9 < (this->Buffers).ArrayNum) {
          uVar4 = ~uVar9 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
        iVar7 = *(int *)((this->Buffers).AllocatorInstance.Data + lVar10 + 8);
        uVar4 = 0;
        if ((int)uVar9 < (this->Buffers).ArrayNum) {
          uVar4 = ~uVar9 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar10 + 0x28;
        lVar10 = lVar10 + 0x30;
        iVar6 = iVar6 + iVar7 * 0x10 +
                *(int *)((this->Buffers).AllocatorInstance.Data + lVar8) * this->ElementCount;
        iVar7 = iVar6;
      } while ((int)uVar9 < iVar5);
    }
    else {
      iVar7 = 0;
      if (0 < iVar5) {
        lVar8 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar9 < (this->Buffers).ArrayNum) {
            uVar4 = ~uVar9 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            iVar5 = (*pcVar1)();
            return iVar5;
          }
          uVar9 = uVar9 + 1;
          lVar2 = lVar8 + 8;
          lVar8 = lVar8 + 0x30;
          iVar6 = iVar6 + *(int *)((this->Buffers).AllocatorInstance.Data + lVar2) * 0x10;
          lVar10 = lVar10 + -1;
          iVar7 = iVar6;
        } while (lVar10 != 0);
      }
    }
  }
  return iVar7;
}

// GetElementCount @ 14aacd1c0

int __thiscall UE::Mutable::Private::FMeshBufferSet::GetElementCount(FMeshBufferSet *this)

{
  return this->ElementCount;
}

// GetElementSize @ 14aacd1d0

int __thiscall
UE::Mutable::Private::FMeshBufferSet::GetElementSize(FMeshBufferSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1 < 0) || ((this->Buffers).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffers.IsValidIndex(BufferIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                       ,0x152,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  uVar4 = 0;
  if (param_1 < (this->Buffers).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return *(int *)((this->Buffers).AllocatorInstance.Data + (longlong)param_1 * 0x30 + 0x28);
}

// HasAnySemanticWithDifferentFormat @ 14aad6890

bool __thiscall
UE::Mutable::Private::FMeshBufferSet::HasAnySemanticWithDifferentFormat
          (FMeshBufferSet *this,EMeshBufferSemantic param_1,EMeshBufferFormat param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  undefined1 local_res20 [8];
  
  pFVar11 = (this->Buffers).AllocatorInstance.Data;
  uVar1 = (this->Buffers).ArrayNum;
  uVar7 = (ulonglong)(int)uVar1;
  pFVar9 = pFVar11 + uVar7 * 0x30;
  do {
    if ((this->Buffers).ArrayNum != (int)uVar7) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<UE::Mutable::Private::FMeshBuffer_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar11 == pFVar9) {
      return false;
    }
    iVar2 = *(int *)(pFVar11 + 8);
    uVar8 = 0;
    lVar12 = 0;
    if (0 < iVar2) {
      lVar10 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < *(int *)(pFVar11 + 8)) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (*(EMeshBufferSemantic *)(*(longlong *)pFVar11 + lVar10) == param_1) {
          uVar6 = 0;
          if ((int)uVar8 < *(int *)(pFVar11 + 8)) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (*(EMeshBufferFormat *)(*(longlong *)pFVar11 + 4 + lVar10) != param_2) {
            return true;
          }
        }
        uVar8 = uVar8 + 1;
        lVar12 = lVar12 + 1;
        lVar10 = lVar10 + 0x10;
      } while (lVar12 < iVar2);
    }
    pFVar11 = pFVar11 + 0x30;
    uVar7 = (ulonglong)uVar1;
  } while( true );
}

// HasSameFormat @ 14aad6d80

bool __thiscall
UE::Mutable::Private::FMeshBufferSet::HasSameFormat(FMeshBufferSet *this,FMeshBufferSet *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar1 = (this->Buffers).ArrayNum;
  if ((param_1->Buffers).ArrayNum == iVar1) {
    uVar9 = 0;
    if (0 < iVar1) {
      lVar8 = 0;
      lVar10 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (this->Buffers).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        pFVar2 = (this->Buffers).AllocatorInstance.Data;
        uVar7 = 0;
        if ((int)uVar9 < (param_1->Buffers).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        pFVar3 = (param_1->Buffers).AllocatorInstance.Data;
        if (*(int *)(pFVar2 + lVar10 + 8) != *(int *)(pFVar3 + lVar10 + 8)) goto LAB_14aad6e93;
        bVar5 = CompareItems<UE::Mutable::Private::FMeshBufferChannel,int>
                          (*(FMeshBufferChannel **)(pFVar2 + lVar10),
                           *(FMeshBufferChannel **)(pFVar3 + lVar10),*(int *)(pFVar2 + lVar10 + 8));
        if ((!bVar5) || (*(int *)(pFVar2 + lVar10 + 0x28) != *(int *)(pFVar3 + lVar10 + 0x28)))
        goto LAB_14aad6e93;
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 1;
        lVar10 = lVar10 + 0x30;
      } while (lVar8 < iVar1);
    }
    bVar5 = true;
  }
  else {
LAB_14aad6e93:
    bVar5 = false;
  }
  return bVar5;
}

// HasSameFormat @ 14aad6ec0

bool __thiscall
UE::Mutable::Private::FMeshBufferSet::HasSameFormat
          (FMeshBufferSet *this,int param_1,FMeshBufferSet *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (param_1 < (this->Buffers).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pFVar4 = (this->Buffers).AllocatorInstance.Data + (longlong)param_1 * 0x30;
  uVar6 = 0;
  if (param_3 < (param_2->Buffers).ArrayNum) {
    uVar6 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pFVar5 = (param_2->Buffers).AllocatorInstance.Data + (longlong)param_3 * 0x30;
  if (((*(int *)(pFVar4 + 8) == *(int *)(pFVar5 + 8)) &&
      (bVar2 = CompareItems<UE::Mutable::Private::FMeshBufferChannel,int>
                         (*(FMeshBufferChannel **)pFVar4,*(FMeshBufferChannel **)pFVar5,
                          *(int *)(pFVar4 + 8)), bVar2)) &&
     (*(int *)(pFVar4 + 0x28) == *(int *)(pFVar5 + 0x28))) {
    return true;
  }
  return false;
}

// IsDescriptor @ 14aad8930

bool __thiscall UE::Mutable::Private::FMeshBufferSet::IsDescriptor(FMeshBufferSet *this)

{
  return (bool)((char)this->Flags & IsDescriptor);
}

// IsSimilar @ 14aad9320

bool __thiscall
UE::Mutable::Private::FMeshBufferSet::IsSimilar(FMeshBufferSet *this,FMeshBufferSet *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  bool bVar17;
  longlong local_res20;
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId575,"Mutable_FMeshBufferSet::IsSimilar",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
               ,0x23f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId575);
  }
  if (this->ElementCount == param_1->ElementCount) {
    lVar10 = (longlong)(this->Buffers).ArrayNum;
    uVar9 = 0;
    lVar12 = (longlong)(param_1->Buffers).ArrayNum;
    uVar8 = 0;
    if (0 < lVar10) {
      lVar15 = 0;
      lVar13 = 0;
      lVar11 = 0;
      local_res20 = 0;
      lVar7 = 0;
      do {
        if (lVar12 <= lVar15) break;
        uVar5 = 0;
        if ((int)uVar9 < (this->Buffers).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar16 = (this->Buffers).AllocatorInstance.Data;
        if ((*(int *)(pFVar16 + lVar7 + 8) == 1) &&
           ((piVar1 = *(int **)(pFVar16 + lVar7), *piVar1 == 1 || (*piVar1 == 10)))) {
          uVar9 = uVar9 + 1;
          lVar13 = lVar13 + 1;
          lVar7 = lVar7 + 0x30;
        }
        else {
          uVar5 = 0;
          if ((int)uVar8 < (param_1->Buffers).ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          pFVar16 = (param_1->Buffers).AllocatorInstance.Data;
          if ((*(int *)(pFVar16 + lVar11 + 8) != 1) ||
             ((piVar1 = *(int **)(pFVar16 + lVar11), *piVar1 != 1 && (*piVar1 != 10)))) {
            uVar5 = 0;
            if ((int)uVar9 < (this->Buffers).ArrayNum) {
              uVar5 = ~uVar9 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            pFVar16 = (this->Buffers).AllocatorInstance.Data + lVar7;
            uVar5 = 0;
            if ((int)uVar8 < (param_1->Buffers).ArrayNum) {
              uVar5 = ~uVar8 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            pFVar14 = (param_1->Buffers).AllocatorInstance.Data + lVar11;
            if (((*(int *)(pFVar16 + 8) != *(int *)(pFVar14 + 8)) ||
                (bVar3 = CompareItems<UE::Mutable::Private::FMeshBufferChannel,int>
                                   (*(FMeshBufferChannel **)pFVar16,*(FMeshBufferChannel **)pFVar14,
                                    *(int *)(pFVar16 + 8)), !bVar3)) ||
               (*(int *)(pFVar16 + 0x28) != *(int *)(pFVar14 + 0x28))) goto LAB_14aad9768;
            iVar6 = *(int *)(pFVar16 + 0x20);
            if ((iVar6 != *(int *)(pFVar14 + 0x20)) ||
               ((iVar6 != 0 &&
                (iVar6 = memcmp(*(void **)(pFVar16 + 0x10),*(void **)(pFVar14 + 0x10),
                                (longlong)iVar6), iVar6 != 0)))) goto LAB_14aad9768;
            uVar9 = uVar9 + 1;
            lVar13 = lVar13 + 1;
            lVar7 = lVar7 + 0x30;
            lVar15 = local_res20;
          }
          lVar15 = lVar15 + 1;
          uVar8 = uVar8 + 1;
          lVar11 = lVar11 + 0x30;
          local_res20 = lVar15;
        }
      } while (lVar13 < lVar10);
    }
    lVar15 = (longlong)(int)uVar9;
    if (lVar15 < lVar10) {
      lVar7 = lVar15 * 0x30;
      do {
        uVar5 = 0;
        if ((int)uVar9 < (this->Buffers).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar16 = (this->Buffers).AllocatorInstance.Data;
        if ((*(int *)(pFVar16 + lVar7 + 8) != 1) ||
           ((piVar1 = *(int **)(pFVar16 + lVar7), *piVar1 != 1 && (*piVar1 != 10))))
        goto LAB_14aad9768;
        uVar9 = uVar9 + 1;
        lVar15 = lVar15 + 1;
        lVar7 = lVar7 + 0x30;
      } while (lVar15 < lVar10);
    }
    lVar10 = (longlong)(int)uVar8;
    if (lVar10 < lVar12) {
      lVar15 = lVar10 * 0x30;
      do {
        uVar9 = 0;
        if ((int)uVar8 < (param_1->Buffers).ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar16 = (param_1->Buffers).AllocatorInstance.Data;
        if ((*(int *)(pFVar16 + lVar15 + 8) != 1) ||
           ((piVar1 = *(int **)(pFVar16 + lVar15), *piVar1 != 1 && (*piVar1 != 10))))
        goto LAB_14aad9768;
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 1;
        lVar15 = lVar15 + 0x30;
      } while (lVar10 < lVar12);
    }
    bVar3 = true;
  }
  else {
LAB_14aad9768:
    bVar3 = false;
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

// IsSimilarRobust @ 14aad97c0

bool __thiscall
UE::Mutable::Private::FMeshBufferSet::IsSimilarRobust
          (FMeshBufferSet *this,FMeshBufferSet *param_1,bool param_2)

{
  ushort uVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  FMeshBufferChannel *pFVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FMeshBufferChannel *pFVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  bool bVar20;
  undefined1 local_98;
  undefined1 local_97 [3];
  uint local_94;
  uint local_90;
  uint local_8c;
  longlong local_88;
  FScriptContainerElement *local_80;
  FScriptContainerElement *local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId464,"Mutable_FMeshBufferSet::IsSimilarRobust",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
               ,0x1d0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId464);
  }
  if (this->ElementCount == param_1->ElementCount) {
    bVar4 = IsSimilar(this,param_1);
    if (!bVar4) {
      iVar7 = (this->Buffers).ArrayNum;
      lVar8 = (longlong)iVar7;
      uVar11 = 0;
      lVar17 = (longlong)(param_1->Buffers).ArrayNum;
      uVar19 = 0;
      local_8c = 0;
      local_90 = 0;
      local_88 = lVar8;
      local_50 = lVar17;
      if (0 < iVar7) {
        lVar10 = 0;
        lVar14 = 0;
        local_60 = 0;
        local_68 = 0;
        do {
          if (lVar17 <= lVar14) break;
          uVar12 = 0;
          if ((int)uVar11 < (this->Buffers).ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             lVar8 = local_88, bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar18 = (this->Buffers).AllocatorInstance.Data;
          if ((*(int *)(pFVar18 + lVar10 * 0x30 + 8) == 1) &&
             ((piVar2 = *(int **)(pFVar18 + lVar10 * 0x30), *piVar2 == 1 || (*piVar2 == 10)))) {
LAB_14aada124:
            uVar11 = uVar11 + 1;
            lVar10 = lVar10 + 1;
            local_8c = uVar11;
            local_60 = lVar10;
          }
          else {
            uVar12 = 0;
            if ((int)uVar19 < (param_1->Buffers).ArrayNum) {
              uVar12 = ~uVar19 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            pFVar18 = (param_1->Buffers).AllocatorInstance.Data;
            if ((*(int *)(pFVar18 + lVar14 * 0x30 + 8) != 1) ||
               ((piVar2 = *(int **)(pFVar18 + lVar14 * 0x30), *piVar2 != 1 && (*piVar2 != 10)))) {
              uVar12 = 0;
              if ((int)uVar11 < (this->Buffers).ArrayNum) {
                uVar12 = ~uVar11 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              local_94 = *(uint *)((this->Buffers).AllocatorInstance.Data + lVar10 * 0x30 + 8);
              uVar12 = 0;
              if ((int)uVar19 < (this->Buffers).ArrayNum) {
                uVar12 = ~uVar19 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              uVar12 = 0;
              if ((int)uVar11 < (this->Buffers).ArrayNum) {
                uVar12 = ~uVar11 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              pFVar18 = (this->Buffers).AllocatorInstance.Data + lVar10 * 0x30;
              uVar11 = 0;
              if ((int)uVar19 < (param_1->Buffers).ArrayNum) {
                uVar11 = ~uVar19 >> 0x1f;
              }
              local_78 = pFVar18;
              if ((uVar11 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              iVar7 = *(int *)(pFVar18 + 8);
              pFVar15 = (param_1->Buffers).AllocatorInstance.Data + lVar14 * 0x30;
              local_80 = pFVar15;
              if (iVar7 != *(int *)(pFVar15 + 8)) goto LAB_14aada2c3;
              pFVar9 = *(FMeshBufferChannel **)pFVar18;
              bVar4 = CompareItems<UE::Mutable::Private::FMeshBufferChannel,int>
                                (pFVar9,*(FMeshBufferChannel **)pFVar15,iVar7);
              if ((!bVar4) || (*(int *)(pFVar18 + 0x28) != *(int *)(pFVar15 + 0x28)))
              goto LAB_14aada2c3;
              pFVar16 = pFVar9 + iVar7;
              while( true ) {
                if (*(int *)(pFVar18 + 8) != iVar7) {
                  local_98 = 0;
                  `TCheckedPointerIterator<UE::Mutable::Private::FMeshBufferChannel_const_,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(&local_98);
                }
                pFVar15 = local_78;
                if (pFVar9 == pFVar16) {
                  bVar4 = false;
                  goto LAB_14aad9ba0;
                }
                if (pFVar9->Semantic == TexCoords) break;
                pFVar9 = pFVar9 + 1;
              }
              bVar4 = true;
LAB_14aad9ba0:
              iVar7 = *(int *)(pFVar18 + 8);
              lVar8 = *(longlong *)pFVar18;
              uVar11 = 0;
              lVar17 = (longlong)iVar7 * 0x10 + lVar8;
              while( true ) {
                if (*(int *)(pFVar15 + 8) != iVar7) {
                  local_97[0] = 0;
                  `TCheckedPointerIterator<UE::Mutable::Private::FMeshBufferChannel_const_,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(local_97);
                }
                if (lVar8 == lVar17) break;
                uVar19 = *(uint *)(lVar8 + 4);
                if ((0x17 < uVar19) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("uint32(Format) < uint32(EMeshBufferFormat::Count)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                                       ,0x46,L""), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  uVar5 = (*pcVar3)();
                  return (bool)uVar5;
                }
                uVar11 = uVar11 + (uint)s_meshBufferFormatData[uVar19].SizeInBytes *
                                  (uint)*(ushort *)(lVar8 + 0xe);
                lVar8 = lVar8 + 0x10;
              }
              lVar8 = (longlong)(int)local_94;
              if ((*(uint *)(pFVar15 + 0x28) < uVar11) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ActualElementSize <= ElementSize",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Internal\\MuR\\MeshBufferSet.h"
                                     ,0xd5,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              pFVar18 = local_78;
              if ((uVar11 < *(uint *)(local_78 + 0x28)) || ((bVar4 && (!param_2)))) {
                bVar4 = -1 < CpuChannel->Enabled;
                if (bVar4) {
                  FCpuProfilerTrace::GetOrCreateSpecId
                            (&__CpuProfilerEventSpecId521,"Mutable_SlowCompare",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                             ,0x209);
                  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId521);
                }
                local_94 = 0;
                lVar17 = lVar8;
                if (this->ElementCount != 0) {
                  do {
                    local_58 = lVar17;
                    pFVar18 = local_78;
                    uVar11 = 0;
                    local_70 = 0;
                    if (0 < lVar8) {
                      lVar17 = 0;
                      do {
                        lVar8 = local_70;
                        if (param_2) {
LAB_14aad9dd4:
                          uVar12 = ~uVar11 >> 0x1f;
                          uVar19 = 0;
                          if ((int)uVar11 < *(int *)(pFVar18 + 8)) {
                            uVar19 = uVar12;
                          }
                          if ((uVar19 == 0) &&
                             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar6)) {
                            pcVar3 = (code *)swi(3);
                            uVar5 = (*pcVar3)();
                            return (bool)uVar5;
                          }
                          lVar8 = *(longlong *)pFVar18;
                          uVar19 = 0;
                          if ((int)uVar11 < *(int *)(pFVar18 + 8)) {
                            uVar19 = uVar12;
                          }
                          if ((uVar19 == 0) &&
                             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar6)) {
                            pcVar3 = (code *)swi(3);
                            uVar5 = (*pcVar3)();
                            return (bool)uVar5;
                          }
                          uVar19 = *(uint *)(*(longlong *)pFVar18 + 4 + lVar17);
                          if ((0x17 < uVar19) &&
                             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                ("uint32(Format) < uint32(EMeshBufferFormat::Count)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                                                 ,0x46,L""), bVar6)) {
                            pcVar3 = (code *)swi(3);
                            uVar5 = (*pcVar3)();
                            return (bool)uVar5;
                          }
                          pFVar15 = local_80;
                          uVar12 = (uint)s_meshBufferFormatData[uVar19].SizeInBytes *
                                   (uint)*(ushort *)(lVar8 + 0xe + lVar17);
                          uVar19 = 0;
                          if ((int)uVar11 < *(int *)(local_80 + 8)) {
                            uVar19 = ~uVar11 >> 0x1f;
                          }
                          if ((uVar19 == 0) &&
                             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar6)) {
                            pcVar3 = (code *)swi(3);
                            uVar5 = (*pcVar3)();
                            return (bool)uVar5;
                          }
                          lVar8 = *(longlong *)pFVar15;
                          uVar19 = 0;
                          if ((int)uVar11 < *(int *)(pFVar15 + 8)) {
                            uVar19 = ~uVar11 >> 0x1f;
                          }
                          if ((uVar19 == 0) &&
                             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar6)) {
                            pcVar3 = (code *)swi(3);
                            uVar5 = (*pcVar3)();
                            return (bool)uVar5;
                          }
                          uVar19 = *(uint *)(*(longlong *)pFVar15 + 4 + lVar17);
                          if ((0x17 < uVar19) &&
                             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                ("uint32(Format) < uint32(EMeshBufferFormat::Count)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                                                 ,0x46,L""), bVar6)) {
                            pcVar3 = (code *)swi(3);
                            uVar5 = (*pcVar3)();
                            return (bool)uVar5;
                          }
                          if ((uVar12 != (uint)s_meshBufferFormatData[uVar19].SizeInBytes *
                                         (uint)*(ushort *)(lVar8 + 0xe + lVar17)) &&
                             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                ("SizeA == SizeB",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                                                 ,0x216,L""), bVar6)) {
                            pcVar3 = (code *)swi(3);
                            uVar5 = (*pcVar3)();
                            return (bool)uVar5;
                          }
                          uVar19 = 0;
                          if ((int)uVar11 < *(int *)(pFVar18 + 8)) {
                            uVar19 = ~uVar11 >> 0x1f;
                          }
                          if ((uVar19 == 0) &&
                             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar6)) {
                            pcVar3 = (code *)swi(3);
                            uVar5 = (*pcVar3)();
                            return (bool)uVar5;
                          }
                          uVar13 = local_94 * *(int *)(pFVar18 + 0x28);
                          uVar1 = *(ushort *)(*(longlong *)pFVar18 + 0xc + lVar17);
                          lVar8 = *(longlong *)(pFVar18 + 0x10);
                          lVar10 = *(longlong *)(local_80 + 0x10);
                          uVar19 = 0;
                          if ((int)uVar11 < *(int *)(local_80 + 8)) {
                            uVar19 = ~uVar11 >> 0x1f;
                          }
                          if ((uVar19 == 0) &&
                             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar6)) {
                            pcVar3 = (code *)swi(3);
                            uVar5 = (*pcVar3)();
                            return (bool)uVar5;
                          }
                          iVar7 = memcmp((void *)((ulonglong)uVar13 + (ulonglong)uVar1 + lVar8),
                                         (void *)((ulonglong)(local_94 * *(int *)(local_80 + 0x28))
                                                 + (ulonglong)
                                                   *(ushort *)(*(longlong *)local_80 + 0xc + lVar17)
                                                   + lVar10),(ulonglong)uVar12);
                          lVar8 = local_70;
                          if (iVar7 != 0) goto LAB_14aada2ba;
                        }
                        else {
                          uVar19 = 0;
                          if ((int)uVar11 < *(int *)(pFVar18 + 8)) {
                            uVar19 = ~uVar11 >> 0x1f;
                          }
                          if ((uVar19 == 0) &&
                             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar6)) {
                            pcVar3 = (code *)swi(3);
                            uVar5 = (*pcVar3)();
                            return (bool)uVar5;
                          }
                          if (*(int *)(lVar17 + *(longlong *)pFVar18) != 6) goto LAB_14aad9dd4;
                        }
                        local_70 = lVar8 + 1;
                        uVar11 = uVar11 + 1;
                        lVar17 = lVar17 + 0x10;
                        lVar8 = local_58;
                      } while (local_70 < local_58);
                    }
                    local_94 = local_94 + 1;
                    lVar17 = local_58;
                  } while (local_94 < this->ElementCount);
                }
              }
              else {
                bVar4 = -1 < CpuChannel->Enabled;
                if (bVar4) {
                  FCpuProfilerTrace::GetOrCreateSpecId
                            (&__CpuProfilerEventSpecId511,"Mutable_FastCompare",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                             ,0x1ff);
                  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId511);
                }
                iVar7 = memcmp(*(void **)(pFVar18 + 0x10),*(void **)(local_80 + 0x10),
                               (longlong)*(int *)(pFVar18 + 0x20));
                if (iVar7 != 0) {
LAB_14aada2ba:
                  if (bVar4) {
                    FCpuProfilerTrace::OutputEndEvent();
                  }
                  goto LAB_14aada2c3;
                }
              }
              if (bVar4) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              uVar19 = local_90 + 1;
              lVar14 = local_68 + 1;
              lVar10 = local_60;
              lVar8 = local_88;
              lVar17 = local_50;
              uVar11 = local_8c;
              local_90 = uVar19;
              local_68 = lVar14;
              goto LAB_14aada124;
            }
            uVar19 = uVar19 + 1;
            lVar14 = lVar14 + 1;
            lVar8 = local_88;
            local_90 = uVar19;
            local_68 = lVar14;
          }
        } while (lVar10 < lVar8);
      }
      lVar10 = (longlong)(int)uVar11;
      if (lVar10 < lVar8) {
        lVar14 = lVar10 * 0x30;
        do {
          uVar12 = 0;
          if ((int)uVar11 < (this->Buffers).ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             lVar8 = local_88, bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar18 = (this->Buffers).AllocatorInstance.Data;
          if ((*(int *)(pFVar18 + lVar14 + 8) != 1) ||
             ((piVar2 = *(int **)(pFVar18 + lVar14), *piVar2 != 1 && (*piVar2 != 10))))
          goto LAB_14aada2c3;
          uVar11 = uVar11 + 1;
          lVar10 = lVar10 + 1;
          lVar14 = lVar14 + 0x30;
        } while (lVar10 < lVar8);
      }
      lVar8 = (longlong)(int)uVar19;
      if (lVar8 < lVar17) {
        lVar10 = lVar8 * 0x30;
        do {
          uVar11 = 0;
          if ((int)uVar19 < (param_1->Buffers).ArrayNum) {
            uVar11 = ~uVar19 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          pFVar18 = (param_1->Buffers).AllocatorInstance.Data;
          if ((*(int *)(pFVar18 + lVar10 + 8) != 1) ||
             ((piVar2 = *(int **)(pFVar18 + lVar10), *piVar2 != 1 && (*piVar2 != 10))))
          goto LAB_14aada2c3;
          uVar19 = uVar19 + 1;
          lVar8 = lVar8 + 1;
          lVar10 = lVar10 + 0x30;
        } while (lVar8 < lVar17);
      }
    }
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
LAB_14aada265:
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
LAB_14aada2c3:
  bVar4 = false;
  goto LAB_14aada265;
}

// IsSpecialBufferToIgnoreInSimilar @ 14aada360

bool __thiscall
UE::Mutable::Private::FMeshBufferSet::IsSpecialBufferToIgnoreInSimilar
          (FMeshBufferSet *this,FMeshBuffer *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if ((param_1->Channels).ArrayNum != 1) {
    return false;
  }
  pFVar1 = (param_1->Channels).AllocatorInstance.Data;
  if (*(int *)pFVar1 != 1) {
    return *(int *)pFVar1 == 10;
  }
  return true;
}

// RemoveBuffer @ 14aae81d0

void __thiscall UE::Mutable::Private::FMeshBufferSet::RemoveBuffer(FMeshBufferSet *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  
  if ((-1 < param_1) && (param_1 < (this->Buffers).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->Buffers).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    _Dst = (this->Buffers).AllocatorInstance.Data + (longlong)param_1 * 0x30;
    LOCK();
    ::Counter = (atomic<__int64>)((longlong)::Counter - *(longlong *)(_Dst + 0x18));
    UNLOCK();
    FGlobalMemoryCounter::Update(-*(longlong *)(_Dst + 0x18));
    *(undefined8 *)(_Dst + 0x18) = 0;
    if (*(void **)(_Dst + 0x10) != (void *)0x0) {
      FMemory::Free(*(void **)(_Dst + 0x10));
    }
    if (*(void **)_Dst != (void *)0x0) {
      FMemory::Free(*(void **)_Dst);
    }
    iVar5 = (this->Buffers).ArrayNum + ~param_1;
    if (iVar5 != 0) {
      memmove(_Dst,_Dst + 0x30,(longlong)iVar5 * 0x30);
    }
    piVar1 = &(this->Buffers).ArrayNum;
    *piVar1 = *piVar1 + -1;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,&(this->Buffers).AllocatorInstance,(this->Buffers).ArrayNum,
               &(this->Buffers).ArrayMax);
    return;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                     ,0x170,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// ResetBufferIndices @ 14aae83c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Mutable::Private::FMeshBufferSet::ResetBufferIndices(FMeshBufferSet *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  int local_78 [20];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  iVar1 = (this->Buffers).ArrayNum;
  pFVar6 = (this->Buffers).AllocatorInstance.Data;
  local_78[0x10] = 0;
  local_78[0x11] = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x30;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 0;
  local_78[7] = 0;
  local_78[8] = 0;
  local_78[9] = 0;
  local_78[10] = 0;
  local_78[0xb] = 0;
  local_78[0xc] = 0;
  local_78[0xd] = 0;
  local_78[0xe] = 0;
  local_78[0xf] = 0;
  while( true ) {
    if ((this->Buffers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Mutable::Private::FMeshBuffer,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_88);
    }
    if (pFVar6 == pFVar7) break;
    iVar2 = *(int *)(pFVar6 + 8);
    piVar4 = *(int **)pFVar6;
    piVar5 = piVar4 + (longlong)iVar2 * 4;
    while( true ) {
      if (*(int *)(pFVar6 + 8) != iVar2) {
        `TCheckedPointerIterator<UE::Mutable::Private::FMeshBufferChannel,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_88);
      }
      if (piVar4 == piVar5) break;
      iVar3 = local_78[*piVar4];
      piVar4[2] = iVar3;
      local_78[*piVar4] = iVar3 + 1;
      piVar4 = piVar4 + 4;
    }
    pFVar6 = pFVar6 + 0x30;
  }
  return;
}

// Serialise @ 14aaf4a20

void __thiscall
UE::Mutable::Private::FMeshBufferSet::Serialise(FMeshBufferSet *this,FOutputArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  EMeshBufferSetFlags local_res20 [2];
  
  Private::operator<<(param_1,&this->ElementCount);
  local_res8[0] = (this->Buffers).ArrayNum;
  Private::operator<<(param_1,local_res8);
  uVar5 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < (this->Buffers).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar6 = (this->Buffers).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30;
      local_res10[0] = *(uint *)(pFVar6 + 8);
      Private::operator<<(param_1,local_res10);
      if (local_res10[0] != 0) {
        (**(code **)((longlong)*param_1->Stream + 8))
                  (param_1->Stream,*(undefined8 *)pFVar6,(ulonglong)local_res10[0] << 4);
      }
      local_res18[0] = *(uint *)(pFVar6 + 0x20);
      Private::operator<<(param_1,local_res18);
      if (local_res18[0] != 0) {
        (**(code **)((longlong)*param_1->Stream + 8))
                  (param_1->Stream,*(undefined8 *)(pFVar6 + 0x10),local_res18[0]);
      }
      Private::operator<<(param_1,(uint *)(pFVar6 + 0x28));
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res8[0]);
  }
  local_res20[0] = this->Flags;
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res20,4);
  return;
}

// SetBuffer @ 14aaf67a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Mutable::Private::FMeshBufferSet::SetBuffer
          (FMeshBufferSet *this,int param_1,int param_2,int param_3,EMeshBufferSemantic *param_4,
          int *param_5,EMeshBufferFormat *param_6,int *param_7,int *param_8,
          EMemoryInitPolicy param_9)

{
  code *pcVar1;
  bool bVar2;
  undefined2 uVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  uint uVar11;
  int *piVar12;
  TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_> *this_00;
  FLLMScope local_res10 [2];
  uint local_res18;
  int local_res20;
  FMemScope local_50 [2];
  
  local_res18 = param_2;
  local_res20 = param_3;
  if (((param_1 < 0) || ((this->Buffers).ArrayNum <= param_1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffers.IsValidIndex(BufferIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                         ,0xcc,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name205,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name205,false,None,Default,true);
  FMemScope::FMemScope(local_50,&LLMScope_Name205,true);
  uVar7 = 0;
  if (param_1 < (this->Buffers).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = (TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_> *)
            ((this->Buffers).AllocatorInstance.Data + (longlong)param_1 * 0x30);
  uVar7 = 0;
  TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,param_3,Default);
  uVar11 = 0;
  if (0 < param_3) {
    lVar10 = 0;
    piVar12 = param_5;
    do {
      uVar8 = 0;
      if ((int)uVar11 < this_00->ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar9 = (this_00->AllocatorInstance).Data + lVar10;
      if (param_4 == (EMeshBufferSemantic *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(((longlong)param_4 - (longlong)param_5) + (longlong)piVar12);
      }
      *(undefined4 *)pFVar9 = uVar5;
      if (param_5 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar12;
      }
      *(int *)(pFVar9 + 8) = iVar6;
      if (param_6 == (EMeshBufferFormat *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(uint *)(((longlong)param_6 - (longlong)param_5) + (longlong)piVar12);
      }
      *(uint *)(pFVar9 + 4) = uVar8;
      if (param_7 == (int *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined2 *)(((longlong)param_7 - (longlong)param_5) + (longlong)piVar12);
      }
      *(undefined2 *)(pFVar9 + 0xe) = uVar3;
      if (param_8 == (int *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (ushort)*(byte *)(((longlong)param_8 - (longlong)param_5) + (longlong)piVar12);
      }
      *(ushort *)(pFVar9 + 0xc) = uVar4;
      if ((0x17 < uVar8) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("uint32(Format) < uint32(EMeshBufferFormat::Count)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                             ,0x46,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar8 = (uint)s_meshBufferFormatData[uVar8].SizeInBytes * (uint)*(ushort *)(pFVar9 + 0xe) +
              (uint)*(ushort *)(pFVar9 + 0xc);
      if (uVar8 < uVar7) {
        uVar8 = uVar7;
      }
      uVar7 = uVar8;
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x10;
      piVar12 = piVar12 + 1;
      param_2 = local_res18;
    } while ((int)uVar11 < local_res20);
  }
  if ((int)uVar7 < param_2) {
    uVar7 = param_2;
  }
  this_00[2].ArrayNum = uVar7;
  if ((this->Flags & IsDescriptor) == None) {
    if (param_9 == Uninitialized) {
      TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
      ::SetNumUninitialized
                ((TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
                  *)(this_00 + 1),uVar7 * this->ElementCount,No);
    }
    else if (param_9 == Zeroed) {
      TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
      ::SetNumZeroed((TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
                      *)(this_00 + 1),uVar7 * this->ElementCount,No);
    }
    else {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                         ,0xf3,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  FMemScope::~FMemScope(local_50);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// SetBufferChannel @ 14aaf6b90

void __thiscall
UE::Mutable::Private::FMeshBufferSet::SetBufferChannel
          (FMeshBufferSet *this,int param_1,int param_2,EMeshBufferSemantic param_3,int param_4,
          EMeshBufferFormat param_5,int param_6,int param_7)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  EMeshBufferSemantic *pEVar4;
  FScriptContainerElement *pFVar5;
  FMemScope local_res8;
  FLLMScope local_res10 [2];
  
  if ((-1 < param_1) && (param_1 < (this->Buffers).ArrayNum)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&LLMScope_Name263,L"MutableRuntime");
        _Init_thread_footer(&::_TSS0);
      }
    }
    FLLMScope::FLLMScope(local_res10,LLMScope_Name263,false,None,Default,true);
    FMemScope::FMemScope(&local_res8,&LLMScope_Name263,true);
    uVar3 = 0;
    if (param_1 < (this->Buffers).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar5 = (this->Buffers).AllocatorInstance.Data + (longlong)param_1 * 0x30;
    if ((param_2 < 0) || (*(int *)(pFVar5 + 8) <= param_2)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                         ,0x10d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      if (param_2 < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pEVar4 = (EMeshBufferSemantic *)((longlong)param_2 * 0x10 + *(longlong *)pFVar5);
      pEVar4[2] = param_4;
      pEVar4[1] = param_5;
      *(undefined2 *)((longlong)pEVar4 + 0xe) = (undefined2)param_6;
      *(ushort *)(pEVar4 + 3) = (ushort)(byte)param_7;
      *pEVar4 = param_3;
    }
    FMemScope::~FMemScope(&local_res8);
    FLLMScope::~FLLMScope(local_res10);
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                     ,0x103,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SetBufferCount @ 14aaf6da0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Mutable::Private::FMeshBufferSet::SetBufferCount(FMeshBufferSet *this,int param_1)

{
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name136,L"MutableRuntime");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name136,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&LLMScope_Name136,true);
  TArray<UE::Mutable::Private::FMeshBuffer,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Buffers,param_1,Default);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SetElementCount @ 14aaf6e80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Mutable::Private::FMeshBufferSet::SetElementCount
          (FMeshBufferSet *this,int param_1,EMemoryInitPolicy param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  EAllowShrinking local_res10;
  FLLMScope local_res20 [2];
  FMemScope local_48 [2];
  
  if ((param_1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                         ,0x60,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name97,L"MutableRuntime");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res20,LLMScope_Name97,false,None,Default,true);
  FMemScope::FMemScope(local_48,&LLMScope_Name97,true);
  if ((this->Flags & IsDescriptor) == None) {
    uVar1 = (this->Buffers).ArrayNum;
    uVar5 = (ulonglong)(int)uVar1;
    local_res10 = param_1 == 0;
    pFVar10 = (this->Buffers).AllocatorInstance.Data;
    pFVar9 = pFVar10 + 0x20;
    pFVar7 = pFVar10 + uVar5 * 0x30;
    while( true ) {
      if ((this->Buffers).ArrayNum != (int)uVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Mutable::Private::FMeshBuffer,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar7) break;
      if (param_2 == Uninitialized) {
        iVar4 = *(int *)pFVar9;
        uVar6 = param_1 * *(int *)(pFVar9 + 8);
        if (iVar4 < (int)uVar6) {
          Core::Private::
          ReallocGrow<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>::ForAnyElementType>
                    (1,1,uVar6 - iVar4,(ForAnyElementType *)(pFVar9 + -0x10),(int *)pFVar9,
                     (int *)(pFVar9 + 4));
        }
        else {
          if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
            Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
          }
          if ((int)uVar6 < iVar4) {
            uVar8 = iVar4 - uVar6;
            if (((int)(uVar8 | uVar6) < 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (uVar8 != 0) {
              iVar4 = (*(int *)pFVar9 - uVar6) - uVar8;
              if (iVar4 != 0) {
                memmove((void *)((longlong)(int)uVar6 + *(longlong *)(pFVar9 + -0x10)),
                        (void *)((longlong)(int)uVar8 +
                                (longlong)(int)uVar6 + *(longlong *)(pFVar9 + -0x10)),
                        (longlong)iVar4);
              }
              iVar4 = *(int *)pFVar9;
              *(uint *)pFVar9 = iVar4 - uVar8;
              if (param_1 == 0) {
                Core::Private::
                ReallocShrink<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>::ForAnyElementType>
                          (1,1,(ForAnyElementType *)(pFVar9 + -0x10),iVar4 - uVar8,
                           (int *)(pFVar9 + 4));
              }
            }
          }
        }
LAB_14aaf6fe5:
        uVar5 = (ulonglong)uVar1;
        pFVar10 = pFVar10 + 0x30;
        pFVar9 = pFVar9 + 0x30;
      }
      else {
        if (param_2 != Zeroed) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                             ,0x78,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          goto LAB_14aaf6fe5;
        }
        TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
        ::SetNumZeroed((TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
                        *)(pFVar9 + -0x10),param_1 * *(int *)(pFVar9 + 8),local_res10);
        uVar5 = (ulonglong)uVar1;
        pFVar10 = pFVar10 + 0x30;
        pFVar9 = pFVar9 + 0x30;
      }
    }
  }
  this->ElementCount = param_1;
  FMemScope::~FMemScope(local_48);
  FLLMScope::~FLLMScope(local_res20);
  return;
}

// Unserialise @ 14aafd470

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Mutable::Private::FMeshBufferSet::Unserialise(FMeshBufferSet *this,FInputArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_> *this_00;
  uint local_res8 [2];
  uint local_res10 [2];
  EMeshBufferSetFlags local_res18 [4];
  
  Private::operator>>(param_1,&this->ElementCount);
  Private::operator>>(param_1,local_res8);
  TArray<UE::Mutable::Private::FMeshBuffer,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Buffers,local_res8[0],Default);
  uVar5 = 0;
  if (local_res8[0] != 0) {
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < (this->Buffers).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_> *)
                ((this->Buffers).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30);
      Private::operator>>(param_1,local_res10);
      TArray<UE::Mutable::Private::FMeshBufferChannel,TSizedDefaultAllocator<32>_>::SetNum
                (this_00,local_res10[0],Default);
      if (local_res10[0] != 0) {
        (**(code **)((longlong)*param_1->Stream + 8))
                  (param_1->Stream,(this_00->AllocatorInstance).Data,(ulonglong)local_res10[0] << 4)
        ;
      }
      operator>><UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE
      ::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
                (param_1,(TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
                          *)(this_00 + 1));
      Private::operator>>(param_1,(uint *)&this_00[2].ArrayNum);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_res8[0]);
  }
  (**(code **)((longlong)*param_1->Stream + 8))(param_1->Stream,local_res18,4);
  this->Flags = local_res18[0];
  return;
}

// UpdateOffsets @ 14aafd860

void __thiscall
UE::Mutable::Private::FMeshBufferSet::UpdateOffsets(FMeshBufferSet *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  int local_res10;
  uint local_res18;
  
  uVar9 = (uint)~param_1 >> 0x1f;
  uVar5 = 0;
  if (param_1 < (this->Buffers).ArrayNum) {
    uVar5 = uVar9;
  }
  local_res10 = param_1;
  local_res18 = uVar9;
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar11 = (longlong)param_1 * 0x30;
  if ((*(int *)((this->Buffers).AllocatorInstance.Data + lVar11 + 0x20) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Buffers[BufferIndex].Data.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                         ,0x28a,
                         L"UpdateOffsets called on a non empty buffer set. This is not supported."),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar8 = 0;
  uVar5 = 0;
  if (param_1 < (this->Buffers).ArrayNum) {
    uVar5 = uVar9;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar6 = (this->Buffers).AllocatorInstance.Data + lVar11;
  iVar1 = *(int *)(pFVar6 + 8);
  lVar7 = *(longlong *)pFVar6;
  lVar10 = (longlong)iVar1 * 0x10 + lVar7;
  while( true ) {
    if (*(int *)(pFVar6 + 8) != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Mutable::Private::FMeshBufferChannel,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    uVar5 = local_res18;
    iVar3 = local_res10;
    if (lVar7 == lVar10) break;
    uVar5 = (uint)*(ushort *)(lVar7 + 0xc);
    if (uVar5 < uVar8) {
      *(short *)(lVar7 + 0xc) = (short)uVar8;
      uVar5 = uVar8;
    }
    uVar9 = *(uint *)(lVar7 + 4);
    if ((0x17 < uVar9) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("uint32(Format) < uint32(EMeshBufferFormat::Count)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Mutable\\Source\\MutableRuntime\\Private\\MuR\\MeshBufferSet.cpp"
                           ,0x46,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar8 = uVar5 + (uint)s_meshBufferFormatData[uVar9].SizeInBytes * (uint)*(ushort *)(lVar7 + 0xe)
    ;
    lVar7 = lVar7 + 0x10;
  }
  uVar9 = 0;
  if (local_res10 < (this->Buffers).ArrayNum) {
    uVar9 = local_res18;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(uint *)((this->Buffers).AllocatorInstance.Data + lVar11 + 0x28) < uVar8) {
    uVar9 = 0;
    if (iVar3 < (this->Buffers).ArrayNum) {
      uVar9 = uVar5;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(uint *)((this->Buffers).AllocatorInstance.Data + lVar11 + 0x28) = uVar8;
  }
  return;
}

