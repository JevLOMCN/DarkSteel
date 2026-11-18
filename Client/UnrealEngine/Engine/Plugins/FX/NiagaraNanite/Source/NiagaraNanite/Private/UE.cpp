// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraNanite
// Functions: 23

// Construct<FNiagaraNaniteMICOverride> @ 14da3d500

void __cdecl UE::CoreUObject::Private::Construct<FNiagaraNaniteMICOverride>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FNiagaraNaniteMICOverride> @ 14da3d510

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNiagaraNaniteMICOverride>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FNiagaraNaniteMICOverride> @ 14da3d520

void __cdecl UE::CoreUObject::Private::Destruct<FNiagaraNaniteMICOverride>(void *param_1)

{
  return;
}

// Copy<FNiagaraNaniteMICOverride> @ 14da3d530

bool __cdecl
UE::CoreUObject::Private::Copy<FNiagaraNaniteMICOverride>(void *param_1,void *param_2,int param_3)

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
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNiagaraNaniteMeshRendererMeshProperties> @ 14da3d5d0

void __cdecl
UE::CoreUObject::Private::Construct<FNiagaraNaniteMeshRendererMeshProperties>(void *param_1)

{
  int iVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  *(float *)((longlong)param_1 + 0x10) = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x14) = UE::Math::TRotator<float>::ZeroRotator._0_8_;
  *(float *)((longlong)param_1 + 0x1c) = UE::Math::TRotator<float>::ZeroRotator.Roll;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 0x28),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)param_1 + 0x28) = iVar1;
  return;
}

// ConstructForTests<FNiagaraNaniteMeshRendererMeshProperties> @ 14da3d5e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FNiagaraNaniteMeshRendererMeshProperties>(void *param_1)

{
  int iVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  *(float *)((longlong)param_1 + 0x10) = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x14) = UE::Math::TRotator<float>::ZeroRotator._0_8_;
  *(float *)((longlong)param_1 + 0x1c) = UE::Math::TRotator<float>::ZeroRotator.Roll;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 0x28),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)param_1 + 0x28) = iVar1;
  return;
}

// Destruct<FNiagaraNaniteMeshRendererMeshProperties> @ 14da3d5f0

void __cdecl
UE::CoreUObject::Private::Destruct<FNiagaraNaniteMeshRendererMeshProperties>(void *param_1)

{
  return;
}

// Copy<FNiagaraNaniteMeshRendererMeshProperties> @ 14da3d600

bool __cdecl
UE::CoreUObject::Private::Copy<FNiagaraNaniteMeshRendererMeshProperties>
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
      puVar2[1] = puVar1[1];
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
      *(undefined8 *)((longlong)puVar2 + 0x14) = *(undefined8 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)((longlong)puVar1 + 0x1c);
      puVar2[4] = puVar1[4];
      *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(puVar1 + 5);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNiagaraFloatParameterComponentBinding> @ 14da3de90

void __cdecl
UE::CoreUObject::Private::Construct<FNiagaraFloatParameterComponentBinding>(void *param_1)

{
  int iVar1;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 8),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)param_1 + 8) = iVar1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// ConstructForTests<FNiagaraFloatParameterComponentBinding> @ 14da3dee0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FNiagaraFloatParameterComponentBinding>(void *param_1)

{
  int iVar1;
  
  *(undefined8 *)param_1 = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 8),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)param_1 + 8) = iVar1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FNiagaraFloatParameterComponentBinding> @ 14da3df30

void __cdecl
UE::CoreUObject::Private::Destruct<FNiagaraFloatParameterComponentBinding>(void *param_1)

{
  return;
}

// Copy<FNiagaraFloatParameterComponentBinding> @ 14da3df40

bool __cdecl
UE::CoreUObject::Private::Copy<FNiagaraFloatParameterComponentBinding>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNiagaraParameterComponentBinding> @ 14da3e080

void __cdecl UE::CoreUObject::Private::Construct<FNiagaraParameterComponentBinding>(void *param_1)

{
  int iVar1;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 8),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)param_1 + 8) = iVar1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// ConstructForTests<FNiagaraParameterComponentBinding> @ 14da3e0d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FNiagaraParameterComponentBinding>(void *param_1)

{
  int iVar1;
  
  *(undefined8 *)param_1 = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 8),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)param_1 + 8) = iVar1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FNiagaraParameterComponentBinding> @ 14da3e120

void __cdecl UE::CoreUObject::Private::Destruct<FNiagaraParameterComponentBinding>(void *param_1)

{
  return;
}

// Copy<FNiagaraParameterComponentBinding> @ 14da3e130

bool __cdecl
UE::CoreUObject::Private::Copy<FNiagaraParameterComponentBinding>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNiagaraNaniteMaterialOverride> @ 14da3e170

void __cdecl UE::CoreUObject::Private::Construct<FNiagaraNaniteMaterialOverride>(void *param_1)

{
  TObjectPtr<UObject>_u_0 TStack_28;
  undefined2 uStack_20;
  undefined1 uStack_1e;
  undefined8 uStack_1c;
  undefined4 uStack_14;
  
  *(undefined8 *)param_1 = 0;
  TStack_28.DebugPtr = (UObject *)Z_Construct_UClass_UMaterialInterface_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)TStack_28.DebugPtr != (UClass *)0x0)) {
    GC::MarkAsReachable(TStack_28.DebugPtr);
  }
  uStack_1e = 0;
  uStack_20 = 1;
  uStack_1c = 0xffffffffffffffff;
  uStack_14 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&TStack_28.ObjectPtr);
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
            ((FNiagaraUserParameterBinding *)((longlong)param_1 + 8),
             (FNiagaraTypeDefinition *)&TStack_28.ObjectPtr);
  return;
}

// ConstructForTests<FNiagaraNaniteMaterialOverride> @ 14da3e180

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FNiagaraNaniteMaterialOverride>(void *param_1)

{
  TObjectPtr<UObject>_u_0 TStack_28;
  undefined2 uStack_20;
  undefined1 uStack_1e;
  undefined8 uStack_1c;
  undefined4 uStack_14;
  
  *(undefined8 *)param_1 = 0;
  TStack_28.DebugPtr = (UObject *)Z_Construct_UClass_UMaterialInterface_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)TStack_28.DebugPtr != (UClass *)0x0)) {
    GC::MarkAsReachable(TStack_28.DebugPtr);
  }
  uStack_1e = 0;
  uStack_20 = 1;
  uStack_1c = 0xffffffffffffffff;
  uStack_14 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&TStack_28.ObjectPtr);
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
            ((FNiagaraUserParameterBinding *)((longlong)param_1 + 8),
             (FNiagaraTypeDefinition *)&TStack_28.ObjectPtr);
  return;
}

// Destruct<FNiagaraNaniteMaterialOverride> @ 14da3e190

void __cdecl UE::CoreUObject::Private::Destruct<FNiagaraNaniteMaterialOverride>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
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

// Copy<FNiagaraNaniteMaterialOverride> @ 14da3e1b0

bool __cdecl
UE::CoreUObject::Private::Copy<FNiagaraNaniteMaterialOverride>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = param_1;
    do {
      puVar2 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar5);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar2 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar2);
      }
      *puVar5 = *puVar2;
      puVar5[1] = puVar2[1];
      *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar2 + 2);
      pFVar4 = (ForAnyElementType *)(puVar5 + 3);
      if (pFVar4 != (ForAnyElementType *)(puVar2 + 3)) {
        iVar3 = *(int *)(puVar2 + 4);
        piVar1 = (int *)((longlong)puVar5 + 0x24);
        _Src = ((ForAnyElementType *)(puVar2 + 3))->Data;
        *(int *)(puVar5 + 4) = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar3,*piVar1,pFVar4,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar4->Data,_Src,(longlong)iVar3);
          }
        }
      }
      param_3 = param_3 + -1;
      puVar5 = puVar5 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>_> @ 14da3f390

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>_>
          (ushort param_1,
          ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_> *param_2,
          int *param_3)

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
    ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraRendererNanite::FMeshData>_> @ 14da3f450

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraRendererNanite::FMeshData>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<FNiagaraRendererNanite::FMeshData> *param_4,int *param_5,int *param_6)

{
  ForElementType<FNiagaraRendererNanite::FMeshData> *this;
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong64 uVar4;
  ulonglong uVar5;
  ForElementType<FNiagaraRendererNanite::FMeshData> _Src;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  iVar1 = *param_5;
  uVar8 = *param_6;
  uVar9 = iVar1 + param_3;
  *param_5 = uVar9;
  if ((uint)param_3 <= uVar8 - iVar1) {
    return iVar1;
  }
  if ((int)uVar9 < iVar1) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar9);
  }
  uVar7 = 4;
  uVar10 = CONCAT44(0,param_1);
  if (uVar9 < 5) {
    _Src = param_4->SecondaryData;
LAB_14da3f50b:
    uVar8 = (uint)uVar7;
    if (_Src == (ForElementType<FNiagaraRendererNanite::FMeshData>)0x0) goto LAB_14da3f561;
    memmove(param_4,(void *)_Src,(longlong)iVar1 * 0x50);
    uVar8 = 0;
    iVar6 = 0;
    uVar9 = (uint)uVar7;
  }
  else {
    uVar5 = (ulonglong)(int)uVar9;
    if (uVar8 < 5) {
      uVar8 = 0;
    }
    if (uVar8 == 0) {
      if (4 < uVar5) {
        uVar7 = uVar5;
      }
    }
    else {
      uVar7 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
    }
    uVar4 = FMemory::QuantizeSize(uVar10 * uVar7,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar10;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar4;
    this = &param_4->SecondaryData;
    _Src = *this;
    uVar7 = SUB168(auVar3 / auVar2,0) & 0xffffffff;
    if (SUB164(auVar3 / auVar2,0) < (int)uVar9) {
      uVar7 = 0x7fffffff;
    }
    uVar8 = (uint)uVar7;
    if (uVar8 < 5) goto LAB_14da3f50b;
    iVar6 = iVar1;
    uVar9 = uVar8;
    if (_Src == (ForElementType<FNiagaraRendererNanite::FMeshData>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this,0,uVar8,uVar10);
      memmove((void *)*this,param_4,(longlong)iVar1 * 0x50);
      goto LAB_14da3f561;
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_4->SecondaryData,iVar6,uVar8,uVar10);
  uVar8 = uVar9;
LAB_14da3f561:
  *param_6 = uVar8;
  return iVar1;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>_> @ 14da3f5a0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TWeakObjectPtr<UNiagaraStaticMeshComponent,FWeakObjectPtr>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

