// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 20

// StaticClass @ 146269400

UClass * __cdecl UMovieSceneBindingLifetimeTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBindingLifetimeTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBindingLifetimeTrack",
               &Z_Registration_Info_UClass_UMovieSceneBindingLifetimeTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneBindingLifetimeTrack,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBindingLifetimeTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneBindingLifetimeTrack>,local_res8,
               UMovieSceneTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBindingLifetimeTrack.InnerSingleton;
}

// UMovieSceneBindingLifetimeTrack @ 146299a70

UMovieSceneBindingLifetimeTrack * __thiscall
UMovieSceneBindingLifetimeTrack::UMovieSceneBindingLifetimeTrack
          (UMovieSceneBindingLifetimeTrack *this,FVTableHelper *param_1)

{
  UMovieSceneTrack::UMovieSceneTrack((UMovieSceneTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneBindingLifetimeTrack__6B_;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  return this;
}

// UMovieSceneBindingLifetimeTrack @ 146299ac0

UMovieSceneBindingLifetimeTrack * __thiscall
UMovieSceneBindingLifetimeTrack::UMovieSceneBindingLifetimeTrack
          (UMovieSceneBindingLifetimeTrack *this,FObjectInitializer *param_1)

{
  UMovieSceneTrack::UMovieSceneTrack((UMovieSceneTrack *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneBindingLifetimeTrack__6B_;
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  return this;
}

// ~UMovieSceneBindingLifetimeTrack @ 14629bab0

void __thiscall
UMovieSceneBindingLifetimeTrack::~UMovieSceneBindingLifetimeTrack
          (UMovieSceneBindingLifetimeTrack *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UMovieSceneDecorationContainerObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneTrackVirtualAPI__;
  this->_padding_ = (longlong)&___7UMovieSceneBindingLifetimeTrack__6B_;
  pFVar1 = (this->Sections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IMovieSceneEntityProvider__6B_;
  UMovieSceneTrack::~UMovieSceneTrack((UMovieSceneTrack *)this);
  return;
}

// operator() @ 14629deb0

void __thiscall
`UMovieSceneBindingLifetimeTrack::CalculateInverseLifetimeRange'::__l2::<lambda_1>::operator()
          (void *this,FFrameNumberRange *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  TArray<TRange<FFrameNumber>,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong *plVar12;
  TRange<FFrameNumber> *this_00;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  TArray<TRange<FFrameNumber>,TSizedDefaultAllocator<32>_> local_48;
  
  plVar12 = *(longlong **)this;
  uVar15 = 0;
  if (0 < (int)plVar12[1]) {
    do {
      uVar16 = ~uVar15 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar15 < (int)plVar12[1]) {
        uVar14 = uVar16;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = (TRange<FFrameNumber> *)(*plVar12 + (longlong)(int)uVar15 * 0x10);
      bVar7 = TRange<FFrameNumber>::Overlaps(this_00,(TRange<FFrameNumber> *)param_1);
      uVar14 = uVar15;
      if (bVar7) {
        if ((*(char *)param_1 == '\x02') && (param_1->field_0x8 == '\x02')) {
          pFVar3 = *(ForAnyElementType **)this;
          iVar10 = *(int *)((longlong)&pFVar3[1].Data + 4);
          *(undefined4 *)&pFVar3[1].Data = 0;
          if (-1 < iVar10) {
            return;
          }
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,0,pFVar3,0,(int *)((longlong)&pFVar3[1].Data + 4));
          return;
        }
        pTVar11 = TRange<FFrameNumber>::Difference
                            (&local_48,this_00,(TRange<FFrameNumber> *)param_1);
        pFVar2 = (pTVar11->AllocatorInstance).Data;
        (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        iVar10 = pTVar11->ArrayNum;
        pTVar11->ArrayNum = 0;
        pTVar11->ArrayMax = 0;
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        for (pFVar13 = pFVar2; pFVar13 != pFVar2 + (longlong)iVar10 * 0x10; pFVar13 = pFVar13 + 0x10
            ) {
          if ((*pFVar13 != (FScriptContainerElement)0x2) ||
             (pFVar13[8] != (FScriptContainerElement)0x2)) {
            pFVar3 = *(ForAnyElementType **)this;
            if ((pFVar3->Data <= pFVar13) &&
               ((pFVar13 < pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10
                && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)))) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar8 = *(int *)&pFVar3[1].Data;
            piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x410,pFVar3,piVar1);
            }
            *(int *)&pFVar3[1].Data = iVar8 + 1;
            uVar6 = *(undefined8 *)(pFVar13 + 8);
            pFVar4 = pFVar3->Data;
            *(undefined8 *)(pFVar4 + (longlong)iVar8 * 0x10) = *(undefined8 *)pFVar13;
            *(undefined8 *)(pFVar4 + (longlong)iVar8 * 0x10 + 8) = uVar6;
          }
        }
        pFVar3 = *(ForAnyElementType **)this;
        uVar14 = uVar15 - 1;
        uVar9 = 0;
        if ((int)uVar15 < *(int *)&pFVar3[1].Data) {
          uVar9 = uVar16;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = *(int *)&pFVar3[1].Data + ~uVar15;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar3->Data + (longlong)(int)uVar15 * 0x10,
                  pFVar3->Data + (longlong)(*(int *)&pFVar3[1].Data - iVar10) * 0x10,
                  (longlong)iVar10 << 4);
        }
        *(int *)&pFVar3[1].Data = *(int *)&pFVar3[1].Data + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,pFVar3,*(int *)&pFVar3[1].Data,(int *)((longlong)&pFVar3[1].Data + 4));
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
      }
      plVar12 = *(longlong **)this;
      uVar15 = uVar14 + 1;
    } while ((int)uVar15 < (int)plVar12[1]);
  }
  return;
}

// AddSection @ 1462a2900

void __thiscall
UMovieSceneBindingLifetimeTrack::AddSection
          (UMovieSceneBindingLifetimeTrack *this,UMovieSceneSection *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UMovieSceneSection *local_18 [2];
  
  plVar2 = &this->_padding_;
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  if (((UMovieSceneSection **)*plVar2 <= local_18) &&
     (local_18 < (UMovieSceneSection **)*plVar2 + *(int *)((longlong)&this->_padding_ + 4))) {
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
  iVar5 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)plVar2,piVar1);
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  *(UMovieSceneSection **)(*plVar2 + (longlong)iVar5 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  return;
}

// CalculateInverseLifetimeRange @ 1462a6480

TArray<FFrameNumberRange,TSizedDefaultAllocator<32>_> * __cdecl
UMovieSceneBindingLifetimeTrack::CalculateInverseLifetimeRange
          (TArray<FFrameNumberRange,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FFrameNumberRange,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TRangeBound<FFrameNumber> TVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  TArray<FFrameNumberRange,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  TRange<FFrameNumber> *pTVar9;
  TRange<FFrameNumber> *pTVar10;
  ForAnyElementType FVar11;
  TRange<FFrameNumber> *pTVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  undefined4 uStackX_24;
  uint local_98;
  TArray<FFrameNumberRange,TSizedDefaultAllocator<32>_> *local_90;
  ForAnyElementType local_88;
  int local_80;
  int iStack_7c;
  ulonglong local_78;
  ulonglong uStack_70;
  TRange<FFrameNumber> local_68;
  TRangeBound<FFrameNumber> local_58;
  TRangeBound<FFrameNumber> TStack_50;
  
  local_res20 = CONCAT31(local_res20._1_3_,2);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uStackX_24 = 0;
  local_78 = (ulonglong)local_res20;
  local_98 = CONCAT31(local_98._1_3_,2);
  uStack_70 = (ulonglong)local_98;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x410,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(ulonglong *)pFVar1 = local_78;
  *(ulonglong *)(pFVar1 + 8) = uStack_70;
  local_res18 = param_1->ArrayNum;
  uVar6 = (ulonglong)(int)local_res18;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  iStack_7c = 0;
  pTVar9 = (TRange<FFrameNumber> *)(param_1->AllocatorInstance).Data;
  pTVar12 = pTVar9 + uVar6;
  local_90 = __return_storage_ptr__;
  while( true ) {
    if (param_1->ArrayNum != (int)uVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FFrameNumberRange_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    iVar5 = local_80;
    if (pTVar9 == pTVar12) break;
    pTVar10 = (TRange<FFrameNumber> *)(local_88.Data + (longlong)local_80 * 0x10);
    FVar11.Data = local_88.Data;
    while( true ) {
      if (local_80 != iVar5) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TRange<FFrameNumber>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if ((TRange<FFrameNumber> *)FVar11.Data == pTVar10) break;
      local_68.LowerBound.Type.Value =
           (((TRange<FFrameNumber> *)FVar11.Data)->LowerBound).Type.Value;
      local_68.LowerBound._1_3_ =
           *(undefined3 *)&(((TRange<FFrameNumber> *)FVar11.Data)->LowerBound).field_0x1;
      local_68.LowerBound.Value.Value =
           (((TRange<FFrameNumber> *)FVar11.Data)->LowerBound).Value.Value;
      local_68.UpperBound.Type.Value =
           (((TRange<FFrameNumber> *)FVar11.Data)->UpperBound).Type.Value;
      local_68.UpperBound._1_3_ =
           *(undefined3 *)&(((TRange<FFrameNumber> *)FVar11.Data)->UpperBound).field_0x1;
      local_68.UpperBound.Value.Value =
           (((TRange<FFrameNumber> *)FVar11.Data)->UpperBound).Value.Value;
      if ((((local_68.LowerBound.Type.Value != '\x01') || (local_68.UpperBound.Type.Value != '\x01')
           ) || (local_68.LowerBound.Value.Value != local_68.UpperBound.Value.Value)) &&
         (((((pTVar9->LowerBound).Type.Value != '\x01' ||
            ((pTVar9->UpperBound).Type.Value != '\x01')) ||
           ((pTVar9->LowerBound).Value.Value != (pTVar9->UpperBound).Value.Value)) &&
          (bVar4 = TRange<FFrameNumber>::Overlaps(&local_68,pTVar9), bVar4)))) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1589197805723844464>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Tracks\\MovieSceneBindingLifetimeTrack.cpp"
                           ,0x90,"false");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TArray<FFrameNumberRange,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar7;
        }
        __return_storage_ptr__->ArrayNum = 0;
        if (__return_storage_ptr__->ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,0,&__return_storage_ptr__->AllocatorInstance,0,
                     &__return_storage_ptr__->ArrayMax);
        }
        goto joined_r0x0001462a66e4;
      }
      FVar11.Data = FVar11.Data + 0x10;
    }
    if (((local_88.Data <= pTVar9) &&
        (pTVar9 < (TRange<FFrameNumber> *)(local_88.Data + (longlong)iStack_7c * 0x10))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TArray<FFrameNumberRange,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar7;
    }
    if (local_80 == iStack_7c) {
      local_80 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&local_88,&iStack_7c);
    }
    lVar8 = (longlong)local_80;
    local_80 = local_80 + 1;
    TVar3 = pTVar9->UpperBound;
    *(TRangeBound<FFrameNumber> *)&local_88.Data[lVar8 * 0x10].field_0x0 = pTVar9->LowerBound;
    *(TRangeBound<FFrameNumber> *)(local_88.Data + lVar8 * 0x10 + 8) = TVar3;
    local_58 = pTVar9->LowerBound;
    TStack_50 = pTVar9->UpperBound;
    `UMovieSceneBindingLifetimeTrack::CalculateInverseLifetimeRange'::__l2::<lambda_1>::operator()
              (&local_90,(FFrameNumberRange *)&local_58);
    uVar6 = (ulonglong)local_res18;
    pTVar9 = pTVar9 + 1;
  }
joined_r0x0001462a66e4:
  if ((TRange<FFrameNumber> *)local_88.Data != (TRange<FFrameNumber> *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return __return_storage_ptr__;
}

// CreateNewSection @ 1462ab240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSection * __thiscall
UMovieSceneBindingLifetimeTrack::CreateNewSection(UMovieSceneBindingLifetimeTrack *this)

{
  UClass *pUVar1;
  UMovieSceneSection *pUVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UMovieSceneBindingLifetimeSection_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._24_4_ = RF_Transactional;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  pUVar2 = (UMovieSceneSection *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// GetAllSections @ 1462ae8b0

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
UMovieSceneBindingLifetimeTrack::GetAllSections(UMovieSceneBindingLifetimeTrack *this)

{
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)&this->Sections;
}

// GetPrivateStaticClass @ 1462af6a0

UClass * __cdecl UMovieSceneBindingLifetimeTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBindingLifetimeTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBindingLifetimeTrack",
               &Z_Registration_Info_UClass_UMovieSceneBindingLifetimeTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneBindingLifetimeTrack,0x130,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBindingLifetimeTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneBindingLifetimeTrack>,local_res8,
               UMovieSceneTrack::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBindingLifetimeTrack.InnerSingleton;
}

// HasSection @ 1462b1500

bool __thiscall
UMovieSceneBindingLifetimeTrack::HasSection
          (UMovieSceneBindingLifetimeTrack *this,UMovieSceneSection *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->Sections).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->Sections).ArrayNum * 8;
  for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 8) {
    if (*(UMovieSceneSection **)pFVar2 == param_1) goto LAB_1462b1527;
  }
  pFVar2 = (FScriptContainerElement *)0x0;
LAB_1462b1527:
  return pFVar2 != (FScriptContainerElement *)0x0;
}

// ImportEntityImpl @ 1462b1700

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneBindingLifetimeTrack::ImportEntityImpl
          (UMovieSceneBindingLifetimeTrack *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
  TComponentTypeID<FGuid> TVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FBuiltInComponentTypes *pFVar4;
  FGuid *pFVar5;
  TComponentTypeID<UE::MovieScene::FMovieSceneBindingLifetimeComponentData> local_78;
  bool bStack_76;
  undefined1 uStack_75;
  FGuid local_60;
  FGuid local_50;
  undefined **local_40;
  TComponentTypeID<FGuid> local_38;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined1 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_18;
  
  pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar5 = UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_60);
  TVar1 = pFVar4->GenericObjectBinding;
  uVar2._0_4_ = pFVar5->A;
  uVar2._4_4_ = pFVar5->B;
  uVar3._0_4_ = pFVar5->C;
  uVar3._4_4_ = pFVar5->D;
  pFVar5 = UE::MovieScene::FEntityImportParams::GetObjectBindingID(param_2,&local_50);
  bStack_76 = ((pFVar5->D != 0 || pFVar5->C != 0) || pFVar5->B != 0) || pFVar5->A != 0;
  local_78 = pFVar4->BindingLifetime;
  local_24 = 1;
  local_20 = _local_78;
  local_40 = &
             ___7__TEntityBuilder_U__TAdd_UFGuid___MovieScene_UE__U__TAddConditional_UFMovieSceneBindingLifetimeComponentData_MovieScene_UE___23__MovieScene_UE__6B_
  ;
  local_1c = 0x101;
  local_18 = 0;
  local_38 = TVar1;
  local_34 = uVar2;
  uStack_2c = uVar3;
  UE::MovieScene::FImportedEntity::
  AddBuilder<UE::MovieScene::TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>_>
            (param_3,(TEntityBuilder<UE::MovieScene::TAdd<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FMovieSceneBindingLifetimeComponentData>_>
                      *)&local_40);
  return;
}

// IsEmpty @ 1462b5460

bool __thiscall UMovieSceneBindingLifetimeTrack::IsEmpty(UMovieSceneBindingLifetimeTrack *this)

{
  return (this->Sections).ArrayNum == 0;
}

// PopulateEvaluationFieldImpl @ 1462b62f0

bool __thiscall
UMovieSceneBindingLifetimeTrack::PopulateEvaluationFieldImpl
          (UMovieSceneBindingLifetimeTrack *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  FObjectPtr_u_0 *this_00;
  UMovieSceneBindingLifetimeSection *this_01;
  code *pcVar1;
  undefined4 uVar2;
  UMovieSceneTrack *pUVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  FMovieSceneTrackEvaluationField *pFVar8;
  UClass *pUVar9;
  FFrameNumber *pFVar10;
  int iVar11;
  FObjectPtr_u_0 *pFVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  FObjectPtr_u_0 *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  TRange<FFrameNumber> *pTVar18;
  FObjectPtr_u_0 *pFVar19;
  undefined1 local_res8 [8];
  TRange<FFrameNumber> *local_res10;
  undefined1 local_148;
  undefined1 local_147 [3];
  FObjectPtr_u_0 local_144;
  FObjectPtr_u_0 FStack_13c;
  TArray<FFrameNumberRange,TSizedDefaultAllocator<32>_> local_130;
  FObjectPtr_u_0 local_118;
  FObjectPtr_u_0 FStack_110;
  TRange<FFrameNumber> local_108;
  uint local_f8;
  undefined4 uStack_f4;
  uint local_f0;
  undefined4 uStack_ec;
  uint local_e8;
  undefined4 uStack_e4;
  uint local_e0;
  undefined4 uStack_dc;
  UMovieSceneTrack *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  TArray<FFrameNumberRange,TSizedDefaultAllocator<32>_> local_c0;
  FMovieSceneTrackEvaluationField *local_b0;
  UMovieSceneCondition *local_a8 [2];
  undefined1 local_98 [24];
  void *local_80;
  FString local_70;
  FName local_60;
  FFrameNumber local_58;
  FScriptContainerElement local_54;
  byte local_53;
  
  local_d8 = (UMovieSceneTrack *)&this[-1]._padding_;
  local_res10 = param_1;
  pFVar8 = UMovieSceneTrack::GetEvaluationField(local_d8);
  iVar11 = 0;
  local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ArrayNum = 0;
  local_130.ArrayMax = 0;
  pFVar13 = (pFVar8->Entries).AllocatorInstance.Data;
  iVar7 = (pFVar8->Entries).ArrayNum;
  pFVar16 = pFVar13 + (longlong)iVar7 * 0x20;
  pFVar17 = pFVar13 + 8;
  local_b0 = pFVar8;
  while( true ) {
    if ((pFVar8->Entries).ArrayNum != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMovieSceneTrackEvaluationFieldEntry_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
      iVar11 = local_130.ArrayNum;
    }
    if (pFVar13 == pFVar16) break;
    local_d0 = *(undefined8 *)pFVar17;
    uStack_c8 = *(undefined8 *)(pFVar17 + 8);
    iVar6 = iVar11;
    if ((local_130.AllocatorInstance.Data <= (FScriptContainerElement *)&local_d0) &&
       ((FScriptContainerElement *)&local_d0 <
        local_130.AllocatorInstance.Data + (longlong)local_130.ArrayMax * 0x10)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      iVar6 = local_130.ArrayNum;
    }
    if (iVar6 == local_130.ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&local_130.AllocatorInstance,&local_130.ArrayMax);
    }
    iVar11 = iVar6 + 1;
    local_130.ArrayNum = iVar11;
    pFVar13 = pFVar13 + 0x20;
    pFVar17 = pFVar17 + 0x20;
    *(undefined8 *)(local_130.AllocatorInstance.Data + (longlong)iVar6 * 0x10) = local_d0;
    *(undefined8 *)(local_130.AllocatorInstance.Data + (longlong)iVar6 * 0x10 + 8) = uStack_c8;
  }
  CalculateInverseLifetimeRange(&local_c0,&local_130);
  pUVar3 = local_d8;
  iVar7 = local_c0.ArrayNum;
  pTVar18 = (TRange<FFrameNumber> *)(local_c0.AllocatorInstance.Data + (longlong)iVar7 * 0x10);
  FVar14.Data = local_c0.AllocatorInstance.Data;
  while( true ) {
    if (local_c0.ArrayNum != iVar7) {
      local_148 = 0;
      `TCheckedPointerIterator<FFrameNumberRange,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_148);
    }
    if ((TRange<FFrameNumber> *)FVar14.Data == pTVar18) break;
    iVar11 = FMovieSceneEntityComponentFieldBuilder::AddMetaData(param_3,param_2);
    FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity
              (param_3,(TRange<FFrameNumber> *)FVar14.Data,(UObject *)pUVar3,0,iVar11);
    FVar14.Data = FVar14.Data + 0x10;
  }
  pFVar17 = (pFVar8->Entries).AllocatorInstance.Data;
  iVar7 = (pFVar8->Entries).ArrayNum;
  pFVar13 = pFVar17 + (longlong)iVar7 * 0x20;
  pFVar19 = (FObjectPtr_u_0 *)(pFVar17 + 0x10);
  do {
    if ((local_b0->Entries).ArrayNum != iVar7) {
      local_147[0] = 0;
      `TCheckedPointerIterator<FMovieSceneTrackEvaluationFieldEntry_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_147);
    }
    if (pFVar17 == pFVar13) {
      if ((TRange<FFrameNumber> *)local_c0.AllocatorInstance.Data != (TRange<FFrameNumber> *)0x0) {
        FMemory::Free(local_c0.AllocatorInstance.Data);
      }
      if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.AllocatorInstance.Data);
      }
      return true;
    }
    if (*(longlong *)pFVar17 != 0) {
      pUVar9 = Z_Construct_UClass_UMovieSceneBindingLifetimeSection_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)pFVar17,pUVar9);
      if ((bVar4) &&
         (this_01 = *(UMovieSceneBindingLifetimeSection **)pFVar17,
         this_01 != (UMovieSceneBindingLifetimeSection *)0x0)) {
        local_144._0_4_ = *(undefined4 *)&local_res10->LowerBound;
        local_144._4_4_ = (local_res10->LowerBound).Value.Value;
        FStack_13c._0_4_ = *(undefined4 *)&local_res10->UpperBound;
        iVar11 = (local_res10->UpperBound).Value.Value;
        FStack_13c._4_4_ = iVar11;
        if (((char)local_144._0_4_ == '\x02') || ((char)FStack_13c._0_4_ == '\x02')) {
LAB_1462b65f5:
          this_00 = pFVar19 + -1;
          bVar4 = TRange<FFrameNumber>::IsEmpty((TRange<FFrameNumber> *)this_00);
          if (bVar4) {
            local_e0 = local_e0 & 0xffffff00;
            uStack_dc = 0;
            FStack_110._4_4_ = 0;
            FStack_110._0_4_ = local_e0;
            local_e8 = local_e8 & 0xffffff00;
            uStack_e4 = 0;
            local_118._4_4_ = 0;
            local_118._0_4_ = local_e8;
          }
          else {
            pFVar12 = pFVar19;
            if ((char)FStack_13c._0_4_ != '\x02') {
              if (*(FScriptContainerElement *)pFVar19 == (FScriptContainerElement)0x2) {
                pFVar12 = &FStack_13c;
              }
              else if ((int)FStack_13c._4_4_ < *(int *)((longlong)pFVar19 + 4)) {
                pFVar12 = &FStack_13c;
              }
              else if (((int)FStack_13c._4_4_ <= *(int *)((longlong)pFVar19 + 4)) &&
                      (pFVar12 = &FStack_13c, (char)FStack_13c._0_4_ != '\0')) {
                pFVar12 = pFVar19;
              }
            }
            pFVar15 = this_00;
            if ((char)local_144._0_4_ != '\x02') {
              if (*(char *)this_00 == '\x02') {
                pFVar15 = &local_144;
              }
              else if (*(int *)((longlong)pFVar19 + -4) < (int)local_144._4_4_) {
                pFVar15 = &local_144;
              }
              else if ((*(int *)((longlong)pFVar19 + -4) <= (int)local_144._4_4_) &&
                      (pFVar15 = &local_144, (char)local_144._0_4_ != '\0')) {
                pFVar15 = this_00;
              }
            }
            local_118 = *pFVar15;
            FStack_110 = *pFVar12;
          }
        }
        else {
          if (((char)local_144._0_4_ == '\x02') &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
          if ((int)local_144._4_4_ <= iVar11) {
            pFVar10 = TRangeBound<FFrameNumber>::GetValue((TRangeBound<FFrameNumber> *)&FStack_13c);
            iVar11 = pFVar10->Value;
            pFVar10 = TRangeBound<FFrameNumber>::GetValue((TRangeBound<FFrameNumber> *)&local_144);
            if ((pFVar10->Value != iVar11) ||
               ((local_144._0_1_ != '\0' && (FStack_13c._0_1_ != '\0')))) goto LAB_1462b65f5;
          }
          local_f0 = local_f0 & 0xffffff00;
          uStack_ec = 0;
          FStack_110._4_4_ = 0;
          FStack_110._0_4_ = local_f0;
          local_f8 = local_f8 & 0xffffff00;
          uStack_f4 = 0;
          local_118._4_4_ = 0;
          local_118._0_4_ = local_f8;
        }
        uVar2 = FStack_110._4_4_;
        local_108.LowerBound._0_4_ = local_118._0_4_;
        local_108.LowerBound.Value.Value = local_118._4_4_;
        local_108.UpperBound._0_4_ = FStack_110._0_4_;
        local_108.UpperBound.Value.Value = FStack_110._4_4_;
        if ((local_118._0_1_ == '\x02') || (FStack_110._0_1_ == '\x02')) {
LAB_1462b6720:
          local_98._0_8_ = *(undefined8 *)&(param_2->Condition).SoftObjectPtr;
          FSoftObjectPath::FSoftObjectPath
                    ((FSoftObjectPath *)(local_98 + 8),
                     (FSoftObjectPath *)&(param_2->Condition).SoftObjectPtr.field_0x8);
          ::FString::FString(&local_70,&param_2->OverrideBoundPropertyPath);
          local_60 = param_2->NotifyFunctionName;
          local_58.Value = (param_2->ForcedTime).Value;
          local_53 = param_2->field_0x45 & 3 | local_53 & 0xfc;
          local_54 = *(FScriptContainerElement *)((longlong)pFVar19 + 0xc);
          if (*(UMovieSceneSection **)pFVar17 != (UMovieSceneSection *)0x0) {
            local_a8[0] = MovieSceneHelpers::GetSequenceCondition
                                    (local_d8,*(UMovieSceneSection **)pFVar17,true);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_a8[0] != (UMovieSceneCondition *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_a8[0]);
            }
            FSoftObjectPtr::operator=((FSoftObjectPtr *)local_98,(FObjectPtr)local_a8);
          }
          UMovieSceneBindingLifetimeSection::ExternalPopulateEvaluationField
                    (this_01,&local_108,(FMovieSceneEvaluationFieldEntityMetaData *)local_98,param_3
                    );
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          if (local_80 != (void *)0x0) {
            FMemory::Free(local_80);
          }
        }
        else {
          if ((local_118._0_1_ == '\x02') &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
          if (local_108.LowerBound.Value.Value <= (int)uVar2) {
            pFVar10 = TRangeBound<FFrameNumber>::GetValue(&local_108.UpperBound);
            iVar11 = pFVar10->Value;
            pFVar10 = TRangeBound<FFrameNumber>::GetValue(&local_108.LowerBound);
            if ((pFVar10->Value != iVar11) ||
               ((local_108.LowerBound.Type.Value != '\0' &&
                (local_108.UpperBound.Type.Value != '\0')))) goto LAB_1462b6720;
          }
        }
      }
    }
    pFVar17 = pFVar17 + 0x20;
    pFVar19 = pFVar19 + 4;
  } while( true );
}

// RemoveAllAnimationData @ 1462b89d0

void __thiscall
UMovieSceneBindingLifetimeTrack::RemoveAllAnimationData(UMovieSceneBindingLifetimeTrack *this)

{
  int *piVar1;
  
  piVar1 = &(this->Sections).ArrayMax;
  (this->Sections).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Sections).AllocatorInstance,0,piVar1);
  }
  return;
}

// RemoveSection @ 1462b8ce0

void __thiscall
UMovieSceneBindingLifetimeTrack::RemoveSection
          (UMovieSceneBindingLifetimeTrack *this,UMovieSceneSection *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar1 = (int)this->_padding_;
  if (iVar1 != 0) {
    iVar6 = 0;
    plVar2 = (longlong *)this->_padding_;
    bVar7 = (UMovieSceneSection *)*plVar2 != param_1;
    lVar3 = 0;
    iVar4 = 0;
    do {
      iVar5 = iVar4;
      do {
        lVar3 = lVar3 + 1;
        iVar5 = iVar5 + 1;
        if (iVar1 <= lVar3) break;
      } while (bVar7 == ((UMovieSceneSection *)plVar2[lVar3] != param_1));
      if (bVar7 != false) {
        if (iVar6 != iVar4) {
          memmove(plVar2 + iVar6,plVar2 + iVar4,(longlong)(iVar5 - iVar4) << 3);
        }
        iVar6 = iVar6 + (iVar5 - iVar4);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar5;
    } while (lVar3 < iVar1);
    *(int *)&this->_padding_ = iVar6;
  }
  return;
}

// RemoveSectionAt @ 1462b9020

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMovieSceneBindingLifetimeTrack::RemoveSectionAt(UMovieSceneBindingLifetimeTrack *this,int param_1)

{
  TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             param_1,Default);
  return;
}

// StaticRegisterNativesUMovieSceneBindingLifetimeTrack @ 1462bddd0

void __cdecl
UMovieSceneBindingLifetimeTrack::StaticRegisterNativesUMovieSceneBindingLifetimeTrack(void)

{
  return;
}

// SupportsType @ 1462be030

bool __thiscall
UMovieSceneBindingLifetimeTrack::SupportsType
          (UMovieSceneBindingLifetimeTrack *this,TSubclassOf<UMovieSceneSection> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_UMovieSceneSection_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar4 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_1462be07a;
      }
    }
  }
  pUVar4 = (UClass *)0x0;
LAB_1462be07a:
  pUVar5 = Z_Construct_UClass_UMovieSceneBindingLifetimeSection_NoRegister();
  return pUVar4 == pUVar5;
}

// _getUObject @ 1462bfc90

UObject * __thiscall
UMovieSceneBindingLifetimeTrack::_getUObject(UMovieSceneBindingLifetimeTrack *this)

{
  return (UObject *)&this[-1]._padding_;
}

