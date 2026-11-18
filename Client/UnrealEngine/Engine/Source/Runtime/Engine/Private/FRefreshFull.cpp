// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FRefreshFull @ 148805d10

FRefreshFull * __thiscall
RenderAssetInstanceTask::FRefreshFull::FRefreshFull
          (FRefreshFull *this,
          TDelegate<void___cdecl(int,int,TArray<int,TSizedDefaultAllocator<32>_>_const_&,int,int),FDefaultDelegateUserPolicy>
          *param_1)

{
  TDelegate<void___cdecl(int,int,TArray<int,TSizedDefaultAllocator<32>_>_const_&,int,int),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(int,int,TArray<int,TSizedDefaultAllocator<32>_>_const_&,int,int),FDefaultDelegateUserPolicy>
            (&this->OnWorkDoneDelegate,param_1);
  this->FirstFreeBound = -1;
  this->LastUsedBound = -1;
  (this->SkippedIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkippedIndices).ArrayNum = 0;
  (this->SkippedIndices).ArrayMax = 0;
  (this->State).Reference = (FRenderAssetInstanceState *)0x0;
  this->BeginIndex = -1;
  this->EndIndex = -1;
  return this;
}

// operator() @ 148811970

void __thiscall RenderAssetInstanceTask::FRefreshFull::operator()(FRefreshFull *this,bool param_1)

{
  int *piVar1;
  FRenderAssetInstanceState *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint local_18 [4];
  
  if (0 < this->BeginIndex) {
    pFVar2 = (this->State).Reference;
    uVar7 = this->BeginIndex - 1;
    uVar8 = 0;
    if ((int)uVar7 < (pFVar2->Bounds4Components).ArrayNum) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (*(longlong *)((pFVar2->Bounds4Components).AllocatorInstance.Data + (longlong)(int)uVar7 * 8)
        == 0) {
      this->FirstFreeBound = this->BeginIndex + -1;
    }
  }
  uVar8 = this->BeginIndex;
  if (param_1) {
    if ((int)uVar8 < this->EndIndex) {
      do {
        local_18[0] = uVar8;
        bVar5 = FRenderAssetInstanceState::ConditionalUpdateBounds((this->State).Reference,uVar8);
        if (bVar5) {
          this->LastUsedBound = local_18[0];
        }
        else {
          lVar9 = (longlong)(int)local_18[0];
          pFVar2 = (this->State).Reference;
          uVar8 = 0;
          if ((int)local_18[0] < (pFVar2->Bounds4Components).ArrayNum) {
            uVar8 = ~local_18[0] >> 0x1f;
          }
          if (uVar8 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if (*(longlong *)((pFVar2->Bounds4Components).AllocatorInstance.Data + lVar9 * 8) == 0) {
            if (this->FirstFreeBound == -1) {
              this->FirstFreeBound = local_18[0];
            }
          }
          else {
            pFVar3 = (this->SkippedIndices).AllocatorInstance.Data;
            if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
               ((FScriptContainerElement *)local_18 <
                pFVar3 + (longlong)(this->SkippedIndices).ArrayMax * 4)) {
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
            iVar6 = (this->SkippedIndices).ArrayNum;
            piVar1 = &(this->SkippedIndices).ArrayMax;
            if (iVar6 == *piVar1) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&(this->SkippedIndices).AllocatorInstance,piVar1);
            }
            (this->SkippedIndices).ArrayNum = iVar6 + 1;
            *(uint *)((this->SkippedIndices).AllocatorInstance.Data + (longlong)iVar6 * 4) =
                 local_18[0];
            this->LastUsedBound = local_18[0];
          }
        }
        uVar8 = local_18[0] + 1;
      } while ((int)uVar8 < this->EndIndex);
      return;
    }
  }
  else if ((int)uVar8 < this->EndIndex) {
    do {
      bVar5 = FRenderAssetInstanceState::UpdateBounds((this->State).Reference,uVar8);
      if (bVar5) {
        this->LastUsedBound = uVar8;
      }
      else if (this->FirstFreeBound == -1) {
        this->FirstFreeBound = uVar8;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < this->EndIndex);
  }
  return;
}

// Init @ 148844ee0

void __thiscall
RenderAssetInstanceTask::FRefreshFull::Init
          (FRefreshFull *this,FRenderAssetInstanceState *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  FRenderAssetInstanceState *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((this->SkippedIndices).ArrayNum != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!SkippedIndices.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceTask.cpp"
                       ,0x34,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->State).Reference;
  if (pFVar2 != param_1) {
    (this->State).Reference = param_1;
    if (param_1 != (FRenderAssetInstanceState *)0x0) {
      *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
    }
    if (pFVar2 != (FRenderAssetInstanceState *)0x0) {
      plVar1 = &pFVar2->_padding_;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
  }
  this->BeginIndex = param_2;
  this->EndIndex = param_3;
  this->FirstFreeBound = -1;
  this->LastUsedBound = -1;
  return;
}

// Sync @ 14885b2f0

void __thiscall RenderAssetInstanceTask::FRefreshFull::Sync(FRefreshFull *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FRenderAssetInstanceState *pFVar5;
  longlong *plVar6;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar7;
  FReadAccessScope local_38;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  iVar1 = this->LastUsedBound;
  iVar2 = this->FirstFreeBound;
  iVar3 = this->EndIndex;
  iVar4 = this->BeginIndex;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&local_38);
  if (*(int *)&(this->OnWorkDoneDelegate).field_0x10 == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = *(longlong **)&(this->OnWorkDoneDelegate).field_0x8;
  }
  (**(code **)(*plVar6 + 0x60))
            (plVar6,iVar4,iVar3,&this->SkippedIndices,iVar2,CONCAT44(uVar7,iVar1));
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  pFVar5 = (this->State).Reference;
  if (pFVar5 != (FRenderAssetInstanceState *)0x0) {
    (this->State).Reference = (FRenderAssetInstanceState *)0x0;
    plVar6 = &pFVar5->_padding_;
    *(int *)plVar6 = (int)*plVar6 + -1;
    if ((int)*plVar6 == 0) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  (this->SkippedIndices).ArrayNum = 0;
  if ((this->SkippedIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SkippedIndices).AllocatorInstance,0,&(this->SkippedIndices).ArrayMax);
  }
  return;
}

