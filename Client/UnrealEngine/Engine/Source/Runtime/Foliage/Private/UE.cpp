// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 18

// Construct<FProceduralFoliageInstance> @ 145ece680

void __cdecl UE::CoreUObject::Private::Construct<FProceduralFoliageInstance>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined2 *)((longlong)param_1 + 0x70) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// ConstructForTests<FProceduralFoliageInstance> @ 145ece6e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FProceduralFoliageInstance>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined2 *)((longlong)param_1 + 0x70) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// Destruct<FProceduralFoliageInstance> @ 145ece740

void __cdecl UE::CoreUObject::Private::Destruct<FProceduralFoliageInstance>(void *param_1)

{
  return;
}

// Copy<FProceduralFoliageInstance> @ 145ece750

bool __cdecl
UE::CoreUObject::Private::Copy<FProceduralFoliageInstance>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    pvVar3 = param_2;
    puVar4 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar2 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar2;
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      uVar2 = puVar1[1];
      puVar4[2] = *puVar1;
      puVar4[3] = uVar2;
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0x28);
      puVar4[4] = *(undefined8 *)((longlong)pvVar3 + 0x20);
      puVar4[5] = uVar2;
      puVar4[6] = *(undefined8 *)((longlong)pvVar3 + 0x30);
      *(undefined4 *)(puVar4 + 7) = *(undefined4 *)((longlong)pvVar3 + 0x38);
      uVar2 = *(undefined8 *)((longlong)pvVar3 + 0x48);
      puVar4[8] = *(undefined8 *)((longlong)pvVar3 + 0x40);
      puVar4[9] = uVar2;
      puVar4[10] = *(undefined8 *)((longlong)pvVar3 + 0x50);
      *(undefined4 *)(puVar4 + 0xb) = *(undefined4 *)((longlong)pvVar3 + 0x58);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar3 + 0x60) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar3 + 0x60));
      }
      puVar4[0xc] = *(undefined8 *)((longlong)pvVar3 + 0x60);
      puVar4[0xd] = *(undefined8 *)((longlong)pvVar3 + 0x68);
      *(undefined1 *)(puVar4 + 0xe) = *(undefined1 *)((longlong)pvVar3 + 0x70);
      *(undefined1 *)((longlong)puVar4 + 0x71) = *(undefined1 *)((longlong)pvVar3 + 0x71);
      param_3 = param_3 + -1;
      pvVar3 = (void *)((longlong)pvVar3 + 0x80);
      puVar4 = puVar4 + 0x10;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFoliageTypeObject> @ 145ecf190

void __cdecl UE::CoreUObject::Private::Construct<FFoliageTypeObject>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FFoliageTypeObject> @ 145ecf1b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFoliageTypeObject>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FFoliageTypeObject> @ 145ecf280

void __cdecl UE::CoreUObject::Private::Destruct<FFoliageTypeObject>(void *param_1)

{
  return;
}

// Copy<FFoliageTypeObject> @ 145ecf410

bool __cdecl
UE::CoreUObject::Private::Copy<FFoliageTypeObject>(void *param_1,void *param_2,int param_3)

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
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[1] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[1]);
      }
      puVar2[1] = puVar1[1];
      *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar1 + 2);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[3] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[3]);
      }
      puVar2[3] = puVar1[3];
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 4;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFoliageDensityFalloff> @ 145ecff30

void __cdecl UE::CoreUObject::Private::Construct<FFoliageDensityFalloff>(void *param_1)

{
  FRichCurve *this;
  undefined1 in_R9B;
  float in_XMM1_Da;
  FKeyHandle aFStackX_8 [4];
  uint in_stack_ffffffffffffffe8;
  FKeyHandle FVar1;
  
  *(undefined1 *)param_1 = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)((longlong)param_1 + 8));
  this = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 8));
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar1.Index = in_stack_ffffffffffffffe8 & 0xffffff00;
  FRichCurve::AddKey(this,in_XMM1_Da,0.0,(bool)in_R9B,FVar1);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FRichCurve::AddKey(this,in_XMM1_Da,__real_3f800000,(bool)in_R9B,
                     (FKeyHandle)(FVar1.Index & 0xffffff00));
  return;
}

// ConstructForTests<FFoliageDensityFalloff> @ 145ecff40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFoliageDensityFalloff>(void *param_1)

{
  FRichCurve *this;
  undefined1 in_R9B;
  float in_XMM1_Da;
  FKeyHandle aFStackX_8 [4];
  uint in_stack_ffffffffffffffe8;
  FKeyHandle FVar1;
  
  *(undefined1 *)param_1 = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)((longlong)param_1 + 8));
  this = FRuntimeFloatCurve::GetRichCurve((FRuntimeFloatCurve *)((longlong)param_1 + 8));
  FKeyHandle::FKeyHandle(aFStackX_8);
  FVar1.Index = in_stack_ffffffffffffffe8 & 0xffffff00;
  FRichCurve::AddKey(this,in_XMM1_Da,0.0,(bool)in_R9B,FVar1);
  FKeyHandle::FKeyHandle(aFStackX_8);
  FRichCurve::AddKey(this,in_XMM1_Da,__real_3f800000,(bool)in_R9B,
                     (FKeyHandle)(FVar1.Index & 0xffffff00));
  return;
}

// Destruct<FFoliageDensityFalloff> @ 145ecff50

void __cdecl UE::CoreUObject::Private::Destruct<FFoliageDensityFalloff>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  *(undefined ***)((longlong)param_1 + 8) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x10));
  return;
}

// Copy<FFoliageDensityFalloff> @ 145ecfff0

bool __cdecl
UE::CoreUObject::Private::Copy<FFoliageDensityFalloff>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar4);
      *(undefined4 *)((longlong)param_1 + 0x70) = *(undefined4 *)((longlong)param_2 + 0x70);
      *(undefined1 *)((longlong)param_1 + 0x74) = *(undefined1 *)((longlong)param_2 + 0x74);
      *(undefined1 *)((longlong)param_1 + 0x75) = *(undefined1 *)((longlong)param_2 + 0x75);
      if (param_1 != (undefined1 *)((longlong)param_1 + lVar4)) {
        iVar3 = *(int *)((longlong)param_2 + 0x80);
        piVar1 = (int *)((longlong)param_1 + 0x84);
        _Src = *(void **)((longlong)param_2 + 0x78);
        *(int *)((longlong)param_1 + 0x80) = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,iVar3,*piVar1,(ForAnyElementType *)((longlong)param_1 + 0x78),iVar3,
                     piVar1);
          if (iVar3 != 0) {
            memcpy(((ForAnyElementType *)((longlong)param_1 + 0x78))->Data,_Src,
                   (longlong)iVar3 * 0x1c);
          }
        }
      }
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x88) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x88));
      }
      puVar2 = (undefined8 *)((longlong)param_2 + 0x88);
      param_2 = (void *)((longlong)param_2 + 0x90);
      *(undefined8 *)((longlong)param_1 + 0x88) = *puVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x90);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFoliageVertexColorChannelMask> @ 145ed0270

void __cdecl UE::CoreUObject::Private::Construct<FFoliageVertexColorChannelMask>(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 & 0xfffffffe;
  *(uint *)((longlong)param_1 + 8) = *(uint *)((longlong)param_1 + 8) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f000000;
  return;
}

// ConstructForTests<FFoliageVertexColorChannelMask> @ 145ed0290

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FFoliageVertexColorChannelMask>(void *param_1)

{
  *(uint *)param_1 = *(uint *)param_1 & 0xfffffffe;
  *(uint *)((longlong)param_1 + 8) = *(uint *)((longlong)param_1 + 8) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f000000;
  return;
}

// Destruct<FFoliageVertexColorChannelMask> @ 145ed02b0

void __cdecl UE::CoreUObject::Private::Destruct<FFoliageVertexColorChannelMask>(void *param_1)

{
  return;
}

// Copy<FFoliageVertexColorChannelMask> @ 145ed02e0

bool __cdecl
UE::CoreUObject::Private::Copy<FFoliageVertexColorChannelMask>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<FActorIteratorState,FActorIteratorState_*_&> @ 145ed29c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FActorIteratorState * __cdecl
UE::Core::Private::DereferenceIfNecessary<FActorIteratorState,FActorIteratorState_*_&>
          (FActorIteratorState **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_> @ 145ed6d90

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
          (ushort param_1,ForElementType<AActor_*> *param_2,int *param_3)

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
    if (uVar1 < 0x19) {
      iVar8 = 0x18;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x19) {
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
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

