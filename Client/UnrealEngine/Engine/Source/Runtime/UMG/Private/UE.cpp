// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 203

// Construct<FSequenceTickManagerWidgetData> @ 1468d5e00

void __cdecl UE::CoreUObject::Private::Construct<FSequenceTickManagerWidgetData>(void *param_1)

{
  *(undefined2 *)param_1 = 1;
  return;
}

// ConstructForTests<FSequenceTickManagerWidgetData> @ 1468d5e10

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSequenceTickManagerWidgetData>(void *param_1)

{
  *(undefined2 *)param_1 = 1;
  return;
}

// Destruct<FSequenceTickManagerWidgetData> @ 1468d5e20

void __cdecl UE::CoreUObject::Private::Destruct<FSequenceTickManagerWidgetData>(void *param_1)

{
  return;
}

// Copy<FSequenceTickManagerWidgetData> @ 1468d5e30

bool __cdecl
UE::CoreUObject::Private::Copy<FSequenceTickManagerWidgetData>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined2 *)param_1 = *(undefined2 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAnchorData> @ 1468d9de0

void __cdecl UE::CoreUObject::Private::Construct<FAnchorData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x30))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return;
}

// ConstructForTests<FAnchorData> @ 1468d9e20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAnchorData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x30))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return;
}

// Destruct<FAnchorData> @ 1468d9e50

void __cdecl UE::CoreUObject::Private::Destruct<FAnchorData>(void *param_1)

{
  return;
}

// Copy<FAnchorData> @ 1468d9f60

bool __cdecl UE::CoreUObject::Private::Copy<FAnchorData>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar9 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar9 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      param_1 = (void *)((longlong)param_1 + 0x40);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWidgetTransform> @ 1468d9ff0

void __cdecl UE::CoreUObject::Private::Construct<FWidgetTransform>(void *param_1)

{
  TVector2<double> TVar1;
  
  *(TVector2<double>_u_0 *)param_1 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x10))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::UnitVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x20))->_s_0 =
       (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return;
}

// ConstructForTests<FWidgetTransform> @ 1468da020

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWidgetTransform>(void *param_1)

{
  TVector2<double> TVar1;
  
  *(TVector2<double>_u_0 *)param_1 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x10))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::UnitVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x20))->_s_0 =
       (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return;
}

// Destruct<FWidgetTransform> @ 1468da060

void __cdecl UE::CoreUObject::Private::Destruct<FWidgetTransform>(void *param_1)

{
  return;
}

// Copy<FWidgetTransform> @ 1468da1b0

bool __cdecl
UE::CoreUObject::Private::Copy<FWidgetTransform>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_3 != 0) {
    lVar8 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar8 + 0x30 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar8 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar8 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar8 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x38);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWidgetNavigationData> @ 1468da730

void __cdecl UE::CoreUObject::Private::Construct<FWidgetNavigationData>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FWidgetNavigationData> @ 1468da7a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWidgetNavigationData>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FWidgetNavigationData> @ 1468da800

void __cdecl UE::CoreUObject::Private::Destruct<FWidgetNavigationData>(void *param_1)

{
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0x18));
  return;
}

// Copy<FWidgetNavigationData> @ 1468da860

bool __cdecl
UE::CoreUObject::Private::Copy<FWidgetNavigationData>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  FDestructionSentinel local_38;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar3);
      *(undefined8 *)((longlong)param_1 + 4) = *(undefined8 *)((longlong)param_1 + lVar3 + 4);
      *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_1 + lVar3 + 0xc);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 ((longlong)param_1 + lVar3 + 0x18),(FReadAccessScope *)&local_38);
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar3 + 0x20);
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar3 + 0x28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 ((longlong)param_1 + 0x18),(FWriteAccessScope *)&local_38);
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar2;
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FUserWidgetPool> @ 1468dad90

void __cdecl UE::CoreUObject::Private::Construct<FUserWidgetPool>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// ConstructForTests<FUserWidgetPool> @ 1468dadf0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FUserWidgetPool>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  return;
}

// Destruct<FUserWidgetPool> @ 1468dae40

void __cdecl UE::CoreUObject::Private::Destruct<FUserWidgetPool>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)((longlong)param_1 + 0x10),0,
               (int *)((longlong)param_1 + 0x1c));
  }
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,param_1,0,(int *)((longlong)param_1 + 0xc));
  }
  TSet<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>,TDefaultMapHashableKeyFuncs<UUserWidget_*,TSharedPtr<SWidget,1>,0>,FDefaultSetAllocator>
           *)((longlong)param_1 + 0x38));
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  TSparseArray<TSparseSetElement<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Copy<FUserWidgetPool> @ 1468dae90

bool __cdecl
UE::CoreUObject::Private::Copy<FUserWidgetPool>(void *param_1,void *param_2,int param_3)

{
  int iVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x10),
               (TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x10));
    (((TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20))->
    AllocatorInstance).Data =
         (((TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x20)
          )->AllocatorInstance).Data;
    iVar1 = ((TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x20))->ArrayMax;
    ((TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20))->
    ArrayNum = ((TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x20))->ArrayNum;
    ((TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20))->
    ArrayMax = iVar1;
    (((TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30))->
    AllocatorInstance).Data =
         (((TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x30)
          )->AllocatorInstance).Data;
    if (&((TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30))
         ->ArrayNum !=
        &((TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x30))
         ->ArrayNum) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)((longlong)param_1 + 0x70),
                 (int *)((longlong)param_1 + 0x80),
                 (ForElementType<FSetElementId> *)((longlong)param_2 + 0x70),
                 *(int *)&(((TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_> *)
                           ((longlong)param_2 + 0x80))->AllocatorInstance).Data);
      TSparseArray<TSparseSetElement<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&((TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_> *)
                      ((longlong)param_1 + 0x30))->ArrayNum,
                  (TSparseArray<TSparseSetElement<TTuple<UUserWidget_*,TSharedPtr<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&((TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_> *)
                      ((longlong)param_2 + 0x30))->ArrayNum);
    }
    param_1 = &((TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x80))->ArrayNum;
    param_2 = &((TArray<TObjectPtr<UUserWidget>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x80))->ArrayNum;
  }
  return true;
}

// Construct<FWidgetEventField> @ 1468db020

void __cdecl UE::CoreUObject::Private::Construct<FWidgetEventField>(void *param_1)

{
  return;
}

// ConstructForTests<FWidgetEventField> @ 1468db030

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWidgetEventField>(void *param_1)

{
  return;
}

// Construct<FMovieScene2DTransformMask> @ 1468db180

void __cdecl UE::CoreUObject::Private::Construct<FMovieScene2DTransformMask>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FMovieScene2DTransformMask> @ 1468db190

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieScene2DTransformMask>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FMovieScene2DTransformMask> @ 1468db1a0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieScene2DTransformMask>(void *param_1)

{
  return;
}

// Copy<FMovieScene2DTransformMask> @ 1468db1f0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieScene2DTransformMask>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameViewportWidgetSlot> @ 1468db420

void __cdecl UE::CoreUObject::Private::Construct<FGameViewportWidgetSlot>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x45) = 0;
  *(undefined1 *)((longlong)param_1 + 0x47) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  return;
}

// ConstructForTests<FGameViewportWidgetSlot> @ 1468db460

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGameViewportWidgetSlot>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FGameViewportWidgetSlot> @ 1468db4e0

void __cdecl UE::CoreUObject::Private::Destruct<FGameViewportWidgetSlot>(void *param_1)

{
  return;
}

// Construct<FSlateChildSize> @ 1468db4f0

void __cdecl UE::CoreUObject::Private::Construct<FSlateChildSize>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// ConstructForTests<FSlateChildSize> @ 1468db510

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSlateChildSize>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Destruct<FSlateChildSize> @ 1468db530

void __cdecl UE::CoreUObject::Private::Destruct<FSlateChildSize>(void *param_1)

{
  return;
}

// Copy<FGameViewportWidgetSlot> @ 1468db580

bool __cdecl
UE::CoreUObject::Private::Copy<FGameViewportWidgetSlot>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  if (param_3 != 0) {
    lVar10 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar10 + 0x40 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar10 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar10 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar10 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar10 + 0x30 + (longlong)param_1);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar10 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x48);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FSlateChildSize> @ 1468db710

bool __cdecl
UE::CoreUObject::Private::Copy<FSlateChildSize>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FEventReply> @ 1468dbdd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Construct<FEventReply>(void *param_1)

{
  FReply local_c8;
  
  FReply::FReply(&local_c8,false);
  FReply::FReply(param_1,&local_c8);
  FReply::~FReply(&local_c8);
  return;
}

// ConstructForTests<FEventReply> @ 1468dbe80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEventReply>(void *param_1)

{
  FReply local_c8;
  
  FReply::FReply(&local_c8,false);
  FReply::FReply(param_1,&local_c8);
  FReply::~FReply(&local_c8);
  return;
}

// Destruct<FEventReply> @ 1468dbf00

void __cdecl UE::CoreUObject::Private::Destruct<FEventReply>(void *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xa8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x98));
  plVar3 = *(longlong **)((longlong)param_1 + 0x80);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)((longlong)param_1 + 0x70);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)((longlong)param_1 + 0x60);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)((longlong)param_1 + 0x50);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)((longlong)param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)((longlong)param_1 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10));
  return;
}

// Copy<FEventReply> @ 1468dc150

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UE::CoreUObject::Private::Copy<FEventReply>(void *param_1,void *param_2,int param_3)

{
  FReply *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FReply::operator=(this,(FReply *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWidgetStateBitfield> @ 1468dc920

void __cdecl UE::CoreUObject::Private::Construct<FWidgetStateBitfield>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FWidgetStateBitfield> @ 1468dc930

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWidgetStateBitfield>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FWidgetStateBitfield> @ 1468dc940

void __cdecl UE::CoreUObject::Private::Destruct<FWidgetStateBitfield>(void *param_1)

{
  return;
}

// Copy<FWidgetStateBitfield> @ 1468dc990

bool __cdecl
UE::CoreUObject::Private::Copy<FWidgetStateBitfield>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRadialBoxSettings> @ 1468dcb80

void __cdecl UE::CoreUObject::Private::Construct<FRadialBoxSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 4) = 1;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x43b40000;
  return;
}

// ConstructForTests<FRadialBoxSettings> @ 1468dcba0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRadialBoxSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 4) = 1;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x43b40000;
  return;
}

// Destruct<FRadialBoxSettings> @ 1468dcbc0

void __cdecl UE::CoreUObject::Private::Destruct<FRadialBoxSettings>(void *param_1)

{
  return;
}

// Copy<FRadialBoxSettings> @ 1468dcbe0

bool __cdecl
UE::CoreUObject::Private::Copy<FRadialBoxSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDynamicPropertyPath> @ 1468dd600

void __cdecl UE::CoreUObject::Private::Construct<FDynamicPropertyPath>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  return;
}

// ConstructForTests<FDynamicPropertyPath> @ 1468dd610

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDynamicPropertyPath>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  return;
}

// Destruct<FDynamicPropertyPath> @ 1468dd6e0

void __cdecl UE::CoreUObject::Private::Destruct<FDynamicPropertyPath>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FDynamicPropertyPath> @ 1468dd840

bool __cdecl
UE::CoreUObject::Private::Copy<FDynamicPropertyPath>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FPropertyPathSegment *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FPropertyPathSegment *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FPropertyPathSegment,FPropertyPathSegment,int>(pFVar6->Data,pFVar5,iVar3);
        }
      }
      pFVar6[2].Data = pFVar2[2].Data;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)pFVar2[3].Data != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)pFVar2[3].Data);
      }
      pFVar6[3].Data = pFVar2[3].Data;
      pFVar6[4].Data = pFVar2[4].Data;
      pFVar6[5].Data = pFVar2[5].Data;
      *(undefined4 *)&pFVar6[6].Data = *(undefined4 *)&pFVar2[6].Data;
      *(undefined1 *)((longlong)&pFVar6[6].Data + 4) =
           *(undefined1 *)((longlong)&pFVar2[6].Data + 4);
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 7;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWidgetAnimationHandle> @ 1468de2c0

void __cdecl UE::CoreUObject::Private::Construct<FWidgetAnimationHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FWidgetAnimationHandle> @ 1468de2d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWidgetAnimationHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FWidgetAnimationHandle> @ 1468de2e0

void __cdecl UE::CoreUObject::Private::Destruct<FWidgetAnimationHandle>(void *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001468de300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// Copy<FWidgetAnimationHandle> @ 1468de350

bool __cdecl
UE::CoreUObject::Private::Copy<FWidgetAnimationHandle>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    puVar6 = param_1;
    do {
      lVar3 = *(longlong *)((longlong)puVar6 + ((longlong)param_2 - (longlong)param_1) + 8);
      uVar4 = *(undefined8 *)((longlong)puVar6 + ((longlong)param_2 - (longlong)param_1));
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
        UNLOCK();
      }
      plVar5 = (longlong *)puVar6[1];
      *puVar6 = uVar4;
      puVar6[1] = lVar3;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      param_3 = param_3 + -1;
      puVar6 = puVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FWidgetAnimationHandle> @ 1468de4c0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FWidgetAnimationHandle>(void *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)(*(ulonglong *)param_1 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)param_1 >> 4)) *
          -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// Construct<FBlueprintWidgetAnimationDelegateBinding> @ 1468deca0

void __cdecl
UE::CoreUObject::Private::Construct<FBlueprintWidgetAnimationDelegateBinding>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  return;
}

// ConstructForTests<FBlueprintWidgetAnimationDelegateBinding> @ 1468decc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FBlueprintWidgetAnimationDelegateBinding>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  return;
}

// Destruct<FBlueprintWidgetAnimationDelegateBinding> @ 1468dece0

void __cdecl
UE::CoreUObject::Private::Destruct<FBlueprintWidgetAnimationDelegateBinding>(void *param_1)

{
  return;
}

// Copy<FBlueprintWidgetAnimationDelegateBinding> @ 1468dedf0

bool __cdecl
UE::CoreUObject::Private::Copy<FBlueprintWidgetAnimationDelegateBinding>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined8 *)(lVar4 + 0x10 + (longlong)param_1);
      uVar2 = *(undefined4 *)(lVar4 + 0x18 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar4 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0x18) = uVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x1c);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWidgetAnimationBinding> @ 1468df620

void __cdecl UE::CoreUObject::Private::Construct<FWidgetAnimationBinding>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x21) = 0;
  *(undefined2 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FWidgetAnimationBinding> @ 1468df660

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWidgetAnimationBinding>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FWidgetAnimationBinding> @ 1468df690

void __cdecl UE::CoreUObject::Private::Destruct<FWidgetAnimationBinding>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x40);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FWidgetAnimationBinding> @ 1468df6f0

bool __cdecl
UE::CoreUObject::Private::Copy<FWidgetAnimationBinding>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
      *(undefined1 *)((longlong)param_1 + 0x20) = *(undefined1 *)((longlong)param_1 + lVar2 + 0x20);
      FMovieSceneDynamicBinding::operator=
                ((FMovieSceneDynamicBinding *)((longlong)param_1 + 0x28),
                 (FMovieSceneDynamicBinding *)((longlong)param_1 + lVar2 + 0x28));
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x50);
    } while (param_3 != 0);
  }
  return true;
}

// Decay<TObjectPtr<UUMGSequencePlayer>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UUMGSequencePlayer>_>,UUMGSequencePlayer_*> @ 1468e51e0

/* WARNING: Enum "Type": Some values do not have unique names */

UUMGSequencePlayer ** __cdecl
UE::Core::Private::Unsafe::
Decay<TObjectPtr<UUMGSequencePlayer>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UUMGSequencePlayer>_>,UUMGSequencePlayer_*>
          (TObjectPtr<UUMGSequencePlayer> *param_1)

{
  return (UUMGSequencePlayer **)param_1;
}

// DereferenceIfNecessary<FWidgetAnimationState,FWidgetAnimationState_*_&> @ 1468e57b0

/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetAnimationState * __cdecl
UE::Core::Private::DereferenceIfNecessary<FWidgetAnimationState,FWidgetAnimationState_*_&>
          (FWidgetAnimationState **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_*_&> @ 1468e57d0

/* WARNING: Enum "Type": Some values do not have unique names */

TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle> *
__cdecl UE::Core::Private::
        DereferenceIfNecessary<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>_*_&>
                  (TMovieSceneMaterialSystem<UE::MovieScene::FWidgetMaterialAccessor,UObject_*,FWidgetMaterialHandle>
                   **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAsyncTaskDownloadImage,UAsyncTaskDownloadImage_*_&> @ 1468e57f0

UAsyncTaskDownloadImage * __cdecl
UE::Core::Private::DereferenceIfNecessary<UAsyncTaskDownloadImage,UAsyncTaskDownloadImage_*_&>
          (UAsyncTaskDownloadImage **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UBorder,UBorder_*_&> @ 1468e5810

UBorder * __cdecl UE::Core::Private::DereferenceIfNecessary<UBorder,UBorder_*_&>(UBorder **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UButton,UButton_*_&> @ 1468e5830

UButton * __cdecl UE::Core::Private::DereferenceIfNecessary<UButton,UButton_*_&>(UButton **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UGameViewportSubsystem,UGameViewportSubsystem_*_&> @ 1468e5850

UGameViewportSubsystem * __cdecl
UE::Core::Private::DereferenceIfNecessary<UGameViewportSubsystem,UGameViewportSubsystem_*_&>
          (UGameViewportSubsystem **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UUMGSequenceTickManager,UUMGSequenceTickManager_*_&> @ 1468e5870

/* WARNING: Enum "Type": Some values do not have unique names */

UUMGSequenceTickManager * __cdecl
UE::Core::Private::DereferenceIfNecessary<UUMGSequenceTickManager,UUMGSequenceTickManager_*_&>
          (UUMGSequenceTickManager **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UWidgetAnimationPlayCallbackProxy,UWidgetAnimationPlayCallbackProxy_*_&> @ 1468e5890

/* WARNING: Enum "Type": Some values do not have unique names */

UWidgetAnimationPlayCallbackProxy * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UWidgetAnimationPlayCallbackProxy,UWidgetAnimationPlayCallbackProxy_*_&>
          (UWidgetAnimationPlayCallbackProxy **param_1)

{
  return *param_1;
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FWidgetMaterialHandle>_>_> @ 1468ed2d0

FWidgetMaterialHandle * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FWidgetMaterialHandle>_>_>
          (TComponentLock<UE::MovieScene::TRead<FWidgetMaterialHandle>_> *param_1,int param_2)

{
  return (FWidgetMaterialHandle *)((longlong)param_2 * 0x10 + *(longlong *)&param_1->field_0x10);
}

// PatchCompositeValue<double,double,double,double,double,double,double> @ 1468f94c0

void __cdecl
UE::MovieScene::PatchCompositeValue<double,double,double,double,double,double,double>
          (TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_1,
          void *param_2,double *param_3,double *param_4,double *param_5,double *param_6,
          double *param_7,double *param_8,double *param_9)

{
  TIntegerSequence<int,0,1,2,3,4,5,6> local_res8 [32];
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  PatchCompositeValueImpl<double,double,double,double,double,double,double,0,1,2,3,4,5,6>
            (local_res8,&local_18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}

// PatchCompositeValueImpl<double,double,double,double,double,double,double,0,1,2,3,4,5,6> @ 1468f9530

void __cdecl
UE::MovieScene::
PatchCompositeValueImpl<double,double,double,double,double,double,double,0,1,2,3,4,5,6>
          (TIntegerSequence<int,0,1,2,3,4,5,6> *param_1,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_2,
          uchar *param_3,double *param_4,double *param_5,double *param_6,double *param_7,
          double *param_8,double *param_9,double *param_10)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_4 != (double *)0x0) {
    *(double *)(param_3 + param_2->DataPtr->CompositeOffset) = *param_4;
  }
  if (iVar1 < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_5 != (double *)0x0) {
    *(double *)(param_3 + param_2->DataPtr[1].CompositeOffset) = *param_5;
  }
  if (iVar1 < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_6 != (double *)0x0) {
    *(double *)(param_3 + param_2->DataPtr[2].CompositeOffset) = *param_6;
  }
  if (iVar1 < 4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_7 != (double *)0x0) {
    *(double *)(param_3 + param_2->DataPtr[3].CompositeOffset) = *param_7;
  }
  if (iVar1 < 5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_8 != (double *)0x0) {
    *(double *)(param_3 + param_2->DataPtr[4].CompositeOffset) = *param_8;
  }
  if (iVar1 < 6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_9 != (double *)0x0) {
    *(double *)(param_3 + param_2->DataPtr[5].CompositeOffset) = *param_9;
  }
  if (iVar1 < 7) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_10 != (double *)0x0) {
    *(double *)(param_3 + param_2->DataPtr[6].CompositeOffset) = *param_10;
  }
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UWidget_*>_> @ 1468f9af0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UWidget_*>_>
          (ushort param_1,ForElementType<UWidget_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UWidget_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>_>_> @ 1468f9bc0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>_>_>
          (ushort param_1,
          ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>_>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>_>_>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>_>_> @ 1468f9c90

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>_>_>
          (ushort param_1,
          ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>_>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>_>_>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>_> @ 1468f9d60

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>_>
          (ushort param_1,ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>_> @ 1468f9e30

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>_>
          (ushort param_1,ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<TTuple<UWidget_*,TWeakPtr<SConstraintCanvas,1>,TWeakObjectPtr<ULocalPlayer,FWeakObjectPtr>_>_>_> @ 1468f9f00

/* WARNING: Removing unreachable block (ram,0x0001468f9f47) */

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<TTuple<UWidget_*,TWeakPtr<SConstraintCanvas,1>,TWeakObjectPtr<ULocalPlayer,FWeakObjectPtr>_>_>_>
          (ushort param_1,
          ForElementType<TTuple<UWidget_*,TWeakPtr<SConstraintCanvas,1>,TWeakObjectPtr<ULocalPlayer,FWeakObjectPtr>_>_>
          *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3;
  uVar1 = iVar2 + 1;
  if (iVar2 <= (int)uVar1) {
    iVar3 = 4;
    if (iVar2 != 0) {
      iVar3 = (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + uVar1;
    }
    if (iVar3 < (int)uVar1) {
      iVar3 = 0x7fffffff;
    }
    TMemStackAllocator<0>::
    ForElementType<TTuple<UWidget_*,TWeakPtr<SConstraintCanvas,1>,TWeakObjectPtr<ULocalPlayer,FWeakObjectPtr>_>_>
    ::ResizeAllocation(param_2,iVar2,iVar3,(ulonglong)(byte)param_1);
    *param_3 = iVar3;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>_> @ 1468f9f90

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 9) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>_> @ 1468fa070

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x21) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>_> @ 1468fa150

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>_> @ 1468fa1d0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>_> @ 1468fa250

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TObjectPtr<UWidgetBinaryStateRegistration>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>_> @ 1468fa2d0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TObjectPtr<UWidgetEnumStateRegistration>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<0,TMemStackAllocator<0>::ForElementType<TTuple<UWidget_*,TWeakPtr<SConstraintCanvas,1>,TWeakObjectPtr<ULocalPlayer,FWeakObjectPtr>_>_>_> @ 1468fa350

void __cdecl
UE::Core::Private::
ReallocTo<0,TMemStackAllocator<0>::ForElementType<TTuple<UWidget_*,TWeakPtr<SConstraintCanvas,1>,TWeakObjectPtr<ULocalPlayer,FWeakObjectPtr>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TTuple<UWidget_*,TWeakPtr<SConstraintCanvas,1>,TWeakObjectPtr<ULocalPlayer,FWeakObjectPtr>_>_>
          *param_4,int param_5,int *param_6)

{
  if (param_3 != *param_6) {
    *param_6 = param_3;
    TMemStackAllocator<0>::
    ForElementType<TTuple<UWidget_*,TWeakPtr<SConstraintCanvas,1>,TWeakObjectPtr<ULocalPlayer,FWeakObjectPtr>_>_>
    ::ResizeAllocation(param_4,param_5,param_3,(ulonglong)param_1);
    return;
  }
  return;
}

// Rehash<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_> @ 1468fa380

void __cdecl
UE::Core::Private::
Rehash<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
          (ForElementType<FSetElementId> *param_1,int param_2)

{
  ulonglong uVar1;
  ForElementType<FSetElementId> FVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(uint)param_2;
  if (param_1->SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&param_1->SecondaryData,0,0,4);
  }
  if (param_2 != 0) {
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
    ResizeAllocation(param_1,0,param_2,4);
    if (0 < param_2) {
      uVar3 = 0;
      do {
        FVar2 = (ForElementType<FSetElementId>)param_1;
        if (param_1->SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar2 = param_1->SecondaryData;
        }
        uVar1 = uVar3 & (longlong)param_2 - 1U;
        uVar3 = uVar3 + 1;
        *(undefined4 *)((longlong)FVar2 + uVar1 * 4) = 0xffffffff;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return;
}

// operator== @ 146905510

bool __cdecl UE::MovieScene::operator==(FKeyType *param_1,FKeyType *param_2)

{
  uchar uVar1;
  FName *pFVar2;
  FName *pFVar3;
  FCustomPropertyIndex *pFVar4;
  ushort *puVar5;
  ushort uVar6;
  
  if ((((param_1->Object).ObjectIndex == (param_2->Object).ObjectIndex) &&
      ((param_1->Object).ObjectSerialNumber == (param_2->Object).ObjectSerialNumber)) &&
     (uVar1 = (param_1->Property).TypeIndex, uVar1 == (param_2->Property).TypeIndex)) {
    if (uVar1 == '\0') {
      puVar5 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_1->Property);
      uVar6 = *puVar5;
      pFVar4 = (FCustomPropertyIndex *)
               TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_2->Property);
    }
    else {
      if (uVar1 != '\x01') {
        if (uVar1 != '\x02') {
          return true;
        }
        pFVar2 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_2->Property);
        pFVar3 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_1->Property);
        return *pFVar3 == *pFVar2;
      }
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_1->Property);
      uVar6 = pFVar4->Value;
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_2->Property);
    }
    return uVar6 == pFVar4->Value;
  }
  return false;
}

// operator== @ 146905600

bool __cdecl UE::MovieScene::operator==(FKeyType *param_1,FKeyType *param_2)

{
  uchar uVar1;
  FName *pFVar2;
  FName *pFVar3;
  FCustomPropertyIndex *pFVar4;
  ushort *puVar5;
  ushort uVar6;
  
  if ((((param_1->Object).ObjectIndex == (param_2->Object).ObjectIndex) &&
      ((param_1->Object).ObjectSerialNumber == (param_2->Object).ObjectSerialNumber)) &&
     (uVar1 = (param_1->Property).TypeIndex, uVar1 == (param_2->Property).TypeIndex)) {
    if (uVar1 == '\0') {
      puVar5 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_1->Property);
      uVar6 = *puVar5;
      pFVar4 = (FCustomPropertyIndex *)
               TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_2->Property);
    }
    else {
      if (uVar1 != '\x01') {
        if (uVar1 != '\x02') {
          return true;
        }
        pFVar2 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_2->Property);
        pFVar3 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_1->Property);
        return *pFVar3 == *pFVar2;
      }
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_1->Property);
      uVar6 = pFVar4->Value;
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_2->Property);
    }
    return uVar6 == pFVar4->Value;
  }
  return false;
}

// ConvertOperationalProperty @ 146910820

void __cdecl
UE::MovieScene::ConvertOperationalProperty(FIntermediateMargin *param_1,FMargin *param_2)

{
  param_2->Top = (float)param_1->Top;
  param_2->Right = (float)param_1->Right;
  param_2->Bottom = (float)param_1->Bottom;
  param_2->Left = (float)param_1->Left;
  return;
}

// ConvertOperationalProperty @ 146910860

void __cdecl
UE::MovieScene::ConvertOperationalProperty
          (FIntermediateWidgetTransform *param_1,FWidgetTransform *param_2)

{
  (param_2->Translation).field0_0x0._s_0.X = param_1->TranslationX;
  (param_2->Translation).field0_0x0._s_0.Y = param_1->TranslationY;
  param_2->Angle = (float)param_1->Rotation;
  (param_2->Scale).field0_0x0._s_0.X = param_1->ScaleX;
  (param_2->Scale).field0_0x0._s_0.Y = param_1->ScaleY;
  (param_2->Shear).field0_0x0._s_0.X = param_1->ShearX;
  (param_2->Shear).field0_0x0._s_0.Y = param_1->ShearY;
  return;
}

// ConvertOperationalProperty @ 1469108b0

void __cdecl
UE::MovieScene::ConvertOperationalProperty(FMargin *param_1,FIntermediateMargin *param_2)

{
  param_2->Top = (double)param_1->Top;
  param_2->Right = (double)param_1->Right;
  param_2->Bottom = (double)param_1->Bottom;
  param_2->Left = (double)param_1->Left;
  return;
}

// ConvertOperationalProperty @ 1469108f0

void __cdecl
UE::MovieScene::ConvertOperationalProperty
          (FWidgetTransform *param_1,FIntermediateWidgetTransform *param_2)

{
  param_2->TranslationX = (param_1->Translation).field0_0x0._s_0.X;
  param_2->TranslationY = (param_1->Translation).field0_0x0._s_0.Y;
  param_2->Rotation = (double)param_1->Angle;
  param_2->ScaleX = (param_1->Scale).field0_0x0._s_0.X;
  param_2->ScaleY = (param_1->Scale).field0_0x0._s_0.Y;
  param_2->ShearX = (param_1->Shear).field0_0x0._s_0.X;
  param_2->ShearY = (param_1->Shear).field0_0x0._s_0.Y;
  return;
}

// GetLayoutDataOffsets @ 14691ea20

FIntermediateMargin * __cdecl
UE::MovieScene::GetLayoutDataOffsets(FIntermediateMargin *__return_storage_ptr__,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  undefined8 local_28;
  float fStack_20;
  float fStack_1c;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UCanvasPanelSlot>((FString *)&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UCanvasPanelSlot::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    if (*(FSlot **)&param_1[3].field_0x8 == (FSlot *)0x0) {
      local_28 = *(FScriptContainerElement **)&param_1[1].field_0x10;
      fStack_20 = *(float *)&param_1[1].field_0x18;
      fStack_1c = *(float *)&param_1[1].field_0x1c;
    }
    else {
      SConstraintCanvas::FSlot::GetOffset(*(FSlot **)&param_1[3].field_0x8,(FMargin *)&local_28);
    }
    __return_storage_ptr__->Top = (double)local_28._4_4_;
    __return_storage_ptr__->Right = (double)fStack_20;
    __return_storage_ptr__->Bottom = (double)fStack_1c;
    __return_storage_ptr__->Left = (double)(float)local_28;
    return __return_storage_ptr__;
  }
  pFVar3 = GetTypeName<UCanvasPanelSlot>((FString *)&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// GetRenderOpacity @ 146924020

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

float __cdecl UE::MovieScene::GetRenderOpacity(UObject *param_1)

{
  UWidget *this;
  float fVar1;
  
  this = CastChecked<UWidget_const_,UObject_const_>(param_1);
  fVar1 = UWidget::GetRenderOpacity(this);
  return fVar1;
}

// GetRenderTransform @ 146924040

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FIntermediateWidgetTransform * __cdecl
UE::MovieScene::GetRenderTransform
          (FIntermediateWidgetTransform *__return_storage_ptr__,UObject *param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  UWidget *this;
  FWidgetTransform *pFVar7;
  
  this = CastChecked<UWidget_const_,UObject_const_>(param_1);
  pFVar7 = UWidget::GetRenderTransform(this);
  dVar2 = (pFVar7->Translation).field0_0x0._s_0.Y;
  dVar3 = (pFVar7->Scale).field0_0x0._s_0.X;
  dVar4 = (pFVar7->Scale).field0_0x0._s_0.Y;
  dVar5 = (pFVar7->Shear).field0_0x0._s_0.X;
  dVar6 = (pFVar7->Shear).field0_0x0._s_0.Y;
  uVar1 = *(undefined8 *)&pFVar7->Angle;
  __return_storage_ptr__->TranslationX = (pFVar7->Translation).field0_0x0._s_0.X;
  __return_storage_ptr__->ScaleX = dVar3;
  __return_storage_ptr__->ShearX = dVar5;
  __return_storage_ptr__->Rotation = (double)(float)uVar1;
  __return_storage_ptr__->TranslationY = dVar2;
  __return_storage_ptr__->ScaleY = dVar4;
  __return_storage_ptr__->ShearY = dVar6;
  return __return_storage_ptr__;
}

// GetTypeHash @ 146924cf0

uint __cdecl UE::MovieScene::GetTypeHash(FKeyType *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_1->Object).ObjectSerialNumber;
  uVar4 = (param_1->Object).ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar1 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar1 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  uVar2 = (uint)(param_1->Property).TypeIndex;
  iVar3 = uVar1 - uVar2;
  uVar4 = 0x9e3779b9 - uVar1 ^ iVar3 * 0x100;
  uVar1 = (uVar2 - uVar4) - iVar3 ^ uVar4 >> 0xd;
  uVar2 = (iVar3 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 146924e00

uint __cdecl UE::MovieScene::GetTypeHash(FKeyType *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_1->Object).ObjectSerialNumber;
  uVar4 = (param_1->Object).ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar1 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar1 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  uVar2 = (uint)(param_1->Property).TypeIndex;
  iVar3 = uVar1 - uVar2;
  uVar4 = 0x9e3779b9 - uVar1 ^ iVar3 * 0x100;
  uVar1 = (uVar2 - uVar4) - iVar3 ^ uVar4 >> 0xd;
  uVar2 = (iVar3 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 146924f10

uint __cdecl UE::MovieScene::GetTypeHash(FWidgetMaterialKey *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (param_1->Object).ObjectSerialNumber;
  uVar4 = (param_1->Object).ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar3 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 3;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 10;
  uVar2 = ::GetTypeHash(&param_1->WidgetMaterialHandle);
  return uVar2 ^ (uVar3 - uVar1) - uVar4 ^ uVar1 >> 0xf;
}

// SetLayoutDataOffsets @ 146943030

void __cdecl UE::MovieScene::SetLayoutDataOffsets(UObject *param_1,FIntermediateMargin *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  UClass *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  FMargin local_68;
  FString local_58 [5];
  
  dVar1 = param_2->Top;
  dVar2 = param_2->Right;
  dVar3 = param_2->Bottom;
  dVar4 = param_2->Left;
  if (param_1 == (UObject *)0x0) {
    pFVar7 = GetTypeName<UCanvasPanelSlot>((FString *)&local_68);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar8);
  }
  pUVar6 = UCanvasPanelSlot::StaticClass();
  iVar5 = (int)pUVar6->_padding_;
  if ((iVar5 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar5 * 8) ==
      &pUVar6->_padding_)) {
    local_68.Left = (float)dVar4;
    local_68.Top = (float)dVar1;
    local_68.Right = (float)dVar2;
    local_68.Bottom = (float)dVar3;
    UCanvasPanelSlot::SetOffsets((UCanvasPanelSlot *)param_1,&local_68);
    return;
  }
  pFVar7 = GetTypeName<UCanvasPanelSlot>((FString *)&local_68);
  pwVar8 = L"";
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  pFVar7 = GetFullNameForCastLogError<UObject>(local_58,param_1);
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar8,pwVar9);
}

// SetRenderOpacity @ 146943f80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::MovieScene::SetRenderOpacity(UObject *param_1,float param_2)

{
  UWidget *this;
  
  this = CastChecked<UWidget,UObject>(param_1);
  UWidget::SetRenderOpacity(this,param_2);
  return;
}

// SetRenderTransform @ 146943fb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::SetRenderTransform(UObject *param_1,FIntermediateWidgetTransform *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  UWidget *this;
  TVector2<double>_u_0 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_88;
  undefined4 uStack_84;
  
  uVar5 = *(undefined4 *)&param_2->TranslationX;
  uVar6 = *(undefined4 *)((longlong)&param_2->TranslationX + 4);
  dVar1 = param_2->TranslationY;
  uVar7 = *(undefined4 *)&param_2->ScaleX;
  uVar8 = *(undefined4 *)((longlong)&param_2->ScaleX + 4);
  dVar2 = param_2->ScaleY;
  uVar9 = *(undefined4 *)&param_2->ShearX;
  uVar10 = *(undefined4 *)((longlong)&param_2->ShearX + 4);
  dVar3 = param_2->ShearY;
  dVar4 = param_2->Rotation;
  this = CastChecked<UWidget,UObject>(param_1);
  local_c8 = CONCAT44(uStack_84,(float)dVar4);
  local_f8._0_4_ = uVar5;
  local_f8._4_4_ = uVar6;
  local_f8._8_4_ = SUB84(dVar1,0);
  local_f8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_e8 = uVar7;
  uStack_e4 = uVar8;
  uStack_e0 = SUB84(dVar2,0);
  uStack_dc = (int)((ulonglong)dVar2 >> 0x20);
  local_d8 = uVar9;
  uStack_d4 = uVar10;
  uStack_d0 = SUB84(dVar3,0);
  uStack_cc = (int)((ulonglong)dVar3 >> 0x20);
  UWidget::SetRenderTransform(this,(FWidgetTransform *)&local_f8._s_0);
  return;
}

// UnpackChannelsFromOperational @ 14694a2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::UnpackChannelsFromOperational
          (FIntermediateMargin *param_1,FProperty *param_2,FUnpackedChannelValues *param_3)

{
  FName *pFVar1;
  FUnpackedChannelValue *pFVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  int local_48;
  FName local_40;
  undefined1 local_38 [8];
  undefined8 **local_30 [3];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar1 = ::FName::FName(&local_40,"Left");
  local_58._8_4_ = (undefined4)param_1->Left;
  local_58._0_8_ = &___7__TIndexedChannelValue_UFMovieSceneFloatChannel___MovieScene_UE__6B_;
  local_48 = 0;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneFloatChannel>
                     ((FUnpackedChannelValue *)local_38,
                      (TIndexedChannelValue<FMovieSceneFloatChannel> *)local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"Top");
  local_58._8_4_ = (undefined4)param_1->Top;
  local_58._0_8_ = &___7__TIndexedChannelValue_UFMovieSceneFloatChannel___MovieScene_UE__6B_;
  local_48 = 1;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneFloatChannel>
                     ((FUnpackedChannelValue *)local_38,
                      (TIndexedChannelValue<FMovieSceneFloatChannel> *)local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"Right");
  local_58._8_4_ = (undefined4)param_1->Right;
  local_58._0_8_ = &___7__TIndexedChannelValue_UFMovieSceneFloatChannel___MovieScene_UE__6B_;
  local_48 = 2;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneFloatChannel>
                     ((FUnpackedChannelValue *)local_38,
                      (TIndexedChannelValue<FMovieSceneFloatChannel> *)local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"Bottom");
  local_58._8_4_ = (undefined4)param_1->Bottom;
  local_58._0_8_ = &___7__TIndexedChannelValue_UFMovieSceneFloatChannel___MovieScene_UE__6B_;
  local_48 = 3;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneFloatChannel>
                     ((FUnpackedChannelValue *)local_38,
                      (TIndexedChannelValue<FMovieSceneFloatChannel> *)local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  return;
}

// UnpackChannelsFromOperational @ 14694a500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::UnpackChannelsFromOperational
          (FIntermediateWidgetTransform *param_1,FProperty *param_2,FUnpackedChannelValues *param_3)

{
  FName *pFVar1;
  FUnpackedChannelValue *pFVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  int local_48;
  FName local_40;
  undefined1 local_38 [8];
  undefined8 **local_30 [3];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar1 = ::FName::FName(&local_40,"Translation.X");
  local_58._8_4_ = (undefined4)param_1->TranslationX;
  local_58._0_8_ = &___7__TIndexedChannelValue_UFMovieSceneFloatChannel___MovieScene_UE__6B_;
  local_48 = 0;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneFloatChannel>
                     ((FUnpackedChannelValue *)local_38,
                      (TIndexedChannelValue<FMovieSceneFloatChannel> *)local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"Translation.Y");
  local_58._8_4_ = (undefined4)param_1->TranslationY;
  local_58._0_8_ = &___7__TIndexedChannelValue_UFMovieSceneFloatChannel___MovieScene_UE__6B_;
  local_48 = 1;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneFloatChannel>
                     ((FUnpackedChannelValue *)local_38,
                      (TIndexedChannelValue<FMovieSceneFloatChannel> *)local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"Rotation");
  local_58._8_4_ = (undefined4)param_1->Rotation;
  local_58._0_8_ = &___7__TIndexedChannelValue_UFMovieSceneFloatChannel___MovieScene_UE__6B_;
  local_48 = 2;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneFloatChannel>
                     ((FUnpackedChannelValue *)local_38,
                      (TIndexedChannelValue<FMovieSceneFloatChannel> *)local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"Scale.X");
  local_58._8_4_ = (undefined4)param_1->ScaleX;
  local_58._0_8_ = &___7__TIndexedChannelValue_UFMovieSceneFloatChannel___MovieScene_UE__6B_;
  local_48 = 3;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneFloatChannel>
                     ((FUnpackedChannelValue *)local_38,
                      (TIndexedChannelValue<FMovieSceneFloatChannel> *)local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"Scale.Y");
  local_58._8_4_ = (undefined4)param_1->ScaleY;
  local_58._0_8_ = &___7__TIndexedChannelValue_UFMovieSceneFloatChannel___MovieScene_UE__6B_;
  local_48 = 4;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneFloatChannel>
                     ((FUnpackedChannelValue *)local_38,
                      (TIndexedChannelValue<FMovieSceneFloatChannel> *)local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"Shear.X");
  local_58._8_4_ = (undefined4)param_1->ShearX;
  local_58._0_8_ = &___7__TIndexedChannelValue_UFMovieSceneFloatChannel___MovieScene_UE__6B_;
  local_48 = 5;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneFloatChannel>
                     ((FUnpackedChannelValue *)local_38,
                      (TIndexedChannelValue<FMovieSceneFloatChannel> *)local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"Shear.Y");
  local_58._8_4_ = (undefined4)param_1->ShearY;
  local_58._0_8_ = &___7__TIndexedChannelValue_UFMovieSceneFloatChannel___MovieScene_UE__6B_;
  local_48 = 6;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneFloatChannel>
                     ((FUnpackedChannelValue *)local_38,
                      (TIndexedChannelValue<FMovieSceneFloatChannel> *)local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  return;
}

// Construct<FShapedTextOptions> @ 14695a2c0

void __cdecl UE::CoreUObject::Private::Construct<FShapedTextOptions>(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 & 0xfc;
  *(undefined2 *)((longlong)param_1 + 1) = 0;
  return;
}

// ConstructForTests<FShapedTextOptions> @ 14695a390

void __cdecl UE::CoreUObject::Private::ConstructForTests<FShapedTextOptions>(void *param_1)

{
  *(byte *)param_1 = *(byte *)param_1 & 0xfc;
  *(undefined2 *)((longlong)param_1 + 1) = 0;
  return;
}

// Destruct<FShapedTextOptions> @ 14695a3a0

void __cdecl UE::CoreUObject::Private::Destruct<FShapedTextOptions>(void *param_1)

{
  return;
}

// Copy<FShapedTextOptions> @ 14695a540

bool __cdecl
UE::CoreUObject::Private::Copy<FShapedTextOptions>(void *param_1,void *param_2,int param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined1 *)(lVar2 + 2 + (longlong)param_1);
      *(undefined2 *)param_1 = *(undefined2 *)(lVar2 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 2) = uVar1;
      param_1 = (void *)((longlong)param_1 + 3);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRichImageRow> @ 14695d4a0

void __cdecl UE::CoreUObject::Private::Construct<FRichImageRow>(void *param_1)

{
  memset((void *)((longlong)param_1 + 8),0,0xb8);
  *(undefined ***)param_1 = &___7FRichImageRow__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  return;
}

// ConstructForTests<FRichImageRow> @ 14695d4e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRichImageRow>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRichImageRow__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  return;
}

// Destruct<FRichImageRow> @ 14695d550

void __cdecl UE::CoreUObject::Private::Destruct<FRichImageRow>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  *(undefined ***)param_1 = &___7FTableRowBase__6B_;
  return;
}

// Copy<FRichImageRow> @ 14695d710

bool __cdecl UE::CoreUObject::Private::Copy<FRichImageRow>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  FSlateBrush *this;
  void *pvVar2;
  
  if (param_3 != 0) {
    pvVar2 = param_1;
    do {
      lVar1 = (longlong)pvVar2 + (0x10 - (longlong)param_1);
      this = (FSlateBrush *)((longlong)pvVar2 + 0x10);
      pvVar2 = (void *)((longlong)pvVar2 + 0xc0);
      FSlateBrush::operator=(this,(FSlateBrush *)((longlong)param_2 + lVar1));
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRichTextStyleRow> @ 14695f460

void __cdecl UE::CoreUObject::Private::Construct<FRichTextStyleRow>(void *param_1)

{
  memset((void *)((longlong)param_1 + 8),0,0x2e8);
  *(undefined ***)param_1 = &___7FRichTextStyleRow__6B_;
  FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0x10));
  return;
}

// ConstructForTests<FRichTextStyleRow> @ 14695f4a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRichTextStyleRow>(void *param_1)

{
  *(undefined ***)param_1 = &___7FRichTextStyleRow__6B_;
  FTextBlockStyle::FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0x10));
  return;
}

// Destruct<FRichTextStyleRow> @ 14695f4c0

void __cdecl UE::CoreUObject::Private::Destruct<FRichTextStyleRow>(void *param_1)

{
  FTextBlockStyle::~FTextBlockStyle((FTextBlockStyle *)((longlong)param_1 + 0x10));
  *(undefined ***)param_1 = &___7FTableRowBase__6B_;
  return;
}

// Copy<FRichTextStyleRow> @ 14695f880

bool __cdecl
UE::CoreUObject::Private::Copy<FRichTextStyleRow>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  FTextBlockStyle *this;
  void *pvVar2;
  
  if (param_3 != 0) {
    pvVar2 = param_1;
    do {
      lVar1 = (longlong)pvVar2 + (0x10 - (longlong)param_1);
      this = (FTextBlockStyle *)((longlong)pvVar2 + 0x10);
      pvVar2 = (void *)((longlong)pvVar2 + 0x2f0);
      FTextBlockStyle::operator=(this,(FTextBlockStyle *)((longlong)param_2 + lVar1));
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSlatePostBufferUpdateInfo> @ 146962bf0

void __cdecl UE::CoreUObject::Private::Construct<FSlatePostBufferUpdateInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FSlatePostBufferUpdateInfo> @ 146962c00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSlatePostBufferUpdateInfo>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FSlatePostBufferUpdateInfo> @ 146962c60

void __cdecl UE::CoreUObject::Private::Destruct<FSlatePostBufferUpdateInfo>(void *param_1)

{
  return;
}

// Copy<FSlatePostBufferUpdateInfo> @ 146962d80

bool __cdecl
UE::CoreUObject::Private::Copy<FSlatePostBufferUpdateInfo>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_1 + lVar1 + 8) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_1 + lVar1 + 8));
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar1 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>_*_&> @ 1469750a0

FObservableArrayPointer<UObject_*> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>,UE::Slate::ItemsSource::FObservableArrayPointer<UObject_*>_*_&>
          (FObservableArrayPointer<UObject_*> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<FName>,UE::Slate::ItemsSource::FObservableArrayPointer<FName>_*_&> @ 1469750c0

FObservableArrayPointer<FName> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<FName>,UE::Slate::ItemsSource::FObservableArrayPointer<FName>_*_&>
          (FObservableArrayPointer<FName> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>_*_&> @ 1469750e0

FSharedObservableArray<UObject_*> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>,UE::Slate::ItemsSource::FSharedObservableArray<UObject_*>_*_&>
          (FSharedObservableArray<UObject_*> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<FName>,UE::Slate::ItemsSource::FSharedObservableArray<FName>_*_&> @ 146975100

FSharedObservableArray<FName> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<FName>,UE::Slate::ItemsSource::FSharedObservableArray<FName>_*_&>
          (FSharedObservableArray<FName> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SComboBox<UObject_*>,SComboBox<UObject_*>_*_&> @ 146975120

SComboBox<UObject_*> * __cdecl
UE::Core::Private::DereferenceIfNecessary<SComboBox<UObject_*>,SComboBox<UObject_*>_*_&>
          (SComboBox<UObject_*> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SComboBox<FName>,SComboBox<FName>_*_&> @ 146975140

SComboBox<FName> * __cdecl
UE::Core::Private::DereferenceIfNecessary<SComboBox<FName>,SComboBox<FName>_*_&>
          (SComboBox<FName> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SObjectTableRow<UObject_*>,SObjectTableRow<UObject_*>_*_&> @ 146975160

SObjectTableRow<UObject_*> * __cdecl
UE::Core::Private::DereferenceIfNecessary<SObjectTableRow<UObject_*>,SObjectTableRow<UObject_*>_*_&>
          (SObjectTableRow<UObject_*> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableRow<UObject_*>,STableRow<UObject_*>_*_&> @ 146975180

STableRow<UObject_*> * __cdecl
UE::Core::Private::DereferenceIfNecessary<STableRow<UObject_*>,STableRow<UObject_*>_*_&>
          (STableRow<UObject_*> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableRow<FName>,STableRow<FName>_*_&> @ 1469751a0

STableRow<FName> * __cdecl
UE::Core::Private::DereferenceIfNecessary<STableRow<FName>,STableRow<FName>_*_&>
          (STableRow<FName> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SListView<UObject_*>::SListViewPinnedRowWidget,SListView<UObject_*>::SListViewPinnedRowWidget_*_&> @ 1469751c0

SListViewPinnedRowWidget * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SListView<UObject_*>::SListViewPinnedRowWidget,SListView<UObject_*>::SListViewPinnedRowWidget_*_&>
          (SListViewPinnedRowWidget **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UCheckBox,UCheckBox_*_&> @ 1469751e0

UCheckBox * __cdecl
UE::Core::Private::DereferenceIfNecessary<UCheckBox,UCheckBox_*_&>(UCheckBox **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UComboBox,UComboBox_*_&> @ 146975200

UComboBox * __cdecl
UE::Core::Private::DereferenceIfNecessary<UComboBox,UComboBox_*_&>(UComboBox **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UComboBoxKey,UComboBoxKey_*_&> @ 146975220

UComboBoxKey * __cdecl
UE::Core::Private::DereferenceIfNecessary<UComboBoxKey,UComboBoxKey_*_&>(UComboBoxKey **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UComboBoxString,UComboBoxString_*_&> @ 146975240

UComboBoxString * __cdecl
UE::Core::Private::DereferenceIfNecessary<UComboBoxString,UComboBoxString_*_&>
          (UComboBoxString **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UEditableText,UEditableText_*_&> @ 146975260

/* WARNING: Enum "Type": Some values do not have unique names */

UEditableText * __cdecl
UE::Core::Private::DereferenceIfNecessary<UEditableText,UEditableText_*_&>(UEditableText **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UEditableTextBox,UEditableTextBox_*_&> @ 146975280

/* WARNING: Enum "Type": Some values do not have unique names */

UEditableTextBox * __cdecl
UE::Core::Private::DereferenceIfNecessary<UEditableTextBox,UEditableTextBox_*_&>
          (UEditableTextBox **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UExpandableArea,UExpandableArea_*_&> @ 1469752a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UExpandableArea * __cdecl
UE::Core::Private::DereferenceIfNecessary<UExpandableArea,UExpandableArea_*_&>
          (UExpandableArea **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UImage,UImage_*_&> @ 1469752c0

UImage * __cdecl UE::Core::Private::DereferenceIfNecessary<UImage,UImage_*_&>(UImage **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UInputKeySelector,UInputKeySelector_*_&> @ 1469752e0

UInputKeySelector * __cdecl
UE::Core::Private::DereferenceIfNecessary<UInputKeySelector,UInputKeySelector_*_&>
          (UInputKeySelector **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UListView,UListView_*_&> @ 146975300

UListView * __cdecl
UE::Core::Private::DereferenceIfNecessary<UListView,UListView_*_&>(UListView **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UListViewBase,UListViewBase_*_&> @ 146975320

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UListViewBase * __cdecl
UE::Core::Private::DereferenceIfNecessary<UListViewBase,UListViewBase_*_&>(UListViewBase **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMenuAnchor,UMenuAnchor_*_&> @ 146975340

/* WARNING: Enum "Type": Some values do not have unique names */

UMenuAnchor * __cdecl
UE::Core::Private::DereferenceIfNecessary<UMenuAnchor,UMenuAnchor_*_&>(UMenuAnchor **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMultiLineEditableText,UMultiLineEditableText_*_&> @ 146975360

/* WARNING: Enum "Type": Some values do not have unique names */

UMultiLineEditableText * __cdecl
UE::Core::Private::DereferenceIfNecessary<UMultiLineEditableText,UMultiLineEditableText_*_&>
          (UMultiLineEditableText **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMultiLineEditableTextBox,UMultiLineEditableTextBox_*_&> @ 146975380

/* WARNING: Enum "Type": Some values do not have unique names */

UMultiLineEditableTextBox * __cdecl
UE::Core::Private::DereferenceIfNecessary<UMultiLineEditableTextBox,UMultiLineEditableTextBox_*_&>
          (UMultiLineEditableTextBox **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UProgressBar,UProgressBar_*_&> @ 1469753a0

UProgressBar * __cdecl
UE::Core::Private::DereferenceIfNecessary<UProgressBar,UProgressBar_*_&>(UProgressBar **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UScrollBox,UScrollBox_*_&> @ 1469753c0

UScrollBox * __cdecl
UE::Core::Private::DereferenceIfNecessary<UScrollBox,UScrollBox_*_&>(UScrollBox **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<USlider,USlider_*_&> @ 1469753e0

USlider * __cdecl UE::Core::Private::DereferenceIfNecessary<USlider,USlider_*_&>(USlider **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<USpinBox,USpinBox_*_&> @ 146975400

/* WARNING: Enum "Type": Some values do not have unique names */

USpinBox * __cdecl
UE::Core::Private::DereferenceIfNecessary<USpinBox,USpinBox_*_&>(USpinBox **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UTileView,UTileView_*_&> @ 146975420

UTileView * __cdecl
UE::Core::Private::DereferenceIfNecessary<UTileView,UTileView_*_&>(UTileView **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UTreeView,UTreeView_*_&> @ 146975440

UTreeView * __cdecl
UE::Core::Private::DereferenceIfNecessary<UTreeView,UTreeView_*_&>(UTreeView **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UWidget,UWidget_*_&> @ 146975460

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __cdecl UE::Core::Private::DereferenceIfNecessary<UWidget,UWidget_*_&>(UWidget **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSubclassOf<UUserWidget>_>_> @ 14697ef60

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSubclassOf<UUserWidget>_>_>
          (ushort param_1,ForElementType<TSubclassOf<UUserWidget>_> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSubclassOf<UUserWidget>_>::ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSubclassOf<UUserWidget>_>_> @ 14697f020

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSubclassOf<UUserWidget>_>_>
          (uint param_1,uint param_2,ForElementType<TSubclassOf<UUserWidget>_> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSubclassOf<UUserWidget>_>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// Construct<FSlateMeshVertex> @ 146a453d0

void __cdecl UE::CoreUObject::Private::Construct<FSlateMeshVertex>(void *param_1)

{
  *(TVector2<float>_u_0 *)param_1 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  ((TVector2<float>_u_0 *)((longlong)param_1 + 0xc))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  ((TVector2<float>_u_0 *)((longlong)param_1 + 0x14))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  ((TVector2<float>_u_0 *)((longlong)param_1 + 0x1c))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  ((TVector2<float>_u_0 *)((longlong)param_1 + 0x24))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  ((TVector2<float>_u_0 *)((longlong)param_1 + 0x2c))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  ((TVector2<float>_u_0 *)((longlong)param_1 + 0x34))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  return;
}

// ConstructForTests<FSlateMeshVertex> @ 146a45430

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSlateMeshVertex>(void *param_1)

{
  *(TVector2<float>_u_0 *)param_1 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  ((TVector2<float>_u_0 *)((longlong)param_1 + 0xc))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  ((TVector2<float>_u_0 *)((longlong)param_1 + 0x14))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  ((TVector2<float>_u_0 *)((longlong)param_1 + 0x1c))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  ((TVector2<float>_u_0 *)((longlong)param_1 + 0x24))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  ((TVector2<float>_u_0 *)((longlong)param_1 + 0x2c))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  ((TVector2<float>_u_0 *)((longlong)param_1 + 0x34))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  return;
}

// Destruct<FSlateMeshVertex> @ 146a45490

void __cdecl UE::CoreUObject::Private::Destruct<FSlateMeshVertex>(void *param_1)

{
  return;
}

// Copy<FSlateMeshVertex> @ 146a454e0

bool __cdecl
UE::CoreUObject::Private::Copy<FSlateMeshVertex>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar9 + 0x30 + (longlong)param_1);
      uVar3 = *(undefined4 *)(lVar9 + 0x38 + (longlong)param_1);
      uVar4 = ((undefined8 *)(lVar9 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar9 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x38) = uVar3;
      param_1 = (void *)((longlong)param_1 + 0x3c);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNamedSlotBinding> @ 146a45c30

void __cdecl UE::CoreUObject::Private::Construct<FNamedSlotBinding>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FNamedSlotBinding> @ 146a45c50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNamedSlotBinding>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FNamedSlotBinding> @ 146a45c70

void __cdecl UE::CoreUObject::Private::Destruct<FNamedSlotBinding>(void *param_1)

{
  return;
}

// Copy<FNamedSlotBinding> @ 146a45de0

bool __cdecl
UE::CoreUObject::Private::Copy<FNamedSlotBinding>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FUIComponentTarget> @ 146a469b0

void __cdecl UE::CoreUObject::Private::Construct<FUIComponentTarget>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FUIComponentTarget> @ 146a469c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FUIComponentTarget>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FUIComponentTarget> @ 146a469d0

void __cdecl UE::CoreUObject::Private::Destruct<FUIComponentTarget>(void *param_1)

{
  return;
}

// Construct<FPaintContext> @ 146a46a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Construct<FPaintContext>(void *param_1)

{
  ulonglong uVar1;
  TSharedPtr<SWindow,1> TStack_18;
  
  uVar1 = (ulonglong)_tls_index;
  *(FGeometry **)param_1 = &NullGeometry;
  *(FSlateRect **)((longlong)param_1 + 8) = &NullRect;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      TStack_18.Object = (SWindow *)0x0;
      TStack_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      FSlateWindowElementList::FSlateWindowElementList(&NullElementList,&TStack_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_18.SharedReferenceCount.ReferenceController);
      atexit(`GetNullElementList'::__l2::_dynamic_atexit_destructor_for__NullElementList__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FSlateWindowElementList **)((longlong)param_1 + 0x10) = &NullElementList;
  *(FWidgetStyle **)((longlong)param_1 + 0x20) = &NullStyle;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  return;
}

// ConstructForTests<FPaintContext> @ 146a46a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPaintContext>(void *param_1)

{
  ulonglong uVar1;
  TSharedPtr<SWindow,1> TStack_18;
  
  uVar1 = (ulonglong)_tls_index;
  *(FGeometry **)param_1 = &NullGeometry;
  *(FSlateRect **)((longlong)param_1 + 8) = &NullRect;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      TStack_18.Object = (SWindow *)0x0;
      TStack_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      FSlateWindowElementList::FSlateWindowElementList(&NullElementList,&TStack_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_18.SharedReferenceCount.ReferenceController);
      atexit(`GetNullElementList'::__l2::_dynamic_atexit_destructor_for__NullElementList__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FSlateWindowElementList **)((longlong)param_1 + 0x10) = &NullElementList;
  *(FWidgetStyle **)((longlong)param_1 + 0x20) = &NullStyle;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  return;
}

// Destruct<FPaintContext> @ 146a46a80

void __cdecl UE::CoreUObject::Private::Destruct<FPaintContext>(void *param_1)

{
  return;
}

// Copy<FUIComponentTarget> @ 146a46a90

bool __cdecl
UE::CoreUObject::Private::Copy<FUIComponentTarget>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FPaintContext> @ 146a46bc0

bool __cdecl UE::CoreUObject::Private::Copy<FPaintContext>(void *param_1,void *param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar3 = *(undefined8 *)(lVar7 + (longlong)param_1);
      uVar1 = *(undefined1 *)((longlong)param_1 + lVar7 + 0x28);
      uVar4 = *(undefined8 *)((longlong)param_1 + lVar7 + 0x20);
      uVar5 = *(undefined8 *)((longlong)param_1 + lVar7 + 0x10);
      uVar6 = *(undefined8 *)((longlong)param_1 + lVar7 + 8);
      uVar2 = *(undefined4 *)((longlong)param_1 + lVar7 + 0x18);
      *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
      *(undefined8 *)param_1 = uVar3;
      *(undefined8 *)((longlong)param_1 + 8) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x18) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar4;
      *(undefined1 *)((longlong)param_1 + 0x28) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + lVar7 + 0x2c);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAnimationEventBinding> @ 146a47540

void __cdecl UE::CoreUObject::Private::Construct<FAnimationEventBinding>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  return;
}

// ConstructForTests<FAnimationEventBinding> @ 146a47560

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAnimationEventBinding>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  return;
}

// Destruct<FAnimationEventBinding> @ 146a47580

void __cdecl UE::CoreUObject::Private::Destruct<FAnimationEventBinding>(void *param_1)

{
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 8));
  return;
}

// Copy<FAnimationEventBinding> @ 146a47660

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimationEventBinding>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void>::operator=
                ((TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void> *)(puVar2 + 1),
                 (TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void> *)(puVar1 + 1));
      *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(puVar1 + 4);
      *(undefined8 *)((longlong)puVar2 + 0x24) = *(undefined8 *)((longlong)puVar1 + 0x24);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FQueuedWidgetAnimationTransition> @ 146a480e0

void __cdecl UE::CoreUObject::Private::Construct<FQueuedWidgetAnimationTransition>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 6;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x35) = 0;
  return;
}

// ConstructForTests<FQueuedWidgetAnimationTransition> @ 146a48150

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FQueuedWidgetAnimationTransition>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 6;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x35) = 0;
  return;
}

// Destruct<FQueuedWidgetAnimationTransition> @ 146a48180

void __cdecl UE::CoreUObject::Private::Destruct<FQueuedWidgetAnimationTransition>(void *param_1)

{
  return;
}

// Copy<FQueuedWidgetAnimationTransition> @ 146a48220

bool __cdecl
UE::CoreUObject::Private::Copy<FQueuedWidgetAnimationTransition>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar1 + 1);
      if ((undefined4 *)((longlong)puVar1 + 0xc) != (undefined4 *)((longlong)puVar2 + 0xc)) {
        if (*(char *)(puVar1 + 2) == '\0') {
          if (*(char *)(puVar2 + 2) != '\0') {
            *(undefined1 *)(puVar2 + 2) = 0;
          }
        }
        else {
          *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
          *(undefined1 *)(puVar2 + 2) = 1;
        }
      }
      if ((undefined4 *)((longlong)puVar1 + 0x14) != (undefined4 *)((longlong)puVar2 + 0x14)) {
        if (*(char *)(puVar1 + 3) == '\0') {
          if (*(char *)(puVar2 + 3) != '\0') {
            *(undefined1 *)(puVar2 + 3) = 0;
          }
        }
        else {
          *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0x14);
          *(undefined1 *)(puVar2 + 3) = 1;
        }
      }
      if ((undefined4 *)((longlong)puVar1 + 0x1c) != (undefined4 *)((longlong)puVar2 + 0x1c)) {
        if (*(char *)(puVar1 + 4) == '\0') {
          if (*(char *)(puVar2 + 4) != '\0') {
            *(undefined1 *)(puVar2 + 4) = 0;
          }
        }
        else {
          *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)((longlong)puVar1 + 0x1c);
          *(undefined1 *)(puVar2 + 4) = 1;
        }
      }
      if ((undefined4 *)((longlong)puVar1 + 0x24) != (undefined4 *)((longlong)puVar2 + 0x24)) {
        if (*(char *)(puVar1 + 5) == '\0') {
          if (*(char *)(puVar2 + 5) != '\0') {
            *(undefined1 *)(puVar2 + 5) = 0;
          }
        }
        else {
          *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)((longlong)puVar1 + 0x24);
          *(undefined1 *)(puVar2 + 5) = 1;
        }
      }
      if ((undefined4 *)((longlong)puVar1 + 0x2c) != (undefined4 *)((longlong)puVar2 + 0x2c)) {
        if (*(char *)(puVar1 + 6) == '\0') {
          if (*(char *)(puVar2 + 6) != '\0') {
            *(undefined1 *)(puVar2 + 6) = 0;
          }
        }
        else {
          *(undefined4 *)((longlong)puVar2 + 0x2c) = *(undefined4 *)((longlong)puVar1 + 0x2c);
          *(undefined1 *)(puVar2 + 6) = 1;
        }
      }
      if ((undefined1 *)((longlong)puVar1 + 0x34) != (undefined1 *)((longlong)puVar2 + 0x34)) {
        if (*(char *)((longlong)puVar1 + 0x35) == '\0') {
          if (*(char *)((longlong)puVar2 + 0x35) != '\0') {
            *(undefined1 *)((longlong)puVar2 + 0x35) = 0;
          }
        }
        else {
          *(undefined1 *)((longlong)puVar2 + 0x34) = *(undefined1 *)((longlong)puVar1 + 0x34);
          *(undefined1 *)((longlong)puVar2 + 0x35) = 1;
        }
      }
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 7;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWidgetComponentInstanceData> @ 146a48ed0

void __cdecl UE::CoreUObject::Private::Construct<FWidgetComponentInstanceData>(void *param_1)

{
  FSceneComponentInstanceData::FSceneComponentInstanceData(param_1);
  *(undefined ***)param_1 = &___7FWidgetComponentInstanceData__6B_;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  return;
}

// ConstructForTests<FWidgetComponentInstanceData> @ 146a48f50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FWidgetComponentInstanceData>(void *param_1)

{
  FSceneComponentInstanceData::FSceneComponentInstanceData(param_1);
  *(undefined ***)param_1 = &___7FWidgetComponentInstanceData__6B_;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  return;
}

// Destruct<FWidgetComponentInstanceData> @ 146a48f90

void __cdecl UE::CoreUObject::Private::Destruct<FWidgetComponentInstanceData>(void *param_1)

{
  *(undefined ***)param_1 = &___7FSceneComponentInstanceData__6B_;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0;
  if (*(void **)((longlong)param_1 + 0xa8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa8));
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x68));
  FInstanceCacheDataBase::~FInstanceCacheDataBase(param_1);
  return;
}

// Copy<FWidgetComponentInstanceData> @ 146a49110

bool __cdecl
UE::CoreUObject::Private::Copy<FWidgetComponentInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  UObject *pUVar2;
  FInstanceCacheDataBase *pFVar3;
  int iVar4;
  int *this;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FInstanceCacheDataBase::operator=(param_1,param_2);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->_padding_ !=
        (UObject *)0x0)) {
      GC::MarkAsReachable((UObject *)
                          ((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->_padding_);
    }
    piVar1 = &(((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->SavedProperties).ArrayNum;
    ((FInstanceCacheDataBase *)((longlong)param_1 + 0x58))->_padding_ =
         ((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->_padding_;
    this = &(((FInstanceCacheDataBase *)((longlong)param_1 + 0x58))->SavedProperties).ArrayNum;
    *(undefined1 *)
     &(((FInstanceCacheDataBase *)((longlong)param_1 + 0x58))->SavedProperties).AllocatorInstance.
      Data = *(undefined1 *)
              &(((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->SavedProperties).
               AllocatorInstance.Data;
    *(undefined4 *)
     ((longlong)
      &(((FInstanceCacheDataBase *)((longlong)param_1 + 0x58))->SavedProperties).AllocatorInstance.
       Data + 4) = *(undefined4 *)
                    ((longlong)
                     &(((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->SavedProperties).
                      AllocatorInstance.Data + 4);
    if (this != piVar1) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)
                 &((FInstanceCacheDataBase *)((longlong)param_1 + 0x58))->ReferencedNames,
                 (int *)((longlong)param_1 + 0xb0),
                 (ForElementType<FSetElementId> *)
                 &((FInstanceCacheDataBase *)((longlong)param_2 + 0x58))->ReferencedNames,
                 (int)((FInstanceCacheDataBase *)((longlong)param_2 + 0xb0))->_padding_);
      TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,(TSparseArray<TSparseSetElement<TTuple<TObjectPtr<USceneComponent>,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)piVar1);
    }
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (UObject *)
                 (((FInstanceCacheDataBase *)((longlong)param_2 + 0xb0))->SavedProperties).
                 AllocatorInstance.Data, pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
    (((FInstanceCacheDataBase *)((longlong)param_1 + 0xb0))->SavedProperties).AllocatorInstance.Data
         = (((FInstanceCacheDataBase *)((longlong)param_2 + 0xb0))->SavedProperties).
           AllocatorInstance.Data;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = *(UObject **)
                  &(((FInstanceCacheDataBase *)((longlong)param_2 + 0xb0))->SavedProperties).
                   ArrayNum, pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
    pFVar3 = (FInstanceCacheDataBase *)((longlong)param_2 + 0xb0);
    iVar4 = (((FInstanceCacheDataBase *)((longlong)param_2 + 0xb0))->SavedProperties).ArrayMax;
    param_2 = &((FInstanceCacheDataBase *)((longlong)param_2 + 0xb0))->UniqueTransientPackage;
    (((FInstanceCacheDataBase *)((longlong)param_1 + 0xb0))->SavedProperties).ArrayNum =
         (pFVar3->SavedProperties).ArrayNum;
    (((FInstanceCacheDataBase *)((longlong)param_1 + 0xb0))->SavedProperties).ArrayMax = iVar4;
    param_1 = &((FInstanceCacheDataBase *)((longlong)param_1 + 0xb0))->UniqueTransientPackage;
  }
  return true;
}

// Construct<FDelegateRuntimeBinding> @ 146a4cb80

void __cdecl UE::CoreUObject::Private::Construct<FDelegateRuntimeBinding>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FDynamicPropertyPath::FDynamicPropertyPath((FDynamicPropertyPath *)((longlong)param_1 + 0x20));
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// ConstructForTests<FDelegateRuntimeBinding> @ 146a4cbd0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDelegateRuntimeBinding>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FDynamicPropertyPath::FDynamicPropertyPath((FDynamicPropertyPath *)((longlong)param_1 + 0x20));
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// Destruct<FDelegateRuntimeBinding> @ 146a4cc10

void __cdecl UE::CoreUObject::Private::Destruct<FDelegateRuntimeBinding>(void *param_1)

{
  FCachedPropertyPath::~FCachedPropertyPath((FCachedPropertyPath *)((longlong)param_1 + 0x20));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FDelegateRuntimeBinding> @ 146a4cd00

bool __cdecl
UE::CoreUObject::Private::Copy<FDelegateRuntimeBinding>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  FPropertyPathSegment *pFVar5;
  ForAnyElementType *pFVar6;
  ForAnyElementType *pFVar7;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        _Src = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar3,iVar4,pFVar6,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar6->Data,_Src,(longlong)iVar3 * 2);
          }
        }
      }
      pFVar6[2].Data = pFVar2[2].Data;
      pFVar7 = pFVar6 + 4;
      pFVar6[3].Data = pFVar2[3].Data;
      if (pFVar7 != pFVar2 + 4) {
        iVar3 = *(int *)&pFVar2[5].Data;
        piVar1 = (int *)((longlong)&pFVar6[5].Data + 4);
        pFVar5 = (FPropertyPathSegment *)pFVar2[4].Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[5].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,iVar3,iVar4,pFVar7,iVar3,piVar1);
          ConstructItems<FPropertyPathSegment,FPropertyPathSegment,int>(pFVar7->Data,pFVar5,iVar3);
        }
      }
      pFVar6[6].Data = pFVar2[6].Data;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)pFVar2[7].Data != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)pFVar2[7].Data);
      }
      param_3 = param_3 + -1;
      pFVar6[7].Data = pFVar2[7].Data;
      pFVar6[8].Data = pFVar2[8].Data;
      pFVar6[9].Data = pFVar2[9].Data;
      *(undefined4 *)&pFVar6[10].Data = *(undefined4 *)&pFVar2[10].Data;
      *(undefined1 *)((longlong)&pFVar6[10].Data + 4) =
           *(undefined1 *)((longlong)&pFVar2[10].Data + 4);
      *(undefined1 *)&pFVar6[0xb].Data = *(undefined1 *)&pFVar2[0xb].Data;
      pFVar6 = pFVar6 + 0xc;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<SRetainerWidget,SRetainerWidget_*_&> @ 146a4f7d0

SRetainerWidget * __cdecl
UE::Core::Private::DereferenceIfNecessary<SRetainerWidget,SRetainerWidget_*_&>
          (SRetainerWidget **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UNavigationUIComponent,UNavigationUIComponent_*_&> @ 146a4f7f0

UNavigationUIComponent * __cdecl
UE::Core::Private::DereferenceIfNecessary<UNavigationUIComponent,UNavigationUIComponent_*_&>
          (UNavigationUIComponent **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UUserWidget,UUserWidget_*_&> @ 146a4f810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUserWidget * __cdecl
UE::Core::Private::DereferenceIfNecessary<UUserWidget,UUserWidget_*_&>(UUserWidget **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UWidgetComponent,UWidgetComponent_*_&> @ 146a4f830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UWidgetComponent * __cdecl
UE::Core::Private::DereferenceIfNecessary<UWidgetComponent,UWidgetComponent_*_&>
          (UWidgetComponent **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UWindowTitleBarArea,UWindowTitleBarArea_*_&> @ 146a4f850

/* WARNING: Enum "Type": Some values do not have unique names */

UWindowTitleBarArea * __cdecl
UE::Core::Private::DereferenceIfNecessary<UWindowTitleBarArea,UWindowTitleBarArea_*_&>
          (UWindowTitleBarArea **param_1)

{
  return *param_1;
}

// ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FQueuedWidgetAnimationTransition>_> @ 146a53e20

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FQueuedWidgetAnimationTransition>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FQueuedWidgetAnimationTransition> *param_5,int param_6,int *param_7)

{
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = (ulonglong)param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      uVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      uVar1 = (uint)(uVar2 / uVar3);
      if ((int)uVar1 < param_3) {
        uVar1 = 0x7fffffff;
      }
    }
  }
  if ((int)uVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  uVar4 = uVar1;
  if (uVar1 < 9) {
    if (param_5->SecondaryData == (ForElementType<FQueuedWidgetAnimationTransition>)0x0)
    goto LAB_146a53e91;
    uVar4 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_5->SecondaryData,0,uVar4,uVar3);
LAB_146a53e91:
  *param_7 = uVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<SRetainerWidget_*>_> @ 146a53ed0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<SRetainerWidget_*>_>
          (ushort param_1,ForElementType<SRetainerWidget_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 4) {
      iVar8 = 3;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 4) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<SRetainerWidget_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UUserWidgetExtension_*>_> @ 146a53fa0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UUserWidgetExtension_*>_>
          (ushort param_1,ForElementType<UUserWidgetExtension_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UUserWidgetExtension_*>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<SMeshWidget::FRenderData>_> @ 146a54070

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<SMeshWidget::FRenderData>_>
          (ushort param_1,ForElementType<SMeshWidget::FRenderData> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 4) {
      iVar8 = 3;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 4) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::
    ForElementType<SMeshWidget::FRenderData>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UUserWidgetExtension_*>_> @ 146a54140

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UUserWidgetExtension_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UUserWidgetExtension_*> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x21) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UUserWidgetExtension_*>
    ::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<UWidgetAnimation_*>_> @ 146a54220

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<UWidgetAnimation_*>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UWidgetAnimation_*> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  UWidgetAnimation **_Src;
  UWidgetAnimation **_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = *param_5;
  iVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar4 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = (ulonglong)param_1;
    uVar3 = (ulonglong)(int)uVar1;
    if (iVar4 == 0) {
      uVar5 = 4;
      if (4 < uVar3) {
        uVar5 = uVar3;
      }
    }
    else {
      uVar5 = (uVar3 * 3 >> 3) + 0x10 + uVar3;
    }
    iVar4 = (int)uVar5;
    if (iVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
    else if (iVar4 < 0) goto LAB_146a5432c;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_146a5432c:
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (UWidgetAnimation **)0x0;
    _Src = param_4->Data;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar6,8);
      if ((_Src != (UWidgetAnimation **)0x0) &&
         (uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4), uVar3 != 0)) {
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        memcpy(_Dst,_Src,uVar3);
      }
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
    *param_6 = iVar4;
  }
  return iVar2;
}

// ReallocGrow<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FDelegateRuntimeBinding>_> @ 146a54350

int __cdecl
UE::Core::Private::
ReallocGrow<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FDelegateRuntimeBinding>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FDelegateRuntimeBinding> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  FDelegateRuntimeBinding *_Src;
  FDelegateRuntimeBinding *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar2 = *param_5;
  iVar4 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar4 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = (ulonglong)param_1;
    uVar3 = (ulonglong)(int)uVar1;
    if (iVar4 == 0) {
      uVar5 = 4;
      if (4 < uVar3) {
        uVar5 = uVar3;
      }
    }
    else {
      uVar5 = (uVar3 * 3 >> 3) + 0x10 + uVar3;
    }
    iVar4 = (int)uVar5;
    if (iVar4 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
    else if (iVar4 < 0) goto LAB_146a5445c;
    iVar4 = (int)uVar5;
    if (0x7ffffffe < uVar6 - 1) {
LAB_146a5445c:
                    /* WARNING: Subroutine does not return */
      OnInvalidConcurrentLinearArrayAllocatorNum(iVar4,uVar6);
    }
    _Dst = (FDelegateRuntimeBinding *)0x0;
    _Src = param_4->Data;
    uVar6 = (uVar5 & 0xffffffff) * uVar6;
    if (uVar6 != 0) {
      _Dst = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc(uVar6,8);
      if ((_Src != (FDelegateRuntimeBinding *)0x0) &&
         (uVar3 = (ulonglong)*(uint *)&_Src[-1].field_0x5c, uVar3 != 0)) {
        if (uVar6 < uVar3) {
          uVar3 = uVar6;
        }
        memcpy(_Dst,_Src,uVar3);
      }
    }
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(_Src);
    param_4->Data = _Dst;
    *param_6 = iVar4;
  }
  return iVar2;
}

// Construct<FWidgetChild> @ 146aac210

void __cdecl UE::CoreUObject::Private::Construct<FWidgetChild>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FWidgetChild> @ 146aac220

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWidgetChild>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FWidgetChild> @ 146aac230

void __cdecl UE::CoreUObject::Private::Destruct<FWidgetChild>(void *param_1)

{
  return;
}

// Copy<FWidgetChild> @ 146aac240

bool __cdecl UE::CoreUObject::Private::Copy<FWidgetChild>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

