// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 30

// Add<FTestConstSharedFragment_Int,int_const_&> @ 1470d24e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityBuilder * __thiscall
UE::Mass::FEntityBuilder::Add<FTestConstSharedFragment_Int,int_const_&>
          (FEntityBuilder *this,int *param_1)

{
  Add_GetRef<FTestConstSharedFragment_Int,int_const_&>(this,param_1);
  return this;
}

// Add<FTestFragment_Float> @ 1470d2620

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityBuilder * __thiscall UE::Mass::FEntityBuilder::Add<FTestFragment_Float>(FEntityBuilder *this)

{
  Add_GetRef<FTestFragment_Float>(this);
  return this;
}

// Add<FTestFragment_Float,float_const_&> @ 1470d26a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityBuilder * __thiscall
UE::Mass::FEntityBuilder::Add<FTestFragment_Float,float_const_&>
          (FEntityBuilder *this,float *param_1)

{
  Add_GetRef<FTestFragment_Float,float_const_&>(this,param_1);
  return this;
}

// Add<FTestFragment_Float,float> @ 1470d26c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityBuilder * __thiscall
UE::Mass::FEntityBuilder::Add<FTestFragment_Float,float>(FEntityBuilder *this,float *param_1)

{
  Add_GetRef<FTestFragment_Float,float_&>(this,param_1);
  return this;
}

// Add<FTestFragment_Int> @ 1470d26e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityBuilder * __thiscall UE::Mass::FEntityBuilder::Add<FTestFragment_Int>(FEntityBuilder *this)

{
  Add_GetRef<FTestFragment_Int>(this);
  return this;
}

// Add<FTestFragment_Int,int_const_&> @ 1470d27a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityBuilder * __thiscall
UE::Mass::FEntityBuilder::Add<FTestFragment_Int,int_const_&>(FEntityBuilder *this,int *param_1)

{
  Add_GetRef<FTestFragment_Int,int_const_&>(this,param_1);
  return this;
}

// Add<FTestFragment_Int,int> @ 1470d27c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityBuilder * __thiscall
UE::Mass::FEntityBuilder::Add<FTestFragment_Int,int>(FEntityBuilder *this,int *param_1)

{
  Add_GetRef<FTestFragment_Int,int_&>(this,param_1);
  return this;
}

// Add<FTestSharedFragment_Float,float_const_&> @ 1470d28f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityBuilder * __thiscall
UE::Mass::FEntityBuilder::Add<FTestSharedFragment_Float,float_const_&>
          (FEntityBuilder *this,float *param_1)

{
  Add_GetRef<FTestSharedFragment_Float,float_const_&>(this,param_1);
  return this;
}

// Add<FTestTag_A> @ 1470d2910

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityBuilder * __thiscall UE::Mass::FEntityBuilder::Add<FTestTag_A>(FEntityBuilder *this)

{
  int iVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  iVar1 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestTag_A>();
  FStructTypeBitSet::FBitSetContainer::AddAtIndex
            ((FBitSetContainer *)&(this->Composition).Tags,iVar1);
  this->State = ReadyToCommit;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CachedArchetypeHandle != (FMassArchetypeHandle *)&local_18) {
    (this->CachedArchetypeHandle).DataPtr.Object = (FMassArchetypeData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CachedArchetypeHandle).DataPtr.SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return this;
}

// Add<FTestTag_B> @ 1470d29c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityBuilder * __thiscall UE::Mass::FEntityBuilder::Add<FTestTag_B>(FEntityBuilder *this)

{
  int iVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  iVar1 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestTag_B>();
  FStructTypeBitSet::FBitSetContainer::AddAtIndex
            ((FBitSetContainer *)&(this->Composition).Tags,iVar1);
  this->State = ReadyToCommit;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CachedArchetypeHandle != (FMassArchetypeHandle *)&local_18) {
    (this->CachedArchetypeHandle).DataPtr.Object = (FMassArchetypeData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CachedArchetypeHandle).DataPtr.SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return this;
}

// Add_GetRef<FTestConstSharedFragment_Int,int_const_&> @ 1470d5e00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTestConstSharedFragment_Int * __thiscall
UE::Mass::FEntityBuilder::Add_GetRef<FTestConstSharedFragment_Int,int_const_&>
          (FEntityBuilder *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UPackage *pUVar5;
  FTestConstSharedFragment_Int *pFVar6;
  FInstancedStruct *this_00;
  FInstancedStruct *pFVar7;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar8;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar9;
  undefined1 local_res8 [8];
  TObjectPtr<UScriptStruct_const_>_u_0 local_28;
  TObjectPtr<UScriptStruct_const_>_u_0 TStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->State = ReadyToCommit;
  iVar4 = TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
          ::GetTypeIndex<FTestConstSharedFragment_Int>();
  bVar3 = FStructTypeBitSet::FConstBitSetContainer::Contains
                    ((FConstBitSetContainer *)&(this->Composition).ConstSharedFragments,iVar4);
  if (bVar3) {
    local_res8[0] = 0;
    bVar3 = `UE::Mass::FEntityBuilder::Add_GetRef<FTestConstSharedFragment_Int,int_const_&>'::__l3::
            <lambda_1>::operator()(local_res8);
    if (!bVar3) {
      FMassArchetypeSharedFragmentValues::Reset(&this->CachedSharedFragmentValues);
      if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,
                             (UObject *)pUVar5,L"TestConstSharedFragment_Int");
      }
      this_00 = (FInstancedStruct *)(this->ConstSharedFragments).AllocatorInstance.Data;
      pFVar7 = this_00 + (this->ConstSharedFragments).ArrayNum;
      for (; this_00 != pFVar7; this_00 = this_00 + 1) {
        if ((this_00->ScriptStruct).field0_0x0.DebugPtr ==
            Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)
        goto LAB_1470d5eb4;
      }
      this_00 = (FInstancedStruct *)0x0;
LAB_1470d5eb4:
      pFVar6 = FInstancedStruct::GetMutable<FTestConstSharedFragment_Int>(this_00);
      return pFVar6;
    }
  }
  iVar4 = TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
          ::GetTypeIndex<FTestConstSharedFragment_Int>();
  FStructTypeBitSet::FBitSetContainer::AddAtIndex
            ((FBitSetContainer *)&(this->Composition).ConstSharedFragments,iVar4);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CachedArchetypeHandle != (FMassArchetypeHandle *)&local_18) {
    (this->CachedArchetypeHandle).DataPtr.Object = (FMassArchetypeData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CachedArchetypeHandle).DataPtr.SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  FMassArchetypeSharedFragmentValues::Reset(&this->CachedSharedFragmentValues);
  pTVar8 = &this->ConstSharedFragments;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_28.ObjectPtr);
  FInstancedStruct::InitializeAs<FTestConstSharedFragment_Int,int_const_&>
            ((FInstancedStruct *)&local_28.ObjectPtr,param_1);
  pTVar9 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pTVar8->AllocatorInstance).Data;
  if (((pTVar9 <= &local_28) &&
      (&local_28 < pTVar9 + (longlong)(this->ConstSharedFragments).ArrayMax * 2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FTestConstSharedFragment_Int *)(*pcVar2)();
    return pFVar6;
  }
  iVar4 = (this->ConstSharedFragments).ArrayNum;
  piVar1 = &(this->ConstSharedFragments).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar8->AllocatorInstance,piVar1);
  }
  (this->ConstSharedFragments).ArrayNum = iVar4 + 1;
  pTVar9 = (TObjectPtr<UScriptStruct_const_>_u_0 *)
           ((pTVar8->AllocatorInstance).Data + (longlong)iVar4 * 0x10);
  pTVar9->DebugPtr = (UScriptStruct *)local_28;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (local_28.DebugPtr != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)local_28.DebugPtr);
  }
  pTVar9[1] = TStack_20;
  local_28.DebugPtr = (UScriptStruct *)0x0;
  TStack_20 = (TObjectPtr<UScriptStruct_const_>_u_0)0x0;
  pFVar6 = FInstancedStruct::GetMutable<FTestConstSharedFragment_Int>
                     ((FInstancedStruct *)&pTVar9->ObjectPtr);
  FInstancedStruct::Reset((FInstancedStruct *)&local_28.ObjectPtr);
  return pFVar6;
}

// Add_GetRef<FTestFragment_Float> @ 1470d6040

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTestFragment_Float * __thiscall
UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Float>(FEntityBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UPackage *pUVar5;
  FTestFragment_Float *pFVar6;
  FInstancedStruct *this_00;
  FInstancedStruct *pFVar7;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar8;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar9;
  undefined1 local_res8 [8];
  TObjectPtr<UScriptStruct_const_>_u_0 local_28;
  TObjectPtr<UScriptStruct_const_>_u_0 TStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->State = ReadyToCommit;
  iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestFragment_Float>();
  bVar3 = FStructTypeBitSet::FConstBitSetContainer::Contains
                    ((FConstBitSetContainer *)&this->Composition,iVar4);
  if (bVar3) {
    local_res8[0] = 0;
    bVar3 = `UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Float>'::__l3::<lambda_1>::
            operator()(local_res8);
    if (!bVar3) {
      if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar5,
                             L"TestFragment_Float");
      }
      this_00 = (FInstancedStruct *)(this->Fragments).AllocatorInstance.Data;
      pFVar7 = this_00 + (this->Fragments).ArrayNum;
      for (; this_00 != pFVar7; this_00 = this_00 + 1) {
        if ((this_00->ScriptStruct).field0_0x0.DebugPtr ==
            Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton)
        goto LAB_1470d60e0;
      }
      this_00 = (FInstancedStruct *)0x0;
LAB_1470d60e0:
      pFVar6 = FInstancedStruct::GetMutable<FTestFragment_Float>(this_00);
      return pFVar6;
    }
  }
  iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestFragment_Float>();
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)&this->Composition,iVar4);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CachedArchetypeHandle != (FMassArchetypeHandle *)&local_18) {
    (this->CachedArchetypeHandle).DataPtr.Object = (FMassArchetypeData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CachedArchetypeHandle).DataPtr.SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  pTVar8 = &this->Fragments;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_28.ObjectPtr);
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar5,
                         L"TestFragment_Float");
  }
  FInstancedStruct::InitializeAs
            ((FInstancedStruct *)&local_28.ObjectPtr,
             Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton,(uchar *)0x0);
  pTVar9 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pTVar8->AllocatorInstance).Data;
  if (((pTVar9 <= &local_28) && (&local_28 < pTVar9 + (longlong)(this->Fragments).ArrayMax * 2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FTestFragment_Float *)(*pcVar2)();
    return pFVar6;
  }
  iVar4 = (this->Fragments).ArrayNum;
  piVar1 = &(this->Fragments).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar8->AllocatorInstance,piVar1);
  }
  (this->Fragments).ArrayNum = iVar4 + 1;
  pTVar9 = (TObjectPtr<UScriptStruct_const_>_u_0 *)
           ((pTVar8->AllocatorInstance).Data + (longlong)iVar4 * 0x10);
  pTVar9->DebugPtr = (UScriptStruct *)local_28;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (local_28.DebugPtr != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)local_28.DebugPtr);
  }
  pTVar9[1] = TStack_20;
  local_28.DebugPtr = (UScriptStruct *)0x0;
  TStack_20 = (TObjectPtr<UScriptStruct_const_>_u_0)0x0;
  pFVar6 = FInstancedStruct::GetMutable<FTestFragment_Float>((FInstancedStruct *)&pTVar9->ObjectPtr)
  ;
  FInstancedStruct::Reset((FInstancedStruct *)&local_28.ObjectPtr);
  return pFVar6;
}

// Add_GetRef<FTestFragment_Float,float_&> @ 1470d6280

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTestFragment_Float * __thiscall
UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Float,float_&>
          (FEntityBuilder *this,float *param_1)

{
  int *piVar1;
  code *pcVar2;
  UScriptStruct *pUVar3;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  FTestFragment_Float *pFVar7;
  uint uVar8;
  FInstancedStruct *this_00;
  uint uVar9;
  FInstancedStruct *pFVar10;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar11;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar12;
  undefined1 local_res8 [8];
  TObjectPtr<UScriptStruct_const_>_u_0 local_28;
  UScriptStruct *pUStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->State = ReadyToCommit;
  iVar5 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestFragment_Float>();
  bVar4 = FStructTypeBitSet::FConstBitSetContainer::Contains
                    ((FConstBitSetContainer *)&this->Composition,iVar5);
  if (bVar4) {
    local_res8[0] = 0;
    bVar4 = `UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Float,float_&>'::__l3::<lambda_1>::
            operator()(local_res8);
    if (!bVar4) {
      if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar6,
                             L"TestFragment_Float");
      }
      this_00 = (FInstancedStruct *)(this->Fragments).AllocatorInstance.Data;
      pFVar10 = this_00 + (this->Fragments).ArrayNum;
      for (; this_00 != pFVar10; this_00 = this_00 + 1) {
        if ((this_00->ScriptStruct).field0_0x0.DebugPtr ==
            Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton)
        goto LAB_1470d6326;
      }
      this_00 = (FInstancedStruct *)0x0;
LAB_1470d6326:
      pFVar7 = FInstancedStruct::GetMutable<FTestFragment_Float>(this_00);
      return pFVar7;
    }
  }
  iVar5 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestFragment_Float>();
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)&this->Composition,iVar5);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CachedArchetypeHandle != (FMassArchetypeHandle *)&local_18) {
    (this->CachedArchetypeHandle).DataPtr.Object = (FMassArchetypeData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CachedArchetypeHandle).DataPtr.SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  pTVar12 = &this->Fragments;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_28.ObjectPtr);
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar6,
                         L"TestFragment_Float");
  }
  pUVar3 = Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton != local_28.DebugPtr) {
    FInstancedStruct::Reset((FInstancedStruct *)&local_28.ObjectPtr);
    uVar9 = (uint)*(short *)((longlong)&pUVar3->_padding_ + 4);
    uVar8 = (int)pUVar3->_padding_ + -1 + uVar9 & -uVar9;
    if ((int)uVar8 < 1) {
      uVar8 = 1;
    }
    pUStack_20 = FMemory::Malloc((longlong)(int)uVar8,uVar9);
    local_28.DebugPtr = pUVar3;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  pUVar3 = pUStack_20;
  if ((pUStack_20 == (UScriptStruct *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0x74,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FTestFragment_Float *)(*pcVar2)();
    return pFVar7;
  }
  *(float *)&pUVar3->_padding_ = *param_1;
  pTVar11 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pTVar12->AllocatorInstance).Data;
  if (((pTVar11 <= &local_28) && (&local_28 < pTVar11 + (longlong)(this->Fragments).ArrayMax * 2))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FTestFragment_Float *)(*pcVar2)();
    return pFVar7;
  }
  iVar5 = (this->Fragments).ArrayNum;
  piVar1 = &(this->Fragments).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar12->AllocatorInstance,piVar1);
  }
  pUVar3 = pUStack_20;
  (this->Fragments).ArrayNum = iVar5 + 1;
  pTVar11 = (TObjectPtr<UScriptStruct_const_>_u_0 *)
            ((pTVar12->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
  pTVar11->DebugPtr = (UScriptStruct *)local_28;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (local_28.DebugPtr != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)local_28.DebugPtr);
  }
  pTVar11[1].DebugPtr = pUVar3;
  local_28.DebugPtr = (UScriptStruct *)0x0;
  pUStack_20 = (UScriptStruct *)0x0;
  pFVar7 = FInstancedStruct::GetMutable<FTestFragment_Float>
                     ((FInstancedStruct *)&pTVar11->ObjectPtr);
  FInstancedStruct::Reset((FInstancedStruct *)&local_28.ObjectPtr);
  return pFVar7;
}

// Add_GetRef<FTestFragment_Float,float_const_&> @ 1470d6560

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTestFragment_Float * __thiscall
UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Float,float_const_&>
          (FEntityBuilder *this,float *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UPackage *pUVar5;
  FTestFragment_Float *pFVar6;
  FInstancedStruct *this_00;
  FInstancedStruct *pFVar7;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar8;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar9;
  undefined1 local_res8 [8];
  TObjectPtr<UScriptStruct_const_>_u_0 local_28;
  TObjectPtr<UScriptStruct_const_>_u_0 TStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->State = ReadyToCommit;
  iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestFragment_Float>();
  bVar3 = FStructTypeBitSet::FConstBitSetContainer::Contains
                    ((FConstBitSetContainer *)&this->Composition,iVar4);
  if (bVar3) {
    local_res8[0] = 0;
    bVar3 = `UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Float,float_const_&>'::__l3::
            <lambda_1>::operator()(local_res8);
    if (!bVar3) {
      if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar5,
                             L"TestFragment_Float");
      }
      this_00 = (FInstancedStruct *)(this->Fragments).AllocatorInstance.Data;
      pFVar7 = this_00 + (this->Fragments).ArrayNum;
      for (; this_00 != pFVar7; this_00 = this_00 + 1) {
        if ((this_00->ScriptStruct).field0_0x0.DebugPtr ==
            Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton)
        goto LAB_1470d6605;
      }
      this_00 = (FInstancedStruct *)0x0;
LAB_1470d6605:
      pFVar6 = FInstancedStruct::GetMutable<FTestFragment_Float>(this_00);
      return pFVar6;
    }
  }
  iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestFragment_Float>();
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)&this->Composition,iVar4);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CachedArchetypeHandle != (FMassArchetypeHandle *)&local_18) {
    (this->CachedArchetypeHandle).DataPtr.Object = (FMassArchetypeData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CachedArchetypeHandle).DataPtr.SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  pTVar8 = &this->Fragments;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_28.ObjectPtr);
  FInstancedStruct::InitializeAs<FTestFragment_Float,float_const_&>
            ((FInstancedStruct *)&local_28.ObjectPtr,param_1);
  pTVar9 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pTVar8->AllocatorInstance).Data;
  if (((pTVar9 <= &local_28) && (&local_28 < pTVar9 + (longlong)(this->Fragments).ArrayMax * 2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FTestFragment_Float *)(*pcVar2)();
    return pFVar6;
  }
  iVar4 = (this->Fragments).ArrayNum;
  piVar1 = &(this->Fragments).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar8->AllocatorInstance,piVar1);
  }
  (this->Fragments).ArrayNum = iVar4 + 1;
  pTVar9 = (TObjectPtr<UScriptStruct_const_>_u_0 *)
           ((pTVar8->AllocatorInstance).Data + (longlong)iVar4 * 0x10);
  pTVar9->DebugPtr = (UScriptStruct *)local_28;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (local_28.DebugPtr != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)local_28.DebugPtr);
  }
  pTVar9[1] = TStack_20;
  local_28.DebugPtr = (UScriptStruct *)0x0;
  TStack_20 = (TObjectPtr<UScriptStruct_const_>_u_0)0x0;
  pFVar6 = FInstancedStruct::GetMutable<FTestFragment_Float>((FInstancedStruct *)&pTVar9->ObjectPtr)
  ;
  FInstancedStruct::Reset((FInstancedStruct *)&local_28.ObjectPtr);
  return pFVar6;
}

// Add_GetRef<FTestFragment_Int> @ 1470d6780

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTestFragment_Int * __thiscall
UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Int>(FEntityBuilder *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UPackage *pUVar5;
  FTestFragment_Int *pFVar6;
  FInstancedStruct *this_00;
  FInstancedStruct *pFVar7;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar8;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar9;
  undefined1 local_res8 [8];
  TObjectPtr<UScriptStruct_const_>_u_0 local_28;
  TObjectPtr<UScriptStruct_const_>_u_0 TStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->State = ReadyToCommit;
  iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestFragment_Int>();
  bVar3 = FStructTypeBitSet::FConstBitSetContainer::Contains
                    ((FConstBitSetContainer *)&this->Composition,iVar4);
  if (bVar3) {
    local_res8[0] = 0;
    bVar3 = `UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Int>'::__l3::<lambda_1>::operator()
                      (local_res8);
    if (!bVar3) {
      if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0
         ) {
        pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar5,
                             L"TestFragment_Int");
      }
      this_00 = (FInstancedStruct *)(this->Fragments).AllocatorInstance.Data;
      pFVar7 = this_00 + (this->Fragments).ArrayNum;
      for (; this_00 != pFVar7; this_00 = this_00 + 1) {
        if ((this_00->ScriptStruct).field0_0x0.DebugPtr ==
            Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton) goto LAB_1470d6820;
      }
      this_00 = (FInstancedStruct *)0x0;
LAB_1470d6820:
      pFVar6 = FInstancedStruct::GetMutable<FTestFragment_Int>(this_00);
      return pFVar6;
    }
  }
  iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestFragment_Int>();
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)&this->Composition,iVar4);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CachedArchetypeHandle != (FMassArchetypeHandle *)&local_18) {
    (this->CachedArchetypeHandle).DataPtr.Object = (FMassArchetypeData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CachedArchetypeHandle).DataPtr.SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  pTVar8 = &this->Fragments;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_28.ObjectPtr);
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar5,
                         L"TestFragment_Int");
  }
  FInstancedStruct::InitializeAs
            ((FInstancedStruct *)&local_28.ObjectPtr,
             Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton,(uchar *)0x0);
  pTVar9 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pTVar8->AllocatorInstance).Data;
  if (((pTVar9 <= &local_28) && (&local_28 < pTVar9 + (longlong)(this->Fragments).ArrayMax * 2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FTestFragment_Int *)(*pcVar2)();
    return pFVar6;
  }
  iVar4 = (this->Fragments).ArrayNum;
  piVar1 = &(this->Fragments).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar8->AllocatorInstance,piVar1);
  }
  (this->Fragments).ArrayNum = iVar4 + 1;
  pTVar9 = (TObjectPtr<UScriptStruct_const_>_u_0 *)
           ((pTVar8->AllocatorInstance).Data + (longlong)iVar4 * 0x10);
  pTVar9->DebugPtr = (UScriptStruct *)local_28;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (local_28.DebugPtr != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)local_28.DebugPtr);
  }
  pTVar9[1] = TStack_20;
  local_28.DebugPtr = (UScriptStruct *)0x0;
  TStack_20 = (TObjectPtr<UScriptStruct_const_>_u_0)0x0;
  pFVar6 = FInstancedStruct::GetMutable<FTestFragment_Int>((FInstancedStruct *)&pTVar9->ObjectPtr);
  FInstancedStruct::Reset((FInstancedStruct *)&local_28.ObjectPtr);
  return pFVar6;
}

// Add_GetRef<FTestFragment_Int,int_&> @ 1470d69c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTestFragment_Int * __thiscall
UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Int,int_&>(FEntityBuilder *this,int *param_1)

{
  int *piVar1;
  uchar *puVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UPackage *pUVar7;
  FTestFragment_Int *pFVar8;
  FInstancedStruct *pFVar9;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar10;
  FInstancedStruct *pFVar11;
  undefined1 local_res8 [8];
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  FInstancedStruct local_18;
  
  this->State = ReadyToCommit;
  iVar6 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestFragment_Int>();
  bVar5 = FStructTypeBitSet::FConstBitSetContainer::Contains
                    ((FConstBitSetContainer *)&this->Composition,iVar6);
  if (bVar5) {
    local_res8[0] = 0;
    bVar5 = `UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Int,int_&>'::__l3::<lambda_1>::
            operator()(local_res8);
    if (!bVar5) {
      if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0
         ) {
        pUVar7 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar7,
                             L"TestFragment_Int");
      }
      pFVar11 = (FInstancedStruct *)(this->Fragments).AllocatorInstance.Data;
      pFVar9 = pFVar11 + (this->Fragments).ArrayNum;
      for (; pFVar11 != pFVar9; pFVar11 = pFVar11 + 1) {
        if ((pFVar11->ScriptStruct).field0_0x0.DebugPtr ==
            Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton) goto LAB_1470d6a65;
      }
      pFVar11 = (FInstancedStruct *)0x0;
LAB_1470d6a65:
      pFVar8 = FInstancedStruct::GetMutable<FTestFragment_Int>(pFVar11);
      return pFVar8;
    }
  }
  iVar6 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestFragment_Int>();
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)&this->Composition,iVar6);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CachedArchetypeHandle != (FMassArchetypeHandle *)&local_28) {
    (this->CachedArchetypeHandle).DataPtr.Object = (FMassArchetypeData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CachedArchetypeHandle).DataPtr.SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  pTVar10 = &this->Fragments;
  pFVar9 = FInstancedStruct::Make<FTestFragment_Int,int_&>(&local_18,param_1);
  pFVar11 = (FInstancedStruct *)(pTVar10->AllocatorInstance).Data;
  if (((pFVar11 <= pFVar9) && (pFVar9 < pFVar11 + (this->Fragments).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FTestFragment_Int *)(*pcVar4)();
    return pFVar8;
  }
  iVar6 = (this->Fragments).ArrayNum;
  piVar1 = &(this->Fragments).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar10->AllocatorInstance,piVar1);
  }
  (this->Fragments).ArrayNum = iVar6 + 1;
  puVar2 = pFVar9->StructMemory;
  pFVar11 = (FInstancedStruct *)((pTVar10->AllocatorInstance).Data + (longlong)iVar6 * 0x10);
  pUVar3 = (pFVar9->ScriptStruct).field0_0x0.DebugPtr;
  (pFVar11->ScriptStruct).field0_0x0.DebugPtr = pUVar3;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar3);
  }
  pFVar11->StructMemory = puVar2;
  (pFVar9->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  pFVar9->StructMemory = (uchar *)0x0;
  pFVar8 = FInstancedStruct::GetMutable<FTestFragment_Int>(pFVar11);
  FInstancedStruct::Reset(&local_18);
  return pFVar8;
}

// Add_GetRef<FTestFragment_Int,int_const_&> @ 1470d6be0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTestFragment_Int * __thiscall
UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Int,int_const_&>
          (FEntityBuilder *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UPackage *pUVar5;
  FTestFragment_Int *pFVar6;
  FInstancedStruct *this_00;
  FInstancedStruct *pFVar7;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar8;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar9;
  undefined1 local_res8 [8];
  TObjectPtr<UScriptStruct_const_>_u_0 local_28;
  TObjectPtr<UScriptStruct_const_>_u_0 TStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->State = ReadyToCommit;
  iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestFragment_Int>();
  bVar3 = FStructTypeBitSet::FConstBitSetContainer::Contains
                    ((FConstBitSetContainer *)&this->Composition,iVar4);
  if (bVar3) {
    local_res8[0] = 0;
    bVar3 = `UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Int,int_const_&>'::__l3::<lambda_1>
            ::operator()(local_res8);
    if (!bVar3) {
      if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0
         ) {
        pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar5,
                             L"TestFragment_Int");
      }
      this_00 = (FInstancedStruct *)(this->Fragments).AllocatorInstance.Data;
      pFVar7 = this_00 + (this->Fragments).ArrayNum;
      for (; this_00 != pFVar7; this_00 = this_00 + 1) {
        if ((this_00->ScriptStruct).field0_0x0.DebugPtr ==
            Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton) goto LAB_1470d6c85;
      }
      this_00 = (FInstancedStruct *)0x0;
LAB_1470d6c85:
      pFVar6 = FInstancedStruct::GetMutable<FTestFragment_Int>(this_00);
      return pFVar6;
    }
  }
  iVar4 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestFragment_Int>();
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)&this->Composition,iVar4);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CachedArchetypeHandle != (FMassArchetypeHandle *)&local_18) {
    (this->CachedArchetypeHandle).DataPtr.Object = (FMassArchetypeData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CachedArchetypeHandle).DataPtr.SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  pTVar8 = &this->Fragments;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_28.ObjectPtr);
  FInstancedStruct::InitializeAs<FTestFragment_Int,int_const_&>
            ((FInstancedStruct *)&local_28.ObjectPtr,param_1);
  pTVar9 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pTVar8->AllocatorInstance).Data;
  if (((pTVar9 <= &local_28) && (&local_28 < pTVar9 + (longlong)(this->Fragments).ArrayMax * 2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FTestFragment_Int *)(*pcVar2)();
    return pFVar6;
  }
  iVar4 = (this->Fragments).ArrayNum;
  piVar1 = &(this->Fragments).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar8->AllocatorInstance,piVar1);
  }
  (this->Fragments).ArrayNum = iVar4 + 1;
  pTVar9 = (TObjectPtr<UScriptStruct_const_>_u_0 *)
           ((pTVar8->AllocatorInstance).Data + (longlong)iVar4 * 0x10);
  pTVar9->DebugPtr = (UScriptStruct *)local_28;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (local_28.DebugPtr != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)local_28.DebugPtr);
  }
  pTVar9[1] = TStack_20;
  local_28.DebugPtr = (UScriptStruct *)0x0;
  TStack_20 = (TObjectPtr<UScriptStruct_const_>_u_0)0x0;
  pFVar6 = FInstancedStruct::GetMutable<FTestFragment_Int>((FInstancedStruct *)&pTVar9->ObjectPtr);
  FInstancedStruct::Reset((FInstancedStruct *)&local_28.ObjectPtr);
  return pFVar6;
}

// Add_GetRef<FTestFragment_Int,int> @ 1470d6e00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTestFragment_Int * __thiscall
UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Int,int>(FEntityBuilder *this,int *param_1)

{
  int *piVar1;
  uchar *puVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UPackage *pUVar7;
  FTestFragment_Int *pFVar8;
  FInstancedStruct *pFVar9;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar10;
  FInstancedStruct *pFVar11;
  undefined1 local_res8 [8];
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  FInstancedStruct local_18;
  
  this->State = ReadyToCommit;
  iVar6 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestFragment_Int>();
  bVar5 = FStructTypeBitSet::FConstBitSetContainer::Contains
                    ((FConstBitSetContainer *)&this->Composition,iVar6);
  if (bVar5) {
    local_res8[0] = 0;
    bVar5 = `UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Int,int>'::__l3::<lambda_1>::
            operator()(local_res8);
    if (!bVar5) {
      if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0
         ) {
        pUVar7 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar7,
                             L"TestFragment_Int");
      }
      pFVar11 = (FInstancedStruct *)(this->Fragments).AllocatorInstance.Data;
      pFVar9 = pFVar11 + (this->Fragments).ArrayNum;
      for (; pFVar11 != pFVar9; pFVar11 = pFVar11 + 1) {
        if ((pFVar11->ScriptStruct).field0_0x0.DebugPtr ==
            Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton) goto LAB_1470d6ea5;
      }
      pFVar11 = (FInstancedStruct *)0x0;
LAB_1470d6ea5:
      pFVar8 = FInstancedStruct::GetMutable<FTestFragment_Int>(pFVar11);
      return pFVar8;
    }
  }
  iVar6 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestFragment_Int>();
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)&this->Composition,iVar6);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CachedArchetypeHandle != (FMassArchetypeHandle *)&local_28) {
    (this->CachedArchetypeHandle).DataPtr.Object = (FMassArchetypeData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CachedArchetypeHandle).DataPtr.SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  pTVar10 = &this->Fragments;
  pFVar9 = FInstancedStruct::Make<FTestFragment_Int,int_&>(&local_18,param_1);
  pFVar11 = (FInstancedStruct *)(pTVar10->AllocatorInstance).Data;
  if (((pFVar11 <= pFVar9) && (pFVar9 < pFVar11 + (this->Fragments).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FTestFragment_Int *)(*pcVar4)();
    return pFVar8;
  }
  iVar6 = (this->Fragments).ArrayNum;
  piVar1 = &(this->Fragments).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar10->AllocatorInstance,piVar1);
  }
  (this->Fragments).ArrayNum = iVar6 + 1;
  puVar2 = pFVar9->StructMemory;
  pFVar11 = (FInstancedStruct *)((pTVar10->AllocatorInstance).Data + (longlong)iVar6 * 0x10);
  pUVar3 = (pFVar9->ScriptStruct).field0_0x0.DebugPtr;
  (pFVar11->ScriptStruct).field0_0x0.DebugPtr = pUVar3;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar3);
  }
  pFVar11->StructMemory = puVar2;
  (pFVar9->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  pFVar9->StructMemory = (uchar *)0x0;
  pFVar8 = FInstancedStruct::GetMutable<FTestFragment_Int>(pFVar11);
  FInstancedStruct::Reset(&local_18);
  return pFVar8;
}

// Add_GetRef<FTestSharedFragment_Float,float_const_&> @ 1470d7020

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTestSharedFragment_Float * __thiscall
UE::Mass::FEntityBuilder::Add_GetRef<FTestSharedFragment_Float,float_const_&>
          (FEntityBuilder *this,float *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UPackage *pUVar5;
  FTestSharedFragment_Float *pFVar6;
  FInstancedStruct *this_00;
  FInstancedStruct *pFVar7;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar8;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar9;
  undefined1 local_res8 [8];
  TObjectPtr<UScriptStruct_const_>_u_0 local_28;
  TObjectPtr<UScriptStruct_const_>_u_0 TStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->State = ReadyToCommit;
  iVar4 = TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
          ::GetTypeIndex<FTestSharedFragment_Float>();
  bVar3 = FStructTypeBitSet::FConstBitSetContainer::Contains
                    ((FConstBitSetContainer *)&(this->Composition).SharedFragments,iVar4);
  if (bVar3) {
    local_res8[0] = 0;
    bVar3 = `UE::Mass::FEntityBuilder::Add_GetRef<FTestSharedFragment_Float,float_const_&>'::__l3::
            <lambda_1>::operator()(local_res8);
    if (!bVar3) {
      FMassArchetypeSharedFragmentValues::Reset(&this->CachedSharedFragmentValues);
      if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Float,(UObject *)pUVar5,
                             L"TestSharedFragment_Float");
      }
      this_00 = (FInstancedStruct *)(this->SharedFragments).AllocatorInstance.Data;
      pFVar7 = this_00 + (this->SharedFragments).ArrayNum;
      for (; this_00 != pFVar7; this_00 = this_00 + 1) {
        if ((this_00->ScriptStruct).field0_0x0.DebugPtr ==
            Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton)
        goto LAB_1470d70d1;
      }
      this_00 = (FInstancedStruct *)0x0;
LAB_1470d70d1:
      pFVar6 = FInstancedStruct::GetMutable<FTestSharedFragment_Float>(this_00);
      return pFVar6;
    }
  }
  iVar4 = TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
          ::GetTypeIndex<FTestSharedFragment_Float>();
  FStructTypeBitSet::FBitSetContainer::AddAtIndex
            ((FBitSetContainer *)&(this->Composition).SharedFragments,iVar4);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CachedArchetypeHandle != (FMassArchetypeHandle *)&local_18) {
    (this->CachedArchetypeHandle).DataPtr.Object = (FMassArchetypeData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CachedArchetypeHandle).DataPtr.SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  FMassArchetypeSharedFragmentValues::Reset(&this->CachedSharedFragmentValues);
  pTVar8 = &this->SharedFragments;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_28.ObjectPtr);
  FInstancedStruct::InitializeAs<FTestSharedFragment_Float,float_const_&>
            ((FInstancedStruct *)&local_28.ObjectPtr,param_1);
  pTVar9 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pTVar8->AllocatorInstance).Data;
  if (((pTVar9 <= &local_28) &&
      (&local_28 < pTVar9 + (longlong)(this->SharedFragments).ArrayMax * 2)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FTestSharedFragment_Float *)(*pcVar2)();
    return pFVar6;
  }
  iVar4 = (this->SharedFragments).ArrayNum;
  piVar1 = &(this->SharedFragments).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar8->AllocatorInstance,piVar1);
  }
  (this->SharedFragments).ArrayNum = iVar4 + 1;
  pTVar9 = (TObjectPtr<UScriptStruct_const_>_u_0 *)
           ((pTVar8->AllocatorInstance).Data + (longlong)iVar4 * 0x10);
  pTVar9->DebugPtr = (UScriptStruct *)local_28;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (local_28.DebugPtr != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)local_28.DebugPtr);
  }
  pTVar9[1] = TStack_20;
  local_28.DebugPtr = (UScriptStruct *)0x0;
  TStack_20 = (TObjectPtr<UScriptStruct_const_>_u_0)0x0;
  pFVar6 = FInstancedStruct::GetMutable<FTestSharedFragment_Float>
                     ((FInstancedStruct *)&pTVar9->ObjectPtr);
  FInstancedStruct::Reset((FInstancedStruct *)&local_28.ObjectPtr);
  return pFVar6;
}

// GetOrCreate<FTestFragment_Int> @ 1470e1160

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FTestFragment_Int * __thiscall
UE::Mass::FEntityBuilder::GetOrCreate<FTestFragment_Int>(FEntityBuilder *this)

{
  int *piVar1;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  FTestFragment_Int *pFVar7;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar8;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar9;
  TObjectPtr<UScriptStruct_const_>_u_0 local_28;
  TObjectPtr<UScriptStruct_const_>_u_0 TStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->State = ReadyToCommit;
  iVar5 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestFragment_Int>();
  bVar4 = FStructTypeBitSet::FConstBitSetContainer::Contains
                    ((FConstBitSetContainer *)&this->Composition,iVar5);
  if (bVar4) {
    if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar6,
                           L"TestFragment_Int");
    }
    pTVar9 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(this->Fragments).AllocatorInstance.Data;
    pTVar8 = pTVar9 + (longlong)(this->Fragments).ArrayNum * 2;
    for (; pTVar9 != pTVar8; pTVar9 = pTVar9 + 2) {
      if (pTVar9->DebugPtr == Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton) {
        if (pTVar9 == (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) goto LAB_1470e11e6;
        goto LAB_1470e120c;
      }
    }
    pTVar9 = (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0;
LAB_1470e11e6:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementFound",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityBuilder.h"
                       ,0x198,
                       L"We expect the element to be found since we already tested the Composition")
    ;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FTestFragment_Int *)(*pcVar3)();
      return pFVar7;
    }
LAB_1470e120c:
    pFVar7 = FInstancedStruct::GetMutable<FTestFragment_Int>((FInstancedStruct *)&pTVar9->ObjectPtr)
    ;
    pFVar7->Value = 0;
  }
  else {
    iVar5 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
            GetTypeIndex<FTestFragment_Int>();
    FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)&this->Composition,iVar5);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->CachedArchetypeHandle != (FMassArchetypeHandle *)&local_18) {
      (this->CachedArchetypeHandle).DataPtr.Object = (FMassArchetypeData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CachedArchetypeHandle).DataPtr.SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    pTVar2 = &this->Fragments;
    FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_28.ObjectPtr);
    if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar6,
                           L"TestFragment_Int");
    }
    FInstancedStruct::InitializeAs
              ((FInstancedStruct *)&local_28.ObjectPtr,
               Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton,(uchar *)0x0);
    pTVar9 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pTVar2->AllocatorInstance).Data;
    if (((pTVar9 <= &local_28) && (&local_28 < pTVar9 + (longlong)(this->Fragments).ArrayMax * 2))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FTestFragment_Int *)(*pcVar3)();
      return pFVar7;
    }
    iVar5 = (this->Fragments).ArrayNum;
    piVar1 = &(this->Fragments).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->Fragments).ArrayNum = iVar5 + 1;
    pTVar9 = (TObjectPtr<UScriptStruct_const_>_u_0 *)
             ((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
    pTVar9->DebugPtr = (UScriptStruct *)local_28;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UScriptStruct *)0x0)) {
      GC::MarkAsReachable((UObject *)local_28.DebugPtr);
    }
    pTVar9[1] = TStack_20;
    local_28.DebugPtr = (UScriptStruct *)0x0;
    TStack_20.DebugPtr = (UScriptStruct *)0x0;
    FInstancedStruct::Reset((FInstancedStruct *)&local_28.ObjectPtr);
  }
  pFVar7 = FInstancedStruct::GetMutable<FTestFragment_Int>((FInstancedStruct *)&pTVar9->ObjectPtr);
  return pFVar7;
}

// IsCommitted @ 147192810

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::FEntityBuilder::IsCommitted(FEntityBuilder *this)

{
  return this->State == Committed;
}

// operator() @ 150500910

bool __thiscall
`UE::Mass::FEntityBuilder::Add_GetRef<FTestConstSharedFragment_Int,int_const_&>'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPackage *pUVar4;
  bool bVar5;
  FName local_res10 [3];
  FString local_18;
  
  bVar5 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5239001618761908607>);
  if (bVar2) {
    if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar4,
                           L"TestConstSharedFragment_Int");
    }
    local_res10[0] =
         (FName)(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)->
                _padding_;
    ::FName::ToString(local_res10,&local_18);
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5239001618761908607>,
                       &`public:___cdecl_`public:_struct_FTestConstSharedFragment_Int&___ptr64___cdecl_UE::Mass::FEntityBuilder::Add_GetRef<FTestConstSharedFragment_Int,int_const&___ptr64>(int_const&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505009ad;
    }
  }
  bVar2 = false;
LAB_1505009ad:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505009e0

bool __thiscall
`UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Float>'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPackage *pUVar4;
  bool bVar5;
  FName local_res10 [3];
  FString local_18;
  
  bVar5 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5239001618761908607>);
  if (bVar2) {
    if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar4,
                           L"TestFragment_Float");
    }
    local_res10[0] =
         (FName)(Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton)->_padding_;
    ::FName::ToString(local_res10,&local_18);
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5239001618761908607>,
                       &`public:___cdecl_`public:_struct_FTestFragment_Float&___ptr64___cdecl_UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Float>(void)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150500a7d;
    }
  }
  bVar2 = false;
LAB_150500a7d:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150500ab0

bool __thiscall
`UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Float,float_&>'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPackage *pUVar4;
  bool bVar5;
  FName local_res10 [3];
  FString local_18;
  
  bVar5 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5239001618761908607>);
  if (bVar2) {
    if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar4,
                           L"TestFragment_Float");
    }
    local_res10[0] =
         (FName)(Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton)->_padding_;
    ::FName::ToString(local_res10,&local_18);
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5239001618761908607>,
                       &`public:___cdecl_`public:_struct_FTestFragment_Float&___ptr64___cdecl_UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Float,float&___ptr64>(float&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150500b4d;
    }
  }
  bVar2 = false;
LAB_150500b4d:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150500b80

bool __thiscall
`UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Float,float_const_&>'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPackage *pUVar4;
  bool bVar5;
  FName local_res10 [3];
  FString local_18;
  
  bVar5 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5239001618761908607>);
  if (bVar2) {
    if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar4,
                           L"TestFragment_Float");
    }
    local_res10[0] =
         (FName)(Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton)->_padding_;
    ::FName::ToString(local_res10,&local_18);
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5239001618761908607>,
                       &`public:___cdecl_`public:_struct_FTestFragment_Float&___ptr64___cdecl_UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Float,float_const&___ptr64>(float_const&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150500c1d;
    }
  }
  bVar2 = false;
LAB_150500c1d:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150500c50

bool __thiscall
`UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Int>'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPackage *pUVar4;
  bool bVar5;
  FName local_res10 [3];
  FString local_18;
  
  bVar5 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5239001618761908607>);
  if (bVar2) {
    if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar4,
                           L"TestFragment_Int");
    }
    local_res10[0] =
         (FName)(Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton)->_padding_;
    ::FName::ToString(local_res10,&local_18);
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5239001618761908607>,
                       &`public:___cdecl_`public:_struct_FTestFragment_Int&___ptr64___cdecl_UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Int>(void)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150500ced;
    }
  }
  bVar2 = false;
LAB_150500ced:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150500d20

bool __thiscall
`UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Int,int_&>'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPackage *pUVar4;
  bool bVar5;
  FName local_res10 [3];
  FString local_18;
  
  bVar5 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5239001618761908607>);
  if (bVar2) {
    if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar4,
                           L"TestFragment_Int");
    }
    local_res10[0] =
         (FName)(Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton)->_padding_;
    ::FName::ToString(local_res10,&local_18);
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5239001618761908607>,
                       &`public:___cdecl_`public:_struct_FTestFragment_Int&___ptr64___cdecl_UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Int,int&___ptr64>(int&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150500dbd;
    }
  }
  bVar2 = false;
LAB_150500dbd:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150500df0

bool __thiscall
`UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Int,int_const_&>'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPackage *pUVar4;
  bool bVar5;
  FName local_res10 [3];
  FString local_18;
  
  bVar5 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5239001618761908607>);
  if (bVar2) {
    if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar4,
                           L"TestFragment_Int");
    }
    local_res10[0] =
         (FName)(Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton)->_padding_;
    ::FName::ToString(local_res10,&local_18);
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5239001618761908607>,
                       &`public:___cdecl_`public:_struct_FTestFragment_Int&___ptr64___cdecl_UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Int,int_const&___ptr64>(int_const&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150500e8d;
    }
  }
  bVar2 = false;
LAB_150500e8d:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150500ec0

bool __thiscall
`UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Int,int>'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPackage *pUVar4;
  bool bVar5;
  FName local_res10 [3];
  FString local_18;
  
  bVar5 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5239001618761908607>);
  if (bVar2) {
    if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar4,
                           L"TestFragment_Int");
    }
    local_res10[0] =
         (FName)(Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton)->_padding_;
    ::FName::ToString(local_res10,&local_18);
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5239001618761908607>,
                       &`public:___cdecl_`public:_struct_FTestFragment_Int&___ptr64___cdecl_UE::Mass::FEntityBuilder::Add_GetRef<FTestFragment_Int,int>(int&&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150500f5d;
    }
  }
  bVar2 = false;
LAB_150500f5d:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150500f90

bool __thiscall
`UE::Mass::FEntityBuilder::Add_GetRef<FTestSharedFragment_Float,float_const_&>'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UPackage *pUVar4;
  bool bVar5;
  FName local_res10 [3];
  FString local_18;
  
  bVar5 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5239001618761908607>);
  if (bVar2) {
    if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Float,(UObject *)pUVar4,
                           L"TestSharedFragment_Float");
    }
    local_res10[0] =
         (FName)(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton)->
                _padding_;
    ::FName::ToString(local_res10,&local_18);
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5239001618761908607>,
                       &`public:___cdecl_`public:_struct_FTestSharedFragment_Float&___ptr64___cdecl_UE::Mass::FEntityBuilder::Add_GetRef<FTestSharedFragment_Float,float_const&___ptr64>(float_const&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15050102d;
    }
  }
  bVar2 = false;
LAB_15050102d:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

