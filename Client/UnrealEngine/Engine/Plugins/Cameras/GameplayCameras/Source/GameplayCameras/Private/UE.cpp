// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 666

// Construct<FBaseCameraObjectReference> @ 14d5359e0

void __cdecl UE::CoreUObject::Private::Construct<FBaseCameraObjectReference>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined ***)param_1 = &___7FBaseCameraObjectReference__6B_;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FBaseCameraObjectReference> @ 14d535a50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBaseCameraObjectReference>(void *param_1)

{
  *(undefined ***)param_1 = &___7FBaseCameraObjectReference__6B_;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FBaseCameraObjectReference> @ 14d535aa0

void __cdecl UE::CoreUObject::Private::Destruct<FBaseCameraObjectReference>(void *param_1)

{
  *(undefined ***)param_1 = &___7FBaseCameraObjectReference__6B_;
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 8));
  return;
}

// PostSerialize<FBaseCameraObjectReference> @ 14d535af0

void __cdecl
UE::CoreUObject::Private::PostSerialize<FBaseCameraObjectReference>(FArchive *param_1,void *param_2)

{
  int iVar1;
  FGuid *pFVar2;
  FGuid *pFVar3;
  undefined1 local_res8 [8];
  
  if ((param_1->field_0x28 & 1) != 0) {
    pFVar2 = *(FGuid **)((longlong)param_2 + 0x28);
    iVar1 = *(int *)((longlong)param_2 + 0x30);
    pFVar3 = (FGuid *)((longlong)iVar1 * 0x1c + (longlong)pFVar2);
    while( true ) {
      if (*(int *)((longlong)param_2 + 0x30) != iVar1) {
        `TCheckedPointerIterator<FCameraObjectInterfaceParameterMetaData,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar2 == pFVar3) break;
      if ((char)pFVar2[1].C != '\0') {
        FInstancedOverridablePropertyBag::SetPropertyOverriden
                  ((FInstancedOverridablePropertyBag *)((longlong)param_2 + 8),pFVar2,true);
        *(undefined1 *)&pFVar2[1].C = 0;
      }
      pFVar2 = (FGuid *)&pFVar2[1].D;
    }
  }
  return;
}

// Copy<FBaseCameraObjectReference> @ 14d535b70

bool __cdecl
UE::CoreUObject::Private::Copy<FBaseCameraObjectReference>(void *param_1,void *param_2,int param_3)

{
  FInstancedStruct *pFVar1;
  ForAnyElementType *pFVar2;
  int *piVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  void *pvVar5;
  ForAnyElementType *pFVar6;
  
  pvVar5 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pFVar1 = (FInstancedStruct *)((longlong)pvVar5 + (longlong)param_2 + (8 - (longlong)param_1));
    if ((FInstancedStruct *)((longlong)pvVar5 + 8) != pFVar1) {
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)((longlong)pvVar5 + 8),
                 (pFVar1->ScriptStruct).field0_0x0.DebugPtr,
                 *(uchar **)((longlong)pvVar5 + (longlong)param_2 + (0x10 - (longlong)param_1)));
    }
    TArray<FGuid,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FGuid,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 0x18),
               (TArray<FGuid,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar5 + (longlong)param_2 + (0x18 - (longlong)param_1)));
    pFVar6 = (ForAnyElementType *)
             ((longlong)pvVar5 + (longlong)param_2 + (0x28 - (longlong)param_1));
    pFVar2 = (ForAnyElementType *)((longlong)pvVar5 + 0x28);
    if (pFVar2 != pFVar6) {
      iVar4 = *(int *)((longlong)pvVar5 + (longlong)param_2 + (0x30 - (longlong)param_1));
      piVar3 = (int *)((longlong)pvVar5 + 0x34);
      _Src = pFVar6->Data;
      *(int *)((longlong)pvVar5 + 0x30) = iVar4;
      if ((iVar4 == 0) && (*piVar3 == 0)) {
        *piVar3 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar4,*piVar3,pFVar2,iVar4,piVar3);
        if (iVar4 != 0) {
          memcpy(pFVar2->Data,_Src,(longlong)iVar4 * 0x1c);
        }
      }
    }
    pvVar5 = (void *)((longlong)pvVar5 + 0x38);
  }
  return true;
}

// Construct<FCameraVariableID> @ 14d535e10

void __cdecl UE::CoreUObject::Private::Construct<FCameraVariableID>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// ConstructForTests<FCameraVariableID> @ 14d535e20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraVariableID>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// Destruct<FCameraVariableID> @ 14d535e30

void __cdecl UE::CoreUObject::Private::Destruct<FCameraVariableID>(void *param_1)

{
  return;
}

// Copy<FCameraVariableID> @ 14d535f80

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraVariableID>(void *param_1,void *param_2,int param_3)

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

// GetStructTypeHash<FCameraVariableID> @ 14d536030

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FCameraVariableID>(void *param_1)

{
  return *(uint *)param_1;
}

// Construct<FCameraObjectInterfaceParameterMetaData> @ 14d536080

void __cdecl
UE::CoreUObject::Private::Construct<FCameraObjectInterfaceParameterMetaData>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1b) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FCameraObjectInterfaceParameterMetaData> @ 14d5360b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCameraObjectInterfaceParameterMetaData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FCameraObjectInterfaceParameterMetaData> @ 14d5360d0

void __cdecl
UE::CoreUObject::Private::Destruct<FCameraObjectInterfaceParameterMetaData>(void *param_1)

{
  return;
}

// Copy<FCameraObjectInterfaceParameterMetaData> @ 14d5360e0

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraObjectInterfaceParameterMetaData>
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

// Construct<FCameraShakeInstanceID> @ 14d536360

void __cdecl UE::CoreUObject::Private::Construct<FCameraShakeInstanceID>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// ConstructForTests<FCameraShakeInstanceID> @ 14d536370

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraShakeInstanceID>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// Destruct<FCameraShakeInstanceID> @ 14d5363c0

void __cdecl UE::CoreUObject::Private::Destruct<FCameraShakeInstanceID>(void *param_1)

{
  return;
}

// Copy<FCameraShakeInstanceID> @ 14d5363d0

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraShakeInstanceID>(void *param_1,void *param_2,int param_3)

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

// GetStructTypeHash<FCameraShakeInstanceID> @ 14d536400

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FCameraShakeInstanceID>(void *param_1)

{
  return *(uint *)param_1;
}

// Construct<FCameraObjectAllocationInfo> @ 14d536410

void __cdecl UE::CoreUObject::Private::Construct<FCameraObjectAllocationInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FCameraObjectAllocationInfo> @ 14d536430

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraObjectAllocationInfo>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FCameraObjectAllocationInfo> @ 14d536490

void __cdecl UE::CoreUObject::Private::Destruct<FCameraObjectAllocationInfo>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FCameraObjectAllocationInfo> @ 14d5364d0

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraObjectAllocationInfo>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      FCameraVariableTableAllocationInfo::operator=
                ((FCameraVariableTableAllocationInfo *)((longlong)param_1 + 8),
                 (FCameraVariableTableAllocationInfo *)((longlong)param_1 + lVar1 + 8));
      FCameraContextDataTableAllocationInfo::operator=
                ((FCameraContextDataTableAllocationInfo *)((longlong)param_1 + 0x18),
                 (FCameraContextDataTableAllocationInfo *)((longlong)param_1 + lVar1 + 0x18));
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FCameraObjectAllocationInfo> @ 14d536560

bool __cdecl
UE::CoreUObject::Private::Identical<FCameraObjectAllocationInfo>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  bool bVar1;
  
  bVar1 = FCameraObjectAllocationInfo::operator==(param_1,param_2);
  *param_4 = bVar1;
  return true;
}

// Construct<FCameraRigInstanceID> @ 14d536840

void __cdecl UE::CoreUObject::Private::Construct<FCameraRigInstanceID>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  return;
}

// ConstructForTests<FCameraRigInstanceID> @ 14d536860

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraRigInstanceID>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FCameraRigInstanceID> @ 14d536880

void __cdecl UE::CoreUObject::Private::Destruct<FCameraRigInstanceID>(void *param_1)

{
  return;
}

// Copy<FCameraRigInstanceID> @ 14d536950

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraRigInstanceID>(void *param_1,void *param_2,int param_3)

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

// GetStructTypeHash<FCameraRigInstanceID> @ 14d536a80

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FCameraRigInstanceID>(void *param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)param_1;
  return ((uint)(uVar1 >> 2) & 0x3fffffff) + 0x9e3779b9 +
         ((uint)(uVar1 >> 0x20) & 0xff) + (uint)uVar1 * 0x40 ^ (uint)uVar1;
}

// Construct<FCameraObjectInterfaceParameterDefinition> @ 14d536ca0

void __cdecl
UE::CoreUObject::Private::Construct<FCameraObjectInterfaceParameterDefinition>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FCameraObjectInterfaceParameterDefinition> @ 14d536ce0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCameraObjectInterfaceParameterDefinition>
          (void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  return;
}

// Destruct<FCameraObjectInterfaceParameterDefinition> @ 14d536d20

void __cdecl
UE::CoreUObject::Private::Destruct<FCameraObjectInterfaceParameterDefinition>(void *param_1)

{
  return;
}

// Copy<FCameraObjectInterfaceParameterDefinition> @ 14d536d30

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraObjectInterfaceParameterDefinition>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)((longlong)param_1 + lVar3);
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar2;
      *(undefined1 *)((longlong)param_1 + 0x18) = *(undefined1 *)((longlong)param_2 + 0x18);
      *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x20);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x28) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x28));
      }
      *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
      *(undefined4 *)((longlong)param_1 + 0x30) = *(undefined4 *)((longlong)param_2 + 0x30);
      *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
      *(undefined4 *)((longlong)param_1 + 0x38) = *(undefined4 *)((longlong)param_2 + 0x38);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x40) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x40));
      }
      puVar1 = (undefined8 *)((longlong)param_2 + 0x40);
      param_2 = (void *)((longlong)param_2 + 0x48);
      *(undefined8 *)((longlong)param_1 + 0x40) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x48);
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FCameraObjectInterfaceParameterDefinition> @ 14d536e10

bool __cdecl
UE::CoreUObject::Private::Identical<FCameraObjectInterfaceParameterDefinition>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  bool bVar1;
  
  bVar1 = FCameraObjectInterfaceParameterDefinition::operator==(param_1,param_2);
  *param_4 = bVar1;
  return true;
}

// Construct<FCameraNodeEvaluatorAllocationInfo> @ 14d5370c0

void __cdecl UE::CoreUObject::Private::Construct<FCameraNodeEvaluatorAllocationInfo>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FCameraNodeEvaluatorAllocationInfo> @ 14d5370d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCameraNodeEvaluatorAllocationInfo>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FCameraNodeEvaluatorAllocationInfo> @ 14d537120

void __cdecl UE::CoreUObject::Private::Destruct<FCameraNodeEvaluatorAllocationInfo>(void *param_1)

{
  return;
}

// Copy<FCameraNodeEvaluatorAllocationInfo> @ 14d537130

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraNodeEvaluatorAllocationInfo>
          (void *param_1,void *param_2,int param_3)

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

// Identical<FCameraNodeEvaluatorAllocationInfo> @ 14d537160

bool __cdecl
UE::CoreUObject::Private::Identical<FCameraNodeEvaluatorAllocationInfo>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  if ((*(short *)param_1 == *(short *)param_2) &&
     (*(short *)((longlong)param_1 + 2) == *(short *)((longlong)param_2 + 2))) {
    *param_4 = true;
    return true;
  }
  *param_4 = false;
  return true;
}

// Construct<FCameraContextDataID> @ 14d537480

void __cdecl UE::CoreUObject::Private::Construct<FCameraContextDataID>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// ConstructForTests<FCameraContextDataID> @ 14d537490

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraContextDataID>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// Destruct<FCameraContextDataID> @ 14d5374e0

void __cdecl UE::CoreUObject::Private::Destruct<FCameraContextDataID>(void *param_1)

{
  return;
}

// Copy<FCameraContextDataID> @ 14d537590

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraContextDataID>(void *param_1,void *param_2,int param_3)

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

// GetStructTypeHash<FCameraContextDataID> @ 14d537680

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FCameraContextDataID>(void *param_1)

{
  return *(uint *)param_1;
}

// Construct<FCameraContextDataTableAllocationInfo> @ 14d537690

void __cdecl
UE::CoreUObject::Private::Construct<FCameraContextDataTableAllocationInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FCameraContextDataTableAllocationInfo> @ 14d5376e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCameraContextDataTableAllocationInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FCameraContextDataTableAllocationInfo> @ 14d5376f0

void __cdecl
UE::CoreUObject::Private::Destruct<FCameraContextDataTableAllocationInfo>(void *param_1)

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

// Copy<FCameraContextDataTableAllocationInfo> @ 14d537710

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraContextDataTableAllocationInfo>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FCameraContextDataDefinition *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FCameraContextDataDefinition *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FCameraContextDataDefinition,FCameraContextDataDefinition,int>
                    (pFVar6->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCameraContextDataDefinition> @ 14d537c40

void __cdecl UE::CoreUObject::Private::Construct<FCameraContextDataDefinition>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// ConstructForTests<FCameraContextDataDefinition> @ 14d537c60

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCameraContextDataDefinition>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FCameraContextDataDefinition> @ 14d537c80

void __cdecl UE::CoreUObject::Private::Destruct<FCameraContextDataDefinition>(void *param_1)

{
  return;
}

// Copy<FCameraContextDataDefinition> @ 14d537cb0

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraContextDataDefinition>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      puVar2[1] = *(undefined4 *)((longlong)pvVar1 + 4);
      puVar2[2] = *(undefined4 *)((longlong)pvVar1 + 8);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x10) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x10));
      }
      *(undefined8 *)(puVar2 + 4) = *(undefined8 *)((longlong)pvVar1 + 0x10);
      *(undefined1 *)(puVar2 + 6) = *(undefined1 *)((longlong)pvVar1 + 0x18);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x20);
      puVar2 = puVar2 + 8;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCameraAssetReference> @ 14d538010

void __cdecl UE::CoreUObject::Private::Construct<FCameraAssetReference>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FCameraAssetReference> @ 14d538060

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraAssetReference>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FCameraAssetReference> @ 14d5380b0

void __cdecl UE::CoreUObject::Private::Destruct<FCameraAssetReference>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 8));
  return;
}

// PostSerialize<FCameraAssetReference> @ 14d5380f0

void __cdecl
UE::CoreUObject::Private::PostSerialize<FCameraAssetReference>(FArchive *param_1,void *param_2)

{
  int iVar1;
  FGuid *pFVar2;
  FGuid *pFVar3;
  undefined1 local_res8 [8];
  
  if ((param_1->field_0x28 & 1) != 0) {
    pFVar2 = *(FGuid **)((longlong)param_2 + 0x28);
    iVar1 = *(int *)((longlong)param_2 + 0x30);
    pFVar3 = pFVar2 + iVar1;
    while( true ) {
      if (*(int *)((longlong)param_2 + 0x30) != iVar1) {
        `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
        ;
      }
      if (pFVar2 == pFVar3) break;
      FInstancedOverridablePropertyBag::SetPropertyOverriden
                ((FInstancedOverridablePropertyBag *)((longlong)param_2 + 8),pFVar2,true);
      pFVar2 = pFVar2 + 1;
    }
    *(undefined4 *)((longlong)param_2 + 0x30) = 0;
    if (*(int *)((longlong)param_2 + 0x34) < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)((longlong)param_2 + 0x28),0,
                 (int *)((longlong)param_2 + 0x34));
    }
  }
  return;
}

// Copy<FCameraAssetReference> @ 14d5381b0

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraAssetReference>(void *param_1,void *param_2,int param_3)

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
      if ((FInstancedStruct *)(puVar2 + 1) != (FInstancedStruct *)(puVar1 + 1)) {
        FInstancedStruct::InitializeAs
                  ((FInstancedStruct *)(puVar2 + 1),
                   (((FInstancedStruct *)(puVar1 + 1))->ScriptStruct).field0_0x0.DebugPtr,
                   (uchar *)puVar1[2]);
      }
      TArray<FGuid,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FGuid,TSizedDefaultAllocator<32>_> *)(puVar2 + 3),
                 (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(puVar1 + 3));
      TArray<FGuid,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FGuid,TSizedDefaultAllocator<32>_> *)(puVar2 + 5),
                 (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(puVar1 + 5));
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 7;
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FCameraAssetReference> @ 14d538280

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FCameraAssetReference>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  bool bVar1;
  
  bVar1 = FCameraAssetReference::SerializeFromMismatchedTag(param_3,param_1,param_2);
  return bVar1;
}

// Construct<FCameraAssetAllocationInfo> @ 14d538400

void __cdecl UE::CoreUObject::Private::Construct<FCameraAssetAllocationInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FCameraAssetAllocationInfo> @ 14d538420

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraAssetAllocationInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FCameraAssetAllocationInfo> @ 14d538440

void __cdecl UE::CoreUObject::Private::Destruct<FCameraAssetAllocationInfo>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FCameraAssetAllocationInfo> @ 14d5384c0

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraAssetAllocationInfo>(void *param_1,void *param_2,int param_3)

{
  FCameraVariableTableAllocationInfo *pFVar1;
  FCameraVariableTableAllocationInfo *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FCameraVariableTableAllocationInfo *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FCameraVariableTableAllocationInfo::operator=(this,pFVar1);
      FCameraContextDataTableAllocationInfo::operator=
                ((FCameraContextDataTableAllocationInfo *)(this + 1),
                 (FCameraContextDataTableAllocationInfo *)(pFVar1 + 1));
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// GetVariableTypeAsText<FBooleanCameraParameter> @ 14d53fbc0

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FBooleanCameraParameter>(FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Boolean);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FBooleanCameraVariableReference> @ 14d53fbe0

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FBooleanCameraVariableReference>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Boolean);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FDoubleCameraParameter> @ 14d53fc00

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FDoubleCameraParameter>(FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Double);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FDoubleCameraVariableReference> @ 14d53fc30

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FDoubleCameraVariableReference>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Double);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FFloatCameraParameter> @ 14d53fc60

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FFloatCameraParameter>(FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Float);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FFloatCameraVariableReference> @ 14d53fc90

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FFloatCameraVariableReference>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Float);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FInteger32CameraParameter> @ 14d53fcc0

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FInteger32CameraParameter>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Integer32);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FInteger32CameraVariableReference> @ 14d53fcf0

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FInteger32CameraVariableReference>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Integer32);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FRotator3dCameraParameter> @ 14d53fd20

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FRotator3dCameraParameter>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Rotator3d);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FRotator3dCameraVariableReference> @ 14d53fd50

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FRotator3dCameraVariableReference>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Rotator3d);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FRotator3fCameraParameter> @ 14d53fd80

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FRotator3fCameraParameter>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Rotator3f);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FRotator3fCameraVariableReference> @ 14d53fdb0

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FRotator3fCameraVariableReference>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Rotator3f);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FTransform3dCameraParameter> @ 14d53fde0

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FTransform3dCameraParameter>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Transform3d);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FTransform3dCameraVariableReference> @ 14d53fe10

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FTransform3dCameraVariableReference>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Transform3d);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FTransform3fCameraParameter> @ 14d53fe40

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FTransform3fCameraParameter>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Transform3f);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FTransform3fCameraVariableReference> @ 14d53fe70

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FTransform3fCameraVariableReference>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Transform3f);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FVector2dCameraParameter> @ 14d53fea0

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FVector2dCameraParameter>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Vector2d);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FVector2dCameraVariableReference> @ 14d53fed0

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FVector2dCameraVariableReference>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Vector2d);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FVector2fCameraParameter> @ 14d53ff00

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FVector2fCameraParameter>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Vector2f);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FVector2fCameraVariableReference> @ 14d53ff30

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FVector2fCameraVariableReference>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Vector2f);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FVector3dCameraParameter> @ 14d53ff60

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FVector3dCameraParameter>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Vector3d);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FVector3dCameraVariableReference> @ 14d53ff90

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FVector3dCameraVariableReference>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Vector3d);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FVector3fCameraParameter> @ 14d53ffc0

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FVector3fCameraParameter>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Vector3f);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FVector3fCameraVariableReference> @ 14d53fff0

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FVector3fCameraVariableReference>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Vector3f);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FVector4dCameraParameter> @ 14d540020

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FVector4dCameraParameter>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Vector4d);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FVector4dCameraVariableReference> @ 14d540050

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FVector4dCameraVariableReference>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Vector4d);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FVector4fCameraParameter> @ 14d540080

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FVector4fCameraParameter>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Vector4f);
  return __return_storage_ptr__;
}

// GetVariableTypeAsText<FVector4fCameraVariableReference> @ 14d5400b0

FText * __cdecl
UE::Cameras::Internal::GetVariableTypeAsText<FVector4fCameraVariableReference>
          (FText *__return_storage_ptr__)

{
  UEnum::GetDisplayValueAsText<enum_ECameraVariableType>(__return_storage_ptr__,Vector4f);
  return __return_storage_ptr__;
}

// MatchesVariableType<FBooleanCameraParameter> @ 14d540ec0

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FBooleanCameraParameter>(ECameraVariableType param_1)

{
  return param_1 == Boolean;
}

// MatchesVariableType<FBooleanCameraVariableReference> @ 14d540ed0

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FBooleanCameraVariableReference>
          (ECameraVariableType param_1)

{
  return param_1 == Boolean;
}

// MatchesVariableType<FDoubleCameraParameter> @ 14d540ee0

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FDoubleCameraParameter>(ECameraVariableType param_1)

{
  return param_1 == Double;
}

// MatchesVariableType<FDoubleCameraVariableReference> @ 14d540ef0

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FDoubleCameraVariableReference>
          (ECameraVariableType param_1)

{
  return param_1 == Double;
}

// MatchesVariableType<FFloatCameraParameter> @ 14d540f00

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FFloatCameraParameter>(ECameraVariableType param_1)

{
  return param_1 == Float;
}

// MatchesVariableType<FFloatCameraVariableReference> @ 14d540f10

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FFloatCameraVariableReference>
          (ECameraVariableType param_1)

{
  return param_1 == Float;
}

// MatchesVariableType<FInteger32CameraParameter> @ 14d540f20

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FInteger32CameraParameter>(ECameraVariableType param_1)

{
  return param_1 == Integer32;
}

// MatchesVariableType<FInteger32CameraVariableReference> @ 14d540f30

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FInteger32CameraVariableReference>
          (ECameraVariableType param_1)

{
  return param_1 == Integer32;
}

// MatchesVariableType<FRotator3dCameraParameter> @ 14d540f40

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FRotator3dCameraParameter>(ECameraVariableType param_1)

{
  return param_1 == Rotator3d;
}

// MatchesVariableType<FRotator3dCameraVariableReference> @ 14d540f50

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FRotator3dCameraVariableReference>
          (ECameraVariableType param_1)

{
  return param_1 == Rotator3d;
}

// MatchesVariableType<FRotator3fCameraParameter> @ 14d540f60

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FRotator3fCameraParameter>(ECameraVariableType param_1)

{
  return param_1 == Rotator3f;
}

// MatchesVariableType<FRotator3fCameraVariableReference> @ 14d540f70

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FRotator3fCameraVariableReference>
          (ECameraVariableType param_1)

{
  return param_1 == Rotator3f;
}

// MatchesVariableType<FTransform3dCameraParameter> @ 14d540f80

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FTransform3dCameraParameter>(ECameraVariableType param_1)

{
  return param_1 == Transform3d;
}

// MatchesVariableType<FTransform3dCameraVariableReference> @ 14d540f90

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FTransform3dCameraVariableReference>
          (ECameraVariableType param_1)

{
  return param_1 == Transform3d;
}

// MatchesVariableType<FTransform3fCameraParameter> @ 14d540fa0

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FTransform3fCameraParameter>(ECameraVariableType param_1)

{
  return param_1 == Transform3f;
}

// MatchesVariableType<FTransform3fCameraVariableReference> @ 14d540fb0

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FTransform3fCameraVariableReference>
          (ECameraVariableType param_1)

{
  return param_1 == Transform3f;
}

// MatchesVariableType<FVector2dCameraParameter> @ 14d540fc0

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FVector2dCameraParameter>(ECameraVariableType param_1)

{
  return param_1 == Vector2d;
}

// MatchesVariableType<FVector2dCameraVariableReference> @ 14d540fd0

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FVector2dCameraVariableReference>
          (ECameraVariableType param_1)

{
  return param_1 == Vector2d;
}

// MatchesVariableType<FVector2fCameraParameter> @ 14d540fe0

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FVector2fCameraParameter>(ECameraVariableType param_1)

{
  return param_1 == Vector2f;
}

// MatchesVariableType<FVector2fCameraVariableReference> @ 14d540ff0

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FVector2fCameraVariableReference>
          (ECameraVariableType param_1)

{
  return param_1 == Vector2f;
}

// MatchesVariableType<FVector3dCameraParameter> @ 14d541000

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FVector3dCameraParameter>(ECameraVariableType param_1)

{
  return param_1 == Vector3d;
}

// MatchesVariableType<FVector3dCameraVariableReference> @ 14d541010

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FVector3dCameraVariableReference>
          (ECameraVariableType param_1)

{
  return param_1 == Vector3d;
}

// MatchesVariableType<FVector3fCameraParameter> @ 14d541020

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FVector3fCameraParameter>(ECameraVariableType param_1)

{
  return param_1 == Vector3f;
}

// MatchesVariableType<FVector3fCameraVariableReference> @ 14d541030

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FVector3fCameraVariableReference>
          (ECameraVariableType param_1)

{
  return param_1 == Vector3f;
}

// MatchesVariableType<FVector4dCameraParameter> @ 14d541040

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FVector4dCameraParameter>(ECameraVariableType param_1)

{
  return param_1 == Vector4d;
}

// MatchesVariableType<FVector4dCameraVariableReference> @ 14d541050

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FVector4dCameraVariableReference>
          (ECameraVariableType param_1)

{
  return param_1 == Vector4d;
}

// MatchesVariableType<FVector4fCameraParameter> @ 14d541060

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FVector4fCameraParameter>(ECameraVariableType param_1)

{
  return param_1 == Vector4f;
}

// MatchesVariableType<FVector4fCameraVariableReference> @ 14d541070

bool __cdecl
UE::Cameras::Internal::MatchesVariableType<FVector4fCameraVariableReference>
          (ECameraVariableType param_1)

{
  return param_1 == Vector4f;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>_> @ 14d541080

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> *param_5,int param_6,
          int *param_7)

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
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
  ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraNodeEvaluator_*>_> @ 14d541120

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraNodeEvaluator_*>_>
          (ushort param_1,ForElementType<UE::Cameras::FCameraNodeEvaluator_*> *param_2,int *param_3)

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
    ForElementType<UE::Cameras::FCameraNodeEvaluator_*>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UCameraNode>_>_> @ 14d5411e0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UCameraNode>_>_>
          (ushort param_1,ForElementType<TObjectPtr<UCameraNode>_> *param_2,int *param_3)

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
    ForElementType<TObjectPtr<UCameraNode>_>::ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>_> @ 14d5412a0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>_>
          (ushort param_1,ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> *param_2,
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
    ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>_> @ 14d541360

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> *param_4,int param_5,
          int *param_6)

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
    ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// operator<< @ 14d544f00

FArchive * __cdecl UE::Cameras::operator<<(FArchive *param_1,FCameraIKAimDebugInfo *param_2)

{
  TArrayPrivateFriend::
  Serialize<UE::Cameras::FCameraIKAimIterationDebugInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            (param_1,&param_2->Iterations);
  UE::Math::operator<<(param_1,&param_2->DesiredTarget);
  ::operator<<(param_1,&param_2->bSucceeded);
  return param_1;
}

// operator<< @ 14d544f50

FArchive * __cdecl
UE::Cameras::operator<<(FArchive *param_1,FCameraIKAimIterationDebugInfo *param_2)

{
  double *pdVar1;
  double *pdVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FArchive *pFVar6;
  float local_res8 [2];
  float local_res10 [2];
  
  UE::Math::operator<<(param_1,&param_2->CameraPoseLocation);
  UE::Math::operator<<(param_1,&param_2->CameraPoseRotation);
  pdVar1 = &param_2->ErrorAngle;
  pdVar2 = (double *)**(longlong **)&param_1->field_0x8;
  if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
    }
  }
  else {
    *pdVar1 = *pdVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  pdVar1 = &param_2->ErrorDistance;
  pdVar2 = (double *)**(longlong **)&param_1->field_0x8;
  if ((double *)(*(longlong **)&param_1->field_0x8)[1] < pdVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
    }
  }
  else {
    *pdVar1 = *pdVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
  }
  UE::Math::operator<<(param_1,&param_2->PivotJointLocation);
  if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
    if ((param_1->field_0x28 & 1) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                         ,0x30f,L"float -> double conversion applied outside of load!");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FArchive *)(*pcVar4)();
        return pFVar6;
      }
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar3[1] < (float *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res10);
      }
    }
    else {
      local_res10[0] = *(float *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    plVar3 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar3[1] < (float *)*plVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res8);
      }
    }
    else {
      local_res8[0] = *(float *)*plVar3;
      *plVar3 = *plVar3 + 4;
    }
    (param_2->YawPitchCorrection).field0_0x0._s_0.X = (double)local_res10[0];
    (param_2->YawPitchCorrection).field0_0x0._s_0.Y = (double)local_res8[0];
  }
  else {
    pFVar6 = ::operator<<(param_1,(double *)&param_2->YawPitchCorrection);
    ::operator<<(pFVar6,&(param_2->YawPitchCorrection).field0_0x0._s_0.Y);
  }
  ::operator<<(param_1,&param_2->bNeededSolver);
  ::operator<<(param_1,&param_2->bFoundSolver);
  ::operator<<(param_1,&param_2->bSolvingSuccess);
  return param_1;
}

// AddVariableToAllocationInfo @ 14d547c90

void __cdecl
UE::Cameras::Internal::AddVariableToAllocationInfo
          (UCameraVariableAsset *param_1,FCameraVariableTableAllocationInfo *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FCameraVariableDefinition *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FCameraVariableDefinition local_28;
  
  if (param_1 != (UCameraVariableAsset *)0x0) {
    UCameraVariableAsset::GetVariableDefinition(param_1,&local_28);
    pFVar3 = (FCameraVariableDefinition *)(param_2->VariableDefinitions).AllocatorInstance.Data;
    if ((pFVar3 <= &local_28) && (&local_28 < pFVar3 + (param_2->VariableDefinitions).ArrayMax)) {
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
    iVar6 = (param_2->VariableDefinitions).ArrayNum;
    piVar1 = &(param_2->VariableDefinitions).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)param_2,piVar1);
    }
    (param_2->VariableDefinitions).ArrayNum = iVar6 + 1;
    pFVar2 = (param_2->VariableDefinitions).AllocatorInstance.Data + (longlong)iVar6 * 0x18;
    *(uint *)pFVar2 = local_28.VariableID.Value;
    *(ECameraVariableType *)(pFVar2 + 4) = local_28.VariableType;
    ((TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar2 + 8))->DebugPtr =
         (UScriptStruct *)local_28.BlendableStructType.field0_0x0;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.BlendableStructType.field0_0x0.DebugPtr !=
        (TObjectPtr<UScriptStruct_const_>_u_0)0x0)) {
      GC::MarkAsReachable((UObject *)local_28.BlendableStructType.field0_0x0);
    }
    pFVar2[0x10] = (FScriptContainerElement)local_28.bIsPrivate;
    pFVar2[0x11] = (FScriptContainerElement)local_28.bIsInput;
    pFVar2[0x12] = (FScriptContainerElement)local_28.bAutoReset;
  }
  return;
}

// AddVariableToAllocationInfo @ 14d547da0

void __cdecl
UE::Cameras::Internal::AddVariableToAllocationInfo
          (FCameraVariableID param_1,ECameraVariableType param_2,UScriptStruct *param_3,
          FCameraVariableTableAllocationInfo *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint local_28;
  ECameraVariableType local_24;
  UScriptStruct *local_20;
  undefined2 local_18;
  FScriptContainerElement local_16;
  
  if (param_1.Value != 0xffffffff) {
    local_16 = (FScriptContainerElement)0x0;
    local_28 = param_1.Value;
    local_24 = param_2;
    if ((GC::GIsIncrementalReachabilityPending) && (param_3 != (UScriptStruct *)0x0)) {
      GC::MarkAsReachable((UObject *)param_3);
    }
    pFVar2 = (param_4->VariableDefinitions).AllocatorInstance.Data;
    local_18 = 0x101;
    local_20 = param_3;
    if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
       ((FScriptContainerElement *)&local_28 <
        pFVar2 + (longlong)(param_4->VariableDefinitions).ArrayMax * 0x18)) {
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
    iVar5 = (param_4->VariableDefinitions).ArrayNum;
    piVar1 = &(param_4->VariableDefinitions).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,(ForAnyElementType *)param_4,piVar1);
    }
    (param_4->VariableDefinitions).ArrayNum = iVar5 + 1;
    pFVar2 = (param_4->VariableDefinitions).AllocatorInstance.Data + (longlong)iVar5 * 0x18;
    *(uint *)pFVar2 = local_28;
    *(ECameraVariableType *)(pFVar2 + 4) = local_24;
    *(UScriptStruct **)(pFVar2 + 8) = local_20;
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_20 != (UScriptStruct *)0x0)) {
      GC::MarkAsReachable((UObject *)local_20);
    }
    pFVar2[0x10] = local_18._0_1_;
    pFVar2[0x11] = local_18._1_1_;
    pFVar2[0x12] = local_16;
  }
  return;
}

// MakeCameraVariableDefinition @ 14d55a710

void __cdecl
UE::Cameras::Private::MakeCameraVariableDefinition
          (FCameraVariableDefinition *param_1,FGuid *param_2,ECameraVariableType param_3,
          bool param_4,FString *param_5)

{
  ulong64 uVar1;
  
  uVar1 = CityHash64((char *)param_2,0x10);
  param_1->bIsInput = param_4;
  (param_1->VariableID).Value = (uint)uVar1;
  param_1->VariableType = param_3;
  return;
}

// Construct<FBlueprintCameraDirectorDeactivateParams> @ 14d56afb0

void __cdecl
UE::CoreUObject::Private::Construct<FBlueprintCameraDirectorDeactivateParams>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FBlueprintCameraDirectorDeactivateParams> @ 14d56b000

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FBlueprintCameraDirectorDeactivateParams>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FBlueprintCameraDirectorDeactivateParams> @ 14d56b010

void __cdecl
UE::CoreUObject::Private::Destruct<FBlueprintCameraDirectorDeactivateParams>(void *param_1)

{
  return;
}

// Copy<FBlueprintCameraDirectorDeactivateParams> @ 14d56b070

bool __cdecl
UE::CoreUObject::Private::Copy<FBlueprintCameraDirectorDeactivateParams>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_2;
    do {
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *(undefined8 *)(((longlong)param_1 - (longlong)param_2) + (longlong)puVar1) = *puVar1;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FVector3fCameraRigParameterOverride> @ 14d56b3e0

void __cdecl UE::CoreUObject::Private::Construct<FVector3fCameraRigParameterOverride>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x31) = 0;
  *(undefined2 *)((longlong)param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FVector3fCameraRigParameterOverride> @ 14d56b460

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FVector3fCameraRigParameterOverride>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FVector3fCameraRigParameterOverride> @ 14d56b4a0

void __cdecl UE::CoreUObject::Private::Destruct<FVector3fCameraRigParameterOverride>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
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

// Construct<FCameraVariableSetterHandle> @ 14d56b4c0

void __cdecl UE::CoreUObject::Private::Construct<FCameraVariableSetterHandle>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// Copy<FVector3fCameraRigParameterOverride> @ 14d56b4f0

bool __cdecl
UE::CoreUObject::Private::Copy<FVector3fCameraRigParameterOverride>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar3 + (longlong)param_1);
      uVar2 = puVar1[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
      *(undefined1 *)((longlong)param_1 + 0x30) = *(undefined1 *)((longlong)param_2 + 0x30);
      *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
      *(undefined4 *)((longlong)param_1 + 0x40) = *(undefined4 *)((longlong)param_2 + 0x40);
      *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x48) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x48));
      }
      puVar1 = (undefined8 *)((longlong)param_2 + 0x48);
      param_2 = (void *)((longlong)param_2 + 0x50);
      *(undefined8 *)((longlong)param_1 + 0x48) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x50);
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FCameraVariableSetterHandle> @ 14d56b5d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraVariableSetterHandle>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FCameraVariableSetterHandle> @ 14d56b5f0

void __cdecl UE::CoreUObject::Private::Destruct<FCameraVariableSetterHandle>(void *param_1)

{
  return;
}

// Copy<FCameraVariableSetterHandle> @ 14d56b700

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraVariableSetterHandle>(void *param_1,void *param_2,int param_3)

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

// GetStructTypeHash<FCameraVariableSetterHandle> @ 14d56b730

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FCameraVariableSetterHandle>(void *param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)param_1;
  return ((uint)(uVar1 >> 2) & 0x3fffffff) + 0x9e3779b9 + (int)(uVar1 >> 0x20) + (uint)uVar1 * 0x40
         ^ (uint)uVar1;
}

// Construct<FVector4dCameraParameter> @ 14d56b7e0

void __cdecl UE::CoreUObject::Private::Construct<FVector4dCameraParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FVector4dCameraParameter> @ 14d56b850

void __cdecl UE::CoreUObject::Private::ConstructForTests<FVector4dCameraParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FVector4dCameraParameter> @ 14d56b880

void __cdecl UE::CoreUObject::Private::Destruct<FVector4dCameraParameter>(void *param_1)

{
  return;
}

// PostSerialize<FVector4dCameraParameter> @ 14d56b890

void __cdecl
UE::CoreUObject::Private::PostSerialize<FVector4dCameraParameter>(FArchive *param_1,void *param_2)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if (((param_1->field_0x28 & 1) != 0) && (*(longlong *)((longlong)param_2 + 0x28) != 0)) {
    lVar2 = *(longlong *)(*(longlong *)((longlong)param_2 + 0x28) + 0x20);
    pUVar3 = UCameraRigAsset::StaticClass();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(undefined8 *)((longlong)param_2 + 0x28) = 0;
    }
  }
  return;
}

// Copy<FVector4dCameraParameter> @ 14d56ba30

bool __cdecl
UE::CoreUObject::Private::Copy<FVector4dCameraParameter>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar3 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar3 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar3 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_1 + lVar3 + 0x20);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar3 + 0x28), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x28);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCameraShakeAssetReference> @ 14d56bad0

void __cdecl UE::CoreUObject::Private::Construct<FCameraShakeAssetReference>(void *param_1)

{
  *(undefined ***)param_1 = &___7FBaseCameraObjectReference__6B_;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined ***)param_1 = &___7FCameraShakeAssetReference__6B_;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FCameraShakeAssetReference> @ 14d56bb30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraShakeAssetReference>(void *param_1)

{
  *(undefined ***)param_1 = &___7FBaseCameraObjectReference__6B_;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined ***)param_1 = &___7FCameraShakeAssetReference__6B_;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FCameraShakeAssetReference> @ 14d56bbd0

void __cdecl UE::CoreUObject::Private::Destruct<FCameraShakeAssetReference>(void *param_1)

{
  *(undefined ***)param_1 = &___7FBaseCameraObjectReference__6B_;
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 8));
  return;
}

// StructuredSerializeFromMismatchedTag<FVector4dCameraParameter> @ 14d56bce0

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FVector4dCameraParameter>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  FName FVar1;
  bool bVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  FArchive *pFVar4;
  FSlotBase local_res8;
  uint local_res20 [2];
  
  local_res8.StructuredArchive._0_4_ = (param_1->TypeName).Index;
  FVar3 = FNameEntryId::FromValidEName((EName)local_res20);
  local_res20[0] = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  local_res20[1] = 0;
  FVar1.Number = 0;
  FVar1.ComparisonIndex.Value = local_res20[0];
  bVar2 = FPropertyTypeName::IsStruct((FPropertyTypeName *)&local_res8,FVar1);
  if (bVar2) {
    local_res8.StructuredArchive = (FStructuredArchive *)param_2;
    pFVar4 = StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
    UE::Math::operator<<(pFVar4,param_3);
    return true;
  }
  return false;
}

// PostSerialize<FCameraShakeAssetReference> @ 14d56bd70

void __cdecl
UE::CoreUObject::Private::PostSerialize<FCameraShakeAssetReference>(FArchive *param_1,void *param_2)

{
  FBaseCameraObjectReference::PostSerialize(param_2,param_1);
  return;
}

// Construct<FBlueprintCameraDirectorActivateParams> @ 14d56bd90

void __cdecl
UE::CoreUObject::Private::Construct<FBlueprintCameraDirectorActivateParams>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FBlueprintCameraDirectorActivateParams> @ 14d56bde0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FBlueprintCameraDirectorActivateParams>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FBlueprintCameraDirectorActivateParams> @ 14d56bdf0

void __cdecl
UE::CoreUObject::Private::Destruct<FBlueprintCameraDirectorActivateParams>(void *param_1)

{
  return;
}

// Copy<FCameraShakeAssetReference> @ 14d56bec0

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraShakeAssetReference>(void *param_1,void *param_2,int param_3)

{
  FBaseCameraObjectReference *pFVar1;
  FBaseCameraObjectReference *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FBaseCameraObjectReference *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FBaseCameraObjectReference::operator=(this,pFVar1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)pFVar1[1]._padding_ != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)pFVar1[1]._padding_);
      }
      this[1]._padding_ = pFVar1[1]._padding_;
      param_3 = param_3 + -1;
      this = (FBaseCameraObjectReference *)&this[1].Parameters;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FBlueprintCameraDirectorActivateParams> @ 14d56c010

bool __cdecl
UE::CoreUObject::Private::Copy<FBlueprintCameraDirectorActivateParams>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_2;
    do {
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *(undefined8 *)(((longlong)param_1 - (longlong)param_2) + (longlong)puVar1) = *puVar1;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FVector2dCameraRigParameterOverride> @ 14d56c0e0

void __cdecl UE::CoreUObject::Private::Construct<FVector2dCameraRigParameterOverride>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x31) = 0;
  *(undefined2 *)((longlong)param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// ConstructForTests<FVector2dCameraRigParameterOverride> @ 14d56c130

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FVector2dCameraRigParameterOverride>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// Destruct<FVector2dCameraRigParameterOverride> @ 14d56c170

void __cdecl UE::CoreUObject::Private::Destruct<FVector2dCameraRigParameterOverride>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
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

// Copy<FVector2dCameraRigParameterOverride> @ 14d56c190

bool __cdecl
UE::CoreUObject::Private::Copy<FVector2dCameraRigParameterOverride>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar3 + (longlong)param_1);
      uVar2 = puVar1[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
      *(undefined1 *)((longlong)param_1 + 0x30) = *(undefined1 *)((longlong)param_2 + 0x30);
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x40);
      *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x48) = *(undefined4 *)((longlong)param_2 + 0x48);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x50) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x50));
      }
      puVar1 = (undefined8 *)((longlong)param_2 + 0x50);
      param_2 = (void *)((longlong)param_2 + 0x58);
      *(undefined8 *)((longlong)param_1 + 0x50) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x58);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FVector4fCameraParameter> @ 14d56c490

void __cdecl UE::CoreUObject::Private::Construct<FVector4fCameraParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FVector4fCameraParameter> @ 14d56c4b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FVector4fCameraParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FVector4fCameraParameter> @ 14d56c4d0

void __cdecl UE::CoreUObject::Private::Destruct<FVector4fCameraParameter>(void *param_1)

{
  return;
}

// Construct<FBlueprintCameraDirectorEvaluationParams> @ 14d56c4e0

void __cdecl
UE::CoreUObject::Private::Construct<FBlueprintCameraDirectorEvaluationParams>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// PostSerialize<FVector4fCameraParameter> @ 14d56c4f0

void __cdecl
UE::CoreUObject::Private::PostSerialize<FVector4fCameraParameter>(FArchive *param_1,void *param_2)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if (((param_1->field_0x28 & 1) != 0) && (*(longlong *)((longlong)param_2 + 0x18) != 0)) {
    lVar2 = *(longlong *)(*(longlong *)((longlong)param_2 + 0x18) + 0x20);
    pUVar3 = UCameraRigAsset::StaticClass();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(undefined8 *)((longlong)param_2 + 0x18) = 0;
    }
  }
  return;
}

// ConstructForTests<FBlueprintCameraDirectorEvaluationParams> @ 14d56c550

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FBlueprintCameraDirectorEvaluationParams>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FBlueprintCameraDirectorEvaluationParams> @ 14d56c560

void __cdecl
UE::CoreUObject::Private::Destruct<FBlueprintCameraDirectorEvaluationParams>(void *param_1)

{
  return;
}

// Copy<FVector4fCameraParameter> @ 14d56c570

bool __cdecl
UE::CoreUObject::Private::Copy<FVector4fCameraParameter>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar3 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar3 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + lVar3 + 0x10);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar3 + 0x18), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x18);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTransform3dCameraVariableReference> @ 14d56c610

void __cdecl UE::CoreUObject::Private::Construct<FTransform3dCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FTransform3dCameraVariableReference> @ 14d56c670

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTransform3dCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FTransform3dCameraVariableReference> @ 14d56c690

void __cdecl UE::CoreUObject::Private::Destruct<FTransform3dCameraVariableReference>(void *param_1)

{
  return;
}

// Copy<FBlueprintCameraDirectorEvaluationParams> @ 14d56c6a0

bool __cdecl
UE::CoreUObject::Private::Copy<FBlueprintCameraDirectorEvaluationParams>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FVector4fCameraParameter> @ 14d56c730

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FVector4fCameraParameter>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  FName FVar1;
  bool bVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  FArchive *pFVar4;
  FSlotBase local_res8;
  uint local_res20 [2];
  
  local_res8.StructuredArchive._0_4_ = (param_1->TypeName).Index;
  FVar3 = FNameEntryId::FromValidEName((EName)local_res20);
  local_res20[0] = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  local_res20[1] = 0;
  FVar1.Number = 0;
  FVar1.ComparisonIndex.Value = local_res20[0];
  bVar2 = FPropertyTypeName::IsStruct((FPropertyTypeName *)&local_res8,FVar1);
  if (bVar2) {
    local_res8.StructuredArchive = (FStructuredArchive *)param_2;
    pFVar4 = StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
    UE::Math::operator<<(pFVar4,param_3);
    return true;
  }
  return false;
}

// Copy<FTransform3dCameraVariableReference> @ 14d56c7d0

bool __cdecl
UE::CoreUObject::Private::Copy<FTransform3dCameraVariableReference>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FVector2fCameraRigParameterOverride> @ 14d56c8e0

void __cdecl UE::CoreUObject::Private::Construct<FVector2fCameraRigParameterOverride>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x31) = 0;
  *(undefined2 *)((longlong)param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FVector2fCameraRigParameterOverride> @ 14d56c9a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FVector2fCameraRigParameterOverride>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FVector2fCameraRigParameterOverride> @ 14d56c9e0

void __cdecl UE::CoreUObject::Private::Destruct<FVector2fCameraRigParameterOverride>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
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

// Copy<FVector2fCameraRigParameterOverride> @ 14d56ca10

bool __cdecl
UE::CoreUObject::Private::Copy<FVector2fCameraRigParameterOverride>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar3 + (longlong)param_1);
      uVar2 = puVar1[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
      *(undefined1 *)((longlong)param_1 + 0x30) = *(undefined1 *)((longlong)param_2 + 0x30);
      *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
      *(undefined4 *)((longlong)param_1 + 0x40) = *(undefined4 *)((longlong)param_2 + 0x40);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x48) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x48));
      }
      puVar1 = (undefined8 *)((longlong)param_2 + 0x48);
      param_2 = (void *)((longlong)param_2 + 0x50);
      *(undefined8 *)((longlong)param_1 + 0x48) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x50);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCameraRigProxyRedirectTable> @ 14d56d2a0

void __cdecl UE::CoreUObject::Private::Construct<FCameraRigProxyRedirectTable>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FCameraRigProxyRedirectTable> @ 14d56d2b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCameraRigProxyRedirectTable>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FCameraRigProxyRedirectTable> @ 14d56d2c0

void __cdecl UE::CoreUObject::Private::Destruct<FCameraRigProxyRedirectTable>(void *param_1)

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

// Copy<FCameraRigProxyRedirectTable> @ 14d56d2e0

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraRigProxyRedirectTable>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FCameraRigProxyRedirectTableEntry *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FCameraRigProxyRedirectTableEntry *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FCameraRigProxyRedirectTableEntry,FCameraRigProxyRedirectTableEntry,int>
                    (pFVar6->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTransform3fCameraVariableReference> @ 14d56d4b0

void __cdecl UE::CoreUObject::Private::Construct<FTransform3fCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FTransform3fCameraVariableReference> @ 14d56d4d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTransform3fCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FTransform3fCameraVariableReference> @ 14d56d4f0

void __cdecl UE::CoreUObject::Private::Destruct<FTransform3fCameraVariableReference>(void *param_1)

{
  return;
}

// Construct<FVector3dCameraParameter> @ 14d56d540

void __cdecl UE::CoreUObject::Private::Construct<FVector3dCameraParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FVector3dCameraParameter> @ 14d56d560

void __cdecl UE::CoreUObject::Private::ConstructForTests<FVector3dCameraParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FVector3dCameraParameter> @ 14d56d580

void __cdecl UE::CoreUObject::Private::Destruct<FVector3dCameraParameter>(void *param_1)

{
  return;
}

// Copy<FTransform3fCameraVariableReference> @ 14d56d5d0

bool __cdecl
UE::CoreUObject::Private::Copy<FTransform3fCameraVariableReference>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// PostSerialize<FVector3dCameraParameter> @ 14d56d660

void __cdecl
UE::CoreUObject::Private::PostSerialize<FVector3dCameraParameter>(FArchive *param_1,void *param_2)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if (((param_1->field_0x28 & 1) != 0) && (*(longlong *)((longlong)param_2 + 0x20) != 0)) {
    lVar2 = *(longlong *)(*(longlong *)((longlong)param_2 + 0x20) + 0x20);
    pUVar3 = UCameraRigAsset::StaticClass();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(undefined8 *)((longlong)param_2 + 0x20) = 0;
    }
  }
  return;
}

// Copy<FVector3dCameraParameter> @ 14d56d700

bool __cdecl
UE::CoreUObject::Private::Copy<FVector3dCameraParameter>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = param_1;
  puVar4 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar2;
    puVar3[2] = puVar4[2];
    *(undefined4 *)(puVar3 + 3) =
         *(undefined4 *)((longlong)puVar3 + (longlong)param_2 + (0x18 - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)puVar3 + (longlong)param_2 + (0x20 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    puVar3[4] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x20 - (longlong)param_1));
    puVar3 = puVar3 + 5;
    puVar4 = puVar4 + 5;
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FVector3dCameraParameter> @ 14d56d8b0

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FVector3dCameraParameter>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  FName FVar1;
  bool bVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  FPropertyTypeName local_res8 [2];
  uint local_res20 [2];
  
  local_res8[0].Index = (param_1->TypeName).Index;
  FVar3 = FNameEntryId::FromValidEName((EName)local_res20);
  local_res20[0] = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  local_res20[1] = 0;
  FVar1.Number = 0;
  FVar1.ComparisonIndex.Value = local_res20[0];
  bVar2 = FPropertyTypeName::IsStruct(local_res8,FVar1);
  if (bVar2) {
    UE::Math::operator<<(param_2,param_3);
    return true;
  }
  return false;
}

// Construct<FDoubleCameraRigParameterOverride> @ 14d56d930

void __cdecl UE::CoreUObject::Private::Construct<FDoubleCameraRigParameterOverride>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x31) = 0;
  *(undefined2 *)((longlong)param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FDoubleCameraRigParameterOverride> @ 14d56d970

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDoubleCameraRigParameterOverride>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FDoubleCameraRigParameterOverride> @ 14d56d9b0

void __cdecl UE::CoreUObject::Private::Destruct<FDoubleCameraRigParameterOverride>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
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

// Copy<FDoubleCameraRigParameterOverride> @ 14d56da10

bool __cdecl
UE::CoreUObject::Private::Copy<FDoubleCameraRigParameterOverride>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar3 + (longlong)param_1);
      uVar2 = puVar1[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
      *(undefined1 *)((longlong)param_1 + 0x30) = *(undefined1 *)((longlong)param_2 + 0x30);
      *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
      *(undefined4 *)((longlong)param_1 + 0x40) = *(undefined4 *)((longlong)param_2 + 0x40);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x48) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x48));
      }
      puVar1 = (undefined8 *)((longlong)param_2 + 0x48);
      param_2 = (void *)((longlong)param_2 + 0x50);
      *(undefined8 *)((longlong)param_1 + 0x48) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x50);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FBlueprintCameraPose> @ 14d56dc40

void __cdecl UE::CoreUObject::Private::Construct<FBlueprintCameraPose>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x81) = 0;
  *(undefined2 *)((longlong)param_1 + 0x85) = 0;
  *(undefined1 *)((longlong)param_1 + 0x87) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x408f400000000000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x420c0000;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x44c00000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x40333333;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x42700000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0x41c71eb8;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x41955c29;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 100) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 8;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xbf800000;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined1 *)((longlong)param_1 + 0x80) = 0;
  return;
}

// ConstructForTests<FBlueprintCameraPose> @ 14d56dd80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBlueprintCameraPose>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xbf800000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x408f400000000000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined1 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x420c0000;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x44c00000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x40333333;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x42700000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0x41c71eb8;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x41955c29;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 100) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 8;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xbf800000;
  return;
}

// Destruct<FBlueprintCameraPose> @ 14d56de20

void __cdecl UE::CoreUObject::Private::Destruct<FBlueprintCameraPose>(void *param_1)

{
  return;
}

// Construct<FCameraRigProxyRedirectTableEntry> @ 14d56de30

void __cdecl UE::CoreUObject::Private::Construct<FCameraRigProxyRedirectTableEntry>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FCameraRigProxyRedirectTableEntry> @ 14d56de40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCameraRigProxyRedirectTableEntry>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FCameraRigProxyRedirectTableEntry> @ 14d56de50

void __cdecl UE::CoreUObject::Private::Destruct<FCameraRigProxyRedirectTableEntry>(void *param_1)

{
  return;
}

// Copy<FBlueprintCameraPose> @ 14d56dee0

bool __cdecl
UE::CoreUObject::Private::Copy<FBlueprintCameraPose>(void *param_1,void *param_2,int param_3)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  
  if (param_3 != 0) {
    lVar18 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar18 + 0x80 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar18 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar18 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar18 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar18 + 0x30 + (longlong)param_1);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      puVar1 = (undefined8 *)(lVar18 + 0x40 + (longlong)param_1);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      puVar1 = (undefined8 *)(lVar18 + 0x50 + (longlong)param_1);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      puVar1 = (undefined8 *)(lVar18 + 0x60 + (longlong)param_1);
      uVar14 = *puVar1;
      uVar15 = puVar1[1];
      puVar1 = (undefined8 *)(lVar18 + 0x70 + (longlong)param_1);
      uVar16 = *puVar1;
      uVar17 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar18 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar12;
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar13;
      *(undefined8 *)((longlong)param_1 + 0x60) = uVar14;
      *(undefined8 *)((longlong)param_1 + 0x68) = uVar15;
      *(undefined8 *)((longlong)param_1 + 0x70) = uVar16;
      *(undefined8 *)((longlong)param_1 + 0x78) = uVar17;
      *(undefined8 *)((longlong)param_1 + 0x80) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x88);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FCameraRigProxyRedirectTableEntry> @ 14d56e080

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraRigProxyRedirectTableEntry>
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

// Construct<FRotator3dCameraVariableReference> @ 14d56e2b0

void __cdecl UE::CoreUObject::Private::Construct<FRotator3dCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FRotator3dCameraVariableReference> @ 14d56e2d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRotator3dCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FRotator3dCameraVariableReference> @ 14d56e330

void __cdecl UE::CoreUObject::Private::Destruct<FRotator3dCameraVariableReference>(void *param_1)

{
  return;
}

// Copy<FRotator3dCameraVariableReference> @ 14d56e380

bool __cdecl
UE::CoreUObject::Private::Copy<FRotator3dCameraVariableReference>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FVector3fCameraParameter> @ 14d56e490

void __cdecl UE::CoreUObject::Private::Construct<FVector3fCameraParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FVector3fCameraParameter> @ 14d56e4b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FVector3fCameraParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FVector3fCameraParameter> @ 14d56e4d0

void __cdecl UE::CoreUObject::Private::Destruct<FVector3fCameraParameter>(void *param_1)

{
  return;
}

// PostSerialize<FVector3fCameraParameter> @ 14d56e4e0

void __cdecl
UE::CoreUObject::Private::PostSerialize<FVector3fCameraParameter>(FArchive *param_1,void *param_2)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if (((param_1->field_0x28 & 1) != 0) && (*(longlong *)((longlong)param_2 + 0x10) != 0)) {
    lVar2 = *(longlong *)(*(longlong *)((longlong)param_2 + 0x10) + 0x20);
    pUVar3 = UCameraRigAsset::StaticClass();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(undefined8 *)((longlong)param_2 + 0x10) = 0;
    }
  }
  return;
}

// Construct<FFloatCameraRigParameterOverride> @ 14d56e540

void __cdecl UE::CoreUObject::Private::Construct<FFloatCameraRigParameterOverride>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x31) = 0;
  *(undefined2 *)((longlong)param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FFloatCameraRigParameterOverride> @ 14d56e580

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FFloatCameraRigParameterOverride>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FFloatCameraRigParameterOverride> @ 14d56e5c0

void __cdecl UE::CoreUObject::Private::Destruct<FFloatCameraRigParameterOverride>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
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

// Copy<FVector3fCameraParameter> @ 14d56e620

bool __cdecl
UE::CoreUObject::Private::Copy<FVector3fCameraParameter>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = param_1;
  puVar3 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *puVar2 = *puVar3;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
    *(undefined4 *)((longlong)puVar2 + 0xc) =
         *(undefined4 *)((longlong)puVar2 + (longlong)param_2 + (0xc - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)puVar2 + (longlong)param_2 + (0x10 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    puVar2[2] = *(undefined8 *)((longlong)puVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    puVar2 = puVar2 + 3;
    puVar3 = puVar3 + 3;
  }
  return true;
}

// Copy<FFloatCameraRigParameterOverride> @ 14d56e710

bool __cdecl
UE::CoreUObject::Private::Copy<FFloatCameraRigParameterOverride>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar3 + (longlong)param_1);
      uVar2 = puVar1[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
      *(undefined1 *)((longlong)param_1 + 0x30) = *(undefined1 *)((longlong)param_2 + 0x30);
      *(undefined4 *)((longlong)param_1 + 0x38) = *(undefined4 *)((longlong)param_2 + 0x38);
      *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x40) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x40));
      }
      puVar1 = (undefined8 *)((longlong)param_2 + 0x40);
      param_2 = (void *)((longlong)param_2 + 0x48);
      *(undefined8 *)((longlong)param_1 + 0x40) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x48);
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FVector3fCameraParameter> @ 14d56e7d0

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FVector3fCameraParameter>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  bool bVar1;
  
  bVar1 = FVector3fCameraParameter::SerializeFromMismatchedTag(param_3,param_1,param_2);
  return bVar1;
}

// Construct<FRotator3fCameraVariableReference> @ 14d56e9f0

void __cdecl UE::CoreUObject::Private::Construct<FRotator3fCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FRotator3fCameraVariableReference> @ 14d56ea10

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRotator3fCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FRotator3fCameraVariableReference> @ 14d56ea30

void __cdecl UE::CoreUObject::Private::Destruct<FRotator3fCameraVariableReference>(void *param_1)

{
  return;
}

// Copy<FRotator3fCameraVariableReference> @ 14d56ea40

bool __cdecl
UE::CoreUObject::Private::Copy<FRotator3fCameraVariableReference>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInteger32CameraRigParameterOverride> @ 14d56eae0

void __cdecl
UE::CoreUObject::Private::Construct<FInteger32CameraRigParameterOverride>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x31) = 0;
  *(undefined2 *)((longlong)param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FInteger32CameraRigParameterOverride> @ 14d56eb20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FInteger32CameraRigParameterOverride>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FInteger32CameraRigParameterOverride> @ 14d56eb60

void __cdecl UE::CoreUObject::Private::Destruct<FInteger32CameraRigParameterOverride>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
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

// Construct<FVector2dCameraParameter> @ 14d56ec30

void __cdecl UE::CoreUObject::Private::Construct<FVector2dCameraParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FVector2dCameraParameter> @ 14d56ec50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FVector2dCameraParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FVector2dCameraParameter> @ 14d56ec70

void __cdecl UE::CoreUObject::Private::Destruct<FVector2dCameraParameter>(void *param_1)

{
  return;
}

// Copy<FInteger32CameraRigParameterOverride> @ 14d56ec80

bool __cdecl
UE::CoreUObject::Private::Copy<FInteger32CameraRigParameterOverride>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar3 + (longlong)param_1);
      uVar2 = puVar1[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
      *(undefined1 *)((longlong)param_1 + 0x30) = *(undefined1 *)((longlong)param_2 + 0x30);
      *(undefined4 *)((longlong)param_1 + 0x38) = *(undefined4 *)((longlong)param_2 + 0x38);
      *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x40) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x40));
      }
      puVar1 = (undefined8 *)((longlong)param_2 + 0x40);
      param_2 = (void *)((longlong)param_2 + 0x48);
      *(undefined8 *)((longlong)param_1 + 0x40) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x48);
    } while (param_3 != 0);
  }
  return true;
}

// PostSerialize<FVector2dCameraParameter> @ 14d56ed40

void __cdecl
UE::CoreUObject::Private::PostSerialize<FVector2dCameraParameter>(FArchive *param_1,void *param_2)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if (((param_1->field_0x28 & 1) != 0) && (*(longlong *)((longlong)param_2 + 0x18) != 0)) {
    lVar2 = *(longlong *)(*(longlong *)((longlong)param_2 + 0x18) + 0x20);
    pUVar3 = UCameraRigAsset::StaticClass();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(undefined8 *)((longlong)param_2 + 0x18) = 0;
    }
  }
  return;
}

// Construct<FBlueprintCameraEvaluationDataRef> @ 14d56eda0

void __cdecl UE::CoreUObject::Private::Construct<FBlueprintCameraEvaluationDataRef>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Copy<FVector2dCameraParameter> @ 14d56edc0

bool __cdecl
UE::CoreUObject::Private::Copy<FVector2dCameraParameter>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar3 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar3 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + lVar3 + 0x10);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar3 + 0x18), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_1 + lVar3 + 0x18);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FBlueprintCameraEvaluationDataRef> @ 14d56ee60

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FBlueprintCameraEvaluationDataRef>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FBlueprintCameraEvaluationDataRef> @ 14d56ee80

void __cdecl UE::CoreUObject::Private::Destruct<FBlueprintCameraEvaluationDataRef>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10));
  return;
}

// StructuredSerializeFromMismatchedTag<FVector2dCameraParameter> @ 14d56ee90

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FVector2dCameraParameter>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  FName FVar1;
  bool bVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  FPropertyTypeName local_res8 [2];
  uint local_res20 [2];
  
  local_res8[0].Index = (param_1->TypeName).Index;
  FVar3 = FNameEntryId::FromValidEName((EName)local_res20);
  local_res20[0] = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  local_res20[1] = 0;
  FVar1.Number = 0;
  FVar1.ComparisonIndex.Value = local_res20[0];
  bVar2 = FPropertyTypeName::IsStruct(local_res8,FVar1);
  if (bVar2) {
    UE::Math::operator<<(param_2,param_3);
    return true;
  }
  return false;
}

// Copy<FBlueprintCameraEvaluationDataRef> @ 14d56ef10

bool __cdecl
UE::CoreUObject::Private::Copy<FBlueprintCameraEvaluationDataRef>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      lVar1 = *(longlong *)((longlong)param_1 + lVar4 + 0x10);
      uVar2 = *(undefined8 *)((longlong)param_1 + lVar4 + 8);
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(longlong *)((longlong)param_1 + 0x10) = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FVector4dCameraVariableReference> @ 14d56f2d0

void __cdecl UE::CoreUObject::Private::Construct<FVector4dCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FVector4dCameraVariableReference> @ 14d56f370

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FVector4dCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FVector4dCameraVariableReference> @ 14d56f390

void __cdecl UE::CoreUObject::Private::Destruct<FVector4dCameraVariableReference>(void *param_1)

{
  return;
}

// Copy<FVector4dCameraVariableReference> @ 14d56f3a0

bool __cdecl
UE::CoreUObject::Private::Copy<FVector4dCameraVariableReference>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FBooleanCameraRigParameterOverride> @ 14d56f470

void __cdecl UE::CoreUObject::Private::Construct<FBooleanCameraRigParameterOverride>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x31) = 0;
  *(undefined2 *)((longlong)param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x37) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FBooleanCameraRigParameterOverride> @ 14d56f4f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FBooleanCameraRigParameterOverride>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FBooleanCameraRigParameterOverride> @ 14d56f530

void __cdecl UE::CoreUObject::Private::Destruct<FBooleanCameraRigParameterOverride>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
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

// Copy<FBooleanCameraRigParameterOverride> @ 14d56f650

bool __cdecl
UE::CoreUObject::Private::Copy<FBooleanCameraRigParameterOverride>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar3 + (longlong)param_1);
      uVar2 = puVar1[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
      *(undefined1 *)((longlong)param_1 + 0x30) = *(undefined1 *)((longlong)param_2 + 0x30);
      *(undefined1 *)((longlong)param_1 + 0x38) = *(undefined1 *)((longlong)param_2 + 0x38);
      *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x40) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x40));
      }
      puVar1 = (undefined8 *)((longlong)param_2 + 0x40);
      param_2 = (void *)((longlong)param_2 + 0x48);
      *(undefined8 *)((longlong)param_1 + 0x40) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x48);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayCamerasActivateCameraRigViaProxyTask> @ 14d56f750

void __cdecl
UE::CoreUObject::Private::Construct<FGameplayCamerasActivateCameraRigViaProxyTask>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FGameplayCamerasActivateCameraRigViaProxyTask__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0x2db;
  *(undefined4 *)((longlong)param_1 + 0x28) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x2c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  return;
}

// Construct<FVector2fCameraParameter> @ 14d56f7e0

void __cdecl UE::CoreUObject::Private::Construct<FVector2fCameraParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FGameplayCamerasActivateCameraRigViaProxyTask> @ 14d56f8c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGameplayCamerasActivateCameraRigViaProxyTask>
          (void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FGameplayCamerasActivateCameraRigViaProxyTask__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0x2db;
  *(undefined4 *)((longlong)param_1 + 0x28) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x2c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  return;
}

// ConstructForTests<FVector2fCameraParameter> @ 14d56f940

void __cdecl UE::CoreUObject::Private::ConstructForTests<FVector2fCameraParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FGameplayCamerasActivateCameraRigViaProxyTask> @ 14d56f960

void __cdecl
UE::CoreUObject::Private::Destruct<FGameplayCamerasActivateCameraRigViaProxyTask>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Destruct<FVector2fCameraParameter> @ 14d56f980

void __cdecl UE::CoreUObject::Private::Destruct<FVector2fCameraParameter>(void *param_1)

{
  return;
}

// PostSerialize<FVector2fCameraParameter> @ 14d56f990

void __cdecl
UE::CoreUObject::Private::PostSerialize<FVector2fCameraParameter>(FArchive *param_1,void *param_2)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if (((param_1->field_0x28 & 1) != 0) && (*(longlong *)((longlong)param_2 + 0x10) != 0)) {
    lVar2 = *(longlong *)(*(longlong *)((longlong)param_2 + 0x10) + 0x20);
    pUVar3 = UCameraRigAsset::StaticClass();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(undefined8 *)((longlong)param_2 + 0x10) = 0;
    }
  }
  return;
}

// Copy<FGameplayCamerasActivateCameraRigViaProxyTask> @ 14d56f9f0

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayCamerasActivateCameraRigViaProxyTask>
          (void *param_1,void *param_2,int param_3)

{
  FGameplayCamerasStateTreeTask *pFVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FGameplayCamerasStateTreeTask::operator=(param_1,param_2);
    *(undefined4 *)((longlong)param_1 + 0x28) = *(undefined4 *)((longlong)param_2 + 0x28);
    *(undefined2 *)&((FGameplayCamerasStateTreeTask *)((longlong)param_1 + 0x28))->field_0x4 =
         *(undefined2 *)&((FGameplayCamerasStateTreeTask *)((longlong)param_2 + 0x28))->field_0x4;
    pFVar1 = (FGameplayCamerasStateTreeTask *)((longlong)param_2 + 0x28);
    param_2 = &((FGameplayCamerasStateTreeTask *)((longlong)param_2 + 0x28))->field_0x8;
    ((FGameplayCamerasStateTreeTask *)((longlong)param_1 + 0x28))->field_0x6 = pFVar1->field_0x6;
    param_1 = &((FGameplayCamerasStateTreeTask *)((longlong)param_1 + 0x28))->field_0x8;
  }
  return true;
}

// Copy<FVector2fCameraParameter> @ 14d56fb40

bool __cdecl
UE::CoreUObject::Private::Copy<FVector2fCameraParameter>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar2 + 8);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 0x10), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x10);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FVector2fCameraParameter> @ 14d56fd90

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FVector2fCameraParameter>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  uint *puVar1;
  FArchive *pFVar2;
  undefined4 *puVar3;
  uint *puVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  FNameEntryId FVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FPropertyTypeName local_res8 [2];
  uint local_res20 [2];
  
  local_res8[0].Index = (param_1->TypeName).Index;
  FVar8 = FNameEntryId::FromValidEName((EName)local_res20);
  local_res20[0] = *(uint *)CONCAT44(extraout_var,FVar8.Value);
  local_res20[1] = 0;
  FVar5.Number = 0;
  FVar5.ComparisonIndex.Value = local_res20[0];
  bVar7 = FPropertyTypeName::IsStruct(local_res8,FVar5);
  if (!bVar7) {
    local_res8[0].Index = (param_1->TypeName).Index;
    FVar8 = FNameEntryId::FromValidEName((EName)local_res20);
    local_res20[0] = *(uint *)CONCAT44(extraout_var_00,FVar8.Value);
    local_res20[1] = 0;
    FVar6.Number = 0;
    FVar6.ComparisonIndex.Value = local_res20[0];
    bVar7 = FPropertyTypeName::IsStruct(local_res8,FVar6);
    if (!bVar7) {
      return false;
    }
  }
  pFVar2 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar3 = (undefined4 *)**(undefined8 **)&pFVar2->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar3 + 1) {
    if ((pFVar2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,param_3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar2,param_3);
    }
  }
  else {
    *(undefined4 *)param_3 = *puVar3;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
  }
  puVar1 = (uint *)((longlong)param_3 + 4);
  pFVar2 = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar4 = (uint *)**(undefined8 **)&pFVar2->field_0x8;
  if (puVar4 + 1 <= (uint *)(*(undefined8 **)&pFVar2->field_0x8)[1]) {
    *puVar1 = *puVar4;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
    return true;
  }
  if ((pFVar2->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,puVar1,4);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(pFVar2,puVar1);
  return true;
}

// Construct<FCameraVectorCurve> @ 14d56fff0

void __cdecl UE::CoreUObject::Private::Construct<FCameraVectorCurve>(void *param_1)

{
  memset(param_1,0,0x180);
  FCameraVectorCurve::FCameraVectorCurve(param_1);
  return;
}

// ConstructForTests<FCameraVectorCurve> @ 14d570020

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraVectorCurve>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined ***)param_1 = &___7FRichCurve__6B_;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0x404;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x80) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined4 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined4 *)((longlong)param_1 + 0x168) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x16c) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x100) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  return;
}

// Destruct<FCameraVectorCurve> @ 14d570030

void __cdecl UE::CoreUObject::Private::Destruct<FCameraVectorCurve>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x170) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x170));
  }
  *(undefined ***)((longlong)param_1 + 0x100) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x158) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x158));
  }
  *(undefined4 *)((longlong)param_1 + 0x150) = 0;
  if (*(void **)((longlong)param_1 + 0x148) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x148));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x108));
  if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
  }
  *(undefined ***)((longlong)param_1 + 0x80) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd8));
  }
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  if (*(void **)((longlong)param_1 + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 200));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x88));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined ***)param_1 = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FCameraVectorCurve> @ 14d570040

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraVectorCurve>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  void *pvVar6;
  ForAnyElementType *pFVar7;
  
  pvVar5 = param_1;
  pvVar6 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pFVar7 = (ForAnyElementType *)((longlong)pvVar5 + 0x70);
    *(undefined4 *)((longlong)pvVar5 + 0x68) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x68 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x6c) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x6c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x6d) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x6d - (longlong)param_1));
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar5 + (longlong)param_2 + (0x70 - (longlong)param_1));
    if (pFVar7 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar5 + (longlong)param_2 + (0x78 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar5 + 0x7c);
      pFVar4 = pFVar1->Data;
      *(int *)((longlong)pvVar5 + 0x78) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar3,*piVar2,pFVar7,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar7->Data,pFVar4,(longlong)iVar3 * 0x1c);
        }
      }
    }
    *(undefined4 *)((longlong)pvVar5 + 0xe8) = *(undefined4 *)((longlong)pvVar6 + 0xe8);
    pFVar1 = (ForAnyElementType *)((longlong)pvVar5 + 0xf0);
    *(undefined1 *)((longlong)pvVar5 + 0xec) = *(undefined1 *)((longlong)pvVar6 + 0xec);
    *(undefined1 *)((longlong)pvVar5 + 0xed) = *(undefined1 *)((longlong)pvVar6 + 0xed);
    if (pFVar1 != (ForAnyElementType *)((longlong)pvVar6 + 0xf0)) {
      iVar3 = *(int *)((longlong)pvVar6 + 0xf8);
      piVar2 = (int *)((longlong)pvVar5 + 0xfc);
      pFVar4 = ((ForAnyElementType *)((longlong)pvVar6 + 0xf0))->Data;
      *(int *)((longlong)pvVar5 + 0xf8) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar1->Data,pFVar4,(longlong)iVar3 * 0x1c);
        }
      }
    }
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar5 + (longlong)param_2 + (0x170 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x168) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x168 - (longlong)param_1));
    pFVar7 = (ForAnyElementType *)((longlong)pvVar5 + 0x170);
    *(undefined1 *)((longlong)pvVar5 + 0x16c) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x16c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x16d) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x16d - (longlong)param_1));
    if (pFVar7 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar5 + (longlong)param_2 + (0x178 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar5 + 0x17c);
      pFVar4 = pFVar1->Data;
      *(int *)((longlong)pvVar5 + 0x178) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar3,*piVar2,pFVar7,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar7->Data,pFVar4,(longlong)iVar3 * 0x1c);
        }
      }
    }
    pvVar5 = (void *)((longlong)pvVar5 + 0x180);
    pvVar6 = (void *)((longlong)pvVar6 + 0x180);
  }
  return true;
}

// Construct<FCameraRigAssetReference> @ 14d570510

void __cdecl UE::CoreUObject::Private::Construct<FCameraRigAssetReference>(void *param_1)

{
  *(undefined ***)param_1 = &___7FBaseCameraObjectReference__6B_;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FCameraRigAssetReference__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  return;
}

// ConstructForTests<FCameraRigAssetReference> @ 14d570520

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraRigAssetReference>(void *param_1)

{
  *(undefined ***)param_1 = &___7FBaseCameraObjectReference__6B_;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FCameraRigAssetReference__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  return;
}

// Destruct<FCameraRigAssetReference> @ 14d570530

void __cdecl UE::CoreUObject::Private::Destruct<FCameraRigAssetReference>(void *param_1)

{
  FCameraRigParameterOverrides::~FCameraRigParameterOverrides
            ((FCameraRigParameterOverrides *)((longlong)param_1 + 0x50));
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  *(undefined ***)param_1 = &___7FBaseCameraObjectReference__6B_;
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 8));
  return;
}

// PostSerialize<FCameraRigAssetReference> @ 14d570640

void __cdecl
UE::CoreUObject::Private::PostSerialize<FCameraRigAssetReference>(FArchive *param_1,void *param_2)

{
  FCameraRigAssetReference::PostSerialize(param_2,param_1);
  return;
}

// Construct<FVector4fCameraVariableReference> @ 14d570660

void __cdecl UE::CoreUObject::Private::Construct<FVector4fCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FVector4fCameraVariableReference> @ 14d5706c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FVector4fCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FVector4fCameraVariableReference> @ 14d570720

void __cdecl UE::CoreUObject::Private::Destruct<FVector4fCameraVariableReference>(void *param_1)

{
  return;
}

// Copy<FCameraRigAssetReference> @ 14d570730

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraRigAssetReference>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FBaseCameraObjectReference::operator=(param_1,param_2);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)((FBaseCameraObjectReference *)((longlong)param_2 + 0x38))->_padding_ !=
        (UObject *)0x0)) {
      GC::MarkAsReachable((UObject *)
                          ((FBaseCameraObjectReference *)((longlong)param_2 + 0x38))->_padding_);
    }
    ((FBaseCameraObjectReference *)((longlong)param_1 + 0x38))->_padding_ =
         ((FBaseCameraObjectReference *)((longlong)param_2 + 0x38))->_padding_;
    TArray<FGuid,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FGuid,TSizedDefaultAllocator<32>_> *)
               &((FBaseCameraObjectReference *)((longlong)param_1 + 0x38))->Parameters,
               (TArray<FGuid,TSizedDefaultAllocator<32>_> *)
               &((FBaseCameraObjectReference *)((longlong)param_2 + 0x38))->Parameters);
    FCameraRigParameterOverrides::operator=
              ((FCameraRigParameterOverrides *)
               &(((FBaseCameraObjectReference *)((longlong)param_1 + 0x38))->Parameters).
                OverridenPropertyIDs,
               (FCameraRigParameterOverrides *)
               &(((FBaseCameraObjectReference *)((longlong)param_2 + 0x38))->Parameters).
                OverridenPropertyIDs);
    param_2 = &(((FBaseCameraObjectReference *)((longlong)param_2 + 0x118))->Parameters).
               OverridenPropertyIDs;
    param_1 = &(((FBaseCameraObjectReference *)((longlong)param_1 + 0x118))->Parameters).
               OverridenPropertyIDs;
  }
  return true;
}

// Copy<FVector4fCameraVariableReference> @ 14d5707e0

bool __cdecl
UE::CoreUObject::Private::Copy<FVector4fCameraVariableReference>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FCameraRigAssetReference> @ 14d570870

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FCameraRigAssetReference>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  bool bVar1;
  
  bVar1 = FCameraRigAssetReference::SerializeFromMismatchedTag(param_3,param_1,param_2);
  return bVar1;
}

// Construct<FCameraRigParameterOverrideBase> @ 14d570940

void __cdecl UE::CoreUObject::Private::Construct<FCameraRigParameterOverrideBase>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x31) = 0;
  *(undefined2 *)((longlong)param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FCameraRigParameterOverrideBase> @ 14d570970

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCameraRigParameterOverrideBase>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FCameraRigParameterOverrideBase> @ 14d570a60

void __cdecl UE::CoreUObject::Private::Destruct<FCameraRigParameterOverrideBase>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
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

// Copy<FCameraRigParameterOverrideBase> @ 14d570b40

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraRigParameterOverrideBase>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = ((undefined8 *)(lVar2 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_1 + lVar2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_1 + lVar2 + 0x20)
                );
      *(undefined1 *)((longlong)param_1 + 0x30) = *(undefined1 *)((longlong)param_1 + lVar2 + 0x30);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x38);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData> @ 14d570c90

void __cdecl
UE::CoreUObject::Private::Construct<FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData> @ 14d570ce0

void __cdecl
UE::CoreUObject::Private::
ConstructForTests<FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData> @ 14d570d30

void __cdecl
UE::CoreUObject::Private::Destruct<FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData>
          (void *param_1)

{
  return;
}

// Copy<FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData> @ 14d570d50

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayCamerasActivateCameraRigViaProxyTaskInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_2;
    do {
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *(undefined8 *)(((longlong)param_1 - (longlong)param_2) + (longlong)puVar1) = *puVar1;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDoubleCameraParameter> @ 14d570f00

void __cdecl UE::CoreUObject::Private::Construct<FDoubleCameraParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FDoubleCameraParameter> @ 14d570f20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDoubleCameraParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FDoubleCameraParameter> @ 14d570f40

void __cdecl UE::CoreUObject::Private::Destruct<FDoubleCameraParameter>(void *param_1)

{
  return;
}

// PostSerialize<FDoubleCameraParameter> @ 14d570f50

void __cdecl
UE::CoreUObject::Private::PostSerialize<FDoubleCameraParameter>(FArchive *param_1,void *param_2)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if (((param_1->field_0x28 & 1) != 0) && (*(longlong *)((longlong)param_2 + 0x10) != 0)) {
    lVar2 = *(longlong *)(*(longlong *)((longlong)param_2 + 0x10) + 0x20);
    pUVar3 = UCameraRigAsset::StaticClass();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(undefined8 *)((longlong)param_2 + 0x10) = 0;
    }
  }
  return;
}

// Construct<FCameraSingleCurve> @ 14d570fb0

void __cdecl UE::CoreUObject::Private::Construct<FCameraSingleCurve>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x404;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x7f7fffff;
  *(undefined ***)param_1 = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// Copy<FDoubleCameraParameter> @ 14d571020

bool __cdecl
UE::CoreUObject::Private::Copy<FDoubleCameraParameter>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar2 + 8);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 0x10), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_1 + lVar2 + 0x10);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FCameraSingleCurve> @ 14d5710c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraSingleCurve>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0x404;
  *(undefined ***)param_1 = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// Destruct<FCameraSingleCurve> @ 14d571120

void __cdecl UE::CoreUObject::Private::Destruct<FCameraSingleCurve>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined ***)param_1 = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// StructuredSerializeFromMismatchedTag<FDoubleCameraParameter> @ 14d571180

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FDoubleCameraParameter>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  FArchive *this;
  undefined8 *puVar1;
  FName FVar2;
  bool bVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  FPropertyTypeName local_res8 [2];
  uint local_res10 [2];
  
  local_res8[0].Index = (param_1->TypeName).Index;
  FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
  local_res10[0] = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  local_res10[1] = 0;
  FVar2.Number = 0;
  FVar2.ComparisonIndex.Value = local_res10[0];
  bVar3 = FPropertyTypeName::IsStruct(local_res8,FVar2);
  if (!bVar3) {
    return false;
  }
  this = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar1 = (undefined8 *)**(longlong **)&this->field_0x8;
  if (puVar1 + 1 <= (undefined8 *)(*(longlong **)&this->field_0x8)[1]) {
    *(undefined8 *)param_3 = *puVar1;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 8;
    return true;
  }
  if ((this->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this + 0x188))(this,param_3,8);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(this,param_3);
  return true;
}

// Copy<FCameraSingleCurve> @ 14d571250

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraSingleCurve>(void *param_1,void *param_2,int param_3)

{
  FRichCurve *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FRichCurve::operator=
                (this,(FRichCurve *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FVector3dCameraVariableReference> @ 14d571890

void __cdecl UE::CoreUObject::Private::Construct<FVector3dCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FVector3dCameraVariableReference> @ 14d571a30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FVector3dCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FVector3dCameraVariableReference> @ 14d571c10

void __cdecl UE::CoreUObject::Private::Destruct<FVector3dCameraVariableReference>(void *param_1)

{
  return;
}

// Copy<FVector3dCameraVariableReference> @ 14d572210

bool __cdecl
UE::CoreUObject::Private::Copy<FVector3dCameraVariableReference>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayCamerasActivateCameraRigTask> @ 14d572560

void __cdecl
UE::CoreUObject::Private::Construct<FGameplayCamerasActivateCameraRigTask>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FGameplayCamerasActivateCameraRigTask__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0x2db;
  *(undefined4 *)((longlong)param_1 + 0x28) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x2c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  return;
}

// ConstructForTests<FGameplayCamerasActivateCameraRigTask> @ 14d5725f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGameplayCamerasActivateCameraRigTask>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FGameplayCamerasActivateCameraRigTask__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0x2db;
  *(undefined4 *)((longlong)param_1 + 0x28) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x2c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  return;
}

// Destruct<FGameplayCamerasActivateCameraRigTask> @ 14d5726b0

void __cdecl
UE::CoreUObject::Private::Destruct<FGameplayCamerasActivateCameraRigTask>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FGameplayCamerasActivateCameraRigTask> @ 14d572790

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayCamerasActivateCameraRigTask>
          (void *param_1,void *param_2,int param_3)

{
  FGameplayCamerasStateTreeTask *pFVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FGameplayCamerasStateTreeTask::operator=(param_1,param_2);
    *(undefined4 *)((longlong)param_1 + 0x28) = *(undefined4 *)((longlong)param_2 + 0x28);
    *(undefined2 *)&((FGameplayCamerasStateTreeTask *)((longlong)param_1 + 0x28))->field_0x4 =
         *(undefined2 *)&((FGameplayCamerasStateTreeTask *)((longlong)param_2 + 0x28))->field_0x4;
    pFVar1 = (FGameplayCamerasStateTreeTask *)((longlong)param_2 + 0x28);
    param_2 = &((FGameplayCamerasStateTreeTask *)((longlong)param_2 + 0x28))->field_0x8;
    ((FGameplayCamerasStateTreeTask *)((longlong)param_1 + 0x28))->field_0x6 = pFVar1->field_0x6;
    param_1 = &((FGameplayCamerasStateTreeTask *)((longlong)param_1 + 0x28))->field_0x8;
  }
  return true;
}

// Construct<FCameraRotatorCurve> @ 14d5728a0

void __cdecl UE::CoreUObject::Private::Construct<FCameraRotatorCurve>(void *param_1)

{
  memset(param_1,0,0x180);
  FCameraRotatorCurve::FCameraRotatorCurve(param_1);
  return;
}

// ConstructForTests<FCameraRotatorCurve> @ 14d572910

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraRotatorCurve>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined ***)param_1 = &___7FRichCurve__6B_;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0x404;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x80) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined4 *)((longlong)param_1 + 0x150) = 0;
  *(undefined8 *)((longlong)param_1 + 0x158) = 0;
  *(undefined8 *)((longlong)param_1 + 0x160) = 0;
  *(undefined4 *)((longlong)param_1 + 0x168) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x16c) = 0x404;
  *(undefined ***)((longlong)param_1 + 0x100) = &___7FRichCurve__6B_;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  return;
}

// Destruct<FCameraRotatorCurve> @ 14d572920

void __cdecl UE::CoreUObject::Private::Destruct<FCameraRotatorCurve>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x170) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x170));
  }
  *(undefined ***)((longlong)param_1 + 0x100) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x158) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x158));
  }
  *(undefined4 *)((longlong)param_1 + 0x150) = 0;
  if (*(void **)((longlong)param_1 + 0x148) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x148));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x108));
  if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
  }
  *(undefined ***)((longlong)param_1 + 0x80) = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd8));
  }
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  if (*(void **)((longlong)param_1 + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 200));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x88));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined ***)param_1 = &___7FIndexedCurve__6B_;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Construct<FFloatCameraParameter> @ 14d572930

void __cdecl UE::CoreUObject::Private::Construct<FFloatCameraParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FFloatCameraParameter> @ 14d572ad0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFloatCameraParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FFloatCameraParameter> @ 14d572bb0

void __cdecl UE::CoreUObject::Private::Destruct<FFloatCameraParameter>(void *param_1)

{
  return;
}

// Copy<FCameraRotatorCurve> @ 14d572c00

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraRotatorCurve>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  void *pvVar6;
  ForAnyElementType *pFVar7;
  
  pvVar5 = param_1;
  pvVar6 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pFVar7 = (ForAnyElementType *)((longlong)pvVar5 + 0x70);
    *(undefined4 *)((longlong)pvVar5 + 0x68) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x68 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x6c) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x6c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x6d) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x6d - (longlong)param_1));
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar5 + (longlong)param_2 + (0x70 - (longlong)param_1));
    if (pFVar7 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar5 + (longlong)param_2 + (0x78 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar5 + 0x7c);
      pFVar4 = pFVar1->Data;
      *(int *)((longlong)pvVar5 + 0x78) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar3,*piVar2,pFVar7,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar7->Data,pFVar4,(longlong)iVar3 * 0x1c);
        }
      }
    }
    *(undefined4 *)((longlong)pvVar5 + 0xe8) = *(undefined4 *)((longlong)pvVar6 + 0xe8);
    pFVar1 = (ForAnyElementType *)((longlong)pvVar5 + 0xf0);
    *(undefined1 *)((longlong)pvVar5 + 0xec) = *(undefined1 *)((longlong)pvVar6 + 0xec);
    *(undefined1 *)((longlong)pvVar5 + 0xed) = *(undefined1 *)((longlong)pvVar6 + 0xed);
    if (pFVar1 != (ForAnyElementType *)((longlong)pvVar6 + 0xf0)) {
      iVar3 = *(int *)((longlong)pvVar6 + 0xf8);
      piVar2 = (int *)((longlong)pvVar5 + 0xfc);
      pFVar4 = ((ForAnyElementType *)((longlong)pvVar6 + 0xf0))->Data;
      *(int *)((longlong)pvVar5 + 0xf8) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar1->Data,pFVar4,(longlong)iVar3 * 0x1c);
        }
      }
    }
    pFVar1 = (ForAnyElementType *)
             ((longlong)pvVar5 + (longlong)param_2 + (0x170 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x168) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x168 - (longlong)param_1));
    pFVar7 = (ForAnyElementType *)((longlong)pvVar5 + 0x170);
    *(undefined1 *)((longlong)pvVar5 + 0x16c) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x16c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x16d) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x16d - (longlong)param_1));
    if (pFVar7 != pFVar1) {
      iVar3 = *(int *)((longlong)pvVar5 + (longlong)param_2 + (0x178 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar5 + 0x17c);
      pFVar4 = pFVar1->Data;
      *(int *)((longlong)pvVar5 + 0x178) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,iVar3,*piVar2,pFVar7,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar7->Data,pFVar4,(longlong)iVar3 * 0x1c);
        }
      }
    }
    pvVar5 = (void *)((longlong)pvVar5 + 0x180);
    pvVar6 = (void *)((longlong)pvVar6 + 0x180);
  }
  return true;
}

// PostSerialize<FFloatCameraParameter> @ 14d572ef0

void __cdecl
UE::CoreUObject::Private::PostSerialize<FFloatCameraParameter>(FArchive *param_1,void *param_2)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if (((param_1->field_0x28 & 1) != 0) && (*(longlong *)((longlong)param_2 + 8) != 0)) {
    lVar2 = *(longlong *)(*(longlong *)((longlong)param_2 + 8) + 0x20);
    pUVar3 = UCameraRigAsset::StaticClass();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(undefined8 *)((longlong)param_2 + 8) = 0;
    }
  }
  return;
}

// Copy<FFloatCameraParameter> @ 14d5732a0

bool __cdecl
UE::CoreUObject::Private::Copy<FFloatCameraParameter>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_1 + lVar2 + 4);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCameraRigParameterOverrides> @ 14d573380

void __cdecl UE::CoreUObject::Private::Construct<FCameraRigParameterOverrides>(void *param_1)

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
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  return;
}

// ConstructForTests<FCameraRigParameterOverrides> @ 14d573420

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCameraRigParameterOverrides>(void *param_1)

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
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  return;
}

// Destruct<FCameraRigParameterOverrides> @ 14d5734c0

void __cdecl UE::CoreUObject::Private::Destruct<FCameraRigParameterOverrides>(void *param_1)

{
  DestructItems<FTransform3dCameraRigParameterOverride,int>
            (*(FTransform3dCameraRigParameterOverride **)((longlong)param_1 + 0xd0),
             *(int *)((longlong)param_1 + 0xd8));
  if (*(void **)((longlong)param_1 + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd0));
  }
  DestructItems<FTransform3fCameraRigParameterOverride,int>
            (*(FTransform3fCameraRigParameterOverride **)((longlong)param_1 + 0xc0),
             *(int *)((longlong)param_1 + 200));
  if (*(void **)((longlong)param_1 + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xc0));
  }
  DestructItems<FRotator3dCameraRigParameterOverride,int>
            (*(FRotator3dCameraRigParameterOverride **)((longlong)param_1 + 0xb0),
             *(int *)((longlong)param_1 + 0xb8));
  if (*(void **)((longlong)param_1 + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb0));
  }
  DestructItems<FRotator3fCameraRigParameterOverride,int>
            (*(FRotator3fCameraRigParameterOverride **)((longlong)param_1 + 0xa0),
             *(int *)((longlong)param_1 + 0xa8));
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  DestructItems<FVector4dCameraRigParameterOverride,int>
            (*(FVector4dCameraRigParameterOverride **)((longlong)param_1 + 0x90),
             *(int *)((longlong)param_1 + 0x98));
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  DestructItems<FVector4fCameraRigParameterOverride,int>
            (*(FVector4fCameraRigParameterOverride **)((longlong)param_1 + 0x80),
             *(int *)((longlong)param_1 + 0x88));
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  DestructItems<FVector3dCameraRigParameterOverride,int>
            (*(FVector3dCameraRigParameterOverride **)((longlong)param_1 + 0x70),
             *(int *)((longlong)param_1 + 0x78));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  DestructItems<FVector3fCameraRigParameterOverride,int>
            (*(FVector3fCameraRigParameterOverride **)((longlong)param_1 + 0x60),
             *(int *)((longlong)param_1 + 0x68));
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  DestructItems<FVector2dCameraRigParameterOverride,int>
            (*(FVector2dCameraRigParameterOverride **)((longlong)param_1 + 0x50),
             *(int *)((longlong)param_1 + 0x58));
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  DestructItems<FVector2fCameraRigParameterOverride,int>
            (*(FVector2fCameraRigParameterOverride **)((longlong)param_1 + 0x40),
             *(int *)((longlong)param_1 + 0x48));
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  DestructItems<FDoubleCameraRigParameterOverride,int>
            (*(FDoubleCameraRigParameterOverride **)((longlong)param_1 + 0x30),
             *(int *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  DestructItems<FFloatCameraRigParameterOverride,int>
            (*(FFloatCameraRigParameterOverride **)((longlong)param_1 + 0x20),
             *(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  DestructItems<FInteger32CameraRigParameterOverride,int>
            (*(FInteger32CameraRigParameterOverride **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  DestructItems<FBooleanCameraRigParameterOverride,int>
            (*(FBooleanCameraRigParameterOverride **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// StructuredSerializeFromMismatchedTag<FFloatCameraParameter> @ 14d573540

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FFloatCameraParameter>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  FName FVar1;
  FArchive *this;
  undefined4 *puVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  FName FVar4;
  undefined1 local_res8 [8];
  
  FVar1 = param_1->Type;
  FVar3 = FNameEntryId::FromValidEName((EName)local_res8);
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  if (FVar1 != FVar4) {
    return false;
  }
  this = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (undefined4 *)**(undefined8 **)&this->field_0x8;
  if (puVar2 + 1 <= (undefined4 *)(*(undefined8 **)&this->field_0x8)[1]) {
    *(undefined4 *)param_3 = *puVar2;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
    return true;
  }
  if ((this->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this + 0x188))(this,param_3,4);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(this,param_3);
  return true;
}

// Construct<FVector3fCameraVariableReference> @ 14d573650

void __cdecl UE::CoreUObject::Private::Construct<FVector3fCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FVector3fCameraVariableReference> @ 14d573670

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FVector3fCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Copy<FCameraRigParameterOverrides> @ 14d573690

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraRigParameterOverrides>
          (void *param_1,void *param_2,int param_3)

{
  FCameraRigParameterOverrides *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FCameraRigParameterOverrides::operator=
                (this,(FCameraRigParameterOverrides *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FVector3fCameraVariableReference> @ 14d5736e0

void __cdecl UE::CoreUObject::Private::Destruct<FVector3fCameraVariableReference>(void *param_1)

{
  return;
}

// Copy<FVector3fCameraVariableReference> @ 14d5738b0

bool __cdecl
UE::CoreUObject::Private::Copy<FVector3fCameraVariableReference>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayCamerasActivateCameraRigTaskInstanceData> @ 14d573c10

void __cdecl
UE::CoreUObject::Private::Construct<FGameplayCamerasActivateCameraRigTaskInstanceData>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FGameplayCamerasActivateCameraRigTaskInstanceData> @ 14d573c20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGameplayCamerasActivateCameraRigTaskInstanceData>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FGameplayCamerasActivateCameraRigTaskInstanceData> @ 14d573d30

void __cdecl
UE::CoreUObject::Private::Destruct<FGameplayCamerasActivateCameraRigTaskInstanceData>(void *param_1)

{
  return;
}

// Copy<FGameplayCamerasActivateCameraRigTaskInstanceData> @ 14d573d80

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayCamerasActivateCameraRigTaskInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_2;
    do {
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *(undefined8 *)(((longlong)param_1 - (longlong)param_2) + (longlong)puVar1) = *puVar1;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCustomCameraNodeParameters> @ 14d574050

void __cdecl UE::CoreUObject::Private::Construct<FCustomCameraNodeParameters>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FCustomCameraNodeParameters> @ 14d574070

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCustomCameraNodeParameters>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FCustomCameraNodeParameters> @ 14d574090

void __cdecl UE::CoreUObject::Private::Destruct<FCustomCameraNodeParameters>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Construct<FTransform3dCameraRigParameterOverride> @ 14d5740d0

void __cdecl
UE::CoreUObject::Private::Construct<FTransform3dCameraRigParameterOverride>(void *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  *(undefined8 *)((longlong)param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  *(undefined8 *)((longlong)param_1 + 0x89) = 0;
  *(undefined8 *)((longlong)param_1 + 0x91) = 0;
  *(undefined8 *)((longlong)param_1 + 0x99) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xad) = 0;
  *(undefined1 *)((longlong)param_1 + 0xaf) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x40) = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x50) = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x60) = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x70) = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x80) = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_1 + 0x90) = auVar8;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  return;
}

// ConstructForTests<FTransform3dCameraRigParameterOverride> @ 14d5741a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTransform3dCameraRigParameterOverride>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x40) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x48) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x50) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x58) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x60) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x68) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x70) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x78) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x80) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x88) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x90) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x98) = (double)fVar3;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  return;
}

// Construct<FInteger32CameraParameter> @ 14d574230

void __cdecl UE::CoreUObject::Private::Construct<FInteger32CameraParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FTransform3dCameraRigParameterOverride> @ 14d574250

void __cdecl
UE::CoreUObject::Private::Destruct<FTransform3dCameraRigParameterOverride>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
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

// ConstructForTests<FInteger32CameraParameter> @ 14d574270

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInteger32CameraParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FInteger32CameraParameter> @ 14d574390

void __cdecl UE::CoreUObject::Private::Destruct<FInteger32CameraParameter>(void *param_1)

{
  return;
}

// Copy<FCustomCameraNodeParameters> @ 14d5743a0

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomCameraNodeParameters>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  int iVar4;
  int iVar5;
  FCustomCameraNodeBlendableParameter *pFVar6;
  FCustomCameraNodeDataParameter *pFVar7;
  ForAnyElementType *pFVar8;
  
  if (param_3 != 0) {
    pFVar8 = param_1;
    do {
      pFVar3 = (ForAnyElementType *)((longlong)pFVar8 + ((longlong)param_2 - (longlong)param_1));
      if (pFVar8 != pFVar3) {
        iVar4 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
        pFVar6 = (FCustomCameraNodeBlendableParameter *)pFVar3->Data;
        iVar5 = *piVar1;
        *(int *)&pFVar8[1].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,iVar4,iVar5,pFVar8,iVar4,piVar1);
          ConstructItems<FCustomCameraNodeBlendableParameter,FCustomCameraNodeBlendableParameter,int>
                    (pFVar8->Data,pFVar6,iVar4);
        }
      }
      pFVar2 = pFVar8 + 2;
      if (pFVar2 != pFVar3 + 2) {
        iVar4 = *(int *)&pFVar3[3].Data;
        piVar1 = (int *)((longlong)&pFVar8[3].Data + 4);
        pFVar7 = (FCustomCameraNodeDataParameter *)pFVar3[2].Data;
        iVar5 = *piVar1;
        *(int *)&pFVar8[3].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,iVar4,iVar5,pFVar2,iVar4,piVar1);
          ConstructItems<FCustomCameraNodeDataParameter,FCustomCameraNodeDataParameter,int>
                    (pFVar2->Data,pFVar7,iVar4);
        }
      }
      param_3 = param_3 + -1;
      pFVar8 = pFVar8 + 4;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FVector2dCameraVariableReference> @ 14d5744e0

void __cdecl UE::CoreUObject::Private::Construct<FVector2dCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// PostSerialize<FInteger32CameraParameter> @ 14d574500

void __cdecl
UE::CoreUObject::Private::PostSerialize<FInteger32CameraParameter>(FArchive *param_1,void *param_2)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if (((param_1->field_0x28 & 1) != 0) && (*(longlong *)((longlong)param_2 + 8) != 0)) {
    lVar2 = *(longlong *)(*(longlong *)((longlong)param_2 + 8) + 0x20);
    pUVar3 = UCameraRigAsset::StaticClass();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(undefined8 *)((longlong)param_2 + 8) = 0;
    }
  }
  return;
}

// ConstructForTests<FVector2dCameraVariableReference> @ 14d574560

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FVector2dCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Copy<FTransform3dCameraRigParameterOverride> @ 14d574580

bool __cdecl
UE::CoreUObject::Private::Copy<FTransform3dCameraRigParameterOverride>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar3 + (longlong)param_1);
      uVar2 = puVar1[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
      *(undefined1 *)((longlong)param_1 + 0x30) = *(undefined1 *)((longlong)param_2 + 0x30);
      FTransform3dCameraParameter::operator=
                ((FTransform3dCameraParameter *)((longlong)param_1 + 0x40),
                 (FTransform3dCameraParameter *)((longlong)param_2 + 0x40));
      param_2 = (void *)((longlong)param_2 + 0xb0);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0xb0);
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FVector2dCameraVariableReference> @ 14d574630

void __cdecl UE::CoreUObject::Private::Destruct<FVector2dCameraVariableReference>(void *param_1)

{
  return;
}

// Copy<FInteger32CameraParameter> @ 14d574680

bool __cdecl
UE::CoreUObject::Private::Copy<FInteger32CameraParameter>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_1 + lVar2 + 4);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FVector2dCameraVariableReference> @ 14d574820

bool __cdecl
UE::CoreUObject::Private::Copy<FVector2dCameraVariableReference>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FInteger32CameraParameter> @ 14d5749b0

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FInteger32CameraParameter>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  FName FVar1;
  FArchive *this;
  undefined4 *puVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FName FVar4;
  FName FVar5;
  undefined1 local_res8 [8];
  
  FVar1 = param_1->Type;
  FVar3 = FNameEntryId::FromValidEName((EName)local_res8);
  FVar5.Number = 0;
  FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  if ((FVar1 != FVar5) &&
     (FVar1 = param_1->Type, FVar3 = FNameEntryId::FromValidEName((EName)local_res8),
     FVar4.Number = 0, FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar3.Value),
     FVar1 != FVar4)) {
    return false;
  }
  this = *(FArchive **)(*(longlong *)param_2 + 8);
  puVar2 = (undefined4 *)**(undefined8 **)&this->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&this->field_0x8)[1] < puVar2 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,param_3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,param_3);
    }
  }
  else {
    *(undefined4 *)param_3 = *puVar2;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
  }
  return true;
}

// Construct<FCustomCameraNodeDataParameter> @ 14d575d90

void __cdecl UE::CoreUObject::Private::Construct<FCustomCameraNodeDataParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  return;
}

// ConstructForTests<FCustomCameraNodeDataParameter> @ 14d575db0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomCameraNodeDataParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FCustomCameraNodeDataParameter> @ 14d575dd0

void __cdecl UE::CoreUObject::Private::Destruct<FCustomCameraNodeDataParameter>(void *param_1)

{
  return;
}

// Construct<FTransform3fCameraRigParameterOverride> @ 14d575de0

void __cdecl
UE::CoreUObject::Private::Construct<FTransform3fCameraRigParameterOverride>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x31) = 0;
  *(undefined8 *)((longlong)param_1 + 0x39) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  *(undefined4 *)((longlong)param_1 + 0x79) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7f) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(__m128 *)((longlong)param_1 + 0x40) = GlobalVectorConstants::Float0001;
  *(__m128 *)((longlong)param_1 + 0x50) = GlobalVectorConstants::FloatZero;
  *(__m128 *)((longlong)param_1 + 0x60) = GlobalVectorConstants::Float1110;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// ConstructForTests<FTransform3fCameraRigParameterOverride> @ 14d575f10

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTransform3fCameraRigParameterOverride>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(__m128 *)((longlong)param_1 + 0x40) = GlobalVectorConstants::Float0001;
  *(__m128 *)((longlong)param_1 + 0x50) = GlobalVectorConstants::FloatZero;
  *(__m128 *)((longlong)param_1 + 0x60) = GlobalVectorConstants::Float1110;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// Destruct<FTransform3fCameraRigParameterOverride> @ 14d575f60

void __cdecl
UE::CoreUObject::Private::Destruct<FTransform3fCameraRigParameterOverride>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
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

// Copy<FCustomCameraNodeDataParameter> @ 14d575f80

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomCameraNodeDataParameter>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)((longlong)pvVar1 + 8);
      *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)pvVar1 + 0xc);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x10) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x10));
      }
      puVar2[2] = *(undefined8 *)((longlong)pvVar1 + 0x10);
      *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)pvVar1 + 0x18);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x20);
      puVar2 = puVar2 + 4;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FVector2fCameraVariableReference> @ 14d576020

void __cdecl UE::CoreUObject::Private::Construct<FVector2fCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FVector2fCameraVariableReference> @ 14d576040

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FVector2fCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Copy<FTransform3fCameraRigParameterOverride> @ 14d5760a0

bool __cdecl
UE::CoreUObject::Private::Copy<FTransform3fCameraRigParameterOverride>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar3 + (longlong)param_1);
      uVar2 = puVar1[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
      *(undefined1 *)((longlong)param_1 + 0x30) = *(undefined1 *)((longlong)param_2 + 0x30);
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x48);
      *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x58);
      *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x68);
      *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
      *(undefined8 *)((longlong)param_1 + 0x68) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x70) = *(undefined4 *)((longlong)param_2 + 0x70);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x78) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x78));
      }
      puVar1 = (undefined8 *)((longlong)param_2 + 0x78);
      param_2 = (void *)((longlong)param_2 + 0x80);
      *(undefined8 *)((longlong)param_1 + 0x78) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x80);
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FVector2fCameraVariableReference> @ 14d5761d0

void __cdecl UE::CoreUObject::Private::Destruct<FVector2fCameraVariableReference>(void *param_1)

{
  return;
}

// Construct<FBooleanCameraParameter> @ 14d5761f0

void __cdecl UE::CoreUObject::Private::Construct<FBooleanCameraParameter>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Copy<FVector2fCameraVariableReference> @ 14d576210

bool __cdecl
UE::CoreUObject::Private::Copy<FVector2fCameraVariableReference>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FBooleanCameraParameter> @ 14d5762a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBooleanCameraParameter>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FBooleanCameraParameter> @ 14d576380

void __cdecl UE::CoreUObject::Private::Destruct<FBooleanCameraParameter>(void *param_1)

{
  return;
}

// PostSerialize<FBooleanCameraParameter> @ 14d576410

void __cdecl
UE::CoreUObject::Private::PostSerialize<FBooleanCameraParameter>(FArchive *param_1,void *param_2)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if (((param_1->field_0x28 & 1) != 0) && (*(longlong *)((longlong)param_2 + 8) != 0)) {
    lVar2 = *(longlong *)(*(longlong *)((longlong)param_2 + 8) + 0x20);
    pUVar3 = UCameraRigAsset::StaticClass();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(undefined8 *)((longlong)param_2 + 8) = 0;
    }
  }
  return;
}

// Copy<FBooleanCameraParameter> @ 14d576470

bool __cdecl
UE::CoreUObject::Private::Copy<FBooleanCameraParameter>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_1 + lVar1 + 4);
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

// StructuredSerializeFromMismatchedTag<FBooleanCameraParameter> @ 14d576550

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FBooleanCameraParameter>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  FName FVar3;
  undefined1 local_res8 [8];
  
  FVar1 = param_1->Type;
  FVar2 = FNameEntryId::FromValidEName((EName)local_res8);
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  if (FVar1 == FVar3) {
    *(bool *)param_3 = param_1->BoolVal != '\0';
    return true;
  }
  return false;
}

// Construct<FCameraPose> @ 14d576a70

void __cdecl UE::CoreUObject::Private::Construct<FCameraPose>(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x84) = *(byte *)((longlong)param_1 + 0x84) & 0xfe;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x408f400000000000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x420c0000;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x44c00000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x40333333;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x42700000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0x41c71eb8;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x41955c29;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 100) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 8;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xbf800000;
  return;
}

// ConstructForTests<FCameraPose> @ 14d576b50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraPose>(void *param_1)

{
  *(byte *)((longlong)param_1 + 0x84) = *(byte *)((longlong)param_1 + 0x84) & 0xfe;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x408f400000000000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x420c0000;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0x44c00000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x40333333;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0x42700000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0x41c71eb8;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x41955c29;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 100) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 8;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xbf800000;
  return;
}

// Destruct<FCameraPose> @ 14d576bf0

void __cdecl UE::CoreUObject::Private::Destruct<FCameraPose>(void *param_1)

{
  return;
}

// Copy<FCameraPose> @ 14d576c80

bool __cdecl UE::CoreUObject::Private::Copy<FCameraPose>(void *param_1,void *param_2,int param_3)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  
  if (param_3 != 0) {
    lVar18 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar18 + 0x80 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar18 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar18 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar18 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar18 + 0x30 + (longlong)param_1);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      puVar1 = (undefined8 *)(lVar18 + 0x40 + (longlong)param_1);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      puVar1 = (undefined8 *)(lVar18 + 0x50 + (longlong)param_1);
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      puVar1 = (undefined8 *)(lVar18 + 0x60 + (longlong)param_1);
      uVar14 = *puVar1;
      uVar15 = puVar1[1];
      puVar1 = (undefined8 *)(lVar18 + 0x70 + (longlong)param_1);
      uVar16 = *puVar1;
      uVar17 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar18 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar12;
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar13;
      *(undefined8 *)((longlong)param_1 + 0x60) = uVar14;
      *(undefined8 *)((longlong)param_1 + 0x68) = uVar15;
      *(undefined8 *)((longlong)param_1 + 0x70) = uVar16;
      *(undefined8 *)((longlong)param_1 + 0x78) = uVar17;
      *(undefined8 *)((longlong)param_1 + 0x80) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x88);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCustomCameraNodeBlendableParameter> @ 14d576d30

void __cdecl UE::CoreUObject::Private::Construct<FCustomCameraNodeBlendableParameter>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FCustomCameraNodeBlendableParameter> @ 14d576d60

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCustomCameraNodeBlendableParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FCustomCameraNodeBlendableParameter> @ 14d576d80

void __cdecl UE::CoreUObject::Private::Destruct<FCustomCameraNodeBlendableParameter>(void *param_1)

{
  return;
}

// Construct<FRotator3dCameraRigParameterOverride> @ 14d576d90

void __cdecl
UE::CoreUObject::Private::Construct<FRotator3dCameraRigParameterOverride>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x31) = 0;
  *(undefined2 *)((longlong)param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// ConstructForTests<FRotator3dCameraRigParameterOverride> @ 14d576de0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRotator3dCameraRigParameterOverride>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// Destruct<FRotator3dCameraRigParameterOverride> @ 14d576e20

void __cdecl UE::CoreUObject::Private::Destruct<FRotator3dCameraRigParameterOverride>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
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

// Copy<FCustomCameraNodeBlendableParameter> @ 14d577000

bool __cdecl
UE::CoreUObject::Private::Copy<FCustomCameraNodeBlendableParameter>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x10) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x10));
      }
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x20) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x20));
      }
      puVar1 = (undefined8 *)((longlong)param_2 + 0x20);
      param_2 = (void *)((longlong)param_2 + 0x28);
      *(undefined8 *)((longlong)param_1 + 0x20) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDoubleCameraVariableReference> @ 14d5770c0

void __cdecl UE::CoreUObject::Private::Construct<FDoubleCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FDoubleCameraVariableReference> @ 14d5770e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDoubleCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Copy<FRotator3dCameraRigParameterOverride> @ 14d577100

bool __cdecl
UE::CoreUObject::Private::Copy<FRotator3dCameraRigParameterOverride>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar3 + (longlong)param_1);
      uVar2 = puVar1[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
      *(undefined1 *)((longlong)param_1 + 0x30) = *(undefined1 *)((longlong)param_2 + 0x30);
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x40);
      *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_2 + 0x48);
      *(undefined4 *)((longlong)param_1 + 0x50) = *(undefined4 *)((longlong)param_2 + 0x50);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x58) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x58));
      }
      puVar1 = (undefined8 *)((longlong)param_2 + 0x58);
      param_2 = (void *)((longlong)param_2 + 0x60);
      *(undefined8 *)((longlong)param_1 + 0x58) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x60);
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FDoubleCameraVariableReference> @ 14d5771e0

void __cdecl UE::CoreUObject::Private::Destruct<FDoubleCameraVariableReference>(void *param_1)

{
  return;
}

// Copy<FDoubleCameraVariableReference> @ 14d577230

bool __cdecl
UE::CoreUObject::Private::Copy<FDoubleCameraVariableReference>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayCamerasStateTreeCondition> @ 14d577480

void __cdecl UE::CoreUObject::Private::Construct<FGameplayCamerasStateTreeCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FGameplayCamerasStateTreeCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  return;
}

// ConstructForTests<FGameplayCamerasStateTreeCondition> @ 14d577500

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGameplayCamerasStateTreeCondition>(void *param_1)

{
  FStateTreeStateHandle FVar1;
  
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  FVar1 = FStateTreeDataHandle::Invalid.StateHandle;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) & 0xfe;
  *(byte *)((longlong)param_1 + 0x23) = *(byte *)((longlong)param_1 + 0x23) | 2;
  *(ushort *)((longlong)param_1 + 0x1c) = FVar1.Index;
  *(undefined ***)param_1 = &___7FGameplayCamerasStateTreeCondition__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  return;
}

// Destruct<FGameplayCamerasStateTreeCondition> @ 14d577580

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayCamerasStateTreeCondition>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FGameplayCamerasStateTreeCondition> @ 14d5775a0

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayCamerasStateTreeCondition>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  byte bVar2;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x20) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x21) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x21 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x22) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x22 - (longlong)param_1));
    bVar2 = (*(byte *)((longlong)pvVar1 + 0x23) ^
            *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 1 ^
            *(byte *)((longlong)pvVar1 + 0x23);
    *(byte *)((longlong)pvVar1 + 0x23) = bVar2;
    *(byte *)((longlong)pvVar1 + 0x23) =
         (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x23 - (longlong)param_1))) & 2
         ^ bVar2;
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// Construct<FTransform3dCameraParameter> @ 14d577950

void __cdecl UE::CoreUObject::Private::Construct<FTransform3dCameraParameter>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)param_1 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x10) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x18) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x20) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x28) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x30) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x38) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x40) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x48) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x50) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x58) = (double)fVar3;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// ConstructForTests<FTransform3dCameraParameter> @ 14d5779b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTransform3dCameraParameter>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)param_1 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 8) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x10) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x18) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x20) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x28) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x30) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x38) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x40) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x48) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x50) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x58) = (double)fVar3;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// Destruct<FTransform3dCameraParameter> @ 14d577a10

void __cdecl UE::CoreUObject::Private::Destruct<FTransform3dCameraParameter>(void *param_1)

{
  return;
}

// PostSerialize<FTransform3dCameraParameter> @ 14d577aa0

void __cdecl
UE::CoreUObject::Private::PostSerialize<FTransform3dCameraParameter>
          (FArchive *param_1,void *param_2)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if (((param_1->field_0x28 & 1) != 0) && (*(longlong *)((longlong)param_2 + 0x68) != 0)) {
    lVar2 = *(longlong *)(*(longlong *)((longlong)param_2 + 0x68) + 0x20);
    pUVar3 = UCameraRigAsset::StaticClass();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(undefined8 *)((longlong)param_2 + 0x68) = 0;
    }
  }
  return;
}

// Copy<FTransform3dCameraParameter> @ 14d577b00

bool __cdecl
UE::CoreUObject::Private::Copy<FTransform3dCameraParameter>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = param_1;
  puVar4 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar2;
    uVar2 = puVar4[3];
    puVar3[2] = puVar4[2];
    puVar3[3] = uVar2;
    uVar2 = puVar4[5];
    puVar3[4] = puVar4[4];
    puVar3[5] = uVar2;
    uVar2 = puVar4[7];
    puVar3[6] = puVar4[6];
    puVar3[7] = uVar2;
    uVar2 = puVar4[9];
    puVar3[8] = puVar4[8];
    puVar3[9] = uVar2;
    uVar2 = puVar4[0xb];
    puVar3[10] = puVar4[10];
    puVar3[0xb] = uVar2;
    *(undefined4 *)(puVar3 + 0xc) =
         *(undefined4 *)((longlong)puVar3 + (longlong)param_2 + (0x60 - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)puVar3 + (longlong)param_2 + (0x68 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    puVar3[0xd] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x68 - (longlong)param_1))
    ;
    puVar3 = puVar3 + 0xe;
    puVar4 = puVar4 + 0xe;
  }
  return true;
}

// Construct<FRotator3fCameraRigParameterOverride> @ 14d577cd0

void __cdecl
UE::CoreUObject::Private::Construct<FRotator3fCameraRigParameterOverride>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x31) = 0;
  *(undefined2 *)((longlong)param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FRotator3fCameraRigParameterOverride> @ 14d577d10

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FRotator3fCameraRigParameterOverride>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x44) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FRotator3fCameraRigParameterOverride> @ 14d577d50

void __cdecl UE::CoreUObject::Private::Destruct<FRotator3fCameraRigParameterOverride>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
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

// StructuredSerializeFromMismatchedTag<FTransform3dCameraParameter> @ 14d577d70

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FTransform3dCameraParameter>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  FName FVar1;
  bool bVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  FArchive *pFVar4;
  FSlotBase local_res8;
  uint local_res20 [2];
  
  local_res8.StructuredArchive._0_4_ = (param_1->TypeName).Index;
  FVar3 = FNameEntryId::FromValidEName((EName)local_res20);
  local_res20[0] = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  local_res20[1] = 0;
  FVar1.Number = 0;
  FVar1.ComparisonIndex.Value = local_res20[0];
  bVar2 = FPropertyTypeName::IsStruct((FPropertyTypeName *)&local_res8,FVar1);
  if (bVar2) {
    local_res8.StructuredArchive = (FStructuredArchive *)param_2;
    pFVar4 = StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
    UE::Math::operator<<(pFVar4,param_3);
    return true;
  }
  return false;
}

// Construct<FFloatCameraVariableReference> @ 14d577e40

void __cdecl UE::CoreUObject::Private::Construct<FFloatCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FFloatCameraVariableReference> @ 14d577e60

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FFloatCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Copy<FRotator3fCameraRigParameterOverride> @ 14d577e80

bool __cdecl
UE::CoreUObject::Private::Copy<FRotator3fCameraRigParameterOverride>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar3 + (longlong)param_1);
      uVar2 = puVar1[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
      *(undefined1 *)((longlong)param_1 + 0x30) = *(undefined1 *)((longlong)param_2 + 0x30);
      *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
      *(undefined4 *)((longlong)param_1 + 0x40) = *(undefined4 *)((longlong)param_2 + 0x40);
      *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x48) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x48));
      }
      puVar1 = (undefined8 *)((longlong)param_2 + 0x48);
      param_2 = (void *)((longlong)param_2 + 0x50);
      *(undefined8 *)((longlong)param_1 + 0x48) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x50);
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FFloatCameraVariableReference> @ 14d577f60

void __cdecl UE::CoreUObject::Private::Destruct<FFloatCameraVariableReference>(void *param_1)

{
  return;
}

// Copy<FFloatCameraVariableReference> @ 14d577fc0

bool __cdecl
UE::CoreUObject::Private::Copy<FFloatCameraVariableReference>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FGameplayCamerasStateTreeTask> @ 14d578180

void __cdecl UE::CoreUObject::Private::Construct<FGameplayCamerasStateTreeTask>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FGameplayCamerasStateTreeTask__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0x2db;
  return;
}

// ConstructForTests<FGameplayCamerasStateTreeTask> @ 14d578200

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FGameplayCamerasStateTreeTask>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(ushort *)((longlong)param_1 + 0x10) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x12) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x14) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)param_1 + 0x16) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)((longlong)param_1 + 0x18) = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)param_1 + 0x1c) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  *(undefined ***)param_1 = &___7FGameplayCamerasStateTreeTask__6B_;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0x2db;
  return;
}

// Destruct<FGameplayCamerasStateTreeTask> @ 14d578270

void __cdecl UE::CoreUObject::Private::Destruct<FGameplayCamerasStateTreeTask>(void *param_1)

{
  *(undefined ***)param_1 = &___7FStateTreeNodeBase__6B_;
  return;
}

// Copy<FGameplayCamerasStateTreeTask> @ 14d5783d0

bool __cdecl
UE::CoreUObject::Private::Copy<FGameplayCamerasStateTreeTask>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  byte bVar2;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined2 *)((longlong)pvVar1 + 0x10) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x12) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x12 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x14) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x16) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x16 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x18) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined2 *)((longlong)pvVar1 + 0x1c) =
         *(undefined2 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    bVar2 = (*(byte *)((longlong)pvVar1 + 0x20) ^
            *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1))) & 1 ^
            *(byte *)((longlong)pvVar1 + 0x20);
    *(byte *)((longlong)pvVar1 + 0x20) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1))) &
            2 ^ bVar2;
    *(byte *)((longlong)pvVar1 + 0x20) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1))) &
            4 ^ bVar2;
    *(byte *)((longlong)pvVar1 + 0x20) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1))) &
            8 ^ bVar2;
    *(byte *)((longlong)pvVar1 + 0x20) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1))) &
            0x10 ^ bVar2;
    *(byte *)((longlong)pvVar1 + 0x20) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1))) &
            0x20 ^ bVar2;
    *(byte *)((longlong)pvVar1 + 0x20) = bVar2;
    bVar2 = (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1))) &
            0x40 ^ bVar2;
    *(byte *)((longlong)pvVar1 + 0x20) = bVar2;
    *(byte *)((longlong)pvVar1 + 0x20) =
         (bVar2 ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1))) &
         0x7f ^ *(byte *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x21) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x21 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// Construct<FCameraObjectInterface> @ 14d5784d0

void __cdecl UE::CoreUObject::Private::Construct<FCameraObjectInterface>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FCameraObjectInterface> @ 14d578530

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraObjectInterface>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FCameraObjectInterface> @ 14d578550

void __cdecl UE::CoreUObject::Private::Destruct<FCameraObjectInterface>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FCameraObjectInterface> @ 14d578720

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraObjectInterface>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType *pFVar7;
  
  if (param_3 != 0) {
    pFVar7 = param_1;
    do {
      pFVar3 = (ForAnyElementType *)((longlong)pFVar7 + ((longlong)param_2 - (longlong)param_1));
      if (pFVar7 != pFVar3) {
        iVar4 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
        pFVar6 = pFVar3->Data;
        iVar5 = *piVar1;
        *(int *)&pFVar7[1].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,iVar5,pFVar7,iVar4,piVar1);
          ConstructItems<TObjectPtr<UCameraObjectInterfaceBlendableParameter>,TObjectPtr<UCameraObjectInterfaceBlendableParameter>,int>
                    (pFVar7->Data,(TObjectPtr<UCameraObjectInterfaceBlendableParameter> *)pFVar6,
                     iVar4);
        }
      }
      pFVar2 = pFVar7 + 2;
      if (pFVar2 != pFVar3 + 2) {
        iVar4 = *(int *)&pFVar3[3].Data;
        piVar1 = (int *)((longlong)&pFVar7[3].Data + 4);
        pFVar6 = pFVar3[2].Data;
        iVar5 = *piVar1;
        *(int *)&pFVar7[3].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,iVar5,pFVar2,iVar4,piVar1);
          ConstructItems<TObjectPtr<UCameraObjectInterfaceDataParameter>,TObjectPtr<UCameraObjectInterfaceDataParameter>,int>
                    (pFVar2->Data,(TObjectPtr<UCameraObjectInterfaceDataParameter> *)pFVar6,iVar4);
        }
      }
      ::FString::operator=((FString *)(pFVar7 + 4),(FString *)(pFVar3 + 4));
      param_3 = param_3 + -1;
      pFVar7 = pFVar7 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCameraVariableTableAllocationInfo> @ 14d578960

void __cdecl UE::CoreUObject::Private::Construct<FCameraVariableTableAllocationInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FCameraVariableTableAllocationInfo> @ 14d578970

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCameraVariableTableAllocationInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FCameraVariableTableAllocationInfo> @ 14d578980

void __cdecl UE::CoreUObject::Private::Destruct<FCameraVariableTableAllocationInfo>(void *param_1)

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

// Copy<FCameraVariableTableAllocationInfo> @ 14d578aa0

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraVariableTableAllocationInfo>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FCameraVariableDefinition *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FCameraVariableDefinition *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FCameraVariableDefinition,FCameraVariableDefinition,int>
                    (pFVar6->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FCameraVariableTableAllocationInfo> @ 14d578b70

bool __cdecl
UE::CoreUObject::Private::Identical<FCameraVariableTableAllocationInfo>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  bool bVar1;
  
  if (*(int *)((longlong)param_1 + 8) == *(int *)((longlong)param_2 + 8)) {
    bVar1 = CompareItems<FCameraVariableDefinition,int>
                      (*(FCameraVariableDefinition **)param_1,*(FCameraVariableDefinition **)param_2
                       ,*(int *)((longlong)param_1 + 8));
    if (bVar1) {
      *param_4 = true;
      return true;
    }
  }
  *param_4 = false;
  return true;
}

// Construct<FVector4dCameraRigParameterOverride> @ 14d578bf0

void __cdecl UE::CoreUObject::Private::Construct<FVector4dCameraRigParameterOverride>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x31) = 0;
  *(undefined4 *)((longlong)param_1 + 0x39) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// ConstructForTests<FVector4dCameraRigParameterOverride> @ 14d578c40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FVector4dCameraRigParameterOverride>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x60) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// Construct<FTransform3fCameraParameter> @ 14d578c80

void __cdecl UE::CoreUObject::Private::Construct<FTransform3fCameraParameter>(void *param_1)

{
  *(__m128 *)param_1 = GlobalVectorConstants::Float0001;
  *(__m128 *)((longlong)param_1 + 0x10) = GlobalVectorConstants::FloatZero;
  *(__m128 *)((longlong)param_1 + 0x20) = GlobalVectorConstants::Float1110;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FVector4dCameraRigParameterOverride> @ 14d578cc0

void __cdecl UE::CoreUObject::Private::Destruct<FVector4dCameraRigParameterOverride>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
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

// ConstructForTests<FTransform3fCameraParameter> @ 14d578ce0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTransform3fCameraParameter>(void *param_1)

{
  *(__m128 *)param_1 = GlobalVectorConstants::Float0001;
  *(__m128 *)((longlong)param_1 + 0x10) = GlobalVectorConstants::FloatZero;
  *(__m128 *)((longlong)param_1 + 0x20) = GlobalVectorConstants::Float1110;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FTransform3fCameraParameter> @ 14d578d20

void __cdecl UE::CoreUObject::Private::Destruct<FTransform3fCameraParameter>(void *param_1)

{
  return;
}

// PostSerialize<FTransform3fCameraParameter> @ 14d578d70

void __cdecl
UE::CoreUObject::Private::PostSerialize<FTransform3fCameraParameter>
          (FArchive *param_1,void *param_2)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if (((param_1->field_0x28 & 1) != 0) && (*(longlong *)((longlong)param_2 + 0x38) != 0)) {
    lVar2 = *(longlong *)(*(longlong *)((longlong)param_2 + 0x38) + 0x20);
    pUVar3 = UCameraRigAsset::StaticClass();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(undefined8 *)((longlong)param_2 + 0x38) = 0;
    }
  }
  return;
}

// Construct<FInteger32CameraVariableReference> @ 14d578dd0

void __cdecl UE::CoreUObject::Private::Construct<FInteger32CameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FInteger32CameraVariableReference> @ 14d578df0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FInteger32CameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Copy<FVector4dCameraRigParameterOverride> @ 14d578e10

bool __cdecl
UE::CoreUObject::Private::Copy<FVector4dCameraRigParameterOverride>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar3 + (longlong)param_1);
      uVar2 = puVar1[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
      *(undefined1 *)((longlong)param_1 + 0x30) = *(undefined1 *)((longlong)param_2 + 0x30);
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x48);
      *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x58);
      *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x60) = *(undefined4 *)((longlong)param_2 + 0x60);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x68) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x68));
      }
      puVar1 = (undefined8 *)((longlong)param_2 + 0x68);
      param_2 = (void *)((longlong)param_2 + 0x70);
      *(undefined8 *)((longlong)param_1 + 0x68) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x70);
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FInteger32CameraVariableReference> @ 14d578ee0

void __cdecl UE::CoreUObject::Private::Destruct<FInteger32CameraVariableReference>(void *param_1)

{
  return;
}

// Copy<FTransform3fCameraParameter> @ 14d578f30

bool __cdecl
UE::CoreUObject::Private::Copy<FTransform3fCameraParameter>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = param_1;
  puVar4 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar2;
    uVar2 = puVar4[3];
    puVar3[2] = puVar4[2];
    puVar3[3] = uVar2;
    uVar2 = puVar4[5];
    puVar3[4] = puVar4[4];
    puVar3[5] = uVar2;
    *(undefined4 *)(puVar3 + 6) =
         *(undefined4 *)((longlong)puVar3 + (longlong)param_2 + (0x30 - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)puVar3 + (longlong)param_2 + (0x38 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    puVar3[7] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x38 - (longlong)param_1));
    puVar3 = puVar3 + 8;
    puVar4 = puVar4 + 8;
  }
  return true;
}

// Copy<FInteger32CameraVariableReference> @ 14d579060

bool __cdecl
UE::CoreUObject::Private::Copy<FInteger32CameraVariableReference>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FTransform3fCameraParameter> @ 14d5790f0

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FTransform3fCameraParameter>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  FName FVar1;
  bool bVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  FArchive *pFVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  FSlotBase local_res8;
  uint local_res20 [2];
  
  local_res8.StructuredArchive._0_4_ = (param_1->TypeName).Index;
  FVar3 = FNameEntryId::FromValidEName((EName)local_res20);
  local_res20[0] = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  local_res20[1] = 0;
  FVar1.Number = 0;
  FVar1.ComparisonIndex.Value = local_res20[0];
  bVar2 = FPropertyTypeName::IsStruct((FPropertyTypeName *)&local_res8,FVar1);
  if (bVar2) {
    local_res8.StructuredArchive = (FStructuredArchive *)param_2;
    pFVar4 = StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
    UE::Math::operator<<(pFVar4,param_3);
    UE::Math::operator<<(pFVar4,(TVector<float> *)((longlong)param_3 + 0x10));
    UE::Math::operator<<(pFVar4,(TVector<float> *)((longlong)param_3 + 0x20));
    if ((pFVar4->field_0x28 & 1) != 0) {
      auVar5 = insertps(*(undefined1 (*) [16])((longlong)param_3 + 0x10),
                        *(undefined1 (*) [16])((longlong)param_3 + 0x10),8);
      auVar6 = insertps(*(undefined1 (*) [16])((longlong)param_3 + 0x20),
                        *(undefined1 (*) [16])((longlong)param_3 + 0x20),8);
      *(undefined1 (*) [16])((longlong)param_3 + 0x10) = auVar5;
      *(undefined1 (*) [16])((longlong)param_3 + 0x20) = auVar6;
    }
    return true;
  }
  return false;
}

// Construct<FCameraDirectorStateTreeEvaluationData> @ 14d579240

void __cdecl
UE::CoreUObject::Private::Construct<FCameraDirectorStateTreeEvaluationData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FCameraDirectorStateTreeEvaluationData> @ 14d5792a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCameraDirectorStateTreeEvaluationData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FCameraDirectorStateTreeEvaluationData> @ 14d579340

void __cdecl
UE::CoreUObject::Private::Destruct<FCameraDirectorStateTreeEvaluationData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FCameraDirectorStateTreeEvaluationData> @ 14d5798e0

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraDirectorStateTreeEvaluationData>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType *pFVar7;
  
  if (param_3 != 0) {
    pFVar7 = param_1;
    do {
      pFVar3 = (ForAnyElementType *)((longlong)pFVar7 + ((longlong)param_2 - (longlong)param_1));
      if (pFVar7 != pFVar3) {
        iVar4 = *(int *)&pFVar3[1].Data;
        piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
        pFVar6 = pFVar3->Data;
        iVar5 = *piVar1;
        *(int *)&pFVar7[1].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,iVar5,pFVar7,iVar4,piVar1);
          ConstructItems<TObjectPtr<UCameraRigAsset>,TObjectPtr<UCameraRigAsset>,int>
                    (pFVar7->Data,(TObjectPtr<UCameraRigAsset> *)pFVar6,iVar4);
        }
      }
      pFVar2 = pFVar7 + 2;
      if (pFVar2 != pFVar3 + 2) {
        iVar4 = *(int *)&pFVar3[3].Data;
        piVar1 = (int *)((longlong)&pFVar7[3].Data + 4);
        pFVar6 = pFVar3[2].Data;
        iVar5 = *piVar1;
        *(int *)&pFVar7[3].Data = iVar4;
        if ((iVar4 == 0) && (iVar5 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,iVar5,pFVar2,iVar4,piVar1);
          ConstructItems<TObjectPtr<UCameraRigProxyAsset>,TObjectPtr<UCameraRigProxyAsset>,int>
                    (pFVar2->Data,(TObjectPtr<UCameraRigProxyAsset> *)pFVar6,iVar4);
        }
      }
      param_3 = param_3 + -1;
      pFVar7 = pFVar7 + 4;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FVector4fCameraRigParameterOverride> @ 14d579d90

void __cdecl UE::CoreUObject::Private::Construct<FVector4fCameraRigParameterOverride>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x31) = 0;
  *(undefined4 *)((longlong)param_1 + 0x39) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// ConstructForTests<FVector4fCameraRigParameterOverride> @ 14d579de0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FVector4fCameraRigParameterOverride>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// Destruct<FVector4fCameraRigParameterOverride> @ 14d579e60

void __cdecl UE::CoreUObject::Private::Destruct<FVector4fCameraRigParameterOverride>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
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

// Construct<FBooleanCameraVariableReference> @ 14d579e80

void __cdecl UE::CoreUObject::Private::Construct<FBooleanCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FBooleanCameraVariableReference> @ 14d579ea0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FBooleanCameraVariableReference>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Copy<FVector4fCameraRigParameterOverride> @ 14d579ec0

bool __cdecl
UE::CoreUObject::Private::Copy<FVector4fCameraRigParameterOverride>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar3 + (longlong)param_1);
      uVar2 = puVar1[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
      *(undefined1 *)((longlong)param_1 + 0x30) = *(undefined1 *)((longlong)param_2 + 0x30);
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x48);
      *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x50) = *(undefined4 *)((longlong)param_2 + 0x50);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x58) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x58));
      }
      puVar1 = (undefined8 *)((longlong)param_2 + 0x58);
      param_2 = (void *)((longlong)param_2 + 0x60);
      *(undefined8 *)((longlong)param_1 + 0x58) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x60);
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FBooleanCameraVariableReference> @ 14d579f80

void __cdecl UE::CoreUObject::Private::Destruct<FBooleanCameraVariableReference>(void *param_1)

{
  return;
}

// Construct<FRotator3dCameraParameter> @ 14d579fd0

void __cdecl UE::CoreUObject::Private::Construct<FRotator3dCameraParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Copy<FBooleanCameraVariableReference> @ 14d579ff0

bool __cdecl
UE::CoreUObject::Private::Copy<FBooleanCameraVariableReference>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)param_1 + lVar2 + 8), pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar2 + 8);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FRotator3dCameraParameter> @ 14d57a080

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRotator3dCameraParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FRotator3dCameraParameter> @ 14d57a0a0

void __cdecl UE::CoreUObject::Private::Destruct<FRotator3dCameraParameter>(void *param_1)

{
  return;
}

// PostSerialize<FRotator3dCameraParameter> @ 14d57a0f0

void __cdecl
UE::CoreUObject::Private::PostSerialize<FRotator3dCameraParameter>(FArchive *param_1,void *param_2)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if (((param_1->field_0x28 & 1) != 0) && (*(longlong *)((longlong)param_2 + 0x20) != 0)) {
    lVar2 = *(longlong *)(*(longlong *)((longlong)param_2 + 0x20) + 0x20);
    pUVar3 = UCameraRigAsset::StaticClass();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(undefined8 *)((longlong)param_2 + 0x20) = 0;
    }
  }
  return;
}

// Copy<FRotator3dCameraParameter> @ 14d57a250

bool __cdecl
UE::CoreUObject::Private::Copy<FRotator3dCameraParameter>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = param_1;
  puVar4 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar2;
    puVar3[2] = puVar4[2];
    *(undefined4 *)(puVar3 + 3) =
         *(undefined4 *)((longlong)puVar3 + (longlong)param_2 + (0x18 - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)puVar3 + (longlong)param_2 + (0x20 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    puVar3[4] = *(undefined8 *)((longlong)puVar3 + (longlong)param_2 + (0x20 - (longlong)param_1));
    puVar3 = puVar3 + 5;
    puVar4 = puVar4 + 5;
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FRotator3dCameraParameter> @ 14d57a400

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FRotator3dCameraParameter>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  FName FVar1;
  bool bVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  FArchive *pFVar4;
  FSlotBase local_res8;
  uint local_res20 [2];
  
  local_res8.StructuredArchive._0_4_ = (param_1->TypeName).Index;
  FVar3 = FNameEntryId::FromValidEName((EName)local_res20);
  local_res20[0] = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  local_res20[1] = 0;
  FVar1.Number = 0;
  FVar1.ComparisonIndex.Value = local_res20[0];
  bVar2 = FPropertyTypeName::IsStruct((FPropertyTypeName *)&local_res8,FVar1);
  if (bVar2) {
    local_res8.StructuredArchive = (FStructuredArchive *)param_2;
    pFVar4 = StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
    UE::Math::operator<<(pFVar4,param_3);
    return true;
  }
  return false;
}

// Construct<FCameraVariableDefinition> @ 14d57a550

void __cdecl UE::CoreUObject::Private::Construct<FCameraVariableDefinition>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x13) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  return;
}

// ConstructForTests<FCameraVariableDefinition> @ 14d57a5c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraVariableDefinition>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  return;
}

// Destruct<FCameraVariableDefinition> @ 14d57a5e0

void __cdecl UE::CoreUObject::Private::Destruct<FCameraVariableDefinition>(void *param_1)

{
  return;
}

// Copy<FCameraVariableDefinition> @ 14d57a6b0

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraVariableDefinition>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      puVar2[1] = *(undefined4 *)((longlong)pvVar1 + 4);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 8) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 8));
      }
      *(undefined8 *)(puVar2 + 2) = *(undefined8 *)((longlong)pvVar1 + 8);
      *(undefined1 *)(puVar2 + 4) = *(undefined1 *)((longlong)pvVar1 + 0x10);
      *(undefined1 *)((longlong)puVar2 + 0x11) = *(undefined1 *)((longlong)pvVar1 + 0x11);
      *(undefined1 *)((longlong)puVar2 + 0x12) = *(undefined1 *)((longlong)pvVar1 + 0x12);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x18);
      puVar2 = puVar2 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FCameraVariableDefinition> @ 14d57a7a0

bool __cdecl
UE::CoreUObject::Private::Identical<FCameraVariableDefinition>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  if ((((*(int *)param_1 == *(int *)param_2) &&
       (*(int *)((longlong)param_1 + 4) == *(int *)((longlong)param_2 + 4))) &&
      (*(longlong *)((longlong)param_1 + 8) == *(longlong *)((longlong)param_2 + 8))) &&
     (((*(char *)((longlong)param_1 + 0x10) == *(char *)((longlong)param_2 + 0x10) &&
       (*(char *)((longlong)param_1 + 0x11) == *(char *)((longlong)param_2 + 0x11))) &&
      (*(char *)((longlong)param_1 + 0x12) == *(char *)((longlong)param_2 + 0x12))))) {
    *param_4 = true;
    return true;
  }
  *param_4 = false;
  return true;
}

// Construct<FVector3dCameraRigParameterOverride> @ 14d57a930

void __cdecl UE::CoreUObject::Private::Construct<FVector3dCameraRigParameterOverride>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x31) = 0;
  *(undefined2 *)((longlong)param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// ConstructForTests<FVector3dCameraRigParameterOverride> @ 14d57a980

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FVector3dCameraRigParameterOverride>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// Destruct<FVector3dCameraRigParameterOverride> @ 14d57a9c0

void __cdecl UE::CoreUObject::Private::Destruct<FVector3dCameraRigParameterOverride>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
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

// Copy<FVector3dCameraRigParameterOverride> @ 14d57ab20

bool __cdecl
UE::CoreUObject::Private::Copy<FVector3dCameraRigParameterOverride>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar3 + (longlong)param_1);
      uVar2 = puVar1[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
      *(undefined1 *)((longlong)param_1 + 0x30) = *(undefined1 *)((longlong)param_2 + 0x30);
      uVar2 = *(undefined8 *)((longlong)param_2 + 0x40);
      *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_2 + 0x48);
      *(undefined4 *)((longlong)param_1 + 0x50) = *(undefined4 *)((longlong)param_2 + 0x50);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x58) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x58));
      }
      puVar1 = (undefined8 *)((longlong)param_2 + 0x58);
      param_2 = (void *)((longlong)param_2 + 0x60);
      *(undefined8 *)((longlong)param_1 + 0x58) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x60);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRotator3fCameraParameter> @ 14d57acd0

void __cdecl UE::CoreUObject::Private::Construct<FRotator3fCameraParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FRotator3fCameraParameter> @ 14d57adb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRotator3fCameraParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FRotator3fCameraParameter> @ 14d57add0

void __cdecl UE::CoreUObject::Private::Destruct<FRotator3fCameraParameter>(void *param_1)

{
  return;
}

// PostSerialize<FRotator3fCameraParameter> @ 14d57af20

void __cdecl
UE::CoreUObject::Private::PostSerialize<FRotator3fCameraParameter>(FArchive *param_1,void *param_2)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  if (((param_1->field_0x28 & 1) != 0) && (*(longlong *)((longlong)param_2 + 0x10) != 0)) {
    lVar2 = *(longlong *)(*(longlong *)((longlong)param_2 + 0x10) + 0x20);
    pUVar3 = UCameraRigAsset::StaticClass();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(undefined8 *)((longlong)param_2 + 0x10) = 0;
    }
  }
  return;
}

// Copy<FRotator3fCameraParameter> @ 14d57b040

bool __cdecl
UE::CoreUObject::Private::Copy<FRotator3fCameraParameter>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = param_1;
  puVar3 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *puVar2 = *puVar3;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
    *(undefined4 *)((longlong)puVar2 + 0xc) =
         *(undefined4 *)((longlong)puVar2 + (longlong)param_2 + (0xc - (longlong)param_1));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)puVar2 + (longlong)param_2 + (0x10 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    puVar2[2] = *(undefined8 *)((longlong)puVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    puVar2 = puVar2 + 3;
    puVar3 = puVar3 + 3;
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FRotator3fCameraParameter> @ 14d57b160

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FRotator3fCameraParameter>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  bool bVar1;
  
  bVar1 = FRotator3fCameraParameter::SerializeFromMismatchedTag(param_3,param_1,param_2);
  return bVar1;
}

// CheckStructType<FBooleanCameraParameter> @ 14d57dff0

void __cdecl UE::StructUtils::CheckStructType<FBooleanCameraParameter>(void)

{
  return;
}

// CheckStructType<FCameraDirectorStateTreeEvaluationData> @ 14d57e000

void __cdecl UE::StructUtils::CheckStructType<FCameraDirectorStateTreeEvaluationData>(void)

{
  return;
}

// CheckStructType<FDoubleCameraParameter> @ 14d57e010

void __cdecl UE::StructUtils::CheckStructType<FDoubleCameraParameter>(void)

{
  return;
}

// CheckStructType<FFloatCameraParameter> @ 14d57e020

void __cdecl UE::StructUtils::CheckStructType<FFloatCameraParameter>(void)

{
  return;
}

// CheckStructType<FInteger32CameraParameter> @ 14d57e030

void __cdecl UE::StructUtils::CheckStructType<FInteger32CameraParameter>(void)

{
  return;
}

// CheckStructType<FRotator3dCameraParameter> @ 14d57e040

void __cdecl UE::StructUtils::CheckStructType<FRotator3dCameraParameter>(void)

{
  return;
}

// CheckStructType<FRotator3fCameraParameter> @ 14d57e050

void __cdecl UE::StructUtils::CheckStructType<FRotator3fCameraParameter>(void)

{
  return;
}

// CheckStructType<FTransform3dCameraParameter> @ 14d57e060

void __cdecl UE::StructUtils::CheckStructType<FTransform3dCameraParameter>(void)

{
  return;
}

// CheckStructType<FTransform3fCameraParameter> @ 14d57e070

void __cdecl UE::StructUtils::CheckStructType<FTransform3fCameraParameter>(void)

{
  return;
}

// CheckStructType<FVector2dCameraParameter> @ 14d57e080

void __cdecl UE::StructUtils::CheckStructType<FVector2dCameraParameter>(void)

{
  return;
}

// CheckStructType<FVector2fCameraParameter> @ 14d57e090

void __cdecl UE::StructUtils::CheckStructType<FVector2fCameraParameter>(void)

{
  return;
}

// CheckStructType<FVector3dCameraParameter> @ 14d57e0a0

void __cdecl UE::StructUtils::CheckStructType<FVector3dCameraParameter>(void)

{
  return;
}

// CheckStructType<FVector3fCameraParameter> @ 14d57e0b0

void __cdecl UE::StructUtils::CheckStructType<FVector3fCameraParameter>(void)

{
  return;
}

// CheckStructType<FVector4dCameraParameter> @ 14d57e0c0

void __cdecl UE::StructUtils::CheckStructType<FVector4dCameraParameter>(void)

{
  return;
}

// CheckStructType<FVector4fCameraParameter> @ 14d57e0d0

void __cdecl UE::StructUtils::CheckStructType<FVector4fCameraParameter>(void)

{
  return;
}

// DebugDrawCameraPoseField<int> @ 14d57f060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Cameras::Private::DebugDrawCameraPoseField<int>
          (FCameraDebugRenderer *param_1,wchar_t *param_2,int param_3,FColor *param_4)

{
  FString local_18;
  
  FCameraDebugRenderer::FlushText(param_1);
  (param_1->DrawColor).field0_0x0 = param_4->field0_0x0;
  ::FString::PrintfImpl(&local_18,L"%d");
  FCameraDebugRenderer::AddText(param_1,L"%s  : %s\n");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// DebugDrawCameraPoseField<float> @ 14d57f0f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Cameras::Private::DebugDrawCameraPoseField<float>
          (FCameraDebugRenderer *param_1,wchar_t *param_2,float param_3,FColor *param_4)

{
  FString local_28 [2];
  
  FCameraDebugRenderer::FlushText(param_1);
  (param_1->DrawColor).field0_0x0 = param_4->field0_0x0;
  ::FString::PrintfImpl(local_28,L"%f");
  FCameraDebugRenderer::AddText(param_1,L"%s  : %s\n");
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return;
}

// DebugDrawCameraPoseField<double> @ 14d57f190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Cameras::Private::DebugDrawCameraPoseField<double>
          (FCameraDebugRenderer *param_1,wchar_t *param_2,double param_3,FColor *param_4)

{
  FString local_28 [2];
  
  FCameraDebugRenderer::FlushText(param_1);
  (param_1->DrawColor).field0_0x0 = param_4->field0_0x0;
  ::FString::PrintfImpl(local_28,L"%f");
  FCameraDebugRenderer::AddText(param_1,L"%s  : %s\n");
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return;
}

// DebugDrawCameraPoseField<UE::Math::TRotator<double>_> @ 14d57f230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Cameras::Private::DebugDrawCameraPoseField<UE::Math::TRotator<double>_>
          (FCameraDebugRenderer *param_1,wchar_t *param_2,TRotator<double> *param_3,FColor *param_4)

{
  FString local_18;
  
  FCameraDebugRenderer::FlushText(param_1);
  (param_1->DrawColor).field0_0x0 = param_4->field0_0x0;
  ::FString::PrintfImpl(&local_18,L"P=%f Y=%f R=%f");
  FCameraDebugRenderer::AddText(param_1,L"%s  : %s\n");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// DebugDrawCameraPoseField<UE::Math::TVector<double>_> @ 14d57f2e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Cameras::Private::DebugDrawCameraPoseField<UE::Math::TVector<double>_>
          (FCameraDebugRenderer *param_1,wchar_t *param_2,TVector<double> *param_3,FColor *param_4)

{
  FString local_18;
  
  FCameraDebugRenderer::FlushText(param_1);
  (param_1->DrawColor).field0_0x0 = param_4->field0_0x0;
  ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f Z=%3.3f");
  FCameraDebugRenderer::AddText(param_1,L"%s  : %s\n");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// DebugDrawCameraPoseField<enum_EAspectRatioAxisConstraint> @ 14d57f390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Cameras::Private::DebugDrawCameraPoseField<enum_EAspectRatioAxisConstraint>
          (FCameraDebugRenderer *param_1,wchar_t *param_2,EAspectRatioAxisConstraint param_3,
          FColor *param_4)

{
  wchar_t *pwVar1;
  FString local_18;
  
  FCameraDebugRenderer::FlushText(param_1);
  (param_1->DrawColor).field0_0x0 = param_4->field0_0x0;
  if (param_3 == AspectRatio_MaintainYFOV) {
    pwVar1 = L"Maintain Y-Axis FOV";
  }
  else if (param_3 == AspectRatio_MaintainXFOV) {
    pwVar1 = L"Maintain X-Axis FOV";
  }
  else if (param_3 == AspectRatio_MajorAxisFOV) {
    pwVar1 = L"Maintain Major Axis FOV";
  }
  else {
    pwVar1 = L"Invalid";
  }
  ::FString::FString(&local_18,pwVar1);
  FCameraDebugRenderer::AddText(param_1,L"%s  : %s\n");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// DebugDrawCameraPoseField<enum_ECameraProjectionMode::Type> @ 14d57f450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Cameras::Private::DebugDrawCameraPoseField<enum_ECameraProjectionMode::Type>
          (FCameraDebugRenderer *param_1,wchar_t *param_2,Type param_3,FColor *param_4)

{
  wchar_t *pwVar1;
  FString local_18;
  
  FCameraDebugRenderer::FlushText(param_1);
  (param_1->DrawColor).field0_0x0 = param_4->field0_0x0;
  if (param_3 == Perspective) {
    pwVar1 = L"Perspective";
  }
  else if (param_3 == Orthographic) {
    pwVar1 = L"Orthographic";
  }
  else {
    pwVar1 = L"Invalid";
  }
  ::FString::FString(&local_18,pwVar1);
  FCameraDebugRenderer::AddText(param_1,L"%s  : %s\n");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// DebugDrawCameraPoseField<bool> @ 14d57f500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Cameras::Private::DebugDrawCameraPoseField<bool>
          (FCameraDebugRenderer *param_1,wchar_t *param_2,bool param_3,FColor *param_4)

{
  wchar_t *pwVar1;
  FString local_18;
  
  FCameraDebugRenderer::FlushText(param_1);
  pwVar1 = L"true";
  (param_1->DrawColor).field0_0x0 = param_4->field0_0x0;
  if (!param_3) {
    pwVar1 = L"false";
  }
  ::FString::FString(&local_18,pwVar1);
  FCameraDebugRenderer::AddText(param_1,L"%s  : %s\n");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// DereferenceIfNecessary<UE::Cameras::FDefaultRootCameraNodeEvaluator,UE::Cameras::FDefaultRootCameraNodeEvaluator_*_&> @ 14d57f730

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FDefaultRootCameraNodeEvaluator * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Cameras::FDefaultRootCameraNodeEvaluator,UE::Cameras::FDefaultRootCameraNodeEvaluator_*_&>
          (FDefaultRootCameraNodeEvaluator **param_1)

{
  return *param_1;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraNodeEvaluator_*>_> @ 14d587ab0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraNodeEvaluator_*>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Cameras::FCameraNodeEvaluator_*> *param_5,int param_6,int *param_7)

{
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = (ulonglong)param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      uVar1 = 4;
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
  if (uVar1 < 5) {
    if (param_5->SecondaryData == (ForElementType<UE::Cameras::FCameraNodeEvaluator_*>)0x0)
    goto LAB_14d587b1e;
    uVar4 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_5->SecondaryData,0,uVar4,uVar3);
LAB_14d587b1e:
  *param_7 = uVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_>_> @ 14d587b60

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_> *param_5,
          int param_6,int *param_7)

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
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
  ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>_> @ 14d587c00

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> *param_5,int param_6,
          int *param_7)

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
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigJoint>_> @ 14d587ca0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigJoint>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Cameras::FCameraRigJoint> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<UE::Cameras::FCameraRigJoint>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_>_> @ 14d587d40

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_>_>
          (ushort param_1,
          ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_> *param_2,
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
    ForElementType<TWeakObjectPtr<UCameraRigAsset_const_,FWeakObjectPtr>_>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>_> @ 14d587e00

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>_>
          (ushort param_1,
          ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> *param_2,int *param_3
          )

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
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
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
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>_> @ 14d587ed0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>_>
          (ushort param_1,
          ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> *param_2,int *param_3
          )

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
    ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigJoint>_> @ 14d587f90

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigJoint>_>
          (ushort param_1,ForElementType<UE::Cameras::FCameraRigJoint> *param_2,int *param_3)

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
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
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
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Cameras::FCameraRigJoint>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>_> @ 14d588060

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>_>
          (ushort param_1,ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry> *param_2,
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
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
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
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>_> @ 14d588130

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> *param_4,int param_5,
          int *param_6)

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
    ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigJoint>_> @ 14d5881b0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigJoint>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Cameras::FCameraRigJoint> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
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
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Cameras::FCameraRigJoint>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>_> @ 14d588230

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
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
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Cameras::FCameraRigJointsDebugBlock::FEntry>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ToDebugString<unsigned_char> @ 14d58acc0

FString * __cdecl
UE::Cameras::ToDebugString<unsigned_char>(FString *__return_storage_ptr__,uchar *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%u");
  return __return_storage_ptr__;
}

// ToDebugString<int> @ 14d58acf0

FString * __cdecl UE::Cameras::ToDebugString<int>(FString *__return_storage_ptr__,int *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// ToDebugString<unsigned_int> @ 14d58ad20

FString * __cdecl
UE::Cameras::ToDebugString<unsigned_int>(FString *__return_storage_ptr__,uint *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%u");
  return __return_storage_ptr__;
}

// ToDebugString<float> @ 14d58ad50

FString * __cdecl UE::Cameras::ToDebugString<float>(FString *__return_storage_ptr__,float *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%f");
  return __return_storage_ptr__;
}

// ToDebugString<float> @ 14d58ad80

FString * __cdecl
UE::Cameras::ToDebugString<float>(FString *__return_storage_ptr__,TRotator<float> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"P=%f Y=%f R=%f");
  return __return_storage_ptr__;
}

// ToDebugString<float> @ 14d58add0

FString * __cdecl
UE::Cameras::ToDebugString<float>(FString *__return_storage_ptr__,TTransform<float> *param_1)

{
  UE::Math::TTransform<float>::ToString(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToDebugString<float> @ 14d58ae00

FString * __cdecl
UE::Cameras::ToDebugString<float>(FString *__return_storage_ptr__,TVector2<float> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f");
  return __return_storage_ptr__;
}

// ToDebugString<float> @ 14d58ae40

FString * __cdecl
UE::Cameras::ToDebugString<float>(FString *__return_storage_ptr__,TVector4<float> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
  return __return_storage_ptr__;
}

// ToDebugString<float> @ 14d58aea0

FString * __cdecl
UE::Cameras::ToDebugString<float>(FString *__return_storage_ptr__,TVector<float> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f Z=%3.3f");
  return __return_storage_ptr__;
}

// ToDebugString<double> @ 14d58aef0

FString * __cdecl
UE::Cameras::ToDebugString<double>(FString *__return_storage_ptr__,double *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%f");
  return __return_storage_ptr__;
}

// ToDebugString<double> @ 14d58af20

FString * __cdecl
UE::Cameras::ToDebugString<double>(FString *__return_storage_ptr__,TRotator<double> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"P=%f Y=%f R=%f");
  return __return_storage_ptr__;
}

// ToDebugString<double> @ 14d58af70

FString * __cdecl
UE::Cameras::ToDebugString<double>(FString *__return_storage_ptr__,TTransform<double> *param_1)

{
  UE::Math::TTransform<double>::ToString(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToDebugString<double> @ 14d58afa0

FString * __cdecl
UE::Cameras::ToDebugString<double>(FString *__return_storage_ptr__,TVector2<double> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f");
  return __return_storage_ptr__;
}

// ToDebugString<double> @ 14d58afe0

FString * __cdecl
UE::Cameras::ToDebugString<double>(FString *__return_storage_ptr__,TVector4<double> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
  return __return_storage_ptr__;
}

// ToDebugString<double> @ 14d58b020

FString * __cdecl
UE::Cameras::ToDebugString<double>(FString *__return_storage_ptr__,TVector<double> *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f Z=%3.3f");
  return __return_storage_ptr__;
}

// ToDebugString<enum_EAutoExposureMethod> @ 14d58b070

FString * __cdecl
UE::Cameras::ToDebugString<enum_EAutoExposureMethod>
          (FString *__return_storage_ptr__,TEnumAsByte<EAutoExposureMethod> param_1)

{
  StaticEnum<enum_EAutoExposureMethod>();
  UEnum::GetValueAsString<enum_EAutoExposureMethod>(__return_storage_ptr__,(uint)param_1.Value);
  return __return_storage_ptr__;
}

// ToDebugString<enum_EBloomMethod> @ 14d58b0b0

FString * __cdecl
UE::Cameras::ToDebugString<enum_EBloomMethod>
          (FString *__return_storage_ptr__,TEnumAsByte<EBloomMethod> param_1)

{
  StaticEnum<enum_EBloomMethod>();
  UEnum::GetValueAsString<enum_EBloomMethod>(__return_storage_ptr__,(uint)param_1.Value);
  return __return_storage_ptr__;
}

// ToDebugString<enum_ELocalExposureMethod> @ 14d58b0f0

FString * __cdecl
UE::Cameras::ToDebugString<enum_ELocalExposureMethod>
          (FString *__return_storage_ptr__,ELocalExposureMethod *param_1)

{
  code *pcVar1;
  bool bVar2;
  UEnum *this;
  FString *pFVar3;
  FName local_res8;
  
  StaticEnum<enum_ELocalExposureMethod>();
  this = StaticEnum<enum_ELocalExposureMethod>();
  if (this == (UEnum *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumClass != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xca4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  UEnum::GetNameByValue(this,(long64)&local_res8);
  ::FName::ToString(&local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToDebugString<enum_ELumenRayLightingModeOverride> @ 14d58b180

FString * __cdecl
UE::Cameras::ToDebugString<enum_ELumenRayLightingModeOverride>
          (FString *__return_storage_ptr__,ELumenRayLightingModeOverride *param_1)

{
  code *pcVar1;
  bool bVar2;
  UEnum *this;
  FString *pFVar3;
  FName local_res8;
  
  StaticEnum<enum_ELumenRayLightingModeOverride>();
  this = StaticEnum<enum_ELumenRayLightingModeOverride>();
  if (this == (UEnum *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumClass != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xca4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  UEnum::GetNameByValue(this,(long64)&local_res8);
  ::FName::ToString(&local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToDebugString<enum_EReflectedAndRefractedRayTracedShadows> @ 14d58b210

FString * __cdecl
UE::Cameras::ToDebugString<enum_EReflectedAndRefractedRayTracedShadows>
          (FString *__return_storage_ptr__,EReflectedAndRefractedRayTracedShadows *param_1)

{
  code *pcVar1;
  bool bVar2;
  UEnum *this;
  FString *pFVar3;
  FName local_res8;
  
  StaticEnum<enum_EReflectedAndRefractedRayTracedShadows>();
  this = StaticEnum<enum_EReflectedAndRefractedRayTracedShadows>();
  if (this == (UEnum *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumClass != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xca4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  UEnum::GetNameByValue(this,(long64)&local_res8);
  ::FName::ToString(&local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToDebugString<enum_ETemperatureMethod> @ 14d58b2a0

FString * __cdecl
UE::Cameras::ToDebugString<enum_ETemperatureMethod>
          (FString *__return_storage_ptr__,TEnumAsByte<ETemperatureMethod> param_1)

{
  StaticEnum<enum_ETemperatureMethod>();
  UEnum::GetValueAsString<enum_ETemperatureMethod>(__return_storage_ptr__,(uint)param_1.Value);
  return __return_storage_ptr__;
}

// ToDebugString<enum_ETranslucencyType> @ 14d58b2e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FString * __cdecl
UE::Cameras::ToDebugString<enum_ETranslucencyType>
          (FString *__return_storage_ptr__,ETranslucencyType *param_1)

{
  code *pcVar1;
  bool bVar2;
  UEnum *this;
  FString *pFVar3;
  FName local_res8;
  
  StaticEnum<enum_ETranslucencyType>();
  this = StaticEnum<enum_ETranslucencyType>();
  if (this == (UEnum *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumClass != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xca4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  UEnum::GetNameByValue(this,(long64)&local_res8);
  ::FName::ToString(&local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToDebugString<enum_EDynamicGlobalIlluminationMethod::Type> @ 14d58b370

FString * __cdecl
UE::Cameras::ToDebugString<enum_EDynamicGlobalIlluminationMethod::Type>
          (FString *__return_storage_ptr__,
          TEnumAsByte<EDynamicGlobalIlluminationMethod::Type> param_1)

{
  StaticEnum<enum_EDynamicGlobalIlluminationMethod::Type>();
  UEnum::GetValueAsString<enum_EDynamicGlobalIlluminationMethod::Type>
            (__return_storage_ptr__,(uint)param_1.Value);
  return __return_storage_ptr__;
}

// ToDebugString<enum_EReflectionMethod::Type> @ 14d58b3b0

FString * __cdecl
UE::Cameras::ToDebugString<enum_EReflectionMethod::Type>
          (FString *__return_storage_ptr__,TEnumAsByte<EReflectionMethod::Type> param_1)

{
  StaticEnum<enum_EReflectionMethod::Type>();
  UEnum::GetValueAsString<enum_EReflectionMethod::Type>(__return_storage_ptr__,(uint)param_1.Value);
  return __return_storage_ptr__;
}

// ToDebugString<bool> @ 14d58b3f0

FString * __cdecl UE::Cameras::ToDebugString<bool>(FString *__return_storage_ptr__,bool *param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"true";
  if (*param_1 == false) {
    pwVar1 = L"false";
  }
  ::FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// operator<< @ 14d593080

FVectorValue * __cdecl UE::Cameras::operator<<(FArchive *param_1,FVectorValue *param_2)

{
  double *pdVar1;
  longlong *plVar2;
  double *pdVar3;
  code *pcVar4;
  bool bVar5;
  FArchive *pFVar6;
  FVectorValue *pFVar7;
  float local_res8 [2];
  float local_res10 [2];
  
  if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
    if ((param_1->field_0x28 & 1) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                         ,0x30f,L"float -> double conversion applied outside of load!");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FVectorValue *)(*pcVar4)();
        return pFVar7;
      }
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res10);
      }
    }
    else {
      local_res10[0] = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res8);
      }
    }
    else {
      local_res8[0] = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    (param_2->Vector).field0_0x0._s_0.X = (double)local_res10[0];
    (param_2->Vector).field0_0x0._s_0.Y = (double)local_res8[0];
  }
  else {
    pFVar6 = ::operator<<(param_1,(double *)param_2);
    ::operator<<(pFVar6,&(param_2->Vector).field0_0x0._s_0.Y);
  }
  pdVar1 = &param_2->CurrentMaxLength;
  pdVar3 = (double *)**(longlong **)&param_1->field_0x8;
  if (pdVar3 + 1 <= (double *)(*(longlong **)&param_1->field_0x8)[1]) {
    *pdVar1 = *pdVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_2;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pdVar1,8);
    return param_2;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pdVar1);
  return param_2;
}

// operator<< @ 14d593210

FArchive * __cdecl UE::Cameras::operator<<(FArchive *param_1,FCameraRigJoint *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    (param_2->VariableID).Value = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  UE::Math::operator<<(param_1,&param_2->Transform);
  return param_1;
}

// operator<< @ 14d593280

FArchive * __cdecl UE::Cameras::operator<<(FArchive *param_1,FCameraSystemDebugID *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar1 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->Value = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
  return param_1;
}

// operator<< @ 14d5932f0

FArchive * __cdecl UE::Cameras::operator<<(FArchive *param_1,FEntry *param_2)

{
  FCameraVariableID *pFVar1;
  uint *puVar2;
  
  UE::Math::operator<<(param_1,&param_2->Location);
  UE::Math::operator<<(param_1,&param_2->Rotation);
  pFVar1 = &param_2->VariableID;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&pFVar1->Value);
    }
  }
  else {
    pFVar1->Value = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<(param_1,&param_2->VariableName);
  return param_1;
}

// operator<< @ 14d593380

FArchive * __cdecl UE::Cameras::operator<<(FArchive *param_1,FEntryDebugInfo *param_2)

{
  ::operator<<(param_1,&param_2->Name);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&param_2->TypeName);
  ::operator<<(param_1,&param_2->Value);
  ::operator<<(param_1,&param_2->bWritten);
  ::operator<<(param_1,&param_2->bWrittenThisFrame);
  return param_1;
}

// operator<< @ 14d5933f0

FArchive * __cdecl UE::Cameras::operator<<(FArchive *param_1,FEntryDebugInfo *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->ID);
    }
  }
  else {
    param_2->ID = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<(param_1,&param_2->Name);
  ::operator<<(param_1,&param_2->Value);
  ::operator<<(param_1,&param_2->bIsInput);
  ::operator<<(param_1,&param_2->bIsPrivate);
  ::operator<<(param_1,&param_2->bWritten);
  ::operator<<(param_1,&param_2->bWrittenThisFrame);
  return param_1;
}

// operator<< @ 14d5934a0

FArchive * __cdecl UE::Cameras::operator<<(FArchive *param_1,FPlayerControllerDebugInfo *param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  ::operator<<(param_1,&param_2->PlayerControllerName);
  ::operator<<(param_1,&param_2->CameraManagerName);
  ::operator<<(param_1,&param_2->ViewTargetName);
  UE::Math::operator<<(param_1,&param_2->ViewTargetLocation);
  UE::Math::operator<<(param_1,&param_2->ViewTargetRotation);
  pfVar1 = &param_2->ViewTargetFOV;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->ViewTargetAspectRatio;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return param_1;
}

// operator() @ 14d593720

void __thiscall
`UE::String::
ParseTokens<TArray<TStringView<wchar_t>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>'
::__l2::<lambda_1>::operator()(void *this,TStringView<wchar_t> *param_1)

{
  undefined8 *puVar1;
  ForElementType<TStringView<wchar_t>_> FVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  ForElementType<TStringView<wchar_t>_> FVar7;
  
  FVar2 = *(ForElementType<TStringView<wchar_t>_> *)this;
  FVar7 = *(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x40);
  if (*(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x40) ==
      (ForElementType<TStringView<wchar_t>_>)0x0) {
    FVar7 = FVar2;
  }
  if (((ulonglong)FVar7 <= param_1) &&
     (param_1 < (TStringView<wchar_t> *)
                ((longlong)*(int *)((longlong)FVar2 + 0x4c) * 0x10 + (longlong)FVar7))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = *(int *)((longlong)FVar2 + 0x48);
  if (iVar6 == *(int *)((longlong)FVar2 + 0x4c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_>
                      (0x810,(ForElementType<TStringView<wchar_t>_> *)FVar2,
                       (int *)((longlong)FVar2 + 0x4c));
  }
  *(int *)((longlong)FVar2 + 0x48) = iVar6 + 1;
  uVar4 = *(undefined8 *)&param_1->Size;
  FVar7 = *(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x40);
  if (*(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x40) ==
      (ForElementType<TStringView<wchar_t>_>)0x0) {
    FVar7 = FVar2;
  }
  puVar1 = (undefined8 *)((longlong)FVar7 + (longlong)iVar6 * 0x10);
  *puVar1 = param_1->DataPtr;
  puVar1[1] = uVar4;
  return;
}

// CreateBlendStack @ 14d59c430

TObjectPtr<UBlendStackCameraNode> __cdecl
UE::Cameras::Private::CreateBlendStack
          (UObject *param_1,FObjectInitializer *param_2,FName *param_3,ECameraBlendStackType param_4
          ,ECameraRigLayer param_5)

{
  FName FVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  undefined4 in_register_0000008c;
  undefined3 in_stack_00000029;
  undefined1 in_stack_00000030;
  
  FVar1 = *(FName *)CONCAT44(in_register_0000008c,param_4);
  pUVar2 = Z_Construct_UClass_UBlendStackCameraNode_NoRegister();
  pUVar3 = FObjectInitializer::CreateDefaultSubobject
                     ((FObjectInitializer *)param_3,(UObject *)param_2,FVar1,pUVar2,pUVar2,true,
                      false);
  *(UObject **)param_1 = pUVar3;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar3);
  }
  *(undefined4 *)(*(longlong *)param_1 + 0x38) = _param_5;
  *(undefined1 *)(*(longlong *)param_1 + 0x3c) = in_stack_00000030;
  return (TObjectPtr<UBlendStackCameraNode>)(TObjectPtr<UBlendStackCameraNode>_u_0)param_1;
}

// IsVariableInMask @ 14d5b4bf0

bool __cdecl
UE::Cameras::Private::IsVariableInMask
          (FCameraVariableID param_1,FCameraVariableTableFlags *param_2,bool param_3)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (param_2 == (FCameraVariableTableFlags *)0x0) {
    return true;
  }
  if (*(int *)&(param_2->VariableIDs).Elements.field_0x8 !=
      *(int *)&(param_2->VariableIDs).Elements.field_0x34) {
    FVar3 = (param_2->VariableIDs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(param_2->VariableIDs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    (ulonglong)((param_2->VariableIDs).HashSize - 1U & param_1.Value) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(param_2->VariableIDs).Elements;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0xc) == param_1.Value) goto LAB_14d5b4c4c;
        iVar2 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_14d5b4c4c:
  if (param_3) {
    return iVar2 == -1;
  }
  return iVar2 != -1;
}

// LerpLinearColorUsingHSV @ 14d5b56e0

FLinearColor * __cdecl
UE::Cameras::LerpLinearColorUsingHSV
          (FLinearColor *__return_storage_ptr__,FLinearColor *param_1,FLinearColor *param_2,
          int param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 1) {
    uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&param_2->field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
    return __return_storage_ptr__;
  }
  FLinearColor::LerpUsingHSV
            (__return_storage_ptr__,param_1,param_2,(float)param_3 / (float)(param_4 + -1));
  return __return_storage_ptr__;
}

// Construct<FPerlinNoiseData> @ 14d5e0e80

void __cdecl UE::CoreUObject::Private::Construct<FPerlinNoiseData>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  return;
}

// ConstructForTests<FPerlinNoiseData> @ 14d5e0ea0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPerlinNoiseData>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  return;
}

// Destruct<FPerlinNoiseData> @ 14d5e0ec0

void __cdecl UE::CoreUObject::Private::Destruct<FPerlinNoiseData>(void *param_1)

{
  return;
}

// Copy<FPerlinNoiseData> @ 14d5e0ed0

bool __cdecl
UE::CoreUObject::Private::Copy<FPerlinNoiseData>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)(lVar2 + (longlong)param_2) = *(undefined4 *)param_2;
      *(undefined4 *)(lVar2 + 4 + (longlong)param_2) = uVar1;
      param_2 = (void *)((longlong)param_2 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCameraActorAttachmentInfo> @ 14d5e1020

void __cdecl UE::CoreUObject::Private::Construct<FCameraActorAttachmentInfo>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FCameraActorAttachmentInfo> @ 14d5e1040

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraActorAttachmentInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FCameraActorAttachmentInfo> @ 14d5e10e0

void __cdecl UE::CoreUObject::Private::Destruct<FCameraActorAttachmentInfo>(void *param_1)

{
  return;
}

// Copy<FCameraActorAttachmentInfo> @ 14d5e10f0

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraActorAttachmentInfo>(void *param_1,void *param_2,int param_3)

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
      puVar2[2] = puVar1[2];
      *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar1 + 3);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 4;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSplineOrbitControlPoint> @ 14d5e5220

void __cdecl UE::CoreUObject::Private::Construct<FSplineOrbitControlPoint>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x38) = dVar2;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FSplineOrbitControlPoint> @ 14d5e5290

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSplineOrbitControlPoint>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 8) = uVar1;
  *(double *)((longlong)param_1 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x38) = dVar2;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FSplineOrbitControlPoint> @ 14d5e52f0

void __cdecl UE::CoreUObject::Private::Destruct<FSplineOrbitControlPoint>(void *param_1)

{
  return;
}

// Copy<FSplineOrbitControlPoint> @ 14d5e5340

bool __cdecl
UE::CoreUObject::Private::Copy<FSplineOrbitControlPoint>(void *param_1,void *param_2,int param_3)

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
  undefined8 uVar10;
  longlong lVar11;
  
  if (param_3 != 0) {
    lVar11 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar11 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar11 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x40 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar11 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar10;
      param_1 = (void *)((longlong)param_1 + 0x50);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// AddReferencedObjectForComponent<FCameraFramingZone,UScriptStruct_*> @ 14d5e76a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::AddReferencedObjectForComponent<FCameraFramingZone,UScriptStruct_*>
          (FReferenceCollector *param_1,FCameraFramingZone *param_2)

{
  UScriptStruct *pUVar1;
  FFieldClass *pFVar2;
  TTuple<FProperty_const_*,void_const_*> *pTVar3;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar4;
  undefined1 auStackY_768 [32];
  FPropertyValueIterator local_738;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_768;
  pUVar1 = FCameraFramingZone::StaticStruct();
  pFVar2 = FObjectProperty::StaticClass();
  FPropertyValueIterator::FPropertyValueIterator
            (&local_738,pFVar2,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
  while( true ) {
    if (local_738.PropertyIteratorStack.ArrayNum < 1) break;
    FPropertyValueIterator::operator->(&local_738);
    pTVar3 = FPropertyValueIterator::operator->(&local_738);
    (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar3->field_0x8,0,0);
    FPropertyValueIterator::IterateToNext(&local_738);
  }
  FVar4 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_738;
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FVar4 = local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData;
  }
  DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
            ((FPropertyValueStackEntry *)FVar4,local_738.PropertyIteratorStack.ArrayNum);
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FMemory::Free((void *)local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData);
  }
  return;
}

// ApplyBlendableParameterOverride<FBooleanCameraParameter> @ 14d5e7a60

void __cdecl
UE::Cameras::Internal::ApplyBlendableParameterOverride<FBooleanCameraParameter>
          (FCameraObjectInterfaceParameterDefinition *param_1,FBooleanCameraParameter *param_2,
          FCameraVariableTable *param_3,bool param_4)

{
  FCameraVariableID FVar1;
  UBooleanCameraVariable *this;
  bool *pbVar2;
  bool bVar3;
  FCameraVariableDefinition local_28;
  
  FVar1.Value = (param_1->VariableID).Value;
  this = (param_2->Variable).field0_0x0.DebugPtr;
  if (this == (UBooleanCameraVariable *)0x0) {
    if (param_4) {
      return;
    }
    bVar3 = param_2->Value;
  }
  else {
    UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)this,&local_28);
    bVar3 = ((param_2->Variable).field0_0x0.DebugPtr)->bDefaultValue;
    pbVar2 = FCameraVariableTable::FindValue<bool>(param_3,local_28.VariableID);
    if (pbVar2 != (bool *)0x0) {
      bVar3 = *pbVar2;
    }
  }
  FCameraVariableTable::SetValue<bool>(param_3,FVar1,bVar3);
  return;
}

// ApplyBlendableParameterOverride<FDoubleCameraParameter> @ 14d5e7ae0

void __cdecl
UE::Cameras::Internal::ApplyBlendableParameterOverride<FDoubleCameraParameter>
          (FCameraObjectInterfaceParameterDefinition *param_1,FDoubleCameraParameter *param_2,
          FCameraVariableTable *param_3,bool param_4)

{
  undefined8 uVar1;
  FCameraVariableID FVar2;
  UDoubleCameraVariable *this;
  double *pdVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FCameraVariableDefinition local_38 [2];
  
  FVar2.Value = (param_1->VariableID).Value;
  this = (param_2->Variable).field0_0x0.DebugPtr;
  if (this != (UDoubleCameraVariable *)0x0) {
    UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)this,local_38);
    uVar1 = *(undefined8 *)((longlong)(param_2->Variable).field0_0x0 + 0x40);
    uVar4 = (undefined4)uVar1;
    uVar5 = (undefined4)((ulonglong)uVar1 >> 0x20);
    pdVar3 = FCameraVariableTable::FindValue<double>(param_3,local_38[0].VariableID);
    if (pdVar3 != (double *)0x0) {
      uVar4 = SUB84(*pdVar3,0);
      uVar5 = (undefined4)((ulonglong)*pdVar3 >> 0x20);
    }
    FCameraVariableTable::SetValue<double>(param_3,FVar2,(double)CONCAT44(uVar5,uVar4));
    return;
  }
  if (!param_4) {
    FCameraVariableTable::SetValue<double>(param_3,FVar2,param_2->Value);
  }
  return;
}

// ApplyBlendableParameterOverride<FFloatCameraParameter> @ 14d5e7b80

void __cdecl
UE::Cameras::Internal::ApplyBlendableParameterOverride<FFloatCameraParameter>
          (FCameraObjectInterfaceParameterDefinition *param_1,FFloatCameraParameter *param_2,
          FCameraVariableTable *param_3,bool param_4)

{
  FCameraVariableID FVar1;
  UFloatCameraVariable *this;
  float *pfVar2;
  float fVar3;
  FCameraVariableDefinition local_38 [2];
  
  FVar1.Value = (param_1->VariableID).Value;
  this = (param_2->Variable).field0_0x0.DebugPtr;
  if (this != (UFloatCameraVariable *)0x0) {
    UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)this,local_38);
    fVar3 = ((param_2->Variable).field0_0x0.DebugPtr)->DefaultValue;
    pfVar2 = FCameraVariableTable::FindValue<float>(param_3,local_38[0].VariableID);
    if (pfVar2 != (float *)0x0) {
      fVar3 = *pfVar2;
    }
    FCameraVariableTable::SetValue<float>(param_3,FVar1,fVar3);
    return;
  }
  if (!param_4) {
    FCameraVariableTable::SetValue<float>(param_3,FVar1,param_2->Value);
  }
  return;
}

// ApplyBlendableParameterOverride<FInteger32CameraParameter> @ 14d5e7c20

void __cdecl
UE::Cameras::Internal::ApplyBlendableParameterOverride<FInteger32CameraParameter>
          (FCameraObjectInterfaceParameterDefinition *param_1,FInteger32CameraParameter *param_2,
          FCameraVariableTable *param_3,bool param_4)

{
  FCameraVariableID FVar1;
  UInteger32CameraVariable *this;
  int *piVar2;
  int iVar3;
  FCameraVariableDefinition local_28;
  
  FVar1.Value = (param_1->VariableID).Value;
  this = (param_2->Variable).field0_0x0.DebugPtr;
  if (this == (UInteger32CameraVariable *)0x0) {
    if (param_4) {
      return;
    }
    iVar3 = param_2->Value;
  }
  else {
    UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)this,&local_28);
    iVar3 = ((param_2->Variable).field0_0x0.DebugPtr)->DefaultValue;
    piVar2 = FCameraVariableTable::FindValue<int>(param_3,local_28.VariableID);
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
    }
  }
  FCameraVariableTable::SetValue<int>(param_3,FVar1,iVar3);
  return;
}

// ApplyBlendableParameterOverride<FRotator3dCameraParameter> @ 14d5e7ca0

void __cdecl
UE::Cameras::Internal::ApplyBlendableParameterOverride<FRotator3dCameraParameter>
          (FCameraObjectInterfaceParameterDefinition *param_1,FRotator3dCameraParameter *param_2,
          FCameraVariableTable *param_3,bool param_4)

{
  double *pdVar1;
  double dVar2;
  FCameraVariableID FVar3;
  uint uVar4;
  URotator3dCameraVariable *pUVar5;
  uchar *puVar6;
  code *pcVar7;
  bool bVar8;
  TRotator<double> *pTVar9;
  FEntry *pFVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint local_res8 [2];
  undefined8 local_res10;
  uint *local_38;
  double local_30;
  double dStack_28;
  FCameraVariableDefinition local_20;
  
  FVar3.Value = (param_1->VariableID).Value;
  pUVar5 = (param_2->Variable).field0_0x0.DebugPtr;
  if (pUVar5 == (URotator3dCameraVariable *)0x0) {
    if (!param_4) {
      FCameraVariableTable::SetValue<UE::Math::TRotator<double>_>(param_3,FVar3,&param_2->Value);
    }
    return;
  }
  UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)pUVar5,&local_20);
  pUVar5 = (param_2->Variable).field0_0x0.DebugPtr;
  pTVar9 = FCameraVariableTable::FindValue<UE::Math::TRotator<double>_>(param_3,local_20.VariableID)
  ;
  if (pTVar9 == (TRotator<double> *)0x0) {
    local_30 = (pUVar5->DefaultValue).Pitch;
    dStack_28 = (pUVar5->DefaultValue).Yaw;
    dVar2 = (pUVar5->DefaultValue).Roll;
    uVar11 = SUB84(dVar2,0);
    uVar12 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  else {
    local_30 = pTVar9->Pitch;
    dStack_28 = pTVar9->Yaw;
    uVar11 = SUB84(pTVar9->Roll,0);
    uVar12 = (undefined4)((ulonglong)pTVar9->Roll >> 0x20);
  }
  local_res10 = CONCAT44(uVar12,uVar11);
  local_res8[0] = FVar3.Value;
  pFVar10 = FCameraVariableTable::FindEntry(param_3,FVar3);
  if (pFVar10 == (FEntry *)0x0) {
    local_38 = local_res8;
    bVar8 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TRotator<double>_>'::__l3::
            <lambda_1>::operator()(&local_38);
    if (!bVar8) {
      return;
    }
  }
  if ((pFVar10->Type != Rotator3d) &&
     (bVar8 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = pFVar10->Offset;
  puVar6 = param_3->Memory;
  pdVar1 = (double *)(puVar6 + uVar4);
  *pdVar1 = local_30;
  pdVar1[1] = dStack_28;
  *(undefined8 *)(puVar6 + (ulonglong)uVar4 + 0x10) = local_res10;
  pFVar10->Flags = pFVar10->Flags | (WrittenThisFrame|Written);
  return;
}

// ApplyBlendableParameterOverride<FRotator3fCameraParameter> @ 14d5e7dd0

void __cdecl
UE::Cameras::Internal::ApplyBlendableParameterOverride<FRotator3fCameraParameter>
          (FCameraObjectInterfaceParameterDefinition *param_1,FRotator3fCameraParameter *param_2,
          FCameraVariableTable *param_3,bool param_4)

{
  FCameraVariableID FVar1;
  uint uVar2;
  URotator3fCameraVariable *pUVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  TRotator<float> *pTVar7;
  FEntry *pFVar8;
  float fVar9;
  uint local_res8 [2];
  undefined8 local_res10;
  uint *local_28;
  FCameraVariableDefinition local_20;
  
  FVar1.Value = (param_1->VariableID).Value;
  pUVar3 = (param_2->Variable).field0_0x0.DebugPtr;
  if (pUVar3 == (URotator3fCameraVariable *)0x0) {
    if (!param_4) {
      FCameraVariableTable::SetValue<UE::Math::TRotator<float>_>(param_3,FVar1,&param_2->Value);
    }
    return;
  }
  UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)pUVar3,&local_20);
  pUVar3 = (param_2->Variable).field0_0x0.DebugPtr;
  pTVar7 = FCameraVariableTable::FindValue<UE::Math::TRotator<float>_>(param_3,local_20.VariableID);
  if (pTVar7 == (TRotator<float> *)0x0) {
    local_res10._0_4_ = (pUVar3->DefaultValue).Pitch;
    local_res10._4_4_ = (pUVar3->DefaultValue).Yaw;
    fVar9 = (pUVar3->DefaultValue).Roll;
  }
  else {
    local_res10._0_4_ = pTVar7->Pitch;
    local_res10._4_4_ = pTVar7->Yaw;
    fVar9 = pTVar7->Roll;
  }
  local_res8[0] = FVar1.Value;
  pFVar8 = FCameraVariableTable::FindEntry(param_3,FVar1);
  if (pFVar8 == (FEntry *)0x0) {
    local_28 = local_res8;
    bVar6 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TRotator<float>_>'::__l3::
            <lambda_1>::operator()(&local_28);
    if (!bVar6) {
      return;
    }
  }
  if ((pFVar8->Type != Rotator3f) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar2 = pFVar8->Offset;
  puVar4 = param_3->Memory;
  *(undefined8 *)(puVar4 + uVar2) = local_res10;
  *(float *)(puVar4 + (ulonglong)uVar2 + 8) = fVar9;
  pFVar8->Flags = pFVar8->Flags | (WrittenThisFrame|Written);
  return;
}

// ApplyBlendableParameterOverride<FTransform3dCameraParameter> @ 14d5e7ee0

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UE::Cameras::Internal::ApplyBlendableParameterOverride<FTransform3dCameraParameter>
          (FCameraObjectInterfaceParameterDefinition *param_1,FTransform3dCameraParameter *param_2,
          FCameraVariableTable *param_3,bool param_4)

{
  FCameraVariableID FVar1;
  UTransform3dCameraVariable *pUVar2;
  TTransform<double> *pTVar3;
  FCameraVariableDefinition local_88;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  FVar1.Value = (param_1->VariableID).Value;
  pUVar2 = (param_2->Variable).field0_0x0.DebugPtr;
  if (pUVar2 == (UTransform3dCameraVariable *)0x0) {
    if (param_4) {
      return;
    }
  }
  else {
    UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)pUVar2,&local_88);
    pUVar2 = (param_2->Variable).field0_0x0.DebugPtr;
    pTVar3 = FCameraVariableTable::FindValue<UE::Math::TTransform<double>_>
                       (param_3,local_88.VariableID);
    if (pTVar3 == (TTransform<double> *)0x0) {
      local_68 = (pUVar2->DefaultValue).Rotation.XY.m128d_f64[0];
      dStack_60 = (pUVar2->DefaultValue).Rotation.XY.m128d_f64[1];
      param_2 = (FTransform3dCameraParameter *)&stack0xffffffffffffff98;
      local_58 = (pUVar2->DefaultValue).Rotation.ZW.m128d_f64[0];
      dStack_50 = (pUVar2->DefaultValue).Rotation.ZW.m128d_f64[1];
      local_48 = (pUVar2->DefaultValue).Translation.XY.m128d_f64[0];
      dStack_40 = (pUVar2->DefaultValue).Translation.XY.m128d_f64[1];
      local_38 = (pUVar2->DefaultValue).Translation.ZW.m128d_f64[0];
      dStack_30 = (pUVar2->DefaultValue).Translation.ZW.m128d_f64[1];
      local_28 = (pUVar2->DefaultValue).Scale3D.XY.m128d_f64[0];
      dStack_20 = (pUVar2->DefaultValue).Scale3D.XY.m128d_f64[1];
      local_18 = (pUVar2->DefaultValue).Scale3D.ZW.m128d_f64[0];
      dStack_10 = (pUVar2->DefaultValue).Scale3D.ZW.m128d_f64[1];
    }
    else {
      local_68 = (pTVar3->Rotation).XY.m128d_f64[0];
      dStack_60 = (pTVar3->Rotation).XY.m128d_f64[1];
      param_2 = (FTransform3dCameraParameter *)&stack0xffffffffffffff98;
      local_58 = (pTVar3->Rotation).ZW.m128d_f64[0];
      dStack_50 = (pTVar3->Rotation).ZW.m128d_f64[1];
      local_48 = (pTVar3->Translation).XY.m128d_f64[0];
      dStack_40 = (pTVar3->Translation).XY.m128d_f64[1];
      local_38 = (pTVar3->Translation).ZW.m128d_f64[0];
      dStack_30 = (pTVar3->Translation).ZW.m128d_f64[1];
      local_28 = (pTVar3->Scale3D).XY.m128d_f64[0];
      dStack_20 = (pTVar3->Scale3D).XY.m128d_f64[1];
      local_18 = (pTVar3->Scale3D).ZW.m128d_f64[0];
      dStack_10 = (pTVar3->Scale3D).ZW.m128d_f64[1];
    }
  }
  FCameraVariableTable::SetValue<UE::Math::TTransform<double>_>(param_3,FVar1,&param_2->Value);
  return;
}

// ApplyBlendableParameterOverride<FTransform3fCameraParameter> @ 14d5e7fe0

void __cdecl
UE::Cameras::Internal::ApplyBlendableParameterOverride<FTransform3fCameraParameter>
          (FCameraObjectInterfaceParameterDefinition *param_1,FTransform3fCameraParameter *param_2,
          FCameraVariableTable *param_3,bool param_4)

{
  FCameraVariableID FVar1;
  UTransform3fCameraVariable *pUVar2;
  TTransform<float> *pTVar3;
  FCameraVariableDefinition local_58;
  __m128 local_38;
  ulong64 local_28;
  ulong64 uStack_20;
  ulong64 local_18;
  ulong64 uStack_10;
  
  FVar1.Value = (param_1->VariableID).Value;
  pUVar2 = (param_2->Variable).field0_0x0.DebugPtr;
  if (pUVar2 == (UTransform3fCameraVariable *)0x0) {
    if (param_4) {
      return;
    }
  }
  else {
    UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)pUVar2,&local_58);
    pUVar2 = (param_2->Variable).field0_0x0.DebugPtr;
    pTVar3 = FCameraVariableTable::FindValue<UE::Math::TTransform<float>_>
                       (param_3,local_58.VariableID);
    if (pTVar3 == (TTransform<float> *)0x0) {
      local_38.m128_u64[0] = (pUVar2->DefaultValue).Rotation.m128_u64[0];
      local_38.m128_u64[1] = (pUVar2->DefaultValue).Rotation.m128_u64[1];
      param_2 = (FTransform3fCameraParameter *)&local_38;
      local_28 = (pUVar2->DefaultValue).Translation.m128_u64[0];
      uStack_20 = (pUVar2->DefaultValue).Translation.m128_u64[1];
      local_18 = (pUVar2->DefaultValue).Scale3D.m128_u64[0];
      uStack_10 = (pUVar2->DefaultValue).Scale3D.m128_u64[1];
    }
    else {
      local_38.m128_u64[0] = (pTVar3->Rotation).m128_u64[0];
      local_38.m128_u64[1] = (pTVar3->Rotation).m128_u64[1];
      param_2 = (FTransform3fCameraParameter *)&local_38;
      local_28 = (pTVar3->Translation).m128_u64[0];
      uStack_20 = (pTVar3->Translation).m128_u64[1];
      local_18 = (pTVar3->Scale3D).m128_u64[0];
      uStack_10 = (pTVar3->Scale3D).m128_u64[1];
    }
  }
  FCameraVariableTable::SetValue<UE::Math::TTransform<float>_>(param_3,FVar1,&param_2->Value);
  return;
}

// ApplyBlendableParameterOverride<FVector2dCameraParameter> @ 14d5e8090

void __cdecl
UE::Cameras::Internal::ApplyBlendableParameterOverride<FVector2dCameraParameter>
          (FCameraObjectInterfaceParameterDefinition *param_1,FVector2dCameraParameter *param_2,
          FCameraVariableTable *param_3,bool param_4)

{
  FCameraVariableID FVar1;
  uint uVar2;
  UVector2dCameraVariable *pUVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  TVector2<double> *pTVar7;
  FEntry *pFVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint local_res8 [2];
  uint *local_res10;
  FCameraVariableDefinition local_28;
  
  FVar1.Value = (param_1->VariableID).Value;
  pUVar3 = (param_2->Variable).field0_0x0.DebugPtr;
  if (pUVar3 == (UVector2dCameraVariable *)0x0) {
    if (!param_4) {
      FCameraVariableTable::SetValue<UE::Math::TVector2<double>_>(param_3,FVar1,&param_2->Value);
    }
    return;
  }
  UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)pUVar3,&local_28);
  pUVar3 = (param_2->Variable).field0_0x0.DebugPtr;
  pTVar7 = FCameraVariableTable::FindValue<UE::Math::TVector2<double>_>(param_3,local_28.VariableID)
  ;
  if (pTVar7 == (TVector2<double> *)0x0) {
    uVar9 = *(undefined4 *)&(pUVar3->DefaultValue).field0_0x0;
    uVar10 = *(undefined4 *)((longlong)&(pUVar3->DefaultValue).field0_0x0 + 4);
    uVar11 = *(undefined4 *)((longlong)&(pUVar3->DefaultValue).field0_0x0 + 8);
    uVar12 = *(undefined4 *)((longlong)&(pUVar3->DefaultValue).field0_0x0 + 0xc);
  }
  else {
    uVar9 = *(undefined4 *)&pTVar7->field0_0x0;
    uVar10 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 4);
    uVar11 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 8);
    uVar12 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0xc);
  }
  local_res8[0] = FVar1.Value;
  pFVar8 = FCameraVariableTable::FindEntry(param_3,FVar1);
  if (pFVar8 == (FEntry *)0x0) {
    local_res10 = local_res8;
    bVar6 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector2<double>_>'::__l3::
            <lambda_1>::operator()(&local_res10);
    if (!bVar6) {
      return;
    }
  }
  if ((pFVar8->Type != Vector2d) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar2 = pFVar8->Offset;
  puVar4 = param_3->Memory;
  *(ulonglong *)(puVar4 + uVar2) = CONCAT44(uVar10,uVar9);
  *(ulonglong *)(puVar4 + uVar2 + 8) = CONCAT44(uVar12,uVar11);
  pFVar8->Flags = pFVar8->Flags | (WrittenThisFrame|Written);
  return;
}

// ApplyBlendableParameterOverride<FVector2fCameraParameter> @ 14d5e81a0

void __cdecl
UE::Cameras::Internal::ApplyBlendableParameterOverride<FVector2fCameraParameter>
          (FCameraObjectInterfaceParameterDefinition *param_1,FVector2fCameraParameter *param_2,
          FCameraVariableTable *param_3,bool param_4)

{
  FCameraVariableID FVar1;
  UVector2fCameraVariable *this;
  TVector2<float>_u_0_s_0 *pTVar2;
  TVector2<float>_u_0 TVar3;
  FCameraVariableDefinition local_28;
  
  FVar1.Value = (param_1->VariableID).Value;
  this = (param_2->Variable).field0_0x0.DebugPtr;
  if (this == (UVector2fCameraVariable *)0x0) {
    if (param_4) {
      return;
    }
    TVar3._s_0 = (param_2->Value).field0_0x0._s_0;
  }
  else {
    UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)this,&local_28);
    TVar3 = (TVector2<float>_u_0)
            *(TVector2<float>_u_0 *)
             &(((param_2->Variable).field0_0x0.DebugPtr)->DefaultValue).field0_0x0._s_0;
    pTVar2 = (TVector2<float>_u_0_s_0 *)
             FCameraVariableTable::FindValue<UE::Math::TVector2<float>_>
                       (param_3,local_28.VariableID);
    if (pTVar2 != (TVector2<float>_u_0_s_0 *)0x0) {
      TVar3._s_0 = *pTVar2;
    }
  }
  FCameraVariableTable::SetValue<UE::Math::TVector2<float>_>
            (param_3,FVar1,(TVector2<float>)TVar3._s_0);
  return;
}

// ApplyBlendableParameterOverride<FVector3dCameraParameter> @ 14d5e8220

void __cdecl
UE::Cameras::Internal::ApplyBlendableParameterOverride<FVector3dCameraParameter>
          (FCameraObjectInterfaceParameterDefinition *param_1,FVector3dCameraParameter *param_2,
          FCameraVariableTable *param_3,bool param_4)

{
  double *pdVar1;
  undefined8 uVar2;
  FCameraVariableID FVar3;
  uint uVar4;
  UVector3dCameraVariable *pUVar5;
  uchar *puVar6;
  code *pcVar7;
  bool bVar8;
  TVector<double> *pTVar9;
  FEntry *pFVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint local_res8 [2];
  undefined8 local_res10;
  uint *local_38;
  double local_30;
  double dStack_28;
  FCameraVariableDefinition local_20;
  
  FVar3.Value = (param_1->VariableID).Value;
  pUVar5 = (param_2->Variable).field0_0x0.DebugPtr;
  if (pUVar5 == (UVector3dCameraVariable *)0x0) {
    if (!param_4) {
      FCameraVariableTable::SetValue<UE::Math::TVector<double>_>(param_3,FVar3,&param_2->Value);
    }
    return;
  }
  UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)pUVar5,&local_20);
  pUVar5 = (param_2->Variable).field0_0x0.DebugPtr;
  pTVar9 = FCameraVariableTable::FindValue<UE::Math::TVector<double>_>(param_3,local_20.VariableID);
  if (pTVar9 == (TVector<double> *)0x0) {
    local_30 = (pUVar5->DefaultValue).field0_0x0._s_0.X;
    dStack_28 = (pUVar5->DefaultValue).field0_0x0._s_0.Y;
    uVar2 = *(undefined8 *)((longlong)&(pUVar5->DefaultValue).field0_0x0 + 0x10);
    uVar11 = (undefined4)uVar2;
    uVar12 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  else {
    local_30 = (pTVar9->field0_0x0)._s_0.X;
    dStack_28 = (pTVar9->field0_0x0)._s_0.Y;
    uVar2 = *(undefined8 *)((longlong)&pTVar9->field0_0x0 + 0x10);
    uVar11 = (undefined4)uVar2;
    uVar12 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  local_res10 = CONCAT44(uVar12,uVar11);
  local_res8[0] = FVar3.Value;
  pFVar10 = FCameraVariableTable::FindEntry(param_3,FVar3);
  if (pFVar10 == (FEntry *)0x0) {
    local_38 = local_res8;
    bVar8 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector<double>_>'::__l3::
            <lambda_1>::operator()(&local_38);
    if (!bVar8) {
      return;
    }
  }
  if ((pFVar10->Type != Vector3d) &&
     (bVar8 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = pFVar10->Offset;
  puVar6 = param_3->Memory;
  pdVar1 = (double *)(puVar6 + uVar4);
  *pdVar1 = local_30;
  pdVar1[1] = dStack_28;
  *(undefined8 *)(puVar6 + (ulonglong)uVar4 + 0x10) = local_res10;
  pFVar10->Flags = pFVar10->Flags | (WrittenThisFrame|Written);
  return;
}

// ApplyBlendableParameterOverride<FVector3fCameraParameter> @ 14d5e8350

void __cdecl
UE::Cameras::Internal::ApplyBlendableParameterOverride<FVector3fCameraParameter>
          (FCameraObjectInterfaceParameterDefinition *param_1,FVector3fCameraParameter *param_2,
          FCameraVariableTable *param_3,bool param_4)

{
  FCameraVariableID FVar1;
  uint uVar2;
  UVector3fCameraVariable *pUVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  TVector<float> *pTVar7;
  FEntry *pFVar8;
  float fVar9;
  uint local_res8 [2];
  undefined8 local_res10;
  uint *local_28;
  FCameraVariableDefinition local_20;
  
  FVar1.Value = (param_1->VariableID).Value;
  pUVar3 = (param_2->Variable).field0_0x0.DebugPtr;
  if (pUVar3 == (UVector3fCameraVariable *)0x0) {
    if (!param_4) {
      FCameraVariableTable::SetValue<UE::Math::TVector<float>_>(param_3,FVar1,&param_2->Value);
    }
    return;
  }
  UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)pUVar3,&local_20);
  pUVar3 = (param_2->Variable).field0_0x0.DebugPtr;
  pTVar7 = FCameraVariableTable::FindValue<UE::Math::TVector<float>_>(param_3,local_20.VariableID);
  if (pTVar7 == (TVector<float> *)0x0) {
    local_res10 = *(undefined8 *)&(pUVar3->DefaultValue).field0_0x0;
    fVar9 = (pUVar3->DefaultValue).field0_0x0._s_0.Z;
  }
  else {
    local_res10 = *(undefined8 *)&pTVar7->field0_0x0;
    fVar9 = (pTVar7->field0_0x0)._s_0.Z;
  }
  local_res8[0] = FVar1.Value;
  pFVar8 = FCameraVariableTable::FindEntry(param_3,FVar1);
  if (pFVar8 == (FEntry *)0x0) {
    local_28 = local_res8;
    bVar6 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector<float>_>'::__l3::
            <lambda_1>::operator()(&local_28);
    if (!bVar6) {
      return;
    }
  }
  if ((pFVar8->Type != Vector3f) &&
     (bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar2 = pFVar8->Offset;
  puVar4 = param_3->Memory;
  *(undefined8 *)(puVar4 + uVar2) = local_res10;
  *(float *)(puVar4 + (ulonglong)uVar2 + 8) = fVar9;
  pFVar8->Flags = pFVar8->Flags | (WrittenThisFrame|Written);
  return;
}

// ApplyBlendableParameterOverride<FVector4dCameraParameter> @ 14d5e8460

void __cdecl
UE::Cameras::Internal::ApplyBlendableParameterOverride<FVector4dCameraParameter>
          (FCameraObjectInterfaceParameterDefinition *param_1,FVector4dCameraParameter *param_2,
          FCameraVariableTable *param_3,bool param_4)

{
  double *pdVar1;
  FCameraVariableID FVar2;
  uint uVar3;
  UVector4dCameraVariable *pUVar4;
  uchar *puVar5;
  code *pcVar6;
  bool bVar7;
  TVector4<double> *pTVar8;
  FEntry *pFVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint local_res8 [2];
  uint *local_res10;
  double local_48;
  double dStack_40;
  FCameraVariableDefinition local_28;
  
  FVar2.Value = (param_1->VariableID).Value;
  pUVar4 = (param_2->Variable).field0_0x0.DebugPtr;
  if (pUVar4 == (UVector4dCameraVariable *)0x0) {
    if (!param_4) {
      FCameraVariableTable::SetValue<UE::Math::TVector4<double>_>(param_3,FVar2,&param_2->Value);
    }
    return;
  }
  UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)pUVar4,&local_28);
  pUVar4 = (param_2->Variable).field0_0x0.DebugPtr;
  pTVar8 = FCameraVariableTable::FindValue<UE::Math::TVector4<double>_>(param_3,local_28.VariableID)
  ;
  if (pTVar8 == (TVector4<double> *)0x0) {
    local_48 = (pUVar4->DefaultValue).field0_0x0._s_0.X;
    dStack_40 = (pUVar4->DefaultValue).field0_0x0._s_0.Y;
    uVar10 = *(undefined4 *)((longlong)&(pUVar4->DefaultValue).field0_0x0 + 0x10);
    uVar11 = *(undefined4 *)((longlong)&(pUVar4->DefaultValue).field0_0x0 + 0x14);
    uVar12 = *(undefined4 *)((longlong)&(pUVar4->DefaultValue).field0_0x0 + 0x18);
    uVar13 = *(undefined4 *)((longlong)&(pUVar4->DefaultValue).field0_0x0 + 0x1c);
  }
  else {
    local_48 = (pTVar8->field0_0x0)._s_0.X;
    dStack_40 = (pTVar8->field0_0x0)._s_0.Y;
    uVar10 = *(undefined4 *)((longlong)&pTVar8->field0_0x0 + 0x10);
    uVar11 = *(undefined4 *)((longlong)&pTVar8->field0_0x0 + 0x14);
    uVar12 = *(undefined4 *)((longlong)&pTVar8->field0_0x0 + 0x18);
    uVar13 = *(undefined4 *)((longlong)&pTVar8->field0_0x0 + 0x1c);
  }
  local_res8[0] = FVar2.Value;
  pFVar9 = FCameraVariableTable::FindEntry(param_3,FVar2);
  if (pFVar9 == (FEntry *)0x0) {
    local_res10 = local_res8;
    bVar7 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector4<double>_>'::__l3::
            <lambda_1>::operator()(&local_res10);
    if (!bVar7) {
      return;
    }
  }
  if ((pFVar9->Type != Vector4d) &&
     (bVar7 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7269619262472323284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                         ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = pFVar9->Offset;
  puVar5 = param_3->Memory;
  pdVar1 = (double *)(puVar5 + uVar3);
  *pdVar1 = local_48;
  pdVar1[1] = dStack_40;
  puVar5 = puVar5 + (ulonglong)uVar3 + 0x10;
  *(ulonglong *)puVar5 = CONCAT44(uVar11,uVar10);
  *(ulonglong *)(puVar5 + 8) = CONCAT44(uVar13,uVar12);
  pFVar9->Flags = pFVar9->Flags | (WrittenThisFrame|Written);
  return;
}

// ApplyBlendableParameterOverride<FVector4fCameraParameter> @ 14d5e8590

void __cdecl
UE::Cameras::Internal::ApplyBlendableParameterOverride<FVector4fCameraParameter>
          (FCameraObjectInterfaceParameterDefinition *param_1,FVector4fCameraParameter *param_2,
          FCameraVariableTable *param_3,bool param_4)

{
  float *pfVar1;
  UVector4fCameraVariable *pUVar2;
  code *pcVar3;
  bool bVar4;
  TVector4<float> *pTVar5;
  FEntry *pFVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint local_res8 [2];
  uint *local_res10;
  FCameraVariableDefinition local_38 [2];
  
  local_res8[0] = (param_1->VariableID).Value;
  pUVar2 = (param_2->Variable).field0_0x0.DebugPtr;
  if (pUVar2 == (UVector4fCameraVariable *)0x0) {
    if (!param_4) {
      FCameraVariableTable::SetValue<UE::Math::TVector4<float>_>
                (param_3,(FCameraVariableID)local_res8[0],&param_2->Value);
      return;
    }
  }
  else {
    UCameraVariableAsset::GetVariableDefinition((UCameraVariableAsset *)pUVar2,local_38);
    pUVar2 = (param_2->Variable).field0_0x0.DebugPtr;
    pTVar5 = FCameraVariableTable::FindValue<UE::Math::TVector4<float>_>
                       (param_3,local_38[0].VariableID);
    if (pTVar5 == (TVector4<float> *)0x0) {
      fVar7 = (pUVar2->DefaultValue).field0_0x0._s_0.X;
      fVar8 = (pUVar2->DefaultValue).field0_0x0._s_0.Y;
      fVar9 = (pUVar2->DefaultValue).field0_0x0._s_0.Z;
      fVar10 = (pUVar2->DefaultValue).field0_0x0._s_0.W;
    }
    else {
      fVar7 = (pTVar5->field0_0x0)._s_0.X;
      fVar8 = (pTVar5->field0_0x0)._s_0.Y;
      fVar9 = (pTVar5->field0_0x0)._s_0.Z;
      fVar10 = (pTVar5->field0_0x0)._s_0.W;
    }
    pFVar6 = FCameraVariableTable::FindEntry(param_3,(FCameraVariableID)local_res8[0]);
    if (pFVar6 == (FEntry *)0x0) {
      local_res10 = local_res8;
      bVar4 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector4<float>_>'::__l3::
              <lambda_1>::operator()(&local_res10);
      if (!bVar4) {
        return;
      }
    }
    if ((pFVar6->Type != Vector4f) &&
       (bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7269619262472323284>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                           ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pfVar1 = (float *)(param_3->Memory + pFVar6->Offset);
    *pfVar1 = fVar7;
    pfVar1[1] = fVar8;
    pfVar1[2] = fVar9;
    pfVar1[3] = fVar10;
    pFVar6->Flags = pFVar6->Flags | (WrittenThisFrame|Written);
  }
  return;
}

// ApplyDataParameterElementOverride<unsigned_char> @ 14d5e86a0

void __cdecl
UE::Cameras::Internal::ApplyDataParameterElementOverride<unsigned_char>
          (FCameraObjectInterfaceParameterDefinition *param_1,
          TValueOrError<unsigned_char,EPropertyBagResult> *param_2,int param_3,
          FCameraContextDataTable *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  TValueOrError<unsigned_char,EPropertyBagResult> *local_res10;
  
  uVar3 = (ulonglong)(param_2->Variant).TypeIndex;
  if ((2 < uVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar3 + 4) != '\0') {
    uVar3 = (ulonglong)(param_2->Variant).TypeIndex;
    if ((2 < uVar3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<unsigned_char,EPropertyBagResult>::FWrapErrorType,unsigned_char,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar3) == '\0') goto LAB_14d5e8754;
  }
  local_res10 = param_2;
  bVar2 = `UE::Cameras::Internal::ApplyDataParameterElementOverride<unsigned_char>'::__l3::
          <lambda_1>::operator()(&local_res10);
  if (!bVar2) {
    return;
  }
LAB_14d5e8754:
  if (((param_2->Variant).TypeIndex != '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FCameraContextDataTable::TrySetArrayData
            (param_4,(FCameraContextDataID)(param_1->DataID).Value,param_1->DataType,
             (param_1->DataTypeObject).field0_0x0.DebugPtr,param_3,(uchar *)param_2,true);
  return;
}

// ApplyDataParameterElementOverride<UClass_*> @ 14d5e87d0

void __cdecl
UE::Cameras::Internal::ApplyDataParameterElementOverride<UClass_*>
          (FCameraObjectInterfaceParameterDefinition *param_1,
          TValueOrError<UClass_*,EPropertyBagResult> *param_2,int param_3,
          FCameraContextDataTable *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  TValueOrError<UClass_*,EPropertyBagResult> *local_res10;
  
  uVar3 = (ulonglong)(param_2->Variant).TypeIndex;
  if ((2 < uVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UClass*___ptr64,UClass*___ptr64,TValueOrError<UClass*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar3) != '\0') {
    uVar3 = (ulonglong)(param_2->Variant).TypeIndex;
    if ((2 < uVar3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<UClass*___ptr64,EPropertyBagResult>::FWrapErrorType,UClass*___ptr64,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar3) == '\0') goto LAB_14d5e8884;
  }
  local_res10 = param_2;
  bVar2 = `UE::Cameras::Internal::ApplyDataParameterElementOverride<UClass_*>'::__l3::<lambda_1>::
          operator()(&local_res10);
  if (!bVar2) {
    return;
  }
LAB_14d5e8884:
  if (((param_2->Variant).TypeIndex != '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FCameraContextDataTable::TrySetArrayData
            (param_4,(FCameraContextDataID)(param_1->DataID).Value,param_1->DataType,
             (param_1->DataTypeObject).field0_0x0.DebugPtr,param_3,(uchar *)param_2,true);
  return;
}

// ApplyDataParameterElementOverride<UObject_*> @ 14d5e8900

void __cdecl
UE::Cameras::Internal::ApplyDataParameterElementOverride<UObject_*>
          (FCameraObjectInterfaceParameterDefinition *param_1,
          TValueOrError<UObject_*,EPropertyBagResult> *param_2,int param_3,
          FCameraContextDataTable *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  TValueOrError<UObject_*,EPropertyBagResult> *local_res10;
  
  uVar3 = (ulonglong)(param_2->Variant).TypeIndex;
  if ((2 < uVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar3) != '\0') {
    uVar3 = (ulonglong)(param_2->Variant).TypeIndex;
    if ((2 < uVar3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,FString,TValueOrError<class_FString,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar3 + 4) == '\0') goto LAB_14d5e89b4;
  }
  local_res10 = param_2;
  bVar2 = `UE::Cameras::Internal::ApplyDataParameterElementOverride<UObject_*>'::__l3::<lambda_1>::
          operator()(&local_res10);
  if (!bVar2) {
    return;
  }
LAB_14d5e89b4:
  if (((param_2->Variant).TypeIndex != '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FCameraContextDataTable::TrySetArrayData
            (param_4,(FCameraContextDataID)(param_1->DataID).Value,param_1->DataType,
             (param_1->DataTypeObject).field0_0x0.DebugPtr,param_3,(uchar *)param_2,true);
  return;
}

// ApplyDataParameterElementOverride<FStructView> @ 14d5e8a30

void __cdecl
UE::Cameras::Internal::ApplyDataParameterElementOverride<FStructView>
          (FCameraObjectInterfaceParameterDefinition *param_1,
          TValueOrError<FStructView,EPropertyBagResult> *param_2,int param_3,
          FCameraContextDataTable *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  TValueOrError<FStructView,EPropertyBagResult> *local_res10;
  
  uVar3 = (ulonglong)(param_2->Variant).TypeIndex;
  if ((2 < uVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar3 + 4) != '\0') {
    uVar3 = (ulonglong)(param_2->Variant).TypeIndex;
    if ((2 < uVar3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FStructView,EPropertyBagResult>::FWrapErrorType,FStructView,TValueOrError<struct_FStructView,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FStructView,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar3) == '\0') goto LAB_14d5e8ae4;
  }
  local_res10 = param_2;
  bVar2 = `UE::Cameras::Internal::ApplyDataParameterElementOverride<FStructView>'::__l3::<lambda_1>
          ::operator()(&local_res10);
  if (!bVar2) {
    return;
  }
LAB_14d5e8ae4:
  if (((param_2->Variant).TypeIndex != '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FCameraContextDataTable::TrySetArrayData
            (param_4,(FCameraContextDataID)(param_1->DataID).Value,param_1->DataType,
             (param_1->DataTypeObject).field0_0x0.DebugPtr,param_3,
             (uchar *)(param_2->Variant)._padding_,true);
  return;
}

// ApplyDataParameterElementOverride<FName> @ 14d5e8b60

void __cdecl
UE::Cameras::Internal::ApplyDataParameterElementOverride<FName>
          (FCameraObjectInterfaceParameterDefinition *param_1,
          TValueOrError<FName,EPropertyBagResult> *param_2,int param_3,
          FCameraContextDataTable *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  TValueOrError<FName,EPropertyBagResult> *local_res10;
  
  uVar3 = (ulonglong)(param_2->Variant).TypeIndex;
  if ((2 < uVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar3) != '\0') {
    uVar3 = (ulonglong)(param_2->Variant).TypeIndex;
    if ((2 < uVar3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<double,EPropertyBagResult>::FWrapErrorType,double,TValueOrError<double,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<double,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar3 + 4) == '\0') goto LAB_14d5e8c14;
  }
  local_res10 = param_2;
  bVar2 = `UE::Cameras::Internal::ApplyDataParameterElementOverride<FName>'::__l3::<lambda_1>::
          operator()(&local_res10);
  if (!bVar2) {
    return;
  }
LAB_14d5e8c14:
  if (((param_2->Variant).TypeIndex != '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FCameraContextDataTable::TrySetArrayData
            (param_4,(FCameraContextDataID)(param_1->DataID).Value,param_1->DataType,
             (param_1->DataTypeObject).field0_0x0.DebugPtr,param_3,(uchar *)param_2,true);
  return;
}

// ApplyDataParameterElementOverride<FString> @ 14d5e8c90

void __cdecl
UE::Cameras::Internal::ApplyDataParameterElementOverride<FString>
          (FCameraObjectInterfaceParameterDefinition *param_1,
          TValueOrError<FString,EPropertyBagResult> *param_2,int param_3,
          FCameraContextDataTable *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  TValueOrError<FString,EPropertyBagResult> *local_res10;
  
  uVar3 = (ulonglong)(param_2->Variant).TypeIndex;
  if ((2 < uVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar3 + 4) != '\0') {
    uVar3 = (ulonglong)(param_2->Variant).TypeIndex;
    if ((2 < uVar3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,FString,TValueOrError<class_FString,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar3) == '\0') goto LAB_14d5e8d44;
  }
  local_res10 = param_2;
  bVar2 = `UE::Cameras::Internal::ApplyDataParameterElementOverride<FString>'::__l3::<lambda_1>::
          operator()(&local_res10);
  if (!bVar2) {
    return;
  }
LAB_14d5e8d44:
  if (((param_2->Variant).TypeIndex != '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FCameraContextDataTable::TrySetArrayData
            (param_4,(FCameraContextDataID)(param_1->DataID).Value,param_1->DataType,
             (param_1->DataTypeObject).field0_0x0.DebugPtr,param_3,(uchar *)param_2,true);
  return;
}

// ApplyDataParameterOverride<unsigned_char> @ 14d5e8dc0

void __cdecl
UE::Cameras::Internal::ApplyDataParameterOverride<unsigned_char>
          (FCameraObjectInterfaceParameterDefinition *param_1,
          TValueOrError<unsigned_char,EPropertyBagResult> *param_2,FCameraContextDataTable *param_3)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  TValueOrError<unsigned_char,EPropertyBagResult> *local_res10;
  
  uVar3 = (ulonglong)(param_2->Variant).TypeIndex;
  if ((2 < uVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar3 + 4) != '\0') {
    uVar3 = (ulonglong)(param_2->Variant).TypeIndex;
    if ((2 < uVar3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<unsigned_char,EPropertyBagResult>::FWrapErrorType,unsigned_char,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar3) == '\0') goto LAB_14d5e8e6b;
  }
  local_res10 = param_2;
  bVar2 = `UE::Cameras::Internal::ApplyDataParameterOverride<unsigned_char>'::__l3::<lambda_1>::
          operator()(&local_res10);
  if (!bVar2) {
    return;
  }
LAB_14d5e8e6b:
  if (((param_2->Variant).TypeIndex != '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FCameraContextDataTable::TrySetData
            (param_3,(FCameraContextDataID)(param_1->DataID).Value,param_1->DataType,
             (param_1->DataTypeObject).field0_0x0.DebugPtr,(uchar *)param_2,true);
  return;
}

// ApplyDataParameterOverride<UClass_*> @ 14d5e8ed0

void __cdecl
UE::Cameras::Internal::ApplyDataParameterOverride<UClass_*>
          (FCameraObjectInterfaceParameterDefinition *param_1,
          TValueOrError<UClass_*,EPropertyBagResult> *param_2,FCameraContextDataTable *param_3)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  TValueOrError<UClass_*,EPropertyBagResult> *local_res10;
  
  uVar3 = (ulonglong)(param_2->Variant).TypeIndex;
  if ((2 < uVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UClass*___ptr64,UClass*___ptr64,TValueOrError<UClass*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar3) != '\0') {
    uVar3 = (ulonglong)(param_2->Variant).TypeIndex;
    if ((2 < uVar3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<UClass*___ptr64,EPropertyBagResult>::FWrapErrorType,UClass*___ptr64,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar3) == '\0') goto LAB_14d5e8f7b;
  }
  local_res10 = param_2;
  bVar2 = `UE::Cameras::Internal::ApplyDataParameterOverride<UClass_*>'::__l3::<lambda_1>::
          operator()(&local_res10);
  if (!bVar2) {
    return;
  }
LAB_14d5e8f7b:
  if (((param_2->Variant).TypeIndex != '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FCameraContextDataTable::TrySetData
            (param_3,(FCameraContextDataID)(param_1->DataID).Value,param_1->DataType,
             (param_1->DataTypeObject).field0_0x0.DebugPtr,(uchar *)param_2,true);
  return;
}

// ApplyDataParameterOverride<UObject_*> @ 14d5e8fe0

void __cdecl
UE::Cameras::Internal::ApplyDataParameterOverride<UObject_*>
          (FCameraObjectInterfaceParameterDefinition *param_1,
          TValueOrError<UObject_*,EPropertyBagResult> *param_2,FCameraContextDataTable *param_3)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  TValueOrError<UObject_*,EPropertyBagResult> *local_res10;
  
  uVar3 = (ulonglong)(param_2->Variant).TypeIndex;
  if ((2 < uVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar3) != '\0') {
    uVar3 = (ulonglong)(param_2->Variant).TypeIndex;
    if ((2 < uVar3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,FString,TValueOrError<class_FString,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar3 + 4) == '\0') goto LAB_14d5e908b;
  }
  local_res10 = param_2;
  bVar2 = `UE::Cameras::Internal::ApplyDataParameterOverride<UObject_*>'::__l3::<lambda_1>::
          operator()(&local_res10);
  if (!bVar2) {
    return;
  }
LAB_14d5e908b:
  if (((param_2->Variant).TypeIndex != '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FCameraContextDataTable::TrySetData
            (param_3,(FCameraContextDataID)(param_1->DataID).Value,param_1->DataType,
             (param_1->DataTypeObject).field0_0x0.DebugPtr,(uchar *)param_2,true);
  return;
}

// ApplyDataParameterOverride<FStructView> @ 14d5e90f0

void __cdecl
UE::Cameras::Internal::ApplyDataParameterOverride<FStructView>
          (FCameraObjectInterfaceParameterDefinition *param_1,
          TValueOrError<FStructView,EPropertyBagResult> *param_2,FCameraContextDataTable *param_3)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  TValueOrError<FStructView,EPropertyBagResult> *local_res10;
  
  uVar3 = (ulonglong)(param_2->Variant).TypeIndex;
  if ((2 < uVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar3 + 4) != '\0') {
    uVar3 = (ulonglong)(param_2->Variant).TypeIndex;
    if ((2 < uVar3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FStructView,EPropertyBagResult>::FWrapErrorType,FStructView,TValueOrError<struct_FStructView,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FStructView,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar3) == '\0') goto LAB_14d5e919b;
  }
  local_res10 = param_2;
  bVar2 = `UE::Cameras::Internal::ApplyDataParameterOverride<FStructView>'::__l3::<lambda_1>::
          operator()(&local_res10);
  if (!bVar2) {
    return;
  }
LAB_14d5e919b:
  if (((param_2->Variant).TypeIndex != '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FCameraContextDataTable::TrySetData
            (param_3,(FCameraContextDataID)(param_1->DataID).Value,param_1->DataType,
             (param_1->DataTypeObject).field0_0x0.DebugPtr,(uchar *)(param_2->Variant)._padding_,
             true);
  return;
}

// ApplyDataParameterOverride<FName> @ 14d5e9210

void __cdecl
UE::Cameras::Internal::ApplyDataParameterOverride<FName>
          (FCameraObjectInterfaceParameterDefinition *param_1,
          TValueOrError<FName,EPropertyBagResult> *param_2,FCameraContextDataTable *param_3)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  TValueOrError<FName,EPropertyBagResult> *local_res10;
  
  uVar3 = (ulonglong)(param_2->Variant).TypeIndex;
  if ((2 < uVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar3) != '\0') {
    uVar3 = (ulonglong)(param_2->Variant).TypeIndex;
    if ((2 < uVar3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<double,EPropertyBagResult>::FWrapErrorType,double,TValueOrError<double,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<double,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar3 + 4) == '\0') goto LAB_14d5e92bb;
  }
  local_res10 = param_2;
  bVar2 = `UE::Cameras::Internal::ApplyDataParameterOverride<FName>'::__l3::<lambda_1>::operator()
                    (&local_res10);
  if (!bVar2) {
    return;
  }
LAB_14d5e92bb:
  if (((param_2->Variant).TypeIndex != '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FCameraContextDataTable::TrySetData
            (param_3,(FCameraContextDataID)(param_1->DataID).Value,param_1->DataType,
             (param_1->DataTypeObject).field0_0x0.DebugPtr,(uchar *)param_2,true);
  return;
}

// ApplyDataParameterOverride<FString> @ 14d5e9320

void __cdecl
UE::Cameras::Internal::ApplyDataParameterOverride<FString>
          (FCameraObjectInterfaceParameterDefinition *param_1,
          TValueOrError<FString,EPropertyBagResult> *param_2,FCameraContextDataTable *param_3)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  TValueOrError<FString,EPropertyBagResult> *local_res10;
  
  uVar3 = (ulonglong)(param_2->Variant).TypeIndex;
  if ((2 < uVar3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar3 + 4) != '\0') {
    uVar3 = (ulonglong)(param_2->Variant).TypeIndex;
    if ((2 < uVar3) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,FString,TValueOrError<class_FString,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar3) == '\0') goto LAB_14d5e93cb;
  }
  local_res10 = param_2;
  bVar2 = `UE::Cameras::Internal::ApplyDataParameterOverride<FString>'::__l3::<lambda_1>::operator()
                    (&local_res10);
  if (!bVar2) {
    return;
  }
LAB_14d5e93cb:
  if (((param_2->Variant).TypeIndex != '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FCameraContextDataTable::TrySetData
            (param_3,(FCameraContextDataID)(param_1->DataID).Value,param_1->DataType,
             (param_1->DataTypeObject).field0_0x0.DebugPtr,(uchar *)param_2,true);
  return;
}

// ConvertOperationalProperty<FCameraFramingZone,FCameraFramingZone> @ 14d5edbe0

void __cdecl
UE::MovieScene::ConvertOperationalProperty<FCameraFramingZone,FCameraFramingZone>
          (FCameraFramingZone *param_1,FCameraFramingZone *param_2)

{
  double dVar1;
  
  dVar1 = param_1->Top;
  param_2->Left = param_1->Left;
  param_2->Top = dVar1;
  dVar1 = param_1->Bottom;
  param_2->Right = param_1->Right;
  param_2->Bottom = dVar1;
  return;
}

// DereferenceIfNecessary<AGameplayCamerasPlayerCameraManager,AGameplayCamerasPlayerCameraManager_*_&> @ 14d5ee0c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

AGameplayCamerasPlayerCameraManager * __cdecl
UE::Core::Private::
DereferenceIfNecessary<AGameplayCamerasPlayerCameraManager,AGameplayCamerasPlayerCameraManager_*_&>
          (AGameplayCamerasPlayerCameraManager **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<IGameplayCameraSystemHost,IGameplayCameraSystemHost_*_&> @ 14d5ee0e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

IGameplayCameraSystemHost * __cdecl
UE::Core::Private::DereferenceIfNecessary<IGameplayCameraSystemHost,IGameplayCameraSystemHost_*_&>
          (IGameplayCameraSystemHost **param_1)

{
  return *param_1;
}

// GetStructRef<FBooleanCameraParameter> @ 14d5f10b0

FBooleanCameraParameter * __cdecl
UE::StructUtils::GetStructRef<FBooleanCameraParameter>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FBooleanCameraParameter *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FBooleanCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FBooleanCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FBooleanCameraParameter::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FBooleanCameraParameter::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FBooleanCameraParameter::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FBooleanCameraParameter *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FDoubleCameraParameter> @ 14d5f1210

FDoubleCameraParameter * __cdecl
UE::StructUtils::GetStructRef<FDoubleCameraParameter>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FDoubleCameraParameter *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FDoubleCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FDoubleCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FDoubleCameraParameter::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FDoubleCameraParameter::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FDoubleCameraParameter::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDoubleCameraParameter *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FFloatCameraParameter> @ 14d5f1370

FFloatCameraParameter * __cdecl
UE::StructUtils::GetStructRef<FFloatCameraParameter>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FFloatCameraParameter *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FFloatCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FFloatCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FFloatCameraParameter::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FFloatCameraParameter::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FFloatCameraParameter::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FFloatCameraParameter *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FInteger32CameraParameter> @ 14d5f14d0

FInteger32CameraParameter * __cdecl
UE::StructUtils::GetStructRef<FInteger32CameraParameter>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FInteger32CameraParameter *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FInteger32CameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FInteger32CameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FInteger32CameraParameter::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FInteger32CameraParameter::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FInteger32CameraParameter::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FInteger32CameraParameter *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FRotator3dCameraParameter> @ 14d5f1630

FRotator3dCameraParameter * __cdecl
UE::StructUtils::GetStructRef<FRotator3dCameraParameter>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FRotator3dCameraParameter *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FRotator3dCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FRotator3dCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FRotator3dCameraParameter::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FRotator3dCameraParameter::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FRotator3dCameraParameter::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRotator3dCameraParameter *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FRotator3fCameraParameter> @ 14d5f1790

FRotator3fCameraParameter * __cdecl
UE::StructUtils::GetStructRef<FRotator3fCameraParameter>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FRotator3fCameraParameter *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FRotator3fCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FRotator3fCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FRotator3fCameraParameter::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FRotator3fCameraParameter::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FRotator3fCameraParameter::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRotator3fCameraParameter *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FTransform3dCameraParameter> @ 14d5f18f0

FTransform3dCameraParameter * __cdecl
UE::StructUtils::GetStructRef<FTransform3dCameraParameter>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FTransform3dCameraParameter *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FTransform3dCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FTransform3dCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FTransform3dCameraParameter::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FTransform3dCameraParameter::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FTransform3dCameraParameter::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FTransform3dCameraParameter *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FTransform3fCameraParameter> @ 14d5f1a50

FTransform3fCameraParameter * __cdecl
UE::StructUtils::GetStructRef<FTransform3fCameraParameter>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FTransform3fCameraParameter *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FTransform3fCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FTransform3fCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FTransform3fCameraParameter::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FTransform3fCameraParameter::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FTransform3fCameraParameter::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FTransform3fCameraParameter *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FVector2dCameraParameter> @ 14d5f1bb0

FVector2dCameraParameter * __cdecl
UE::StructUtils::GetStructRef<FVector2dCameraParameter>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FVector2dCameraParameter *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FVector2dCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FVector2dCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FVector2dCameraParameter::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FVector2dCameraParameter::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FVector2dCameraParameter::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FVector2dCameraParameter *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FVector2fCameraParameter> @ 14d5f1d10

FVector2fCameraParameter * __cdecl
UE::StructUtils::GetStructRef<FVector2fCameraParameter>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FVector2fCameraParameter *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FVector2fCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FVector2fCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FVector2fCameraParameter::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FVector2fCameraParameter::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FVector2fCameraParameter::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FVector2fCameraParameter *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FVector3dCameraParameter> @ 14d5f1e70

FVector3dCameraParameter * __cdecl
UE::StructUtils::GetStructRef<FVector3dCameraParameter>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FVector3dCameraParameter *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FVector3dCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FVector3dCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FVector3dCameraParameter::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FVector3dCameraParameter::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FVector3dCameraParameter::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FVector3dCameraParameter *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FVector3fCameraParameter> @ 14d5f1fd0

FVector3fCameraParameter * __cdecl
UE::StructUtils::GetStructRef<FVector3fCameraParameter>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FVector3fCameraParameter *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FVector3fCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FVector3fCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FVector3fCameraParameter::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FVector3fCameraParameter::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FVector3fCameraParameter::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FVector3fCameraParameter *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FVector4dCameraParameter> @ 14d5f2130

FVector4dCameraParameter * __cdecl
UE::StructUtils::GetStructRef<FVector4dCameraParameter>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FVector4dCameraParameter *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FVector4dCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FVector4dCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FVector4dCameraParameter::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FVector4dCameraParameter::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FVector4dCameraParameter::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FVector4dCameraParameter *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// GetStructRef<FVector4fCameraParameter> @ 14d5f2290

FVector4fCameraParameter * __cdecl
UE::StructUtils::GetStructRef<FVector4fCameraParameter>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FVector4fCameraParameter *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  if ((param_2 == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FVector4fCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FVector4fCameraParameter *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FVector4fCameraParameter::StaticStruct();
  if (param_1 != pUVar5) {
    pUVar5 = FVector4fCameraParameter::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return param_2;
      }
    }
    pUVar5 = FVector4fCameraParameter::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FVector4fCameraParameter *)(*pcVar2)();
      return pFVar4;
    }
  }
  return param_2;
}

// OverrideContextDataTableEntry<unsigned_char> @ 14d5f82f0

void __cdecl
UE::Cameras::Internal::OverrideContextDataTableEntry<unsigned_char>
          (FCameraObjectInterfaceParameterDefinition *param_1,uchar *param_2,
          FCameraContextDataTable *param_3)

{
  FCameraContextDataTable::TrySetData
            (param_3,(FCameraContextDataID)(param_1->DataID).Value,param_1->DataType,
             (param_1->DataTypeObject).field0_0x0.DebugPtr,param_2,true);
  return;
}

// OverrideContextDataTableEntry<UClass_*> @ 14d5f8320

void __cdecl
UE::Cameras::Internal::OverrideContextDataTableEntry<UClass_*>
          (FCameraObjectInterfaceParameterDefinition *param_1,UClass **param_2,
          FCameraContextDataTable *param_3)

{
  FCameraContextDataTable::TrySetData
            (param_3,(FCameraContextDataID)(param_1->DataID).Value,param_1->DataType,
             (param_1->DataTypeObject).field0_0x0.DebugPtr,(uchar *)param_2,true);
  return;
}

// OverrideContextDataTableEntry<UObject_*> @ 14d5f8350

void __cdecl
UE::Cameras::Internal::OverrideContextDataTableEntry<UObject_*>
          (FCameraObjectInterfaceParameterDefinition *param_1,UObject **param_2,
          FCameraContextDataTable *param_3)

{
  FCameraContextDataTable::TrySetData
            (param_3,(FCameraContextDataID)(param_1->DataID).Value,param_1->DataType,
             (param_1->DataTypeObject).field0_0x0.DebugPtr,(uchar *)param_2,true);
  return;
}

// OverrideContextDataTableEntry<FStructView> @ 14d5f8380

void __cdecl
UE::Cameras::Internal::OverrideContextDataTableEntry<FStructView>
          (FCameraObjectInterfaceParameterDefinition *param_1,FStructView *param_2,
          FCameraContextDataTable *param_3)

{
  FCameraContextDataTable::TrySetData
            (param_3,(FCameraContextDataID)(param_1->DataID).Value,param_1->DataType,
             (param_1->DataTypeObject).field0_0x0.DebugPtr,param_2->StructMemory,true);
  return;
}

// OverrideContextDataTableEntry<FName> @ 14d5f83c0

void __cdecl
UE::Cameras::Internal::OverrideContextDataTableEntry<FName>
          (FCameraObjectInterfaceParameterDefinition *param_1,FName *param_2,
          FCameraContextDataTable *param_3)

{
  FCameraContextDataTable::TrySetData
            (param_3,(FCameraContextDataID)(param_1->DataID).Value,param_1->DataType,
             (param_1->DataTypeObject).field0_0x0.DebugPtr,(uchar *)param_2,true);
  return;
}

// OverrideContextDataTableEntry<FString> @ 14d5f83f0

void __cdecl
UE::Cameras::Internal::OverrideContextDataTableEntry<FString>
          (FCameraObjectInterfaceParameterDefinition *param_1,FString *param_2,
          FCameraContextDataTable *param_3)

{
  FCameraContextDataTable::TrySetData
            (param_3,(FCameraContextDataID)(param_1->DataID).Value,param_1->DataType,
             (param_1->DataTypeObject).field0_0x0.DebugPtr,(uchar *)param_2,true);
  return;
}

// OverrideContextDataTableEntryElement<unsigned_char> @ 14d5f8420

void __cdecl
UE::Cameras::Internal::OverrideContextDataTableEntryElement<unsigned_char>
          (FCameraObjectInterfaceParameterDefinition *param_1,int param_2,uchar *param_3,
          FCameraContextDataTable *param_4)

{
  FCameraContextDataTable::TrySetArrayData
            (param_4,(FCameraContextDataID)(param_1->DataID).Value,param_1->DataType,
             (param_1->DataTypeObject).field0_0x0.DebugPtr,param_2,param_3,true);
  return;
}

// OverrideContextDataTableEntryElement<UClass_*> @ 14d5f8460

void __cdecl
UE::Cameras::Internal::OverrideContextDataTableEntryElement<UClass_*>
          (FCameraObjectInterfaceParameterDefinition *param_1,int param_2,UClass **param_3,
          FCameraContextDataTable *param_4)

{
  FCameraContextDataTable::TrySetArrayData
            (param_4,(FCameraContextDataID)(param_1->DataID).Value,param_1->DataType,
             (param_1->DataTypeObject).field0_0x0.DebugPtr,param_2,(uchar *)param_3,true);
  return;
}

// OverrideContextDataTableEntryElement<UObject_*> @ 14d5f84a0

void __cdecl
UE::Cameras::Internal::OverrideContextDataTableEntryElement<UObject_*>
          (FCameraObjectInterfaceParameterDefinition *param_1,int param_2,UObject **param_3,
          FCameraContextDataTable *param_4)

{
  FCameraContextDataTable::TrySetArrayData
            (param_4,(FCameraContextDataID)(param_1->DataID).Value,param_1->DataType,
             (param_1->DataTypeObject).field0_0x0.DebugPtr,param_2,(uchar *)param_3,true);
  return;
}

// OverrideContextDataTableEntryElement<FStructView> @ 14d5f84e0

void __cdecl
UE::Cameras::Internal::OverrideContextDataTableEntryElement<FStructView>
          (FCameraObjectInterfaceParameterDefinition *param_1,int param_2,FStructView *param_3,
          FCameraContextDataTable *param_4)

{
  FCameraContextDataTable::TrySetArrayData
            (param_4,(FCameraContextDataID)(param_1->DataID).Value,param_1->DataType,
             (param_1->DataTypeObject).field0_0x0.DebugPtr,param_2,param_3->StructMemory,true);
  return;
}

// OverrideContextDataTableEntryElement<FName> @ 14d5f8520

void __cdecl
UE::Cameras::Internal::OverrideContextDataTableEntryElement<FName>
          (FCameraObjectInterfaceParameterDefinition *param_1,int param_2,FName *param_3,
          FCameraContextDataTable *param_4)

{
  FCameraContextDataTable::TrySetArrayData
            (param_4,(FCameraContextDataID)(param_1->DataID).Value,param_1->DataType,
             (param_1->DataTypeObject).field0_0x0.DebugPtr,param_2,(uchar *)param_3,true);
  return;
}

// OverrideContextDataTableEntryElement<FString> @ 14d5f8560

void __cdecl
UE::Cameras::Internal::OverrideContextDataTableEntryElement<FString>
          (FCameraObjectInterfaceParameterDefinition *param_1,int param_2,FString *param_3,
          FCameraContextDataTable *param_4)

{
  FCameraContextDataTable::TrySetArrayData
            (param_4,(FCameraContextDataID)(param_1->DataID).Value,param_1->DataType,
             (param_1->DataTypeObject).field0_0x0.DebugPtr,param_2,(uchar *)param_3,true);
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UCameraNode>_>_> @ 14d5f8730

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UCameraNode>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<TObjectPtr<UCameraNode>_> *param_5,int param_6,int *param_7)

{
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = (ulonglong)param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      uVar1 = 4;
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
  if (uVar1 < 5) {
    if (param_5->SecondaryData == (ForElementType<TObjectPtr<UCameraNode>_>)0x0) goto LAB_14d5f879e;
    uVar4 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_5->SecondaryData,0,uVar4,uVar3);
LAB_14d5f879e:
  *param_7 = uVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>_> @ 14d5f87e0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Cameras::FCameraActorComputedTargetInfo> *param_5,int param_6,
          int *param_7)

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
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
  ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FFramingZone>_> @ 14d5f8880

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FFramingZone>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Cameras::FFramingZone> *param_5,int param_6,int *param_7)

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
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FFramingZone>
  ::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_> @ 14d5f8920

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
          (ushort param_1,ForElementType<float> *param_2,int *param_3)

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
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<float>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Math::TVector2<double>,float>_>_> @ 14d5f89f0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Math::TVector2<double>,float>_>_>
          (ushort param_1,ForElementType<TTuple<UE::Math::TVector2<double>,float>_> *param_2,
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
    if (uVar1 < 0xb) {
      iVar8 = 10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0xb) {
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
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<UE::Math::TVector2<double>,float>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>_> @ 14d5f8ac0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector2<double>_>_>
          (ushort param_1,ForElementType<UE::Math::TVector2<double>_> *param_2,int *param_3)

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
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
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
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Math::TVector2<double>_>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>_> @ 14d5f8b90

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>_>
          (ushort param_1,ForElementType<UE::Cameras::FCameraActorComputedTargetInfo> *param_2,
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
    ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FFramingZone>_> @ 14d5f8c50

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FFramingZone>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Cameras::FFramingZone> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = *param_5;
  uVar3 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar3 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar3 < 5) {
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
    ForElementType<UE::Cameras::FFramingZone>::ResizeAllocation(param_4,iVar2,(int)uVar6,uVar7);
    *param_6 = (int)uVar6;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Math::TVector2<double>,float>_>_> @ 14d5f8d20

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Math::TVector2<double>,float>_>_>
          (uint param_1,uint param_2,
          ForElementType<TTuple<UE::Math::TVector2<double>,float>_> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0xb) {
    iVar2 = 10;
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
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<UE::Math::TVector2<double>,float>_>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FFramingZone>_> @ 14d5f8de0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FFramingZone>_>
          (uint param_1,uint param_2,ForElementType<UE::Cameras::FFramingZone> *param_3,int param_4,
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
    ForElementType<UE::Cameras::FFramingZone>::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Math::TVector2<double>,float>_>_> @ 14d5f8ea0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::Math::TVector2<double>,float>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TTuple<UE::Math::TVector2<double>,float>_> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0xb) {
      iVar1 = 10;
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
    TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<UE::Math::TVector2<double>,float>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>_> @ 14d5f8f20

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Cameras::FCameraActorComputedTargetInfo> *param_4,int param_5,
          int *param_6)

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
    ForElementType<UE::Cameras::FCameraActorComputedTargetInfo>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// operator<< @ 14d601490

FArchive * __cdecl UE::Cameras::operator<<(FArchive *param_1,FCriticalDamper *param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->W0 = *pfVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->X0;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &param_2->X0Derivative;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return param_1;
}

// operator<< @ 14d6015b0

FArchive * __cdecl UE::Cameras::operator<<(FArchive *param_1,FDesired *param_2)

{
  UE::Math::operator<<(param_1,&param_2->ScreenTarget);
  UE::Math::operator<<(param_1,&param_2->FramingCorrection);
  ::operator<<(param_1,&param_2->bHasCorrection);
  return param_1;
}

// operator<< @ 14d601600

FArchive * __cdecl UE::Cameras::operator<<(FArchive *param_1,FFramingZone *param_2)

{
  FFramingZone::Serialize(param_2,param_1);
  return param_1;
}

// operator<< @ 14d601630

FArchive * __cdecl UE::Cameras::operator<<(FArchive *param_1,FState *param_2)

{
  FBaseFramingCameraNodeEvaluator::FState::Serialize(param_2,param_1);
  return param_1;
}

// operator<< @ 14d601660

FArchive * __cdecl UE::Cameras::operator<<(FArchive *param_1,FWorldTargetInfos *param_2)

{
  TArrayPrivateFriend::
  Serialize<UE::Cameras::FCameraActorComputedTargetInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            (param_1,&param_2->TargetInfos);
  return param_1;
}

// operator== @ 14d601b10

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

// ApplyBlendableParameterOverride @ 14d6089c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Cameras::Internal::ApplyBlendableParameterOverride
          (UObject *param_1,FCameraObjectInterfaceParameterDefinition *param_2,
          FInstancedOverridablePropertyBag *param_3,FPropertyBagPropertyDesc *param_4,
          FCameraVariableTable *param_5,bool param_6)

{
  uchar *puVar1;
  undefined4 uVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  uint uVar5;
  FCameraVariableID FVar6;
  uchar *puVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  bool *pbVar11;
  int *piVar12;
  float *pfVar13;
  double *pdVar14;
  TVector2<float>_u_0_s_0 *pTVar15;
  TVector2<double> *pTVar16;
  TVector<float> *pTVar17;
  TVector<double> *pTVar18;
  TVector4<float> *pTVar19;
  TVector4<double> *pTVar20;
  TRotator<float> *pTVar21;
  TRotator<double> *pTVar22;
  FEntry *pFVar23;
  TTransform<float> *pTVar24;
  UScriptStruct *pUVar25;
  TTransform<double> *pTVar26;
  undefined1 uVar27;
  int iVar28;
  ulonglong uVar29;
  TVector2<float>_u_0 TVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auStackY_4e8 [32];
  uint local_4b8 [2];
  uint local_4b0 [2];
  uint local_4a8 [2];
  uint local_4a0 [2];
  uint local_498 [2];
  uint local_490 [2];
  uint local_488 [2];
  FString local_480;
  TValueOrError<FStructView,EPropertyBagResult> *local_470;
  uint *local_468;
  uint *local_460;
  uint *local_458;
  uint *local_450;
  uint *local_448;
  uint *local_440;
  uint *local_438 [2];
  __m128 local_428;
  float local_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  TTransform<double> local_3f8;
  FString local_398;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FCameraVariableDefinition local_1c8;
  FCameraVariableDefinition local_1b0;
  FCameraVariableDefinition local_198;
  FCameraVariableDefinition local_180;
  FCameraVariableDefinition local_168;
  FCameraVariableDefinition local_150;
  FCameraVariableDefinition local_138;
  FCameraVariableDefinition local_120;
  FCameraVariableDefinition local_108;
  FCameraVariableDefinition local_f0;
  FCameraVariableDefinition local_d8;
  FCameraVariableDefinition local_c0;
  FCameraVariableDefinition local_a8;
  FCameraVariableDefinition local_90;
  TValueOrError<FStructView,EPropertyBagResult> local_78;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  if ((param_2->ParameterType != Blendable) &&
     (bVar10 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6752941276653420490>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                          ,0x36,
                          "ParameterDefinition.ParameterType == ECameraObjectInterfaceParameterType::Blendable"
                         ), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((param_2->VariableID).Value == 0xffffffff) {
    if ((byte)LogCameraSystem._0_1_ < 2) {
      return;
    }
    if (param_1 == (UObject *)0x0) {
      ::FString::FString(&local_480,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_480,(UObject *)0x0);
    }
    ::FName::ToString(&param_2->ParameterName,&local_1e8);
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
    if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
    }
    if (local_480.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_480.Data.AllocatorInstance.Data);
    return;
  }
  FInstancedPropertyBag::GetValueStruct
            ((FInstancedPropertyBag *)param_3,&local_78,param_4,(UScriptStruct *)0x0);
  uVar29 = (ulonglong)local_78.Variant.TypeIndex;
  if ((2 < uVar29) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar29 + 4) == '\0') {
LAB_14d608b75:
    local_470 = &local_78;
    bVar10 = `UE::Cameras::Internal::ApplyBlendableParameterOverride'::__l24::<lambda_1>::operator()
                       (&local_470);
    if (!bVar10) {
      return;
    }
  }
  else {
    uVar29 = (ulonglong)local_78.Variant.TypeIndex;
    if ((2 < uVar29) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0x12f,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FStructView,EPropertyBagResult>::FWrapErrorType,FStructView,TValueOrError<struct_FStructView,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FStructView,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar29) != '\0') goto LAB_14d608b75;
  }
  if ((local_78.Variant.TypeIndex != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index == TypeIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                          ,0x97,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar8 = local_78.Variant._padding_;
  switch(param_2->VariableType) {
  case Boolean:
    pUVar25 = FBooleanCameraParameter::StaticStruct();
    if (((UScriptStruct *)lVar8 != pUVar25) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParameterType == FBooleanCameraParameter::StaticStruct()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                            ,0x61,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((TVector2<float>_u_0 *)local_78.Variant._padding_ == (TVector2<float>_u_0 *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StructMemory != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x22,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((UScriptStruct *)local_78.Variant._padding_ == (UScriptStruct *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ScriptStruct != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x23,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pUVar25 = FBooleanCameraParameter::StaticStruct();
    if ((UScriptStruct *)local_78.Variant._padding_ != pUVar25) {
      pUVar25 = FBooleanCameraParameter::StaticStruct();
      if (pUVar25 != (UScriptStruct *)0x0) {
        iVar28 = (int)pUVar25->_padding_;
        if (((int)*(longlong *)(local_78.Variant._padding_ + 0x38) < iVar28) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(local_78.Variant._padding_ + 0x30) + (longlong)iVar28 * 8) !=
            &pUVar25->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) goto LAB_14d608d4e;
      }
      pUVar25 = FBooleanCameraParameter::StaticStruct();
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar25,&local_398,(UObject *)0x0);
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)local_78.Variant._padding_,&local_1d8,(UObject *)0x0);
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                          ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_398.Data.AllocatorInstance.Data);
      }
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
LAB_14d608d4e:
    FVar6.Value = (param_2->VariableID).Value;
    if (*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 8) == (TVector2<float>_u_0)0x0) {
      if (!param_6) {
        FCameraVariableTable::SetValue<bool>(param_5,FVar6,*(bool *)local_78.Variant._padding_);
      }
    }
    else {
      UCameraVariableAsset::GetVariableDefinition
                ((UCameraVariableAsset *)*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 8),
                 &local_a8);
      uVar27 = *(undefined1 *)
                ((longlong)*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 8) + 0x40);
      pbVar11 = FCameraVariableTable::FindValue<bool>(param_5,local_a8.VariableID);
      if (pbVar11 != (bool *)0x0) {
        uVar27 = *pbVar11;
      }
      FCameraVariableTable::SetValue<bool>(param_5,FVar6,(bool)uVar27);
    }
    break;
  case Integer32:
    pUVar25 = FInteger32CameraParameter::StaticStruct();
    if (((UScriptStruct *)lVar8 != pUVar25) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParameterType == FInteger32CameraParameter::StaticStruct()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                            ,0x61,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((TVector2<float>_u_0 *)local_78.Variant._padding_ == (TVector2<float>_u_0 *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StructMemory != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x22,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((UScriptStruct *)local_78.Variant._padding_ == (UScriptStruct *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ScriptStruct != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x23,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pUVar25 = FInteger32CameraParameter::StaticStruct();
    if ((UScriptStruct *)local_78.Variant._padding_ != pUVar25) {
      pUVar25 = FInteger32CameraParameter::StaticStruct();
      if (pUVar25 != (UScriptStruct *)0x0) {
        iVar28 = (int)pUVar25->_padding_;
        if (((int)*(longlong *)(local_78.Variant._padding_ + 0x38) < iVar28) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(local_78.Variant._padding_ + 0x30) + (longlong)iVar28 * 8) !=
            &pUVar25->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) goto LAB_14d608f09;
      }
      pUVar25 = FInteger32CameraParameter::StaticStruct();
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar25,&local_378,(UObject *)0x0);
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)local_78.Variant._padding_,&local_388,(UObject *)0x0);
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                          ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
      if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.Data.AllocatorInstance.Data);
      }
      if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_378.Data.AllocatorInstance.Data);
      }
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
LAB_14d608f09:
    FVar6.Value = (param_2->VariableID).Value;
    if (*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 8) == (TVector2<float>_u_0)0x0) {
      if (!param_6) {
        FCameraVariableTable::SetValue<int>(param_5,FVar6,(int)*(float *)local_78.Variant._padding_)
        ;
      }
    }
    else {
      UCameraVariableAsset::GetVariableDefinition
                ((UCameraVariableAsset *)*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 8),
                 &local_138);
      iVar28 = *(int *)((longlong)*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 8) + 0x40);
      piVar12 = FCameraVariableTable::FindValue<int>(param_5,local_138.VariableID);
      if (piVar12 != (int *)0x0) {
        iVar28 = *piVar12;
      }
      FCameraVariableTable::SetValue<int>(param_5,FVar6,iVar28);
    }
    break;
  case Float:
    pUVar25 = FFloatCameraParameter::StaticStruct();
    if (((UScriptStruct *)lVar8 != pUVar25) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParameterType == FFloatCameraParameter::StaticStruct()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                            ,0x61,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((TVector2<float>_u_0 *)local_78.Variant._padding_ == (TVector2<float>_u_0 *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StructMemory != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x22,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((UScriptStruct *)local_78.Variant._padding_ == (UScriptStruct *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ScriptStruct != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x23,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pUVar25 = FFloatCameraParameter::StaticStruct();
    if ((UScriptStruct *)local_78.Variant._padding_ != pUVar25) {
      pUVar25 = FFloatCameraParameter::StaticStruct();
      if (pUVar25 != (UScriptStruct *)0x0) {
        iVar28 = (int)pUVar25->_padding_;
        if (((int)*(longlong *)(local_78.Variant._padding_ + 0x38) < iVar28) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(local_78.Variant._padding_ + 0x30) + (longlong)iVar28 * 8) !=
            &pUVar25->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) goto LAB_14d6090cc;
      }
      pUVar25 = FFloatCameraParameter::StaticStruct();
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar25,&local_358,(UObject *)0x0);
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)local_78.Variant._padding_,&local_368,(UObject *)0x0);
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                          ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
      if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_368.Data.AllocatorInstance.Data);
      }
      if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_358.Data.AllocatorInstance.Data);
      }
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
LAB_14d6090cc:
    FVar6.Value = (param_2->VariableID).Value;
    if (*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 8) == (TVector2<float>_u_0)0x0) {
      if (!param_6) {
        FCameraVariableTable::SetValue<float>(param_5,FVar6,*(float *)local_78.Variant._padding_);
      }
    }
    else {
      UCameraVariableAsset::GetVariableDefinition
                ((UCameraVariableAsset *)*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 8),
                 &local_1c8);
      fVar31 = *(float *)((longlong)*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 8) + 0x40)
      ;
      pfVar13 = FCameraVariableTable::FindValue<float>(param_5,local_1c8.VariableID);
      if (pfVar13 != (float *)0x0) {
        fVar31 = *pfVar13;
      }
      FCameraVariableTable::SetValue<float>(param_5,FVar6,fVar31);
    }
    break;
  case Double:
    pUVar25 = FDoubleCameraParameter::StaticStruct();
    if (((UScriptStruct *)lVar8 != pUVar25) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParameterType == FDoubleCameraParameter::StaticStruct()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                            ,0x61,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((TVector2<float>_u_0 *)local_78.Variant._padding_ == (TVector2<float>_u_0 *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StructMemory != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x22,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((UScriptStruct *)local_78.Variant._padding_ == (UScriptStruct *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ScriptStruct != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x23,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pUVar25 = FDoubleCameraParameter::StaticStruct();
    if ((UScriptStruct *)local_78.Variant._padding_ != pUVar25) {
      pUVar25 = FDoubleCameraParameter::StaticStruct();
      if (pUVar25 != (UScriptStruct *)0x0) {
        iVar28 = (int)pUVar25->_padding_;
        if (((int)*(longlong *)(local_78.Variant._padding_ + 0x38) < iVar28) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(local_78.Variant._padding_ + 0x30) + (longlong)iVar28 * 8) !=
            &pUVar25->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) goto LAB_14d609295;
      }
      pUVar25 = FDoubleCameraParameter::StaticStruct();
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar25,&local_338,(UObject *)0x0);
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)local_78.Variant._padding_,&local_348,(UObject *)0x0);
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                          ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
      if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_348.Data.AllocatorInstance.Data);
      }
      if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
      }
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
LAB_14d609295:
    FVar6.Value = (param_2->VariableID).Value;
    if (*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x10) == (TVector2<float>_u_0)0x0) {
      if (!param_6) {
        FCameraVariableTable::SetValue<double>
                  (param_5,FVar6,(double)*(TVector2<float>_u_0_s_0 *)local_78.Variant._padding_);
      }
    }
    else {
      UCameraVariableAsset::GetVariableDefinition
                ((UCameraVariableAsset *)*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x10)
                 ,&local_1b0);
      uVar2 = (undefined4)
              *(undefined8 *)
               ((longlong)*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x10) + 0x40);
      uVar4 = (undefined4)
              ((ulonglong)
               *(undefined8 *)
                ((longlong)*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x10) + 0x40) >>
              0x20);
      pdVar14 = FCameraVariableTable::FindValue<double>(param_5,local_1b0.VariableID);
      if (pdVar14 != (double *)0x0) {
        uVar2 = SUB84(*pdVar14,0);
        uVar4 = (undefined4)((ulonglong)*pdVar14 >> 0x20);
      }
      FCameraVariableTable::SetValue<double>(param_5,FVar6,(double)CONCAT44(uVar4,uVar2));
    }
    break;
  case Vector2f:
    pUVar25 = FVector2fCameraParameter::StaticStruct();
    if (((UScriptStruct *)lVar8 != pUVar25) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParameterType == FVector2fCameraParameter::StaticStruct()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                            ,0x61,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((TVector2<float>_u_0 *)local_78.Variant._padding_ == (TVector2<float>_u_0 *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StructMemory != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x22,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((UScriptStruct *)local_78.Variant._padding_ == (UScriptStruct *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ScriptStruct != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x23,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pUVar25 = FVector2fCameraParameter::StaticStruct();
    if ((UScriptStruct *)local_78.Variant._padding_ != pUVar25) {
      pUVar25 = FVector2fCameraParameter::StaticStruct();
      if (pUVar25 != (UScriptStruct *)0x0) {
        iVar28 = (int)pUVar25->_padding_;
        if (((int)*(longlong *)(local_78.Variant._padding_ + 0x38) < iVar28) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(local_78.Variant._padding_ + 0x30) + (longlong)iVar28 * 8) !=
            &pUVar25->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) goto LAB_14d60945e;
      }
      pUVar25 = FVector2fCameraParameter::StaticStruct();
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar25,&local_318,(UObject *)0x0);
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)local_78.Variant._padding_,&local_328,(UObject *)0x0);
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                          ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
      if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data.AllocatorInstance.Data);
      }
      if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_318.Data.AllocatorInstance.Data);
      }
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
LAB_14d60945e:
    FVar6.Value = (param_2->VariableID).Value;
    if (*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x10) == (TVector2<float>_u_0)0x0) {
      if (!param_6) {
        FCameraVariableTable::SetValue<UE::Math::TVector2<float>_>
                  (param_5,FVar6,
                   (TVector2<float>)*(TVector2<float>_u_0_s_0 *)local_78.Variant._padding_);
      }
    }
    else {
      UCameraVariableAsset::GetVariableDefinition
                ((UCameraVariableAsset *)*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x10)
                 ,&local_198);
      TVar30 = (TVector2<float>_u_0)
               *(TVector2<float>_u_0 *)
                &((TVector2<float>_u_0 *)
                 ((longlong)*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x10) + 0x40))->
                 _s_0;
      pTVar15 = (TVector2<float>_u_0_s_0 *)
                FCameraVariableTable::FindValue<UE::Math::TVector2<float>_>
                          (param_5,local_198.VariableID);
      if (pTVar15 != (TVector2<float>_u_0_s_0 *)0x0) {
        TVar30._s_0 = *pTVar15;
      }
      FCameraVariableTable::SetValue<UE::Math::TVector2<float>_>
                (param_5,FVar6,(TVector2<float>)TVar30._s_0);
    }
    break;
  case Vector2d:
    pUVar25 = FVector2dCameraParameter::StaticStruct();
    if (((UScriptStruct *)lVar8 != pUVar25) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParameterType == FVector2dCameraParameter::StaticStruct()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                            ,0x61,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((TVector2<float>_u_0 *)local_78.Variant._padding_ == (TVector2<float>_u_0 *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StructMemory != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x22,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((UScriptStruct *)local_78.Variant._padding_ == (UScriptStruct *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ScriptStruct != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x23,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pUVar25 = FVector2dCameraParameter::StaticStruct();
    if ((UScriptStruct *)local_78.Variant._padding_ != pUVar25) {
      pUVar25 = FVector2dCameraParameter::StaticStruct();
      if (pUVar25 != (UScriptStruct *)0x0) {
        iVar28 = (int)pUVar25->_padding_;
        if (((int)*(longlong *)(local_78.Variant._padding_ + 0x38) < iVar28) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(local_78.Variant._padding_ + 0x30) + (longlong)iVar28 * 8) !=
            &pUVar25->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) goto LAB_14d609623;
      }
      pUVar25 = FVector2dCameraParameter::StaticStruct();
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar25,&local_2f8,(UObject *)0x0);
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)local_78.Variant._padding_,&local_308,(UObject *)0x0);
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                          ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
      if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.Data.AllocatorInstance.Data);
      }
      if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
      }
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
LAB_14d609623:
    local_4b8[0] = (param_2->VariableID).Value;
    if (*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x18) == (TVector2<float>_u_0)0x0) {
      if (!param_6) {
        FCameraVariableTable::SetValue<UE::Math::TVector2<double>_>
                  (param_5,(FCameraVariableID)local_4b8[0],
                   (TVector2<double> *)local_78.Variant._padding_);
      }
    }
    else {
      UCameraVariableAsset::GetVariableDefinition
                ((UCameraVariableAsset *)*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x18)
                 ,&local_180);
      lVar8 = *(longlong *)((TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x18))->XY;
      pTVar16 = FCameraVariableTable::FindValue<UE::Math::TVector2<double>_>
                          (param_5,local_180.VariableID);
      if (pTVar16 == (TVector2<double> *)0x0) {
        uVar2 = *(undefined4 *)(lVar8 + 0x40);
        uVar4 = *(undefined4 *)(lVar8 + 0x44);
        uVar34 = *(undefined4 *)(lVar8 + 0x48);
        uVar36 = *(undefined4 *)(lVar8 + 0x4c);
      }
      else {
        uVar2 = *(undefined4 *)&pTVar16->field0_0x0;
        uVar4 = *(undefined4 *)((longlong)&pTVar16->field0_0x0 + 4);
        uVar34 = *(undefined4 *)((longlong)&pTVar16->field0_0x0 + 8);
        uVar36 = *(undefined4 *)((longlong)&pTVar16->field0_0x0 + 0xc);
      }
      pFVar23 = FCameraVariableTable::FindEntry(param_5,(FCameraVariableID)local_4b8[0]);
      if (pFVar23 == (FEntry *)0x0) {
        local_468 = local_4b8;
        bVar10 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector2<double>_>'::__l3::
                 <lambda_1>::operator()(&local_468);
        if (!bVar10) {
          return;
        }
      }
      if ((pFVar23->Type != Vector2d) &&
         (bVar10 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<7269619262472323284>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                              ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      puVar1 = param_5->Memory + pFVar23->Offset;
      *(undefined4 *)puVar1 = uVar2;
      *(undefined4 *)(puVar1 + 4) = uVar4;
      *(undefined4 *)(puVar1 + 8) = uVar34;
      *(undefined4 *)(puVar1 + 0xc) = uVar36;
      pFVar23->Flags = pFVar23->Flags | (WrittenThisFrame|Written);
    }
    break;
  case Vector3f:
    pUVar25 = FVector3fCameraParameter::StaticStruct();
    if (((UScriptStruct *)lVar8 != pUVar25) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParameterType == FVector3fCameraParameter::StaticStruct()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                            ,0x61,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((TVector2<float>_u_0 *)local_78.Variant._padding_ == (TVector2<float>_u_0 *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StructMemory != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x22,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((UScriptStruct *)local_78.Variant._padding_ == (UScriptStruct *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ScriptStruct != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x23,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pUVar25 = FVector3fCameraParameter::StaticStruct();
    if ((UScriptStruct *)local_78.Variant._padding_ != pUVar25) {
      pUVar25 = FVector3fCameraParameter::StaticStruct();
      if (pUVar25 != (UScriptStruct *)0x0) {
        iVar28 = (int)pUVar25->_padding_;
        if (((int)*(longlong *)(local_78.Variant._padding_ + 0x38) < iVar28) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(local_78.Variant._padding_ + 0x30) + (longlong)iVar28 * 8) !=
            &pUVar25->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) goto LAB_14d609853;
      }
      pUVar25 = FVector3fCameraParameter::StaticStruct();
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar25,&local_2d8,(UObject *)0x0);
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)local_78.Variant._padding_,&local_2e8,(UObject *)0x0);
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                          ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
      if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
      }
      if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
      }
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
LAB_14d609853:
    local_4b0[0] = (param_2->VariableID).Value;
    if (*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x10) == (TVector2<float>_u_0)0x0) {
      if (!param_6) {
        FCameraVariableTable::SetValue<UE::Math::TVector<float>_>
                  (param_5,(FCameraVariableID)local_4b0[0],
                   (TVector<float> *)local_78.Variant._padding_);
      }
    }
    else {
      UCameraVariableAsset::GetVariableDefinition
                ((UCameraVariableAsset *)*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x10)
                 ,&local_168);
      TVar30 = *(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x10);
      pTVar17 = FCameraVariableTable::FindValue<UE::Math::TVector<float>_>
                          (param_5,local_168.VariableID);
      if (pTVar17 == (TVector<float> *)0x0) {
        uVar3 = *(undefined8 *)((longlong)TVar30 + 0x40);
        uVar2 = (undefined4)uVar3;
        uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
        fVar31 = *(float *)((longlong)TVar30 + 0x48);
      }
      else {
        uVar2 = (undefined4)*(undefined8 *)&pTVar17->field0_0x0;
        uVar4 = (undefined4)((ulonglong)*(undefined8 *)&pTVar17->field0_0x0 >> 0x20);
        fVar31 = (pTVar17->field0_0x0)._s_0.Z;
      }
      pFVar23 = FCameraVariableTable::FindEntry(param_5,(FCameraVariableID)local_4b0[0]);
      if (pFVar23 == (FEntry *)0x0) {
        local_460 = local_4b0;
        bVar10 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector<float>_>'::__l3::
                 <lambda_1>::operator()(&local_460);
        if (!bVar10) {
          return;
        }
      }
      if ((pFVar23->Type != Vector3f) &&
         (bVar10 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<7269619262472323284>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                              ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar5 = pFVar23->Offset;
      puVar1 = param_5->Memory;
      *(ulonglong *)(puVar1 + uVar5) = CONCAT44(uVar4,uVar2);
      *(float *)(puVar1 + (ulonglong)uVar5 + 8) = fVar31;
      pFVar23->Flags = pFVar23->Flags | (WrittenThisFrame|Written);
    }
    break;
  case Vector3d:
    pUVar25 = FVector3dCameraParameter::StaticStruct();
    if (((UScriptStruct *)lVar8 != pUVar25) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParameterType == FVector3dCameraParameter::StaticStruct()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                            ,0x61,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((TVector2<float>_u_0 *)local_78.Variant._padding_ == (TVector2<float>_u_0 *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StructMemory != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x22,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((UScriptStruct *)local_78.Variant._padding_ == (UScriptStruct *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ScriptStruct != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x23,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pUVar25 = FVector3dCameraParameter::StaticStruct();
    if ((UScriptStruct *)local_78.Variant._padding_ != pUVar25) {
      pUVar25 = FVector3dCameraParameter::StaticStruct();
      if (pUVar25 != (UScriptStruct *)0x0) {
        iVar28 = (int)pUVar25->_padding_;
        if (((int)*(longlong *)(local_78.Variant._padding_ + 0x38) < iVar28) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(local_78.Variant._padding_ + 0x30) + (longlong)iVar28 * 8) !=
            &pUVar25->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) goto LAB_14d609a90;
      }
      pUVar25 = FVector3dCameraParameter::StaticStruct();
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar25,&local_2b8,(UObject *)0x0);
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)local_78.Variant._padding_,&local_2c8,(UObject *)0x0);
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                          ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
      if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
      }
      if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      }
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
LAB_14d609a90:
    local_4a8[0] = (param_2->VariableID).Value;
    if (*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x20) == (TVector2<float>_u_0)0x0) {
      if (param_6) {
        return;
      }
      FCameraVariableTable::SetValue<UE::Math::TVector<double>_>
                (param_5,(FCameraVariableID)local_4a8[0],
                 (TVector<double> *)local_78.Variant._padding_);
      return;
    }
    UCameraVariableAsset::GetVariableDefinition
              ((UCameraVariableAsset *)*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x20),
               &local_150);
    lVar8 = *(longlong *)((TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x20))->XY;
    pTVar18 = FCameraVariableTable::FindValue<UE::Math::TVector<double>_>
                        (param_5,local_150.VariableID);
    if (pTVar18 == (TVector<double> *)0x0) {
      uVar2 = *(undefined4 *)(lVar8 + 0x40);
      uVar4 = *(undefined4 *)(lVar8 + 0x44);
      uVar34 = *(undefined4 *)(lVar8 + 0x48);
      uVar36 = *(undefined4 *)(lVar8 + 0x4c);
      uVar37 = (undefined4)*(undefined8 *)(lVar8 + 0x50);
      uVar38 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x50) >> 0x20);
    }
    else {
      uVar2 = *(undefined4 *)&pTVar18->field0_0x0;
      uVar4 = *(undefined4 *)((longlong)&pTVar18->field0_0x0 + 4);
      uVar34 = *(undefined4 *)((longlong)&pTVar18->field0_0x0 + 8);
      uVar36 = *(undefined4 *)((longlong)&pTVar18->field0_0x0 + 0xc);
      uVar3 = *(undefined8 *)((longlong)&pTVar18->field0_0x0 + 0x10);
      uVar37 = (undefined4)uVar3;
      uVar38 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    pFVar23 = FCameraVariableTable::FindEntry(param_5,(FCameraVariableID)local_4a8[0]);
    if (pFVar23 == (FEntry *)0x0) {
      local_458 = local_4a8;
      bVar10 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector<double>_>'::__l3::
               <lambda_1>::operator()(&local_458);
      if (!bVar10) {
        return;
      }
    }
    bVar10 = pFVar23->Type == Vector3d;
    goto LAB_14d60a3ae;
  case Vector4f:
    pUVar25 = FVector4fCameraParameter::StaticStruct();
    if (((UScriptStruct *)lVar8 != pUVar25) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParameterType == FVector4fCameraParameter::StaticStruct()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                            ,0x61,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((TVector2<float>_u_0 *)local_78.Variant._padding_ == (TVector2<float>_u_0 *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StructMemory != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x22,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((UScriptStruct *)local_78.Variant._padding_ == (UScriptStruct *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ScriptStruct != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x23,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pUVar25 = FVector4fCameraParameter::StaticStruct();
    if ((UScriptStruct *)local_78.Variant._padding_ != pUVar25) {
      pUVar25 = FVector4fCameraParameter::StaticStruct();
      if (pUVar25 != (UScriptStruct *)0x0) {
        iVar28 = (int)pUVar25->_padding_;
        if (((int)*(longlong *)(local_78.Variant._padding_ + 0x38) < iVar28) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(local_78.Variant._padding_ + 0x30) + (longlong)iVar28 * 8) !=
            &pUVar25->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) goto LAB_14d609c88;
      }
      pUVar25 = FVector4fCameraParameter::StaticStruct();
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar25,&local_298,(UObject *)0x0);
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)local_78.Variant._padding_,&local_2a8,(UObject *)0x0);
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                          ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
      if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
      }
      if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data.AllocatorInstance.Data);
      }
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
LAB_14d609c88:
    local_4a0[0] = (param_2->VariableID).Value;
    if (*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x18) == (TVector2<float>_u_0)0x0) {
      if (!param_6) {
        FCameraVariableTable::SetValue<UE::Math::TVector4<float>_>
                  (param_5,(FCameraVariableID)local_4a0[0],
                   (TVector4<float> *)local_78.Variant._padding_);
      }
    }
    else {
      UCameraVariableAsset::GetVariableDefinition
                ((UCameraVariableAsset *)*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x18)
                 ,&local_90);
      lVar8 = *(longlong *)((TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x18))->XY;
      pTVar19 = FCameraVariableTable::FindValue<UE::Math::TVector4<float>_>
                          (param_5,local_90.VariableID);
      if (pTVar19 == (TVector4<float> *)0x0) {
        fVar31 = *(float *)(lVar8 + 0x40);
        fVar32 = *(float *)(lVar8 + 0x44);
        fVar33 = *(float *)(lVar8 + 0x48);
        fVar35 = *(float *)(lVar8 + 0x4c);
      }
      else {
        fVar31 = (pTVar19->field0_0x0)._s_0.X;
        fVar32 = (pTVar19->field0_0x0)._s_0.Y;
        fVar33 = (pTVar19->field0_0x0)._s_0.Z;
        fVar35 = (pTVar19->field0_0x0)._s_0.W;
      }
      pFVar23 = FCameraVariableTable::FindEntry(param_5,(FCameraVariableID)local_4a0[0]);
      if (pFVar23 == (FEntry *)0x0) {
        local_450 = local_4a0;
        bVar10 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector4<float>_>'::__l3::
                 <lambda_1>::operator()(&local_450);
        if (!bVar10) {
          return;
        }
      }
      if ((pFVar23->Type != Vector4f) &&
         (bVar10 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<7269619262472323284>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                              ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pfVar13 = (float *)(param_5->Memory + pFVar23->Offset);
      *pfVar13 = fVar31;
      pfVar13[1] = fVar32;
      pfVar13[2] = fVar33;
      pfVar13[3] = fVar35;
      pFVar23->Flags = pFVar23->Flags | (WrittenThisFrame|Written);
    }
    break;
  case Vector4d:
    pUVar25 = FVector4dCameraParameter::StaticStruct();
    if (((UScriptStruct *)lVar8 != pUVar25) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParameterType == FVector4dCameraParameter::StaticStruct()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                            ,0x61,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((TVector2<float>_u_0 *)local_78.Variant._padding_ == (TVector2<float>_u_0 *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StructMemory != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x22,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((UScriptStruct *)local_78.Variant._padding_ == (UScriptStruct *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ScriptStruct != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x23,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pUVar25 = FVector4dCameraParameter::StaticStruct();
    if ((UScriptStruct *)local_78.Variant._padding_ != pUVar25) {
      pUVar25 = FVector4dCameraParameter::StaticStruct();
      if (pUVar25 != (UScriptStruct *)0x0) {
        iVar28 = (int)pUVar25->_padding_;
        if (((int)*(longlong *)(local_78.Variant._padding_ + 0x38) < iVar28) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(local_78.Variant._padding_ + 0x30) + (longlong)iVar28 * 8) !=
            &pUVar25->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) goto LAB_14d609eb9;
      }
      pUVar25 = FVector4dCameraParameter::StaticStruct();
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar25,&local_278,(UObject *)0x0);
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)local_78.Variant._padding_,&local_288,(UObject *)0x0);
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                          ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
      if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.Data.AllocatorInstance.Data);
      }
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
LAB_14d609eb9:
    local_498[0] = (param_2->VariableID).Value;
    if (*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x28) == (TVector2<float>_u_0)0x0) {
      if (!param_6) {
        FCameraVariableTable::SetValue<UE::Math::TVector4<double>_>
                  (param_5,(FCameraVariableID)local_498[0],
                   (TVector4<double> *)local_78.Variant._padding_);
      }
    }
    else {
      UCameraVariableAsset::GetVariableDefinition
                ((UCameraVariableAsset *)*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x28)
                 ,&local_120);
      lVar8 = *(longlong *)((TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x28))->XY;
      pTVar20 = FCameraVariableTable::FindValue<UE::Math::TVector4<double>_>
                          (param_5,local_120.VariableID);
      if (pTVar20 == (TVector4<double> *)0x0) {
        uVar2 = *(undefined4 *)(lVar8 + 0x40);
        uVar4 = *(undefined4 *)(lVar8 + 0x44);
        uVar34 = *(undefined4 *)(lVar8 + 0x48);
        uVar36 = *(undefined4 *)(lVar8 + 0x4c);
        uVar37 = *(undefined4 *)(lVar8 + 0x50);
        uVar38 = *(undefined4 *)(lVar8 + 0x54);
        uVar39 = *(undefined4 *)(lVar8 + 0x58);
        uVar40 = *(undefined4 *)(lVar8 + 0x5c);
      }
      else {
        uVar2 = *(undefined4 *)&pTVar20->field0_0x0;
        uVar4 = *(undefined4 *)((longlong)&pTVar20->field0_0x0 + 4);
        uVar34 = *(undefined4 *)((longlong)&pTVar20->field0_0x0 + 8);
        uVar36 = *(undefined4 *)((longlong)&pTVar20->field0_0x0 + 0xc);
        uVar37 = *(undefined4 *)((longlong)&pTVar20->field0_0x0 + 0x10);
        uVar38 = *(undefined4 *)((longlong)&pTVar20->field0_0x0 + 0x14);
        uVar39 = *(undefined4 *)((longlong)&pTVar20->field0_0x0 + 0x18);
        uVar40 = *(undefined4 *)((longlong)&pTVar20->field0_0x0 + 0x1c);
      }
      pFVar23 = FCameraVariableTable::FindEntry(param_5,(FCameraVariableID)local_498[0]);
      if (pFVar23 == (FEntry *)0x0) {
        local_448 = local_498;
        bVar10 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TVector4<double>_>'::__l3::
                 <lambda_1>::operator()(&local_448);
        if (!bVar10) {
          return;
        }
      }
      if ((pFVar23->Type != Vector4d) &&
         (bVar10 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<7269619262472323284>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                              ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar5 = pFVar23->Offset;
      puVar7 = param_5->Memory;
      puVar1 = puVar7 + uVar5;
      *(undefined4 *)puVar1 = uVar2;
      *(undefined4 *)(puVar1 + 4) = uVar4;
      *(undefined4 *)(puVar1 + 8) = uVar34;
      *(undefined4 *)(puVar1 + 0xc) = uVar36;
      puVar7 = puVar7 + (ulonglong)uVar5 + 0x10;
      *(undefined4 *)puVar7 = uVar37;
      *(undefined4 *)(puVar7 + 4) = uVar38;
      *(undefined4 *)(puVar7 + 8) = uVar39;
      *(undefined4 *)(puVar7 + 0xc) = uVar40;
      pFVar23->Flags = pFVar23->Flags | (WrittenThisFrame|Written);
    }
    break;
  case Rotator3f:
    pUVar25 = FRotator3fCameraParameter::StaticStruct();
    if (((UScriptStruct *)lVar8 != pUVar25) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParameterType == FRotator3fCameraParameter::StaticStruct()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                            ,0x61,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((TVector2<float>_u_0 *)local_78.Variant._padding_ == (TVector2<float>_u_0 *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StructMemory != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x22,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((UScriptStruct *)local_78.Variant._padding_ == (UScriptStruct *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ScriptStruct != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x23,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pUVar25 = FRotator3fCameraParameter::StaticStruct();
    if ((UScriptStruct *)local_78.Variant._padding_ != pUVar25) {
      pUVar25 = FRotator3fCameraParameter::StaticStruct();
      if (pUVar25 != (UScriptStruct *)0x0) {
        iVar28 = (int)pUVar25->_padding_;
        if (((int)*(longlong *)(local_78.Variant._padding_ + 0x38) < iVar28) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(local_78.Variant._padding_ + 0x30) + (longlong)iVar28 * 8) !=
            &pUVar25->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) goto LAB_14d60a0f6;
      }
      pUVar25 = FRotator3fCameraParameter::StaticStruct();
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar25,&local_258,(UObject *)0x0);
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)local_78.Variant._padding_,&local_268,(UObject *)0x0);
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                          ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
      if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
      }
      if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data.AllocatorInstance.Data);
      }
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
LAB_14d60a0f6:
    local_490[0] = (param_2->VariableID).Value;
    if (*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x10) == (TVector2<float>_u_0)0x0) {
      if (!param_6) {
        FCameraVariableTable::SetValue<UE::Math::TRotator<float>_>
                  (param_5,(FCameraVariableID)local_490[0],
                   (TRotator<float> *)local_78.Variant._padding_);
      }
    }
    else {
      UCameraVariableAsset::GetVariableDefinition
                ((UCameraVariableAsset *)*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x10)
                 ,&local_108);
      TVar30 = *(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x10);
      pTVar21 = FCameraVariableTable::FindValue<UE::Math::TRotator<float>_>
                          (param_5,local_108.VariableID);
      if (pTVar21 == (TRotator<float> *)0x0) {
        uVar3 = *(undefined8 *)((longlong)TVar30 + 0x40);
        uVar2 = (undefined4)uVar3;
        uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
        fVar31 = *(float *)((longlong)TVar30 + 0x48);
      }
      else {
        uVar2 = pTVar21->Pitch;
        uVar4 = pTVar21->Yaw;
        fVar31 = pTVar21->Roll;
      }
      pFVar23 = FCameraVariableTable::FindEntry(param_5,(FCameraVariableID)local_490[0]);
      if (pFVar23 == (FEntry *)0x0) {
        local_440 = local_490;
        bVar10 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TRotator<float>_>'::__l3::
                 <lambda_1>::operator()(&local_440);
        if (!bVar10) {
          return;
        }
      }
      if ((pFVar23->Type != Rotator3f) &&
         (bVar10 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<7269619262472323284>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                              ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar5 = pFVar23->Offset;
      puVar1 = param_5->Memory;
      *(ulonglong *)(puVar1 + uVar5) = CONCAT44(uVar4,uVar2);
      *(float *)(puVar1 + (ulonglong)uVar5 + 8) = fVar31;
      pFVar23->Flags = pFVar23->Flags | (WrittenThisFrame|Written);
    }
    break;
  case Rotator3d:
    pUVar25 = FRotator3dCameraParameter::StaticStruct();
    if (((UScriptStruct *)lVar8 != pUVar25) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParameterType == FRotator3dCameraParameter::StaticStruct()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                            ,0x61,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((TVector2<float>_u_0 *)local_78.Variant._padding_ == (TVector2<float>_u_0 *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StructMemory != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x22,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((UScriptStruct *)local_78.Variant._padding_ == (UScriptStruct *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ScriptStruct != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x23,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pUVar25 = FRotator3dCameraParameter::StaticStruct();
    if ((UScriptStruct *)local_78.Variant._padding_ != pUVar25) {
      pUVar25 = FRotator3dCameraParameter::StaticStruct();
      if (pUVar25 != (UScriptStruct *)0x0) {
        iVar28 = (int)pUVar25->_padding_;
        if (((int)*(longlong *)(local_78.Variant._padding_ + 0x38) < iVar28) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(local_78.Variant._padding_ + 0x30) + (longlong)iVar28 * 8) !=
            &pUVar25->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) goto LAB_14d60a333;
      }
      pUVar25 = FRotator3dCameraParameter::StaticStruct();
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar25,&local_238,(UObject *)0x0);
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)local_78.Variant._padding_,&local_248,(UObject *)0x0);
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                          ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
LAB_14d60a333:
    local_488[0] = (param_2->VariableID).Value;
    if (*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x20) == (TVector2<float>_u_0)0x0) {
      if (param_6) {
        return;
      }
      FCameraVariableTable::SetValue<UE::Math::TRotator<double>_>
                (param_5,(FCameraVariableID)local_488[0],
                 (TRotator<double> *)local_78.Variant._padding_);
      return;
    }
    UCameraVariableAsset::GetVariableDefinition
              ((UCameraVariableAsset *)*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x20),
               &local_f0);
    lVar8 = *(longlong *)((TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x20))->XY;
    pTVar22 = FCameraVariableTable::FindValue<UE::Math::TRotator<double>_>
                        (param_5,local_f0.VariableID);
    if (pTVar22 == (TRotator<double> *)0x0) {
      uVar2 = *(undefined4 *)(lVar8 + 0x40);
      uVar4 = *(undefined4 *)(lVar8 + 0x44);
      uVar34 = *(undefined4 *)(lVar8 + 0x48);
      uVar36 = *(undefined4 *)(lVar8 + 0x4c);
      uVar37 = (undefined4)*(undefined8 *)(lVar8 + 0x50);
      uVar38 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x50) >> 0x20);
    }
    else {
      uVar2 = *(undefined4 *)&pTVar22->Pitch;
      uVar4 = *(undefined4 *)((longlong)&pTVar22->Pitch + 4);
      uVar34 = *(undefined4 *)&pTVar22->Yaw;
      uVar36 = *(undefined4 *)((longlong)&pTVar22->Yaw + 4);
      uVar37 = SUB84(pTVar22->Roll,0);
      uVar38 = (undefined4)((ulonglong)pTVar22->Roll >> 0x20);
    }
    pFVar23 = FCameraVariableTable::FindEntry(param_5,(FCameraVariableID)local_488[0]);
    if (pFVar23 == (FEntry *)0x0) {
      local_438[0] = local_488;
      bVar10 = `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TRotator<double>_>'::__l3::
               <lambda_1>::operator()(local_438);
      if (!bVar10) {
        return;
      }
    }
    bVar10 = pFVar23->Type == Rotator3d;
LAB_14d60a3ae:
    if ((!bVar10) &&
       (bVar10 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7269619262472323284>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                            ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar5 = pFVar23->Offset;
    puVar7 = param_5->Memory;
    puVar1 = puVar7 + uVar5;
    *(undefined4 *)puVar1 = uVar2;
    *(undefined4 *)(puVar1 + 4) = uVar4;
    *(undefined4 *)(puVar1 + 8) = uVar34;
    *(undefined4 *)(puVar1 + 0xc) = uVar36;
    *(ulonglong *)(puVar7 + (ulonglong)uVar5 + 0x10) = CONCAT44(uVar38,uVar37);
    pFVar23->Flags = pFVar23->Flags | (WrittenThisFrame|Written);
    break;
  case Transform3f:
    pUVar25 = FTransform3fCameraParameter::StaticStruct();
    if (((UScriptStruct *)lVar8 != pUVar25) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParameterType == FTransform3fCameraParameter::StaticStruct()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                            ,0x61,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((TVector2<float>_u_0 *)local_78.Variant._padding_ == (TVector2<float>_u_0 *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StructMemory != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x22,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((UScriptStruct *)local_78.Variant._padding_ == (UScriptStruct *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ScriptStruct != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x23,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pUVar25 = FTransform3fCameraParameter::StaticStruct();
    if ((UScriptStruct *)local_78.Variant._padding_ != pUVar25) {
      pUVar25 = FTransform3fCameraParameter::StaticStruct();
      if (pUVar25 != (UScriptStruct *)0x0) {
        iVar28 = (int)pUVar25->_padding_;
        if (((int)*(longlong *)(local_78.Variant._padding_ + 0x38) < iVar28) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(local_78.Variant._padding_ + 0x30) + (longlong)iVar28 * 8) !=
            &pUVar25->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) goto LAB_14d60a573;
      }
      pUVar25 = FTransform3fCameraParameter::StaticStruct();
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar25,&local_218,(UObject *)0x0);
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)local_78.Variant._padding_,&local_228,(UObject *)0x0);
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                          ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
      }
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
LAB_14d60a573:
    FVar6.Value = (param_2->VariableID).Value;
    if (*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x38) == (TVector2<float>_u_0)0x0) {
      if (!param_6) {
        FCameraVariableTable::SetValue<UE::Math::TTransform<float>_>
                  (param_5,FVar6,(TTransform<float> *)local_78.Variant._padding_);
      }
    }
    else {
      UCameraVariableAsset::GetVariableDefinition
                ((UCameraVariableAsset *)*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x38)
                 ,&local_d8);
      lVar8 = *(longlong *)((TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x38))->XY;
      pTVar24 = FCameraVariableTable::FindValue<UE::Math::TTransform<float>_>
                          (param_5,local_d8.VariableID);
      if (pTVar24 == (TTransform<float> *)0x0) {
        local_428.m128_u64[0] = *(ulong64 *)(lVar8 + 0x40);
        local_428.m128_u64[1] = *(ulong64 *)(lVar8 + 0x48);
        local_418 = *(float *)(lVar8 + 0x50);
        fStack_414 = *(float *)(lVar8 + 0x54);
        fStack_410 = *(float *)(lVar8 + 0x58);
        fStack_40c = *(float *)(lVar8 + 0x5c);
        local_408 = *(float *)(lVar8 + 0x60);
        fStack_404 = *(float *)(lVar8 + 100);
        fStack_400 = *(float *)(lVar8 + 0x68);
        fStack_3fc = *(float *)(lVar8 + 0x6c);
      }
      else {
        local_428.m128_u64[0] = (pTVar24->Rotation).m128_u64[0];
        local_428.m128_u64[1] = (pTVar24->Rotation).m128_u64[1];
        local_418 = (pTVar24->Translation).m128_f32[0];
        fStack_414 = (pTVar24->Translation).m128_f32[1];
        fStack_410 = (pTVar24->Translation).m128_f32[2];
        fStack_40c = (pTVar24->Translation).m128_f32[3];
        local_408 = (pTVar24->Scale3D).m128_f32[0];
        fStack_404 = (pTVar24->Scale3D).m128_f32[1];
        fStack_400 = (pTVar24->Scale3D).m128_f32[2];
        fStack_3fc = (pTVar24->Scale3D).m128_f32[3];
      }
      FCameraVariableTable::SetValue<UE::Math::TTransform<float>_>
                (param_5,FVar6,(TTransform<float> *)&local_428);
    }
    break;
  case Transform3d:
    pUVar25 = FTransform3dCameraParameter::StaticStruct();
    if (((UScriptStruct *)lVar8 != pUVar25) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParameterType == FTransform3dCameraParameter::StaticStruct()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                            ,0x61,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((TVector2<float>_u_0 *)local_78.Variant._padding_ == (TVector2<float>_u_0 *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StructMemory != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x22,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((UScriptStruct *)local_78.Variant._padding_ == (UScriptStruct *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ScriptStruct != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                            ,0x23,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pUVar25 = FTransform3dCameraParameter::StaticStruct();
    if ((UScriptStruct *)local_78.Variant._padding_ != pUVar25) {
      pUVar25 = FTransform3dCameraParameter::StaticStruct();
      if (pUVar25 != (UScriptStruct *)0x0) {
        iVar28 = (int)pUVar25->_padding_;
        if (((int)*(longlong *)(local_78.Variant._padding_ + 0x38) < iVar28) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(local_78.Variant._padding_ + 0x30) + (longlong)iVar28 * 8) !=
            &pUVar25->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) goto LAB_14d60a75b;
      }
      pUVar25 = FTransform3dCameraParameter::StaticStruct();
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar25,&local_1f8,(UObject *)0x0);
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)local_78.Variant._padding_,&local_208,(UObject *)0x0);
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                          ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
LAB_14d60a75b:
    FVar6.Value = (param_2->VariableID).Value;
    if (*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x68) == (TVector2<float>_u_0)0x0) {
      if (!param_6) {
        FCameraVariableTable::SetValue<UE::Math::TTransform<double>_>
                  (param_5,FVar6,(TTransform<double> *)local_78.Variant._padding_);
      }
    }
    else {
      UCameraVariableAsset::GetVariableDefinition
                ((UCameraVariableAsset *)*(TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x68)
                 ,&local_c0);
      lVar8 = *(longlong *)((TVector2<float>_u_0 *)(local_78.Variant._padding_ + 0x68))->XY;
      pTVar26 = FCameraVariableTable::FindValue<UE::Math::TTransform<double>_>
                          (param_5,local_c0.VariableID);
      if (pTVar26 == (TTransform<double> *)0x0) {
        local_3f8.Rotation.XY.m128d_f64[0] = *(double *)(lVar8 + 0x40);
        local_3f8.Rotation.XY.m128d_f64[1] = *(double *)(lVar8 + 0x48);
        local_3f8.Rotation.ZW.m128d_f64[0] = *(double *)(lVar8 + 0x50);
        local_3f8.Rotation.ZW.m128d_f64[1] = *(double *)(lVar8 + 0x58);
        local_3f8.Translation.XY.m128d_f64[0] = *(double *)(lVar8 + 0x60);
        local_3f8.Translation.XY.m128d_f64[1] = *(double *)(lVar8 + 0x68);
        local_3f8.Translation.ZW.m128d_f64[0] = *(double *)(lVar8 + 0x70);
        local_3f8.Translation.ZW.m128d_f64[1] = *(double *)(lVar8 + 0x78);
        local_3f8.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(lVar8 + 0x80);
        local_3f8.Scale3D.XY.m128d_f64[0]._4_4_ = *(undefined4 *)(lVar8 + 0x84);
        local_3f8.Scale3D.XY.m128d_f64[1]._0_4_ = *(undefined4 *)(lVar8 + 0x88);
        local_3f8.Scale3D.XY.m128d_f64[1]._4_4_ = *(undefined4 *)(lVar8 + 0x8c);
        local_3f8.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(lVar8 + 0x90);
        local_3f8.Scale3D.ZW.m128d_f64[0]._4_4_ = *(undefined4 *)(lVar8 + 0x94);
        local_3f8.Scale3D.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)(lVar8 + 0x98);
        local_3f8.Scale3D.ZW.m128d_f64[1]._4_4_ = *(undefined4 *)(lVar8 + 0x9c);
      }
      else {
        local_3f8.Rotation.XY.m128d_f64[0] = (pTVar26->Rotation).XY.m128d_f64[0];
        local_3f8.Rotation.XY.m128d_f64[1] = (pTVar26->Rotation).XY.m128d_f64[1];
        local_3f8.Rotation.ZW.m128d_f64[0] = (pTVar26->Rotation).ZW.m128d_f64[0];
        local_3f8.Rotation.ZW.m128d_f64[1] = (pTVar26->Rotation).ZW.m128d_f64[1];
        local_3f8.Translation.XY.m128d_f64[0] = (pTVar26->Translation).XY.m128d_f64[0];
        local_3f8.Translation.XY.m128d_f64[1] = (pTVar26->Translation).XY.m128d_f64[1];
        local_3f8.Translation.ZW.m128d_f64[0] = (pTVar26->Translation).ZW.m128d_f64[0];
        local_3f8.Translation.ZW.m128d_f64[1] = (pTVar26->Translation).ZW.m128d_f64[1];
        local_3f8.Scale3D.XY.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar26->Scale3D).XY.m128d_f64;
        local_3f8.Scale3D.XY.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(pTVar26->Scale3D).XY.m128d_f64 + 4);
        local_3f8.Scale3D.XY.m128d_f64[1]._0_4_ =
             *(undefined4 *)((pTVar26->Scale3D).XY.m128d_f64 + 1);
        local_3f8.Scale3D.XY.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(pTVar26->Scale3D).XY.m128d_f64 + 0xc);
        local_3f8.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar26->Scale3D).ZW.m128d_f64;
        local_3f8.Scale3D.ZW.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(pTVar26->Scale3D).ZW.m128d_f64 + 4);
        local_3f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             *(undefined4 *)((pTVar26->Scale3D).ZW.m128d_f64 + 1);
        local_3f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(pTVar26->Scale3D).ZW.m128d_f64 + 0xc);
      }
      FCameraVariableTable::SetValue<UE::Math::TTransform<double>_>(param_5,FVar6,&local_3f8);
    }
    break;
  case BlendableStruct:
    FCameraVariableTable::SetValue
              (param_5,(FCameraVariableID)(param_2->VariableID).Value,BlendableStruct,
               (param_2->BlendableStructType).field0_0x0.DebugPtr,
               (uchar *)local_78.Variant._padding_,true);
    break;
  default:
    bVar10 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_6752941276653420438>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                        ,0x6a,"false");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  return;
}

// ApplyDataParameterArrayOverride @ 14d60a8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Cameras::Internal::ApplyDataParameterArrayOverride
          (UObject *param_1,FCameraObjectInterfaceParameterDefinition *param_2,
          FInstancedOverridablePropertyBag *param_3,FPropertyBagPropertyDesc *param_4,
          FCameraContextDataTable *param_5)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStackY_198 [32];
  uchar local_158;
  byte local_157;
  TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> *local_150;
  FCameraObjectInterfaceParameterDefinition *local_148;
  TValueOrError<FName,EPropertyBagResult> *local_140;
  TValueOrError<FString,EPropertyBagResult> *local_138;
  uchar *local_130;
  TValueOrError<FStructView,EPropertyBagResult> *local_128;
  TValueOrError<UObject_*,EPropertyBagResult> *local_120;
  TValueOrError<UClass_*,EPropertyBagResult> *local_118;
  TValueOrError<FName,EPropertyBagResult> local_110;
  TValueOrError<UObject_*,EPropertyBagResult> local_100;
  TValueOrError<UClass_*,EPropertyBagResult> local_f0;
  TValueOrError<FString,EPropertyBagResult> local_e0;
  TValueOrError<FStructView,EPropertyBagResult> local_c8;
  TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> local_b0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  FInstancedPropertyBag::GetArrayRef((FInstancedPropertyBag *)param_3,&local_b0,param_4);
  uVar8 = (ulonglong)local_b0.Variant.TypeIndex;
  if ((2 < uVar8) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar8 + 4) != '\0') {
    uVar8 = (ulonglong)local_b0.Variant.TypeIndex;
    if ((2 < uVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FStructView,EPropertyBagResult>::FWrapErrorType,FStructView,TValueOrError<struct_FStructView,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FStructView,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar8 + 4) == '\0') goto LAB_14d60a9c1;
  }
  local_150 = &local_b0;
  bVar4 = `UE::Cameras::Internal::ApplyDataParameterArrayOverride'::__l3::<lambda_1>::operator()
                    (&local_150);
  if (!bVar4) {
    return;
  }
LAB_14d60a9c1:
  if ((local_b0.Variant.TypeIndex != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = *(int *)(local_b0.Variant._padding_ + 8);
  bVar4 = FCameraContextDataTable::TrySetArrayDataNum
                    (param_5,(FCameraContextDataID)(param_2->DataID).Value,iVar1,true);
  if ((bVar4) ||
     (local_148 = param_2,
     bVar4 = `UE::Cameras::Internal::ApplyDataParameterArrayOverride'::__l6::<lambda_2>::operator()
                       (&local_148), bVar4)) {
    switch(param_2->DataType) {
    case Name:
      iVar7 = 0;
      if (0 < iVar1) {
        do {
          FPropertyBagArrayRef::GetValueName((FPropertyBagArrayRef *)&local_b0,&local_110,iVar7);
          uVar8 = (ulonglong)local_110.Variant.TypeIndex;
          if ((2 < uVar8) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(char *)((longlong)
                        &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                         ::__l2::bIsSameType + uVar8) == '\0') {
LAB_14d60aae4:
            local_140 = &local_110;
            bVar4 = `UE::Cameras::Internal::ApplyDataParameterElementOverride<FName>'::__l3::
                    <lambda_1>::operator()(&local_140);
            if (bVar4) goto LAB_14d60aafb;
          }
          else {
            uVar8 = (ulonglong)local_110.Variant.TypeIndex;
            if ((2 < uVar8) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0x12f,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(char *)((longlong)
                          &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<double,EPropertyBagResult>::FWrapErrorType,double,TValueOrError<double,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<double,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                           ::__l2::bIsSameType + uVar8 + 4) != '\0') goto LAB_14d60aae4;
LAB_14d60aafb:
            if ((local_110.Variant.TypeIndex != 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FCameraContextDataTable::TrySetArrayData
                      (param_5,(FCameraContextDataID)(param_2->DataID).Value,param_2->DataType,
                       (param_2->DataTypeObject).field0_0x0.DebugPtr,iVar7,(uchar *)&local_110,true)
            ;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar1);
      }
      break;
    case String:
      iVar7 = 0;
      if (0 < iVar1) {
        do {
          FPropertyBagArrayRef::GetValueString((FPropertyBagArrayRef *)&local_b0,&local_e0,iVar7);
          uVar8 = (ulonglong)local_e0.Variant.TypeIndex;
          if ((2 < uVar8) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(char *)((longlong)
                        &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                         ::__l2::bIsSameType + uVar8 + 4) == '\0') {
LAB_14d60abf4:
            local_138 = &local_e0;
            bVar4 = `UE::Cameras::Internal::ApplyDataParameterElementOverride<FString>'::__l3::
                    <lambda_1>::operator()(&local_138);
            if (bVar4) goto LAB_14d60ac0b;
          }
          else {
            uVar8 = (ulonglong)local_e0.Variant.TypeIndex;
            if ((2 < uVar8) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0x12f,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(char *)((longlong)
                          &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,FString,TValueOrError<class_FString,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                           ::__l2::bIsSameType + uVar8) != '\0') goto LAB_14d60abf4;
LAB_14d60ac0b:
            if ((local_e0.Variant.TypeIndex != 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FCameraContextDataTable::TrySetArrayData
                      (param_5,(FCameraContextDataID)(param_2->DataID).Value,param_2->DataType,
                       (param_2->DataTypeObject).field0_0x0.DebugPtr,iVar7,(uchar *)&local_e0,true);
          }
          uVar8 = (ulonglong)local_e0.Variant.TypeIndex;
          if ((2 < local_e0.Variant.TypeIndex) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar8])(&local_e0);
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar1);
      }
      break;
    case Enum:
      uVar6 = 0;
      if (0 < iVar1) {
        do {
          if ((param_2->DataTypeObject).field0_0x0.DebugPtr == (UObject *)0x0) {
LAB_14d60adf4:
            bVar4 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6752941276653420220>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                               ,0x144,"EnumType");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            pUVar5 = Z_Construct_UClass_UEnum_NoRegister();
            bVar4 = FObjectPtr::IsA((FObjectPtr *)&param_2->DataTypeObject,pUVar5);
            if ((!bVar4) || ((param_2->DataTypeObject).field0_0x0.DebugPtr == (UObject *)0x0))
            goto LAB_14d60adf4;
            FPropertyBagArrayRef::GetValueEnum
                      ((FPropertyBagArrayRef *)&local_b0,(int)&local_158,(UEnum *)(ulonglong)uVar6);
            uVar8 = (ulonglong)local_157;
            if ((2 < uVar8) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0x12f,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(char *)((longlong)
                          &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                           ::__l2::bIsSameType + uVar8 + 4) == '\0') {
LAB_14d60ad86:
              local_130 = &local_158;
              bVar4 = `UE::Cameras::Internal::ApplyDataParameterElementOverride<unsigned_char>'::
                      __l3::<lambda_1>::operator()(&local_130);
              if (bVar4) goto LAB_14d60ad9e;
            }
            else {
              uVar8 = (ulonglong)local_157;
              if ((2 < uVar8) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0x12f,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (*(char *)((longlong)
                            &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<unsigned_char,EPropertyBagResult>::FWrapErrorType,unsigned_char,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                             ::__l2::bIsSameType + uVar8) != '\0') goto LAB_14d60ad86;
LAB_14d60ad9e:
              if ((local_157 != 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index == TypeIndex",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                     ,0x97,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FCameraContextDataTable::TrySetArrayData
                        (param_5,(FCameraContextDataID)(param_2->DataID).Value,param_2->DataType,
                         (param_2->DataTypeObject).field0_0x0.DebugPtr,uVar6,&local_158,true);
            }
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < iVar1);
      }
      break;
    case Struct:
      iVar7 = 0;
      if (0 < iVar1) {
        do {
          if ((param_2->DataTypeObject).field0_0x0.DebugPtr == (UObject *)0x0) {
LAB_14d60af6e:
            bVar4 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_6752941276653420209>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                               ,0x14f,"StructType");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
            bVar4 = FObjectPtr::IsA((FObjectPtr *)&param_2->DataTypeObject,pUVar5);
            if ((!bVar4) ||
               (pUVar2 = (UScriptStruct *)(param_2->DataTypeObject).field0_0x0.DebugPtr,
               pUVar2 == (UScriptStruct *)0x0)) goto LAB_14d60af6e;
            FPropertyBagArrayRef::GetValueStruct
                      ((FPropertyBagArrayRef *)&local_b0,&local_c8,iVar7,pUVar2);
            uVar8 = (ulonglong)local_c8.Variant.TypeIndex;
            if ((2 < uVar8) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0x12f,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(char *)((longlong)
                          &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                           ::__l2::bIsSameType + uVar8 + 4) == '\0') {
LAB_14d60af03:
              local_128 = &local_c8;
              bVar4 = `UE::Cameras::Internal::ApplyDataParameterElementOverride<FStructView>'::__l3
                      ::<lambda_1>::operator()(&local_128);
              if (bVar4) goto LAB_14d60af1a;
            }
            else {
              uVar8 = (ulonglong)local_c8.Variant.TypeIndex;
              if ((2 < uVar8) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                     ,0x12f,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (*(char *)((longlong)
                            &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FStructView,EPropertyBagResult>::FWrapErrorType,FStructView,TValueOrError<struct_FStructView,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FStructView,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                             ::__l2::bIsSameType + uVar8) != '\0') goto LAB_14d60af03;
LAB_14d60af1a:
              if ((local_c8.Variant.TypeIndex != 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index == TypeIndex",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                     ,0x97,L""), bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FCameraContextDataTable::TrySetArrayData
                        (param_5,(FCameraContextDataID)(param_2->DataID).Value,param_2->DataType,
                         (param_2->DataTypeObject).field0_0x0.DebugPtr,iVar7,
                         (uchar *)local_c8.Variant._padding_,true);
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar1);
      }
      break;
    case Object:
      iVar7 = 0;
      if (0 < iVar1) {
        do {
          FPropertyBagArrayRef::GetValueObject
                    ((FPropertyBagArrayRef *)&local_b0,&local_100,iVar7,(UClass *)0x0);
          uVar8 = (ulonglong)local_100.Variant.TypeIndex;
          if ((2 < uVar8) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(char *)((longlong)
                        &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                         ::__l2::bIsSameType + uVar8) == '\0') {
LAB_14d60b037:
            local_120 = &local_100;
            bVar4 = `UE::Cameras::Internal::ApplyDataParameterElementOverride<UObject_*>'::__l3::
                    <lambda_1>::operator()(&local_120);
            if (bVar4) goto LAB_14d60b04e;
          }
          else {
            uVar8 = (ulonglong)local_100.Variant.TypeIndex;
            if ((2 < uVar8) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0x12f,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(char *)((longlong)
                          &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,FString,TValueOrError<class_FString,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                           ::__l2::bIsSameType + uVar8 + 4) != '\0') goto LAB_14d60b037;
LAB_14d60b04e:
            if ((local_100.Variant.TypeIndex != 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FCameraContextDataTable::TrySetArrayData
                      (param_5,(FCameraContextDataID)(param_2->DataID).Value,param_2->DataType,
                       (param_2->DataTypeObject).field0_0x0.DebugPtr,iVar7,(uchar *)&local_100,true)
            ;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar1);
      }
      break;
    case Class:
      iVar7 = 0;
      if (0 < iVar1) {
        do {
          FPropertyBagArrayRef::GetValueClass((FPropertyBagArrayRef *)&local_b0,&local_f0,iVar7);
          uVar8 = (ulonglong)local_f0.Variant.TypeIndex;
          if ((2 < uVar8) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x12f,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(char *)((longlong)
                        &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UClass*___ptr64,UClass*___ptr64,TValueOrError<UClass*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                         ::__l2::bIsSameType + uVar8) == '\0') {
LAB_14d60b144:
            local_118 = &local_f0;
            bVar4 = `UE::Cameras::Internal::ApplyDataParameterElementOverride<UClass_*>'::__l3::
                    <lambda_1>::operator()(&local_118);
            if (bVar4) goto LAB_14d60b159;
          }
          else {
            uVar8 = (ulonglong)local_f0.Variant.TypeIndex;
            if ((2 < uVar8) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0x12f,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (*(char *)((longlong)
                          &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<UClass*___ptr64,EPropertyBagResult>::FWrapErrorType,UClass*___ptr64,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                           ::__l2::bIsSameType + uVar8) != '\0') goto LAB_14d60b144;
LAB_14d60b159:
            if ((local_f0.Variant.TypeIndex != 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FCameraContextDataTable::TrySetArrayData
                      (param_5,(FCameraContextDataID)(param_2->DataID).Value,param_2->DataType,
                       (param_2->DataTypeObject).field0_0x0.DebugPtr,iVar7,(uchar *)&local_f0,true);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar1);
      }
      break;
    default:
      bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6752941276653420187>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                         ,0x165,"false");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  return;
}

// ApplyDataParameterOverride @ 14d60b240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Cameras::Internal::ApplyDataParameterOverride
          (UObject *param_1,FCameraObjectInterfaceParameterDefinition *param_2,
          FInstancedOverridablePropertyBag *param_3,FPropertyBagPropertyDesc *param_4,
          FCameraContextDataTable *param_5)

{
  code *pcVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  if ((param_2->ParameterType != Data) &&
     (bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6752941276653420175>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                         ,0x171,
                         "ParameterDefinition.ParameterType == ECameraObjectInterfaceParameterType::Data"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_2->DataID).Value == 0xffffffff) {
    if (1 < (byte)LogCameraSystem._0_1_) {
      if (param_1 == (UObject *)0x0) {
        ::FString::FString(&local_28,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0);
      }
      ::FName::ToString(&param_2->ParameterName,&local_18);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCameraSystem);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (param_2->DataContainerType == None) {
    ApplyDataParameterSingleOverride(param_1,param_2,param_3,param_4,param_5);
  }
  else if (param_2->DataContainerType == Array) {
    ApplyDataParameterArrayOverride(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

// ApplyDataParameterSingleOverride @ 14d60b3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Cameras::Internal::ApplyDataParameterSingleOverride
          (UObject *param_1,FCameraObjectInterfaceParameterDefinition *param_2,
          FInstancedOverridablePropertyBag *param_3,FPropertyBagPropertyDesc *param_4,
          FCameraContextDataTable *param_5)

{
  code *pcVar1;
  bool bVar2;
  UEnum *pUVar3;
  UScriptStruct *pUVar4;
  ulonglong uVar5;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [8];
  TValueOrError<UObject_*,EPropertyBagResult> *local_d0;
  TValueOrError<FString,EPropertyBagResult> *local_c8;
  FName local_c0;
  TValueOrError<FStructView,EPropertyBagResult> *local_b8;
  TValueOrError<UObject_*,EPropertyBagResult> *local_b0;
  FProperty *local_a8;
  TValueOrError<UObject_*,EPropertyBagResult> local_a0;
  TValueOrError<UObject_*,EPropertyBagResult> local_90;
  TValueOrError<UClass_*,EPropertyBagResult> local_80;
  TValueOrError<FString,EPropertyBagResult> local_70;
  TValueOrError<FStructView,EPropertyBagResult> local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_108;
  switch(param_2->DataType) {
  case Name:
    break;
  case String:
    FInstancedPropertyBag::GetValueString((FInstancedPropertyBag *)param_3,&local_70,param_4);
    uVar5 = (ulonglong)local_70.Variant.TypeIndex;
    if ((2 < uVar5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar5 + 4) == '\0') {
LAB_14d60b568:
      local_c8 = &local_70;
      bVar2 = `UE::Cameras::Internal::ApplyDataParameterOverride<FString>'::__l3::<lambda_1>::
              operator()(&local_c8);
      if (!bVar2) goto LAB_14d60b5ca;
    }
    else {
      uVar5 = (ulonglong)local_70.Variant.TypeIndex;
      if ((2 < uVar5) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,FString,TValueOrError<class_FString,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar5) != '\0') goto LAB_14d60b568;
    }
    if ((local_70.Variant.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FCameraContextDataTable::TrySetData
              (param_5,(FCameraContextDataID)(param_2->DataID).Value,param_2->DataType,
               (param_2->DataTypeObject).field0_0x0.DebugPtr,(uchar *)&local_70,true);
LAB_14d60b5ca:
    if ((2 < local_70.Variant.TypeIndex) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_70.Variant.TypeIndex])(&local_70);
    return;
  case Enum:
    pUVar3 = Cast<UEnum_const_,UObject_const_>(&param_2->DataTypeObject);
    if (pUVar3 == (UEnum *)0x0) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6752941276653420320>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                         ,0xe0,"EnumType");
      if (!bVar2) {
        return;
      }
      goto code_r0x00014d60ba10;
    }
    FInstancedPropertyBag::GetValueEnum
              ((FInstancedPropertyBag *)param_3,(FPropertyBagPropertyDesc *)local_d8,
               (UEnum *)param_4);
    uVar5 = (ulonglong)(byte)local_d8[1];
    if ((2 < uVar5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar5 + 4) == '\0') {
LAB_14d60b6d7:
      local_c0 = (FName)local_d8;
      bVar2 = `UE::Cameras::Internal::ApplyDataParameterOverride<unsigned_char>'::__l3::<lambda_1>::
              operator()(&local_c0);
      if (!bVar2) {
        return;
      }
    }
    else {
      uVar5 = (ulonglong)(byte)local_d8[1];
      if ((2 < uVar5) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<unsigned_char,EPropertyBagResult>::FWrapErrorType,unsigned_char,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar5) != '\0') goto LAB_14d60b6d7;
    }
    if ((local_d8[1] != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_58.Variant._padding_ = (longlong)local_d8;
    goto LAB_14d60b4c1;
  case Struct:
    pUVar4 = Cast<UScriptStruct_const_,UObject_const_>(&param_2->DataTypeObject);
    if (pUVar4 == (UScriptStruct *)0x0) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6752941276653420306>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                         ,0xee,"StructType");
      if (!bVar2) {
        return;
      }
      goto code_r0x00014d60ba10;
    }
    FInstancedPropertyBag::GetValueStruct((FInstancedPropertyBag *)param_3,&local_58,param_4,pUVar4)
    ;
    uVar5 = (ulonglong)local_58.Variant.TypeIndex;
    if ((2 < uVar5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar5 + 4) == '\0') {
LAB_14d60b7f1:
      local_b8 = &local_58;
      bVar2 = `UE::Cameras::Internal::ApplyDataParameterOverride<FStructView>'::__l3::<lambda_1>::
              operator()(&local_b8);
      if (!bVar2) {
        return;
      }
    }
    else {
      uVar5 = (ulonglong)local_58.Variant.TypeIndex;
      if ((2 < uVar5) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FStructView,EPropertyBagResult>::FWrapErrorType,FStructView,TValueOrError<struct_FStructView,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FStructView,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar5) != '\0') goto LAB_14d60b7f1;
    }
    if ((local_58.Variant.TypeIndex != CPF_None) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    goto LAB_14d60b4c1;
  case Object:
    FInstancedPropertyBag::GetValueObject
              ((FInstancedPropertyBag *)param_3,&local_90,param_4,(UClass *)0x0);
    uVar5 = (ulonglong)local_90.Variant.TypeIndex;
    if ((2 < uVar5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar5) == '\0') {
LAB_14d60b8c7:
      local_b0 = &local_90;
      bVar2 = `UE::Cameras::Internal::ApplyDataParameterOverride<UObject_*>'::__l3::<lambda_1>::
              operator()(&local_b0);
      if (!bVar2) {
        return;
      }
    }
    else {
      uVar5 = (ulonglong)local_90.Variant.TypeIndex;
      if ((2 < uVar5) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,FString,TValueOrError<class_FString,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar5 + 4) != '\0') goto LAB_14d60b8c7;
    }
    if ((local_90.Variant.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_58.Variant._padding_ = (longlong)&local_90;
    goto LAB_14d60b4c1;
  case Class:
    FInstancedPropertyBag::GetValueClass((FInstancedPropertyBag *)param_3,&local_80,param_4);
    uVar5 = (ulonglong)local_80.Variant.TypeIndex;
    if ((2 < uVar5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UClass*___ptr64,UClass*___ptr64,TValueOrError<UClass*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar5) == '\0') {
LAB_14d60b99a:
      local_a8 = (FProperty *)&local_80;
      bVar2 = `UE::Cameras::Internal::ApplyDataParameterOverride<UClass_*>'::__l3::<lambda_1>::
              operator()(&local_a8);
      if (!bVar2) {
        return;
      }
    }
    else {
      uVar5 = (ulonglong)local_80.Variant.TypeIndex;
      if ((2 < uVar5) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<UClass*___ptr64,EPropertyBagResult>::FWrapErrorType,UClass*___ptr64,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar5) != '\0') goto LAB_14d60b99a;
    }
    if ((local_80.Variant.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_58.Variant._padding_ = (longlong)&local_80;
    goto LAB_14d60b4c1;
  default:
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6752941276653420274>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Helpers\\CameraObjectInterfaceParameterOverrideHelper.cpp"
                       ,0x10e,"false");
    if (!bVar2) {
      return;
    }
code_r0x00014d60ba10:
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FInstancedPropertyBag::GetValueName
            ((FInstancedPropertyBag *)param_3,(TValueOrError<FName,EPropertyBagResult> *)&local_a0,
             param_4);
  uVar5 = (ulonglong)local_a0.Variant.TypeIndex;
  if ((2 < uVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) == '\0') {
LAB_14d60b478:
    local_d0 = &local_a0;
    bVar2 = `UE::Cameras::Internal::ApplyDataParameterOverride<FName>'::__l3::<lambda_1>::operator()
                      (&local_d0);
    if (!bVar2) {
      return;
    }
  }
  else {
    uVar5 = (ulonglong)local_a0.Variant.TypeIndex;
    if ((2 < uVar5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<double,EPropertyBagResult>::FWrapErrorType,double,TValueOrError<double,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<double,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar5 + 4) != '\0') goto LAB_14d60b478;
  }
  if ((local_a0.Variant.TypeIndex != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_58.Variant._padding_ = (longlong)&local_a0;
LAB_14d60b4c1:
  FCameraContextDataTable::TrySetData
            (param_5,(FCameraContextDataID)(param_2->DataID).Value,param_2->DataType,
             (param_2->DataTypeObject).field0_0x0.DebugPtr,(uchar *)local_58.Variant._padding_,true)
  ;
  return;
}

// GetTypeHash @ 14d61e370

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

// UnpackChannelsFromOperational @ 14d63a830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::UnpackChannelsFromOperational
          (FCameraFramingZone *param_1,FProperty *param_2,FUnpackedChannelValues *param_3)

{
  FName *pFVar1;
  FUnpackedChannelValue *pFVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_78 [32];
  TIndexedChannelValue<FMovieSceneDoubleChannel> local_58;
  FName local_40;
  undefined1 local_38 [8];
  undefined8 **local_30 [3];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar1 = ::FName::FName(&local_40,"Left");
  local_58._padding_ = (longlong)param_1->Left;
  local_58._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_58.ChannelIndex = 0;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_58,*pFVar1);
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
  local_58._padding_ = (longlong)param_1->Top;
  local_58._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_58.ChannelIndex = 1;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_58,*pFVar1);
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
  local_58._padding_ = (longlong)param_1->Right;
  local_58._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_58.ChannelIndex = 2;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_58,*pFVar1);
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
  local_58._padding_ = (longlong)param_1->Bottom;
  local_58._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_58.ChannelIndex = 3;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_58,*pFVar1);
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

// Construct<FCameraParameterClamping> @ 14d641d80

void __cdecl UE::CoreUObject::Private::Construct<FCameraParameterClamping>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x12) = 0;
  *(undefined2 *)((longlong)param_1 + 0x16) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FCameraParameterClamping> @ 14d641da0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraParameterClamping>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FCameraParameterClamping> @ 14d641dc0

void __cdecl UE::CoreUObject::Private::Destruct<FCameraParameterClamping>(void *param_1)

{
  return;
}

// Copy<FCameraParameterClamping> @ 14d641dd0

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraParameterClamping>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCameraRigInputSlotParameters> @ 14d642290

void __cdecl UE::CoreUObject::Private::Construct<FCameraRigInputSlotParameters>(void *param_1)

{
  *(undefined2 *)param_1 = 0x101;
  return;
}

// ConstructForTests<FCameraRigInputSlotParameters> @ 14d6422a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCameraRigInputSlotParameters>(void *param_1)

{
  *(undefined2 *)param_1 = 0x101;
  return;
}

// Destruct<FCameraRigInputSlotParameters> @ 14d6422b0

void __cdecl UE::CoreUObject::Private::Destruct<FCameraRigInputSlotParameters>(void *param_1)

{
  return;
}

// Copy<FCameraRigInputSlotParameters> @ 14d6422c0

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraRigInputSlotParameters>
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

// Construct<FInstancedOverridablePropertyBag> @ 14d646f10

void __cdecl UE::CoreUObject::Private::Construct<FInstancedOverridablePropertyBag>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  FInstancedStruct::FInstancedStruct(param_1);
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FInstancedOverridablePropertyBag> @ 14d646f40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FInstancedOverridablePropertyBag>(void *param_1)

{
  FInstancedStruct::FInstancedStruct(param_1);
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FInstancedOverridablePropertyBag> @ 14d6470f0

void __cdecl UE::CoreUObject::Private::Destruct<FInstancedOverridablePropertyBag>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  FInstancedStruct::Reset(param_1);
  return;
}

// SerializeArchive<FInstancedOverridablePropertyBag> @ 14d647160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FInstancedOverridablePropertyBag>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  int iVar3;
  UPackage *pUVar4;
  FStructuredArchiveFromArchive *this;
  FStructuredArchiveSlot FVar5;
  undefined1 auStack_1f8 [32];
  FInstancedOverridablePropertyBag *local_1d8;
  undefined8 local_1d0;
  FStructuredArchiveFromArchive local_1c0;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FOverridablePropertyBagCustomVersion::GUID);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar3 = FArchiveState::CustomVer
                        ((FArchiveState *)param_1,&FOverridablePropertyBagCustomVersion::GUID),
     iVar3 < 1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FInstancedStruct::FInstancedStruct((FInstancedStruct *)&ThisDefaults);
      ThisDefaults.OverridenPropertyIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ThisDefaults.OverridenPropertyIDs.ArrayNum = 0;
      ThisDefaults.OverridenPropertyIDs.ArrayMax = 0;
      atexit(`FInstancedOverridablePropertyBag::Serialize'::__l5::
             _dynamic_atexit_destructor_for__ThisDefaults__);
      _Init_thread_footer(&::_TSS0);
    }
    if (Z_Registration_Info_UScriptStruct_FInstancedOverridablePropertyBag.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_GameplayCameras();
      Z_Registration_Info_UScriptStruct_FInstancedOverridablePropertyBag.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FInstancedOverridablePropertyBag,
                           (UObject *)pUVar4,L"InstancedOverridablePropertyBag");
    }
    pUVar2 = Z_Registration_Info_UScriptStruct_FInstancedOverridablePropertyBag.OuterSingleton;
    pcVar1 = *(code **)((Z_Registration_Info_UScriptStruct_FInstancedOverridablePropertyBag.
                        OuterSingleton)->_padding_ + 0x2e0);
    this = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1c0,param_1);
    FVar5 = FStructuredArchiveFromArchive::GetSlot(this);
    local_1d0 = 0;
    local_1d8 = &ThisDefaults;
    (*pcVar1)(pUVar2,*(undefined8 *)FVar5,param_2,pUVar2);
    FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1c0);
    return true;
  }
  FInstancedPropertyBag::Serialize(param_2,param_1);
  TArrayPrivateFriend::Serialize<FGuid,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<FGuid,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x10));
  return true;
}

// GetPreloadDependencies<FInstancedOverridablePropertyBag> @ 14d647330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::CoreUObject::Private::GetPreloadDependencies<FInstancedOverridablePropertyBag>
          (void *param_1,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  UObjectBaseUtility *this;
  undefined8 *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  UClass *pUVar12;
  FFieldClass *pFVar13;
  TTuple<FProperty_const_*,void_const_*> *pTVar14;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar15;
  longlong *plVar16;
  longlong *plVar17;
  UStruct *pUVar18;
  uint uVar19;
  undefined1 auStackY_7c8 [32];
  undefined1 auStack_778 [8];
  longlong lStack_770;
  FString FStack_768;
  FPropertyValueIterator FStack_758;
  ulonglong uStack_30;
  
  uStack_30 = __security_cookie.value ^ (ulonglong)auStackY_7c8;
  if ((*(longlong *)((longlong)param_1 + 8) != 0) &&
     (pUVar18 = *(UStruct **)param_1, pUVar18 != (UStruct *)0x0)) {
    pUVar12 = UPropertyBag::StaticClass();
    iVar1 = (int)pUVar12->_padding_;
    if ((*(int *)(pUVar18->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar12->_padding_)) {
      pUVar18 = (UStruct *)0x0;
    }
    if (pUVar18 != (UStruct *)0x0) {
      plVar16 = (longlong *)pUVar18[1]._padding_;
      iVar1 = (int)pUVar18[1]._padding_;
      plVar17 = plVar16 + (longlong)iVar1 * 8;
      while( true ) {
        if ((int)pUVar18[1]._padding_ != iVar1) {
          auStack_778[0] = 0;
          `TCheckedPointerIterator<FPropertyBagPropertyDesc_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(auStack_778);
        }
        if (plVar16 == plVar17) break;
        lVar2 = *plVar16;
        if (lVar2 != 0) {
          pFVar3 = (param_2->AllocatorInstance).Data;
          lStack_770 = lVar2;
          if (((pFVar3 <= (FScriptContainerElement *)&lStack_770) &&
              ((FScriptContainerElement *)&lStack_770 < pFVar3 + (longlong)param_2->ArrayMax * 8))
             && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar10 = param_2->ArrayNum;
          if (iVar10 == param_2->ArrayMax) {
            iVar10 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar10 + 1;
          *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar10 * 8) = lStack_770;
        }
        plVar16 = plVar16 + 8;
      }
      pvVar4 = *(void **)((longlong)param_1 + 8);
      pFVar13 = FStructProperty::StaticClass();
      FPropertyValueIterator::FPropertyValueIterator
                (&FStack_758,pFVar13,pUVar18,pvVar4,FullRecursion,IncludeDeprecated);
      while (0 < FStack_758.PropertyIteratorStack.ArrayNum) {
        pTVar14 = FPropertyValueIterator::operator->(&FStack_758);
        this = *(UObjectBaseUtility **)(*(longlong *)pTVar14 + 0x70);
        if (this[4].field_0x14 == '\0') {
          UObjectBaseUtility::GetPathName(this,&FStack_768,(UObject *)0x0);
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("bPrepareCppStructOpsCompleted",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0x8f6,
                             L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s"
                            );
          if (FStack_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_768.Data.AllocatorInstance.Data);
          }
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        puVar5 = *(undefined8 **)&this[4].field_0x18;
        if (puVar5 != (undefined8 *)0x0) {
          pTVar14 = FPropertyValueIterator::operator->(&FStack_758);
          puVar6 = (uint *)*puVar5;
          uVar7 = *(undefined8 *)&pTVar14->field_0x8;
          if ((*(byte *)((longlong)puVar6 + 0x17) & 4) != 0) {
            if (((~(byte)(*puVar6 >> 9) & 1) != 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!!(this->Flags & FuncFlag)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                   ,0x660,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar19 = 0;
            for (uVar11 = *puVar6 & 0x1ff; uVar11 != 0; uVar11 = uVar11 & uVar11 - 1) {
              uVar19 = uVar19 + 1;
            }
            (**(code **)(puVar6 + (ulonglong)uVar19 * 2 + 6))(uVar7,param_2);
          }
        }
        FPropertyValueIterator::IterateToNext(&FStack_758);
      }
      FVar15 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&FStack_758;
      if (FStack_758.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar15 = FStack_758.PropertyIteratorStack.AllocatorInstance.SecondaryData;
      }
      DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                ((FPropertyValueStackEntry *)FVar15,FStack_758.PropertyIteratorStack.ArrayNum);
      if (FStack_758.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FMemory::Free((void *)FStack_758.PropertyIteratorStack.AllocatorInstance.SecondaryData);
      }
    }
  }
  return;
}

// Copy<FInstancedOverridablePropertyBag> @ 14d647340

bool __cdecl
UE::CoreUObject::Private::Copy<FInstancedOverridablePropertyBag>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  FInstancedStruct *pFVar2;
  int iVar3;
  int iVar4;
  UScriptStruct *_Src;
  FInstancedStruct *pFVar5;
  FInstancedStruct *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar2 = (FInstancedStruct *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      if (this != pFVar2) {
        FInstancedStruct::InitializeAs
                  (this,(pFVar2->ScriptStruct).field0_0x0.DebugPtr,pFVar2->StructMemory);
      }
      pFVar5 = this + 1;
      if (pFVar5 != pFVar2 + 1) {
        iVar3 = *(int *)&pFVar2[1].StructMemory;
        piVar1 = (int *)((longlong)&this[1].StructMemory + 4);
        _Src = pFVar2[1].ScriptStruct.field0_0x0.DebugPtr;
        iVar4 = *piVar1;
        *(int *)&this[1].StructMemory = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar3,iVar4,(ForAnyElementType *)pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy((pFVar5->ScriptStruct).field0_0x0.DebugPtr,_Src,(longlong)iVar3 << 4);
          }
        }
      }
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Identical<FInstancedOverridablePropertyBag> @ 14d647430

bool __cdecl
UE::CoreUObject::Private::Identical<FInstancedOverridablePropertyBag>
          (void *param_1,void *param_2,uint param_3,bool *param_4)

{
  bool bVar1;
  
  bVar1 = FInstancedPropertyBag::Identical(param_1,param_2,param_3);
  *param_4 = bVar1;
  return true;
}

// AddStructReferencedObjects<FInstancedOverridablePropertyBag> @ 14d647450

_func___cdecl_void_void_ptr_FReferenceCollector_ptr * __cdecl
UE::CoreUObject::Private::AddStructReferencedObjects<FInstancedOverridablePropertyBag>(void)

{
  return AddStructReferencedObjectsOrNot<FInstancedOverridablePropertyBag>;
}

// StructuredSerializeFromMismatchedTag<FInstancedOverridablePropertyBag> @ 14d647460

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FInstancedOverridablePropertyBag>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  bool bVar1;
  FArchive *pFVar2;
  UScriptStruct *pUVar3;
  FPropertyTypeName local_res8 [2];
  FSlotBase local_res10;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_2;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pUVar3 = FInstancedPropertyBag::StaticStruct();
      NAME_InstancedPropertyBag = (FName)pUVar3->_padding_;
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_res8[0].Index = (param_1->TypeName).Index;
  bVar1 = FPropertyTypeName::IsStruct(local_res8,NAME_InstancedPropertyBag);
  if (bVar1) {
    pFVar2 = StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
    FInstancedPropertyBag::Serialize(param_3,pFVar2);
    return true;
  }
  return false;
}

// Construct<FCameraFramingZoneParameter> @ 14d6477f0

void __cdecl UE::CoreUObject::Private::Construct<FCameraFramingZoneParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FCameraFramingZoneParameter> @ 14d647810

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraFramingZoneParameter>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FCameraFramingZoneParameter> @ 14d647830

void __cdecl UE::CoreUObject::Private::Destruct<FCameraFramingZoneParameter>(void *param_1)

{
  return;
}

// Copy<FCameraFramingZoneParameter> @ 14d647840

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraFramingZoneParameter>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x28);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCameraFramingZone> @ 14d647b90

void __cdecl UE::CoreUObject::Private::Construct<FCameraFramingZone>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FCameraFramingZone> @ 14d647bb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraFramingZone>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Construct<FCameraActorTargetInfo> @ 14d648bf0

void __cdecl UE::CoreUObject::Private::Construct<FCameraActorTargetInfo>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x41200000;
  return;
}

// ConstructForTests<FCameraActorTargetInfo> @ 14d648c20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCameraActorTargetInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x41200000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f800000;
  return;
}

// Destruct<FCameraActorTargetInfo> @ 14d648c50

void __cdecl UE::CoreUObject::Private::Destruct<FCameraActorTargetInfo>(void *param_1)

{
  return;
}

// Copy<FCameraActorTargetInfo> @ 14d648c60

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraActorTargetInfo>(void *param_1,void *param_2,int param_3)

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
      puVar2[2] = puVar1[2];
      *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(puVar1 + 3);
      *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)((longlong)puVar1 + 0x1c);
      *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar1 + 4);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCameraParameterNormalization> @ 14d64a790

void __cdecl UE::CoreUObject::Private::Construct<FCameraParameterNormalization>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0x4076800000000000;
  return;
}

// ConstructForTests<FCameraParameterNormalization> @ 14d64a7b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCameraParameterNormalization>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0x4076800000000000;
  return;
}

// Destruct<FCameraParameterNormalization> @ 14d64a7d0

void __cdecl UE::CoreUObject::Private::Destruct<FCameraParameterNormalization>(void *param_1)

{
  return;
}

// Copy<FCameraParameterNormalization> @ 14d64a7e0

bool __cdecl
UE::CoreUObject::Private::Copy<FCameraParameterNormalization>
          (void *param_1,void *param_2,int param_3)

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

// CheckDefaultParameter<FFloatCameraParameter> @ 14d64e970

bool __cdecl
UE::Cameras::Test::CheckDefaultParameter<FFloatCameraParameter>
          (FInstancedPropertyBag *param_1,FName param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TValueOrError<FFloatCameraParameter_*,EPropertyBagResult> local_28 [2];
  
  FInstancedPropertyBag::GetValueStruct<FFloatCameraParameter>(param_1,local_28,param_2);
  if ((2 < (local_28[0].Variant._8_8_ & 0xff)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FVector3dCameraParameter*___ptr64,EPropertyBagResult>::FWrapErrorType,FVector3dCameraParameter*___ptr64,TValueOrError<struct_FVector3dCameraParameter*___ptr64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FVector3dCameraParameter*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (local_28[0].Variant._8_8_ & 0xff) + 4) != '\0') {
    if ((2 < (local_28[0].Variant._8_8_ & 0xff)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FVector3dCameraParameter*___ptr64,FVector3dCameraParameter*___ptr64,TValueOrError<FVector3dCameraParameter*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FVector3dCameraParameter*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (local_28[0].Variant._8_8_ & 0xff) + 4) == '\0') {
      return false;
    }
  }
  if (((char)local_28[0].Variant._8_8_ != '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (param_3 != *(float *)local_28[0].Variant._padding_) {
    return false;
  }
  return true;
}

// CheckDefaultParameter<FRotator3dCameraParameter> @ 14d64ea80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Cameras::Test::CheckDefaultParameter<FRotator3dCameraParameter>
          (FInstancedPropertyBag *param_1,FName param_2,TRotator<double> *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  UScriptStruct *pUVar6;
  UScriptStruct *pUVar7;
  longlong lVar8;
  ulonglong uVar9;
  double *pdVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined7 uStack_37;
  TValueOrError<FStructView,EPropertyBagResult> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  pUVar6 = FRotator3dCameraParameter::StaticStruct();
  FInstancedPropertyBag::GetValueStruct(param_1,&local_28,param_2,pUVar6);
  uVar9 = local_28.Variant._16_8_ & 0xff;
  if ((2 < uVar9) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar9 + 4) == '\0') {
    if ((local_28.Variant.TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_38 = (undefined1)local_28.Variant._padding_;
  }
  else {
    if ((local_28.Variant.TypeIndex != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pUVar6 = (UScriptStruct *)
             CONCAT71(local_28.Variant._padding_._1_7_,(undefined1)local_28.Variant._padding_);
    if (((double *)local_28.Variant._padding_ != (double *)0x0) && (pUVar6 != (UScriptStruct *)0x0))
    {
      pUVar7 = FRotator3dCameraParameter::StaticStruct();
      if (pUVar6 == pUVar7) {
LAB_14d64ebbc:
        lVar8 = 0;
        pdVar10 = (double *)local_28.Variant._padding_;
        cVar5 = (char)`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FRotator3dCameraParameter*___ptr64,EPropertyBagResult>::FWrapErrorType,FRotator3dCameraParameter*___ptr64,TValueOrError<struct_FRotator3dCameraParameter*___ptr64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FRotator3dCameraParameter*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                      ::__l2::bIsSameType;
        goto LAB_14d64ebda;
      }
      pUVar7 = FRotator3dCameraParameter::StaticStruct();
      if (pUVar7 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar7->_padding_;
        if (((int)pUVar6->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar7->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) goto LAB_14d64ebbc;
      }
    }
    local_38 = 1;
  }
  lVar8 = 1;
  pdVar10 = (double *)CONCAT71(uStack_37,local_38);
  cVar5 = `public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FRotator3dCameraParameter*___ptr64,EPropertyBagResult>::FWrapErrorType,FRotator3dCameraParameter*___ptr64,TValueOrError<struct_FRotator3dCameraParameter*___ptr64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FRotator3dCameraParameter*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
          ::__l2::bIsSameType._1_1_;
LAB_14d64ebda:
  if ((cVar5 == '\0') ||
     (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FRotator3dCameraParameter*___ptr64,EPropertyBagResult>::FWrapErrorType,FRotator3dCameraParameter*___ptr64,TValueOrError<struct_FRotator3dCameraParameter*___ptr64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FRotator3dCameraParameter*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + lVar8 + 4) != '\0')) {
    if (((char)lVar8 != '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (((param_3->Pitch == *pdVar10) && (param_3->Yaw == pdVar10[1])) &&
       (param_3->Roll == pdVar10[2])) {
      return true;
    }
  }
  return false;
}

// CheckDefaultParameter<FVector3dCameraParameter> @ 14d64ec70

bool __cdecl
UE::Cameras::Test::CheckDefaultParameter<FVector3dCameraParameter>
          (FInstancedPropertyBag *param_1,FName param_2,TVector<double> *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TValueOrError<FVector3dCameraParameter_*,EPropertyBagResult> local_18;
  
  FInstancedPropertyBag::GetValueStruct<FVector3dCameraParameter>(param_1,&local_18,param_2);
  if ((2 < (local_18.Variant._8_8_ & 0xff)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<FVector3dCameraParameter*___ptr64,EPropertyBagResult>::FWrapErrorType,FVector3dCameraParameter*___ptr64,TValueOrError<struct_FVector3dCameraParameter*___ptr64,enum_EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FVector3dCameraParameter*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (local_18.Variant._8_8_ & 0xff)) != '\0') {
    if ((2 < (local_18.Variant._8_8_ & 0xff)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FVector3dCameraParameter*___ptr64,FVector3dCameraParameter*___ptr64,TValueOrError<FVector3dCameraParameter*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FVector3dCameraParameter*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + (local_18.Variant._8_8_ & 0xff)) == '\0') {
      return false;
    }
  }
  if ((local_18.Variant.TypeIndex != '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((((param_3->field0_0x0)._s_0.X == *(double *)local_18.Variant._padding_) &&
      ((param_3->field0_0x0)._s_0.Y == *(double *)(local_18.Variant._padding_ + 8))) &&
     ((param_3->field0_0x0)._s_0.Z == *(double *)(local_18.Variant._padding_ + 0x10))) {
    return true;
  }
  return false;
}

// GetStructPtr<FFloatCameraParameter> @ 14d650260

/* WARNING: Removing unreachable block (ram,0x00014d6502c3) */

FFloatCameraParameter * __cdecl
UE::StructUtils::GetStructPtr<FFloatCameraParameter>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar2 = FFloatCameraParameter::StaticStruct();
    if (param_1 == pUVar2) {
      return param_2;
    }
    pUVar2 = FFloatCameraParameter::StaticStruct();
    if (pUVar2 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return param_2;
      }
      return (FFloatCameraParameter *)0x0;
    }
  }
  return (FFloatCameraParameter *)0x0;
}

// GetStructPtr<FRotator3dCameraParameter> @ 14d650300

/* WARNING: Removing unreachable block (ram,0x00014d650363) */

FRotator3dCameraParameter * __cdecl
UE::StructUtils::GetStructPtr<FRotator3dCameraParameter>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar2 = FRotator3dCameraParameter::StaticStruct();
    if (param_1 == pUVar2) {
      return param_2;
    }
    pUVar2 = FRotator3dCameraParameter::StaticStruct();
    if (pUVar2 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return param_2;
      }
      return (FRotator3dCameraParameter *)0x0;
    }
  }
  return (FRotator3dCameraParameter *)0x0;
}

// GetStructPtr<FVector3dCameraParameter> @ 14d6503a0

/* WARNING: Removing unreachable block (ram,0x00014d650403) */

FVector3dCameraParameter * __cdecl
UE::StructUtils::GetStructPtr<FVector3dCameraParameter>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar2 = FVector3dCameraParameter::StaticStruct();
    if (param_1 == pUVar2) {
      return param_2;
    }
    pUVar2 = FVector3dCameraParameter::StaticStruct();
    if (pUVar2 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return param_2;
      }
      return (FVector3dCameraParameter *)0x0;
    }
  }
  return (FVector3dCameraParameter *)0x0;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLinearColor>_> @ 14d653dd0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLinearColor>_>
          (ushort param_1,ForElementType<FLinearColor> *param_2,int *param_3)

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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLinearColor>::
    ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLinearColor>_> @ 14d653e90

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLinearColor>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FLinearColor> *param_4,int param_5,
          int *param_6)

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
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FLinearColor>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// operator<< @ 14d6587b0

TCameraDebugGraphEntry<1> * __cdecl
UE::Cameras::operator<<(FArchive *param_1,TCameraDebugGraphEntry<1> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->Time = *pfVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = param_2->Values;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_2;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return param_2;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return param_2;
}

// operator<< @ 14d658880

FArchive * __cdecl
UE::Cameras::operator<<(FArchive *param_1,FCameraActorComputedTargetInfo *param_2)

{
  float *pfVar1;
  longlong *plVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  FArchive *pFVar6;
  float local_res8 [2];
  
  UE::Math::operator<<(param_1,&param_2->Transform);
  pFVar6 = UE::Math::operator<<(param_1,&(param_2->LocalBounds).Origin);
  UE::Math::operator<<(pFVar6,&(param_2->LocalBounds).BoxExtent);
  if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
    if ((param_1->field_0x28 & 1) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\BoxSphereBounds.h"
                         ,0x1a2,L"float -> double conversion applied outside of load!");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FArchive *)(*pcVar4)();
        return pFVar6;
      }
    }
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res8);
      }
    }
    else {
      local_res8[0] = *(float *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    (param_2->LocalBounds).SphereRadius = (double)local_res8[0];
  }
  else {
    ::operator<<(param_1,&(param_2->LocalBounds).SphereRadius);
  }
  pfVar1 = &param_2->NormalizedWeight;
  pfVar3 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar3 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar1 = *pfVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
  return param_1;
}

// operator() @ 1505840c0

bool __thiscall
`UE::Cameras::Internal::ApplyDataParameterElementOverride<unsigned_char>'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UEnum *this_00;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10.ComparisonIndex.Value = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6752941276653420362>);
  if (bVar2) {
    if ((*(char *)(*(longlong *)this + 1) != '\x01') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    this_00 = StaticEnum<enum_EPropertyBagResult>();
    if ((this_00 == (UEnum *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    UEnum::GetNameByValue(this_00,(long64)&local_res10);
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6752941276653420362>,
                       &`public:___cdecl_`void___cdecl_UE::Cameras::Internal::ApplyDataParameterElementOverride<unsigned_char>(FCameraObjectInterfaceParameterDefinition_const&___ptr64,TValueOrError<unsigned_char,EPropertyBagResult>_const&___ptr64,int,UE::Cameras::FCameraContextDataTable&___ptr64)'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505841ac;
    }
  }
  bVar2 = false;
LAB_1505841ac:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505841e0

bool __thiscall
`UE::Cameras::Internal::ApplyDataParameterElementOverride<UClass_*>'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UEnum *this_00;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10.ComparisonIndex.Value = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6752941276653420362>);
  if (bVar2) {
    if ((*(char *)(*(longlong *)this + 8) != '\x01') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    this_00 = StaticEnum<enum_EPropertyBagResult>();
    if ((this_00 == (UEnum *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    UEnum::GetNameByValue(this_00,(long64)&local_res10);
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6752941276653420362>,
                       &`public:___cdecl_`void___cdecl_UE::Cameras::Internal::ApplyDataParameterElementOverride<UClass*___ptr64>(FCameraObjectInterfaceParameterDefinition_const&___ptr64,TValueOrError<UClass*___ptr64,EPropertyBagResult>_const&___ptr64,int,UE::Cameras::FCameraContextDataTable&___ptr64)'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505842cc;
    }
  }
  bVar2 = false;
LAB_1505842cc:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150584300

bool __thiscall
`UE::Cameras::Internal::ApplyDataParameterElementOverride<UObject_*>'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UEnum *this_00;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10.ComparisonIndex.Value = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6752941276653420362>);
  if (bVar2) {
    if ((*(char *)(*(longlong *)this + 8) != '\x01') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    this_00 = StaticEnum<enum_EPropertyBagResult>();
    if ((this_00 == (UEnum *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    UEnum::GetNameByValue(this_00,(long64)&local_res10);
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6752941276653420362>,
                       &`public:___cdecl_`void___cdecl_UE::Cameras::Internal::ApplyDataParameterElementOverride<UObject*___ptr64>(FCameraObjectInterfaceParameterDefinition_const&___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>_const&___ptr64,int,UE::Cameras::FCameraContextDataTable&___ptr64)'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505843ec;
    }
  }
  bVar2 = false;
LAB_1505843ec:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150584420

bool __thiscall
`UE::Cameras::Internal::ApplyDataParameterElementOverride<FStructView>'::__l3::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UEnum *this_00;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10.ComparisonIndex.Value = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6752941276653420362>);
  if (bVar2) {
    if ((*(char *)(*(longlong *)this + 0x10) != '\x01') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    this_00 = StaticEnum<enum_EPropertyBagResult>();
    if ((this_00 == (UEnum *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    UEnum::GetNameByValue(this_00,(long64)&local_res10);
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6752941276653420362>,
                       &`public:___cdecl_`void___cdecl_UE::Cameras::Internal::ApplyDataParameterElementOverride<FStructView>(FCameraObjectInterfaceParameterDefinition_const&___ptr64,TValueOrError<FStructView,EPropertyBagResult>_const&___ptr64,int,UE::Cameras::FCameraContextDataTable&___ptr64)'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15058450c;
    }
  }
  bVar2 = false;
LAB_15058450c:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150584540

bool __thiscall
`UE::Cameras::Internal::ApplyDataParameterElementOverride<FName>'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UEnum *this_00;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10.ComparisonIndex.Value = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6752941276653420362>);
  if (bVar2) {
    if ((*(char *)(*(longlong *)this + 8) != '\x01') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    this_00 = StaticEnum<enum_EPropertyBagResult>();
    if ((this_00 == (UEnum *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    UEnum::GetNameByValue(this_00,(long64)&local_res10);
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6752941276653420362>,
                       &`public:___cdecl_`void___cdecl_UE::Cameras::Internal::ApplyDataParameterElementOverride<FName>(FCameraObjectInterfaceParameterDefinition_const&___ptr64,TValueOrError<FName,EPropertyBagResult>_const&___ptr64,int,UE::Cameras::FCameraContextDataTable&___ptr64)'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15058462c;
    }
  }
  bVar2 = false;
LAB_15058462c:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150584660

bool __thiscall
`UE::Cameras::Internal::ApplyDataParameterElementOverride<FString>'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UEnum *this_00;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10.ComparisonIndex.Value = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6752941276653420362>);
  if (bVar2) {
    if ((*(char *)(*(longlong *)this + 0x10) != '\x01') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    this_00 = StaticEnum<enum_EPropertyBagResult>();
    if ((this_00 == (UEnum *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    UEnum::GetNameByValue(this_00,(long64)&local_res10);
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6752941276653420362>,
                       &`public:___cdecl_`void___cdecl_UE::Cameras::Internal::ApplyDataParameterElementOverride<FString>(FCameraObjectInterfaceParameterDefinition_const&___ptr64,TValueOrError<FString,EPropertyBagResult>_const&___ptr64,int,UE::Cameras::FCameraContextDataTable&___ptr64)'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15058474c;
    }
  }
  bVar2 = false;
LAB_15058474c:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150584780

bool __thiscall
`UE::Cameras::Internal::ApplyDataParameterOverride<unsigned_char>'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UEnum *this_00;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10.ComparisonIndex.Value = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6752941276653420382>);
  if (bVar2) {
    if ((*(char *)(*(longlong *)this + 1) != '\x01') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    this_00 = StaticEnum<enum_EPropertyBagResult>();
    if ((this_00 == (UEnum *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    UEnum::GetNameByValue(this_00,(long64)&local_res10);
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6752941276653420382>,
                       &`public:___cdecl_`void___cdecl_UE::Cameras::Internal::ApplyDataParameterOverride<unsigned_char>(FCameraObjectInterfaceParameterDefinition_const&___ptr64,TValueOrError<unsigned_char,EPropertyBagResult>_const&___ptr64,UE::Cameras::FCameraContextDataTable&___ptr64)'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15058486c;
    }
  }
  bVar2 = false;
LAB_15058486c:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505848a0

bool __thiscall
`UE::Cameras::Internal::ApplyDataParameterOverride<UClass_*>'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UEnum *this_00;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10.ComparisonIndex.Value = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6752941276653420382>);
  if (bVar2) {
    if ((*(char *)(*(longlong *)this + 8) != '\x01') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    this_00 = StaticEnum<enum_EPropertyBagResult>();
    if ((this_00 == (UEnum *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    UEnum::GetNameByValue(this_00,(long64)&local_res10);
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6752941276653420382>,
                       &`public:___cdecl_`void___cdecl_UE::Cameras::Internal::ApplyDataParameterOverride<UClass*___ptr64>(FCameraObjectInterfaceParameterDefinition_const&___ptr64,TValueOrError<UClass*___ptr64,EPropertyBagResult>_const&___ptr64,UE::Cameras::FCameraContextDataTable&___ptr64)'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15058498c;
    }
  }
  bVar2 = false;
LAB_15058498c:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505849c0

bool __thiscall
`UE::Cameras::Internal::ApplyDataParameterOverride<UObject_*>'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UEnum *this_00;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10.ComparisonIndex.Value = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6752941276653420382>);
  if (bVar2) {
    if ((*(char *)(*(longlong *)this + 8) != '\x01') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    this_00 = StaticEnum<enum_EPropertyBagResult>();
    if ((this_00 == (UEnum *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    UEnum::GetNameByValue(this_00,(long64)&local_res10);
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6752941276653420382>,
                       &`public:___cdecl_`void___cdecl_UE::Cameras::Internal::ApplyDataParameterOverride<UObject*___ptr64>(FCameraObjectInterfaceParameterDefinition_const&___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>_const&___ptr64,UE::Cameras::FCameraContextDataTable&___ptr64)'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150584aac;
    }
  }
  bVar2 = false;
LAB_150584aac:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150584ae0

bool __thiscall
`UE::Cameras::Internal::ApplyDataParameterOverride<FStructView>'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UEnum *this_00;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10.ComparisonIndex.Value = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6752941276653420382>);
  if (bVar2) {
    if ((*(char *)(*(longlong *)this + 0x10) != '\x01') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    this_00 = StaticEnum<enum_EPropertyBagResult>();
    if ((this_00 == (UEnum *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    UEnum::GetNameByValue(this_00,(long64)&local_res10);
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6752941276653420382>,
                       &`public:___cdecl_`void___cdecl_UE::Cameras::Internal::ApplyDataParameterOverride<FStructView>(FCameraObjectInterfaceParameterDefinition_const&___ptr64,TValueOrError<FStructView,EPropertyBagResult>_const&___ptr64,UE::Cameras::FCameraContextDataTable&___ptr64)'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150584bcc;
    }
  }
  bVar2 = false;
LAB_150584bcc:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150584c00

bool __thiscall
`UE::Cameras::Internal::ApplyDataParameterOverride<FName>'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UEnum *this_00;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10.ComparisonIndex.Value = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6752941276653420382>);
  if (bVar2) {
    if ((*(char *)(*(longlong *)this + 8) != '\x01') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    this_00 = StaticEnum<enum_EPropertyBagResult>();
    if ((this_00 == (UEnum *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    UEnum::GetNameByValue(this_00,(long64)&local_res10);
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6752941276653420382>,
                       &`public:___cdecl_`void___cdecl_UE::Cameras::Internal::ApplyDataParameterOverride<FName>(FCameraObjectInterfaceParameterDefinition_const&___ptr64,TValueOrError<FName,EPropertyBagResult>_const&___ptr64,UE::Cameras::FCameraContextDataTable&___ptr64)'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150584cec;
    }
  }
  bVar2 = false;
LAB_150584cec:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150584d20

bool __thiscall
`UE::Cameras::Internal::ApplyDataParameterOverride<FString>'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UEnum *this_00;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10.ComparisonIndex.Value = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6752941276653420382>);
  if (bVar2) {
    if ((*(char *)(*(longlong *)this + 0x10) != '\x01') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    this_00 = StaticEnum<enum_EPropertyBagResult>();
    if ((this_00 == (UEnum *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    UEnum::GetNameByValue(this_00,(long64)&local_res10);
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6752941276653420382>,
                       &`public:___cdecl_`void___cdecl_UE::Cameras::Internal::ApplyDataParameterOverride<FString>(FCameraObjectInterfaceParameterDefinition_const&___ptr64,TValueOrError<FString,EPropertyBagResult>_const&___ptr64,UE::Cameras::FCameraContextDataTable&___ptr64)'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150584e0c;
    }
  }
  bVar2 = false;
LAB_150584e0c:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150585010

bool __thiscall
`UE::Cameras::Internal::ApplyDataParameterArrayOverride'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UEnum *this_00;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10.ComparisonIndex.Value = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6752941276653420254>);
  if (bVar2) {
    if ((*(char *)(*(longlong *)this + 0x60) != '\x01') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    this_00 = StaticEnum<enum_EPropertyBagResult>();
    if ((this_00 == (UEnum *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    UEnum::GetNameByValue(this_00,(long64)&local_res10);
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6752941276653420254>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505850fc;
    }
  }
  bVar2 = false;
LAB_1505850fc:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150585460

bool __thiscall
`UE::Cameras::Internal::ApplyBlendableParameterOverride'::__l24::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UEnum *this_00;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10.ComparisonIndex.Value = 0;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6752941276653420465>);
  if (bVar2) {
    if ((*(char *)(*(longlong *)this + 0x10) != '\x01') &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    this_00 = StaticEnum<enum_EPropertyBagResult>();
    if ((this_00 == (UEnum *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xca4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    UEnum::GetNameByValue(this_00,(long64)&local_res10);
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6752941276653420465>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15058554c;
    }
  }
  bVar2 = false;
LAB_15058554c:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505855c0

bool __thiscall
`UE::Cameras::Internal::ApplyDataParameterArrayOverride'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6752941276653420245>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6752941276653420245>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150585627;
    }
  }
  bVar2 = false;
LAB_150585627:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

