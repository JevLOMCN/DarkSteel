// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 9

// ~FBookmarkProvider @ 14d3d0080

void __thiscall TraceServices::FBookmarkProvider::~FBookmarkProvider(FBookmarkProvider *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IBookmarkProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableBookmarkProvider__;
  DestructItems<TSharedRef<TraceServices::FBookmarkInternal,1>,int>
            ((TSharedRef<TraceServices::FBookmarkInternal,1> *)
             (this->Bookmarks).AllocatorInstance.Data,(this->Bookmarks).ArrayNum);
  pFVar1 = (this->Bookmarks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SpecMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SpecMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSharedPtr<TraceServices::FBookmarkSpec,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSharedPtr<TraceServices::FBookmarkSpec,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TSharedPtr<TraceServices::FBookmarkSpec,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SpecMap);
  return;
}

// GetBookmarkCount @ 14d3e0360

ulong64 __thiscall TraceServices::FBookmarkProvider::GetBookmarkCount(FBookmarkProvider *this)

{
  return (longlong)(this->Bookmarks).ArrayNum;
}

// FBookmarkProvider @ 14d420ae0

FBookmarkProvider * __thiscall
TraceServices::FBookmarkProvider::FBookmarkProvider
          (FBookmarkProvider *this,IAnalysisSession *param_1)

{
  this->Session = param_1;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IBookmarkProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableBookmarkProvider__;
  *(undefined8 *)&this->SpecMap = 0;
  *(undefined8 *)&(this->SpecMap).field_0x8 = 0;
  *(undefined8 *)&(this->SpecMap).field_0x20 = 0;
  *(undefined4 *)&(this->SpecMap).field_0x28 = 0;
  *(undefined4 *)&(this->SpecMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SpecMap).field_0x34 = 0;
  *(undefined4 *)&(this->SpecMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SpecMap).field_0x40 = 0;
  *(undefined4 *)&(this->SpecMap).field_0x48 = 0;
  (this->Bookmarks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bookmarks).ArrayNum = 0;
  (this->Bookmarks).ArrayMax = 0;
  return this;
}

// AppendBookmark @ 14d43fa60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TraceServices::FBookmarkProvider::AppendBookmark
          (FBookmarkProvider *this,ulong64 param_1,double param_2,uint param_3,uchar *param_4)

{
  int *piVar1;
  FBookmarkInternal **ppFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FBookmarkSpec *pFVar7;
  undefined8 uVar8;
  FBookmarkInternal *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TSharedRef<TraceServices::FBookmarkInternal,1> local_38;
  undefined8 local_28;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  pFVar7 = GetSpec((FBookmarkProvider *)(this[-1].TempBuffer + 0xfffc),param_1);
  local_28 = *(undefined8 *)&pFVar7->Line;
  FFormatArgsHelper::Format
            ((wchar_t *)&(this->Bookmarks).ArrayNum,0xffff,this->FormatBuffer + 0xfffc,0xffff,
             pFVar7->FormatString,param_4);
  pTStack_40 = ::operator_new(0x28);
  if (pTStack_40 == (TReferenceControllerBase<1> *)0x0) {
    local_48 = ___xmm_00000000000000000000000000000010;
    pTStack_40 = _UNK_150651568;
  }
  else {
    pTStack_40->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_40->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFBookmarkInternal_TraceServices___00_SharedPointerInternals__6B_
    ;
    pTStack_40->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_40[2]._padding_ = 0;
    pTStack_40[1]._padding_ = 0;
    pTStack_40[1].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_40[1].WeakReferenceCount = (atomic<int>)0x0;
    local_48 = (FBookmarkInternal *)(pTStack_40 + 1);
    if ((local_48 == (FBookmarkInternal *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_48->Time = param_2;
  uVar8 = (**(code **)(*(longlong *)this->_padding_ + 0xd0))
                    ((longlong *)this->_padding_,&(this->Bookmarks).ArrayNum);
  *(undefined8 *)&local_48->Text = uVar8;
  local_48->CallstackId = param_3;
  ppFVar2 = *(FBookmarkInternal ***)&(this->SpecMap).field_0x48;
  if (((ppFVar2 <= &local_48) &&
      (&local_48 <
       ppFVar2 + (longlong)*(int *)((longlong)&(this->Bookmarks).AllocatorInstance.Data + 4) * 2))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)&(this->Bookmarks).AllocatorInstance.Data;
  piVar1 = (int *)((longlong)&(this->Bookmarks).AllocatorInstance.Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&(this->SpecMap).field_0x48,piVar1);
  }
  *(int *)&(this->Bookmarks).AllocatorInstance.Data = iVar6 + 1;
  lVar3 = *(longlong *)&(this->SpecMap).field_0x48;
  *(FBookmarkInternal **)(lVar3 + (longlong)iVar6 * 0x10) = local_48;
  *(TReferenceControllerBase<1> **)(lVar3 + 8 + (longlong)iVar6 * 0x10) = pTStack_40;
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = local_48;
  local_38.SharedReferenceCount.ReferenceController = pTStack_40;
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  CheckBookmarkForRegion((FBookmarkProvider *)(this[-1].TempBuffer + 0xfffc),&local_38);
  (**(code **)(*(longlong *)this->_padding_ + 0x38))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return;
}

// AppendBookmark @ 14d43fcb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TraceServices::FBookmarkProvider::AppendBookmark
          (FBookmarkProvider *this,ulong64 param_1,double param_2,uint param_3,wchar_t *param_4)

{
  int *piVar1;
  FBookmarkInternal **ppFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FBookmarkInternal *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  TSharedRef<TraceServices::FBookmarkInternal,1> local_28 [2];
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  pTStack_30 = ::operator_new(0x28);
  if (pTStack_30 == (TReferenceControllerBase<1> *)0x0) {
    local_38 = ___xmm_00000000000000000000000000000010;
    pTStack_30 = _UNK_150651568;
  }
  else {
    pTStack_30->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_30->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFBookmarkInternal_TraceServices___00_SharedPointerInternals__6B_
    ;
    pTStack_30->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_30[2]._padding_ = 0;
    pTStack_30[1]._padding_ = 0;
    pTStack_30[1].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_30[1].WeakReferenceCount = (atomic<int>)0x0;
    local_38 = (FBookmarkInternal *)(pTStack_30 + 1);
    if ((local_38 == (FBookmarkInternal *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_38->Time = param_2;
  *(wchar_t **)&local_38->Text = param_4;
  local_38->CallstackId = param_3;
  ppFVar2 = *(FBookmarkInternal ***)&(this->SpecMap).field_0x48;
  if (((ppFVar2 <= &local_38) &&
      (&local_38 <
       ppFVar2 + (longlong)*(int *)((longlong)&(this->Bookmarks).AllocatorInstance.Data + 4) * 2))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)&(this->Bookmarks).AllocatorInstance.Data;
  piVar1 = (int *)((longlong)&(this->Bookmarks).AllocatorInstance.Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&(this->SpecMap).field_0x48,piVar1);
  }
  *(int *)&(this->Bookmarks).AllocatorInstance.Data = iVar6 + 1;
  lVar3 = *(longlong *)&(this->SpecMap).field_0x48;
  *(FBookmarkInternal **)(lVar3 + (longlong)iVar6 * 0x10) = local_38;
  *(TReferenceControllerBase<1> **)(lVar3 + 8 + (longlong)iVar6 * 0x10) = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28[0].Object = local_38;
  local_28[0].SharedReferenceCount.ReferenceController = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  CheckBookmarkForRegion((FBookmarkProvider *)(this[-1].TempBuffer + 0xfffc),local_28);
  (**(code **)(*(longlong *)this->_padding_ + 0x38))((longlong *)this->_padding_,SUB84(param_2,0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// CheckBookmarkForRegion @ 14d444b70

void __thiscall
TraceServices::FBookmarkProvider::CheckBookmarkForRegion
          (FBookmarkProvider *this,TSharedRef<TraceServices::FBookmarkInternal,1> *param_1)

{
  IAnalysisSession *pIVar1;
  wchar_t *_Str;
  int iVar2;
  longlong *plVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  FName local_res18;
  
  pIVar1 = this->Session;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::Name,"RegionProvider");
    _Init_thread_footer(&::_TSS0);
  }
  local_res18 = ::Name;
  plVar3 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x100))(pIVar1,&local_res18);
  if (plVar3 != (longlong *)0x0) {
    _Str = param_1->Object->Text;
    iVar6 = 0;
    if (_Str != (wchar_t *)0x0) {
      sVar4 = wcslen(_Str);
      iVar6 = (int)sVar4;
    }
    iVar2 = iVar6;
    if (0xc < iVar6) {
      iVar2 = 0xc;
    }
    iVar5 = 0;
    if (0 < iVar2) {
      iVar5 = iVar2;
    }
    if ((iVar5 == 0xc) &&
       (iVar2 = FGenericPlatformStricmp::Strnicmp(RegionStartToken.DataPtr,_Str,0xc), iVar2 == 0)) {
      (**(code **)(*plVar3 + 8))(plVar3);
      iVar2 = iVar6;
      if (iVar6 + -0xc < iVar6) {
        iVar2 = iVar6 + -0xc;
      }
      iVar5 = 0;
      if (0 < iVar2) {
        iVar5 = iVar2;
      }
      (**(code **)(*plVar3 + 0x30))
                (plVar3,_Str + ((longlong)iVar6 - (longlong)iVar5),param_1->Object->Time,0);
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    iVar2 = iVar6;
    if (10 < iVar6) {
      iVar2 = 10;
    }
    iVar5 = 0;
    if (0 < iVar2) {
      iVar5 = iVar2;
    }
    if ((iVar5 == 10) &&
       (iVar2 = FGenericPlatformStricmp::Strnicmp(RegionEndToken.DataPtr,_Str,10), iVar2 == 0)) {
      (**(code **)(*plVar3 + 8))(plVar3);
      iVar2 = iVar6;
      if (iVar6 + -10 < iVar6) {
        iVar2 = iVar6 + -10;
      }
      iVar5 = 0;
      if (0 < iVar2) {
        iVar5 = iVar2;
      }
      (**(code **)(*plVar3 + 0x40))
                (plVar3,_Str + ((longlong)iVar6 - (longlong)iVar5),param_1->Object->Time);
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// EnumerateBookmarks @ 14d451c40

void __thiscall
TraceServices::FBookmarkProvider::EnumerateBookmarks
          (FBookmarkProvider *this,double param_1,double param_2,
          TFunctionRef<void___cdecl(TraceServices::FBookmark_const_&)> *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  double *pdVar3;
  undefined8 *puVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  if (param_1 <= param_2) {
    uVar13 = (this->Bookmarks).ArrayNum;
    pFVar2 = (this->Bookmarks).AllocatorInstance.Data;
    uVar10 = 0;
    uVar12 = uVar13;
    if (0 < (int)uVar13) {
      do {
        iVar14 = (uVar12 >> 1) + uVar10;
        pdVar3 = *(double **)(pFVar2 + (longlong)iVar14 * 0x10);
        if (*pdVar3 <= param_1 && param_1 != *pdVar3) {
          uVar10 = iVar14 + (uVar12 & 1);
        }
        uVar6 = uVar12 >> 1;
        uVar12 = uVar12 >> 1;
      } while (uVar6 != 0);
    }
    if (((int)uVar10 < (int)uVar13) && (iVar14 = 0, 0 < (int)uVar13)) {
      do {
        iVar1 = (uVar13 >> 1) + iVar14;
        iVar7 = iVar1 + (uVar13 & 1);
        if (param_2 < **(double **)(pFVar2 + (longlong)iVar1 * 0x10)) {
          iVar7 = iVar14;
        }
        iVar14 = iVar7;
        uVar12 = uVar13 >> 1;
        uVar13 = uVar13 >> 1;
      } while (uVar12 != 0);
      if (iVar14 != 0) {
        lVar9 = (longlong)(int)uVar10;
        if (lVar9 <= iVar14 + -1) {
          lVar11 = lVar9 << 4;
          lVar9 = ((iVar14 + -1) - lVar9) + 1;
          do {
            uVar13 = 0;
            if ((int)uVar10 < (this->Bookmarks).ArrayNum) {
              uVar13 = ~uVar10 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            puVar4 = *(undefined8 **)((this->Bookmarks).AllocatorInstance.Data + lVar11);
            local_48 = *puVar4;
            local_40 = puVar4[1];
            local_38 = *(undefined4 *)(puVar4 + 2);
            (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_48);
            uVar10 = uVar10 + 1;
            lVar11 = lVar11 + 0x10;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
      }
    }
  }
  return;
}

// GetSpec @ 14d46c9b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FBookmarkSpec * __thiscall
TraceServices::FBookmarkProvider::GetSpec(FBookmarkProvider *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FBookmarkSpec *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  ulonglong *puVar6;
  TReferenceControllerBase<1> *pTVar7;
  undefined1 *puVar8;
  TPairInitializer<unsigned___int64_const_&,TSharedPtr<TraceServices::FBookmarkSpec,1>_const_&>
  local_res8;
  FBookmarkSpec *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  TSharedPtr<TraceServices::FBookmarkSpec,1> **local_28;
  FBookmarkSpec **local_20;
  
  local_res8.Value = (TSharedPtr<TraceServices::FBookmarkSpec,1> *)param_1;
  (**(code **)((longlong)*this->Session + 0xb0))();
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  if (*(int *)&(this->SpecMap).field_0x8 != *(int *)&(this->SpecMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->SpecMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->SpecMap).field_0x38;
    }
    iVar3 = *(int *)(puVar8 + (((ulonglong)local_res8.Value >> 0x20) * 0x17 +
                               (longlong)local_res8.Value &
                              (ulonglong)(*(int *)&(this->SpecMap).field_0x48 - 1)) * 4);
    if (iVar3 != -1) {
      do {
        puVar6 = (ulonglong *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->SpecMap).field_0x0);
        if ((TSharedPtr<TraceServices::FBookmarkSpec,1> *)*puVar6 == local_res8.Value) {
          pTVar5 = (TReferenceControllerBase<1> *)(puVar6 + 1);
          if (puVar6 == (ulonglong *)0x0) {
            pTVar5 = pTVar7;
          }
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            return (FBookmarkSpec *)pTVar5->_padding_;
          }
          break;
        }
        iVar3 = (int)puVar6[3];
      } while (iVar3 != -1);
    }
  }
  pTStack_30 = ::operator_new(0x28);
  if (pTStack_30 == (TReferenceControllerBase<1> *)0x0) {
    local_38 = ___xmm_00000000000000000000000000000010;
    pTStack_30 = _UNK_150651568;
  }
  else {
    pTStack_30->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_30->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_30->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFBookmarkSpec_TraceServices___00_SharedPointerInternals__6B_
    ;
    pTStack_30[2]._padding_ = 0;
    pTStack_30[1]._padding_ = 0;
    pTStack_30[1].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_30[1].WeakReferenceCount = (atomic<int>)0x0;
    if ((FBookmarkSpec *)(pTStack_30 + 1) == (FBookmarkSpec *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBookmarkSpec *)(*pcVar1)();
        return pFVar4;
      }
    }
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
    pTVar7 = pTStack_30;
    local_38 = (FBookmarkSpec *)(pTStack_30 + 1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (local_38 == (FBookmarkSpec *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBookmarkSpec *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_38->File = L"<unknown>";
  if (local_38 == (FBookmarkSpec *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBookmarkSpec *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_38->FormatString = L"<unknown>";
  local_28 = &local_res8.Value;
  local_20 = &local_38;
  TSet<TTuple<unsigned___int64,TSharedPtr<TraceServices::FBookmarkSpec,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<TraceServices::FBookmarkSpec,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned___int64_const_&,TSharedPtr<TraceServices::FBookmarkSpec,1>_const_&>_>
            ((TSet<TTuple<unsigned___int64,TSharedPtr<TraceServices::FBookmarkSpec,1>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TSharedPtr<TraceServices::FBookmarkSpec,1>,0>,FDefaultSetAllocator>
              *)&this->SpecMap,&local_res8,(bool *)&local_28);
  pFVar4 = local_38;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return pFVar4;
}

// UpdateBookmarkSpec @ 14d48ebb0

void __thiscall
TraceServices::FBookmarkProvider::UpdateBookmarkSpec
          (FBookmarkProvider *this,ulong64 param_1,wchar_t *param_2,wchar_t *param_3,int param_4)

{
  FBookmarkSpec *pFVar1;
  
  (**(code **)(*(longlong *)this->_padding_ + 0xb0))();
  pFVar1 = GetSpec((FBookmarkProvider *)(this[-1].TempBuffer + 0xfffc),param_1);
  pFVar1->FormatString = param_2;
  pFVar1->File = param_3;
  pFVar1->Line = param_4;
  return;
}

