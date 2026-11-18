// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// HandleTokenStreamObjectReference @ 1421d1b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FDirectReferenceSearch>::
FProcessor::HandleTokenStreamObjectReference
          (FProcessor *this,FWorkerContext *param_1,UObject *param_2,UObject **param_3,
          FMemberId param_4,EOrigin param_5,bool param_6)

{
  uint uVar1;
  int iVar2;
  UGCObjectReferencer *pUVar3;
  FDirectReferenceSearch *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  UGCObjectReferencer *pUVar8;
  FThreadData *this_00;
  int local_res20 [2];
  int local_18 [4];
  
  pUVar3 = FGCObject::GGCObjectReferencer;
  if (*param_3 != (UObject *)0x0) {
    pUVar8 = (UGCObjectReferencer *)param_1->ReferencingObject;
    if ((((UGCObjectReferencer *)param_1->ReferencingObject == (UGCObjectReferencer *)0x0) &&
        (pUVar8 = pUVar3, FGCObject::GGCObjectReferencer == (UGCObjectReferencer *)0x0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ReferencingObject",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ReferenceChainSearch.cpp"
                           ,0x104,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar3 = (UGCObjectReferencer *)*param_3;
    if (pUVar3 != pUVar8) {
      pFVar4 = this->This;
      uVar1 = this->ThreadIndex;
      uVar7 = 0;
      if ((int)uVar1 < *(int *)&pFVar4->field_0x10) {
        uVar7 = ~uVar1 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = (FThreadData *)((longlong)(int)uVar1 * 0x88 + *(longlong *)&pFVar4->field_0x8);
      if ((UGCObjectReferencer *)this_00->PreviousReferencingObject != pUVar8) {
        FThreadData::FlushEdgeList(this_00,*(FPolicyUObjectHeap **)pFVar4);
      }
      this_00->PreviousReferencingObject = (UObject *)pUVar8;
      iVar2 = *(int *)((longlong)&pUVar3->_padding_ + 4);
      if ((iVar2 < 0) || (GUObjectArray.ObjObjects.NumElements <= iVar2)) {
        Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)
                   &`public:_int___cdecl_UE::ReferenceChainSearch::FPolicyUObjectHeap::ObjectToVertex(UObject_const*___ptr64)const___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogReferenceChain);
      }
      local_res20[0] = iVar2;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                (&this_00->CurrentEdgeList,local_18,(bool *)local_res20);
    }
  }
  return;
}

// HandleTokenStreamObjectReference @ 1421d1cc0

void __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FMinimalReferenceSearch>::
FProcessor::HandleTokenStreamObjectReference
          (FProcessor *this,FWorkerContext *param_1,UObject *param_2,UObject **param_3,
          FMemberId param_4,EOrigin param_5,bool param_6)

{
  code *pcVar1;
  UGCObjectReferencer *pUVar2;
  bool bVar3;
  UGCObjectReferencer *pUVar4;
  
  pUVar2 = FGCObject::GGCObjectReferencer;
  if (*param_3 != (UObject *)0x0) {
    pUVar4 = (UGCObjectReferencer *)param_1->ReferencingObject;
    if ((((UGCObjectReferencer *)param_1->ReferencingObject == (UGCObjectReferencer *)0x0) &&
        (pUVar4 = pUVar2, FGCObject::GGCObjectReferencer == (UGCObjectReferencer *)0x0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ReferencingObject",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ReferenceChainSearch.cpp"
                           ,0x104,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((UGCObjectReferencer *)*param_3 != pUVar4) {
      FMinimalReferenceSearch::HandleObjectReference
                (this->This,param_1,this->ThreadIndex,*param_3,(UObject *)pUVar4,param_4,param_5);
    }
  }
  return;
}

// HandleTokenStreamObjectReference @ 1421d1d70

void __thiscall
UE::ReferenceChainSearch::TReferenceSearchBase<UE::ReferenceChainSearch::FReferenceInfoSearch>::
FProcessor::HandleTokenStreamObjectReference
          (FProcessor *this,FWorkerContext *param_1,UObject *param_2,UObject **param_3,
          FMemberId param_4,EOrigin param_5,bool param_6)

{
  code *pcVar1;
  UGCObjectReferencer *pUVar2;
  bool bVar3;
  UGCObjectReferencer *pUVar4;
  
  pUVar2 = FGCObject::GGCObjectReferencer;
  if (*param_3 != (UObject *)0x0) {
    pUVar4 = (UGCObjectReferencer *)param_1->ReferencingObject;
    if ((((UGCObjectReferencer *)param_1->ReferencingObject == (UGCObjectReferencer *)0x0) &&
        (pUVar4 = pUVar2, FGCObject::GGCObjectReferencer == (UGCObjectReferencer *)0x0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ReferencingObject",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ReferenceChainSearch.cpp"
                           ,0x104,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((UGCObjectReferencer *)*param_3 != pUVar4) {
      FReferenceInfoSearch::HandleObjectReference
                (this->This,param_1,this->ThreadIndex,*param_3,(UObject *)pUVar4,param_4,param_5);
    }
  }
  return;
}

