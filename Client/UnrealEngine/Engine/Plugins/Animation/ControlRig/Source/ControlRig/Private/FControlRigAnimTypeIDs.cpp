// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// FindImpl @ 14a40ad40

FMovieSceneAnimTypeID __cdecl
FControlRigAnimTypeIDs::FindImpl
          (FName param_1,
          TSortedMap<FName,FMovieSceneAnimTypeID,TSizedDefaultAllocator<32>,FNameFastLess> *param_2)

{
  code *pcVar1;
  FKeyForward FVar2;
  bool bVar3;
  uint uVar4;
  FMovieSceneAnimTypeID FVar5;
  FScriptContainerElement *pFVar6;
  TTuple<FName,FMovieSceneAnimTypeID> *pTVar7;
  uint uVar8;
  TArray<TTuple<FName,FMovieSceneAnimTypeID>,TSizedDefaultAllocator<32>_> *in_R8;
  FName local_res10;
  FName local_res18;
  undefined8 local_res20;
  
  local_res10.ComparisonIndex.Value._0_1_ = SUB81(param_2,0);
  FVar2 = local_res10.ComparisonIndex.Value._0_1_;
  local_res10 = (FName)param_2;
  local_res18 = (FName)param_2;
  uVar4 = Algo::
          BinarySearchBy<TArray<TTuple<FName,FMovieSceneAnimTypeID>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,FMovieSceneAnimTypeID,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                    (in_R8,&local_res18,FVar2,(FNameFastLess)FVar2);
  if (uVar4 != 0xffffffff) {
    uVar8 = 0;
    if ((int)uVar4 < in_R8->ArrayNum) {
      uVar8 = ~uVar4 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        FVar5.ID = (*pcVar1)();
        return (FMovieSceneAnimTypeID)FVar5.ID;
      }
    }
    pFVar6 = (in_R8->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x10 + 8;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      *(undefined8 *)param_1 = *(undefined8 *)pFVar6;
      return (FMovieSceneAnimTypeID)param_1;
    }
  }
  FMovieSceneAnimTypeID::Unique();
  FVar5 = FMovieSceneAnimTypeID::Unique();
  pTVar7 = TSortedMap<FName,FMovieSceneAnimTypeID,TSizedDefaultAllocator<32>,FNameFastLess>::
           AllocateMemoryForEmplace<FName_const_&>
                     ((TSortedMap<FName,FMovieSceneAnimTypeID,TSizedDefaultAllocator<32>,FNameFastLess>
                       *)in_R8,&local_res10);
  *(uint *)&pTVar7->field_0x0 = local_res10.ComparisonIndex.Value;
  *(uint *)&pTVar7->field_0x4 = local_res10.Number;
  *(undefined8 *)&pTVar7->field_0x8 = *(undefined8 *)FVar5.ID;
  *(undefined8 *)param_1 = local_res20;
  return (FMovieSceneAnimTypeID)param_1;
}

// Get @ 14a410350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TSharedPtr<FControlRigAnimTypeIDs,1> * __cdecl
FControlRigAnimTypeIDs::Get
          (TSharedPtr<FControlRigAnimTypeIDs,1> *__return_storage_ptr__,UControlRig *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  FControlRigAnimTypeIDsAnnotation *pFVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<FControlRigAnimTypeIDs,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FControlRigAnimTypeIDs *pFVar9;
  TPairInitializer<UObjectBase_const_*_const_&,_public:_static_class_TSharedPtr<FControlRigAnimTypeIDs,1>___cdecl_FControlRigAnimTypeIDs::Get(UControlRig_const_*)_::_2_::FControlRigAnimTypeIDsAnnotation_const_&>
  local_res18;
  FControlRigAnimTypeIDs *local_58;
  FSharedReferencer<1> local_50;
  FControlRigAnimTypeIDsAnnotation local_48;
  FControlRigAnimTypeIDsAnnotation **local_38;
  FControlRigAnimTypeIDs **local_30;
  
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_TSharedPtr<FControlRigAnimTypeIDs,1>___cdecl_FControlRigAnimTypeIDs::Get(UControlRig_const*___ptr64)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_TSharedPtr<FControlRigAnimTypeIDs,1>___cdecl_FControlRigAnimTypeIDs::Get(UControlRig_const*___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_TSharedPtr<FControlRigAnimTypeIDs,1>___cdecl_FControlRigAnimTypeIDs::Get(UControlRig_const*___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      _AnimTypeIDAnnotation =
           &
           ___7__FUObjectAnnotationSparse_UFControlRigAnimTypeIDsAnnotation__1__Get_FControlRigAnimTypeIDs__SA_AV__TSharedPtr_UFControlRigAnimTypeIDs___00__PEBVUControlRig___Z__00__6B_
      ;
      _DAT_1552b0a18 = 0;
      _DAT_1552b0a08 = 0;
      _DAT_1552b0a10 = 0;
      DAT_1552b0a80 = '\0';
      _DAT_1552b0a20 = 0;
      _DAT_1552b0a38 = 0;
      _DAT_1552b0a40 = ___xmm_00000000ffffffff0000008000000000;
      uRam00000001552b0a48 = _UNK_150631d98;
      _DAT_1552b0a58 = 0;
      _DAT_1552b0a60 = 0;
      _DAT_1552b0a68 = (UControlRig *)0x0;
      _DAT_1552b0a70 = (FControlRigAnimTypeIDs *)0x0;
      _DAT_1552b0a78 = 0;
      atexit(`FControlRigAnimTypeIDs::Get'::__l2::
             _dynamic_atexit_destructor_for__AnimTypeIDAnnotation__);
      _Init_thread_footer(&`public:_static_class_TSharedPtr<FControlRigAnimTypeIDs,1>___cdecl_FControlRigAnimTypeIDs::Get(UControlRig_const*___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FUObjectAnnotationSparse<`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation,1>
  ::GetAnnotation(&`public:_static_class_TSharedPtr<FControlRigAnimTypeIDs,1>___cdecl_FControlRigAnimTypeIDs::Get(UControlRig_const*___ptr64)'
                   ::__l2::AnimTypeIDAnnotation,&local_48,(UObjectBase *)param_1);
  if (local_48.Ptr.Object != (FControlRigAnimTypeIDs *)0x0) {
    __return_storage_ptr__->Object = local_48.Ptr.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_48.Ptr.SharedReferenceCount.ReferenceController;
    if (local_48.Ptr.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
    {
      LOCK();
      (local_48.Ptr.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.Ptr.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.Ptr.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  pTVar6 = ::operator_new(0x50);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pFVar9 = (FControlRigAnimTypeIDs *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FControlRigAnimTypeIDs *)(pTVar6 + 1);
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFControlRigAnimTypeIDs___00_SharedPointerInternals__6B_
    ;
    pTVar6[1]._padding_ = 0;
    pTVar6[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[3]._padding_ = 0;
    pTVar6[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[4]._padding_ = 0;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[4].WeakReferenceCount = (atomic<int>)0x0;
    if (pFVar9 == (FControlRigAnimTypeIDs *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FControlRigAnimTypeIDs,1> *)(*pcVar1)();
        return pTVar7;
      }
    }
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    pTVar8 = pTVar6;
  }
  local_res18.Value = (FControlRigAnimTypeIDsAnnotation *)param_1;
  if (param_1 == (UControlRig *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x5f,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FControlRigAnimTypeIDs,1> *)(*pcVar1)();
      return pTVar7;
    }
  }
  local_58 = pFVar9;
  local_50.ReferenceController = pTVar8;
  if (pFVar9 == (FControlRigAnimTypeIDs *)0x0) {
    FUObjectAnnotationSparse<`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation,1>
    ::RemoveAnnotation(&`public:_static_class_TSharedPtr<FControlRigAnimTypeIDs,1>___cdecl_FControlRigAnimTypeIDs::Get(UControlRig_const*___ptr64)'
                        ::__l2::AnimTypeIDAnnotation,(UObjectBase *)local_res18.Value);
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_1552b0a08);
    iVar3 = DAT_1552b0a4c;
    local_38 = &local_res18.Value;
    iVar2 = DAT_1552b0a20;
    local_30 = &local_58;
    TSet<TTuple<UObjectBase_const_*,`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,`FControlRigAnimTypeIDs::Get'::__l2::FControlRigAnimTypeIDsAnnotation,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UObjectBase_const_*_const_&,_FControlRigAnimTypeIDs::Get_::__l2::FControlRigAnimTypeIDsAnnotation_const_&>_>
              (&DAT_1552b0a18,&local_res18,(bool *)&local_38);
    pFVar4 = local_res18.Value;
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_1552b0a10);
    _DAT_1552b0a70 = local_58;
    _DAT_1552b0a68 = (UControlRig *)pFVar4;
    local_58 = (FControlRigAnimTypeIDs *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&DAT_1552b0a78,&local_50);
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1552b0a10);
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1552b0a08);
    if (iVar2 == iVar3) {
      EnterCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_1552b0a08);
      if (DAT_1552b0a20 == DAT_1552b0a4c) {
        if (DAT_1552b0a80 != '\0') {
          FUObjectArray::RemoveUObjectDeleteListener
                    (&GUObjectArray,
                     (FUObjectDeleteListener *)
                     &`public:_static_class_TSharedPtr<FControlRigAnimTypeIDs,1>___cdecl_FControlRigAnimTypeIDs::Get(UControlRig_const*___ptr64)'
                      ::__l2::AnimTypeIDAnnotation);
          DAT_1552b0a80 = '\0';
        }
      }
      else if (DAT_1552b0a80 == '\0') {
        FUObjectArray::AddUObjectDeleteListener
                  (&GUObjectArray,
                   (FUObjectDeleteListener *)
                   &`public:_static_class_TSharedPtr<FControlRigAnimTypeIDs,1>___cdecl_FControlRigAnimTypeIDs::Get(UControlRig_const*___ptr64)'
                    ::__l2::AnimTypeIDAnnotation);
        DAT_1552b0a80 = '\x01';
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1552b0a08);
      LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  __return_storage_ptr__->Object = pFVar9;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Ptr.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

