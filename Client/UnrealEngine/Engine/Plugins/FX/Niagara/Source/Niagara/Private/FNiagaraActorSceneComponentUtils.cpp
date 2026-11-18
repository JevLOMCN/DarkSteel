// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// FNiagaraActorSceneComponentUtils @ 149385e00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FNiagaraActorSceneComponentUtils * __thiscall
FNiagaraActorSceneComponentUtils::FNiagaraActorSceneComponentUtils
          (FNiagaraActorSceneComponentUtils *this,UNiagaraComponent *param_1)

{
  UNiagaraComponent *local_res8;
  
  this->_padding_ = (longlong)&___7FNiagaraActorSceneComponentUtils__6B_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNiagaraComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->WeakOwnerComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNiagaraComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeakOwnerComponent).WeakPtr,(FObjectPtr)&local_res8);
  return this;
}

// GetPhysicsLinearVelocity @ 1493a71e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FNiagaraActorSceneComponentUtils::GetPhysicsLinearVelocity
          (FNiagaraActorSceneComponentUtils *this,TVector<double> *__return_storage_ptr__,
          UObject *param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  UClass *pUVar4;
  TVector<double>_u_0 *pTVar5;
  TVector<double>_u_0 local_28;
  
  if (param_1 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar4->_padding_)) goto LAB_1493a721a;
  }
  param_1 = (UObject *)0x0;
LAB_1493a721a:
  if ((UPrimitiveComponent *)param_1 == (UPrimitiveComponent *)0x0) {
    pTVar5 = &local_28;
    local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pTVar5 = &UPrimitiveComponent::GetPhysicsLinearVelocity
                        ((UPrimitiveComponent *)param_1,(TVector<double> *)&local_28._s_0,(FName)0x0
                        )->field0_0x0;
  }
  dVar3 = (pTVar5->_s_0).Y;
  dVar1 = (pTVar5->_s_0).Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (((TVector<double>_u_0 *)&(pTVar5->_s_0).X)->_s_0).X
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetPrimitiveSceneId @ 1493a7280

FPrimitiveComponentId __thiscall
FNiagaraActorSceneComponentUtils::GetPrimitiveSceneId
          (FNiagaraActorSceneComponentUtils *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  longlong in_R8;
  
  if (in_R8 != 0) {
    pUVar2 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(in_R8 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(in_R8 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      *(undefined4 *)param_1 = *(undefined4 *)(in_R8 + 0x344);
      return (FPrimitiveComponentId)(uint)param_1;
    }
  }
  *(undefined4 *)param_1 = 0;
  return (FPrimitiveComponentId)(uint)param_1;
}

// GetStaticMeshOverrideColors @ 1493a7ac0

FColorVertexBuffer * __thiscall
FNiagaraActorSceneComponentUtils::GetStaticMeshOverrideColors
          (FNiagaraActorSceneComponentUtils *this,UObject *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FColorVertexBuffer *pFVar5;
  
  if (param_1 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) && (-1 < param_2)) && (param_2 < *(int *)&param_1[0x26].field_0x10))
    {
      if (*(int *)&param_1[0x26].field_0x10 <= param_2) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FColorVertexBuffer *)(*pcVar2)();
          return pFVar5;
        }
      }
      return *(FColorVertexBuffer **)
              (*(longlong *)&param_1[0x26].field_0x8 + 0x40 + (longlong)param_2 * 0x50);
    }
  }
  return (FColorVertexBuffer *)0x0;
}

// GetStaticMeshTransforms @ 1493a7b80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNiagaraActorSceneComponentUtils::GetStaticMeshTransforms
          (FNiagaraActorSceneComponentUtils *this,UObject *param_1,TTransform<double> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UClass *pUVar8;
  FScriptContainerElement *_Dst;
  int iVar9;
  longlong lVar10;
  
  if (param_1 == (UObject *)0x0) {
    return false;
  }
  pUVar8 = Z_Construct_UClass_USceneComponent_NoRegister();
  iVar9 = (int)pUVar8->_padding_;
  if (*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar9) {
    return false;
  }
  if ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
      &pUVar8->_padding_) {
    return false;
  }
  dVar4 = *(double *)&param_1[0xc].field_0x18;
  (param_2->Rotation).XY.m128d_f64[0] = *(double *)&param_1[0xc].field_0x10;
  (param_2->Rotation).XY.m128d_f64[1] = dVar4;
  dVar4 = *(double *)(param_1 + 0xd);
  (param_2->Rotation).ZW.m128d_f64[0] = *(double *)&param_1[0xc].field_0x20;
  (param_2->Rotation).ZW.m128d_f64[1] = dVar4;
  dVar4 = *(double *)&param_1[0xd].field_0x10;
  (param_2->Translation).XY.m128d_f64[0] = *(double *)&param_1[0xd].field_0x8;
  (param_2->Translation).XY.m128d_f64[1] = dVar4;
  dVar4 = *(double *)&param_1[0xd].field_0x20;
  (param_2->Translation).ZW.m128d_f64[0] = *(double *)&param_1[0xd].field_0x18;
  (param_2->Translation).ZW.m128d_f64[1] = dVar4;
  dVar4 = *(double *)&param_1[0xe].field_0x8;
  (param_2->Scale3D).XY.m128d_f64[0] = *(double *)(param_1 + 0xe);
  (param_2->Scale3D).XY.m128d_f64[1] = dVar4;
  dVar4 = *(double *)&param_1[0xe].field_0x18;
  (param_2->Scale3D).ZW.m128d_f64[0] = *(double *)&param_1[0xe].field_0x10;
  (param_2->Scale3D).ZW.m128d_f64[1] = dVar4;
  pUVar8 = Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
  iVar9 = (int)pUVar8->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar9) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
      &pUVar8->_padding_)) {
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax == 0) {
      return true;
    }
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
    return true;
  }
  iVar9 = param_3->ArrayNum;
  piVar1 = &param_3->ArrayNum;
  uVar2 = *(uint *)&param_1[0x28].field_0x20;
  if (iVar9 < (int)uVar2) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,0x10,uVar2 - iVar9,&param_3->AllocatorInstance,piVar1,&param_3->ArrayMax
                      );
    DefaultConstructItems<UE::Math::TTransform<double>,int>
              ((param_3->AllocatorInstance).Data + (longlong)iVar7 * 0x60,uVar2 - iVar9);
  }
  else {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if ((int)uVar2 < iVar9) {
      iVar9 = iVar9 - uVar2;
      if (iVar9 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      else if (iVar9 == 0) goto LAB_1493a7d3c;
      _Dst = (param_3->AllocatorInstance).Data + (longlong)(int)uVar2 * 0x60;
      iVar7 = (*piVar1 - iVar9) - uVar2;
      if (iVar7 != 0) {
        memmove(_Dst,_Dst + (longlong)iVar9 * 0x60,(longlong)iVar7 * 0x60);
      }
      *piVar1 = *piVar1 - iVar9;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,&param_3->AllocatorInstance,*piVar1,&param_3->ArrayMax);
    }
  }
LAB_1493a7d3c:
  iVar9 = 0;
  if (0 < (int)uVar2) {
    lVar10 = 0;
    do {
      if ((*piVar1 <= iVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      UInstancedStaticMeshComponent::GetInstanceTransform
                ((UInstancedStaticMeshComponent *)param_1,iVar9,
                 (TTransform<double> *)((param_3->AllocatorInstance).Data + lVar10),true);
      iVar9 = iVar9 + 1;
      lVar10 = lVar10 + 0x60;
    } while (iVar9 < (int)uVar2);
  }
  return true;
}

// ResolveStaticMesh @ 1493b53c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraActorSceneComponentUtils::ResolveStaticMesh
          (FNiagaraActorSceneComponentUtils *this,UObject *param_1,bool param_2,UObject **param_3,
          UStaticMesh **param_4)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  UStaticMeshComponent *pUVar4;
  
  if (param_1 == (UObject *)0x0) {
LAB_1493b5440:
    if (param_1 != (UObject *)0x0) {
      pUVar3 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
      lVar2 = *(longlong *)&param_1->field_0x10;
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        *param_3 = param_1;
        param_1 = *(UObject **)(param_1 + 0x24);
        goto LAB_1493b5428;
      }
    }
    *param_3 = (UObject *)0x0;
    if (param_1 != (UObject *)0x0) {
      pUVar3 = Z_Construct_UClass_UStaticMesh_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) goto LAB_1493b54a7;
    }
    param_1 = (UObject *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_AActor_NoRegister();
    lVar2 = *(longlong *)&param_1->field_0x10;
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_1493b5440;
    pUVar4 = NiagaraSceneComponentUtilsPrivate::FindStaticMeshComponent((AActor *)param_1,param_2);
    if (pUVar4 == (UStaticMeshComponent *)0x0) {
      return;
    }
    *param_3 = (UObject *)pUVar4;
    param_1 = (UObject *)(pUVar4->StaticMesh).field0_0x0.DebugPtr;
LAB_1493b5428:
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UStaticMesh *)param_1 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
  }
LAB_1493b54a7:
  *param_4 = (UStaticMesh *)param_1;
  return;
}

// ResolveStaticMesh @ 1493b54d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraActorSceneComponentUtils::ResolveStaticMesh
          (FNiagaraActorSceneComponentUtils *this,bool param_1,UObject **param_2,
          UStaticMesh **param_3)

{
  int iVar1;
  USceneComponent *this_00;
  UClass *pUVar2;
  UStaticMeshComponent *pUVar3;
  AActor *pAVar4;
  USceneComponent *pUVar5;
  UStaticMesh *pUVar6;
  
  this_00 = (USceneComponent *)FWeakObjectPtr::Get(&(this->WeakOwnerComponent).WeakPtr);
  pUVar5 = this_00;
  if (this_00 != (USceneComponent *)0x0) {
    do {
      pUVar2 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if (((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar2->_padding_)) && (((uint)pUVar5->_padding_ >> 0x1e & 1) == 0)) {
        *param_2 = (UObject *)pUVar5;
        pUVar6 = *(UStaticMesh **)&pUVar5[2].ClientAttachedChildren.ArrayNum;
        goto LAB_1493b5592;
      }
      pUVar5 = (pUVar5->AttachParent).field0_0x0.DebugPtr;
    } while (pUVar5 != (USceneComponent *)0x0);
    pUVar2 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    pUVar3 = (UStaticMeshComponent *)
             UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar2);
    if (((pUVar3 != (UStaticMeshComponent *)0x0) && (((uint)pUVar3->_padding_ >> 0x1e & 1) == 0)) ||
       ((pAVar4 = USceneComponent::GetAttachmentRootActor(this_00), pAVar4 != (AActor *)0x0 &&
        (pUVar3 = NiagaraSceneComponentUtilsPrivate::FindStaticMeshComponent(pAVar4,param_1),
        pUVar3 != (UStaticMeshComponent *)0x0)))) {
      *param_2 = (UObject *)pUVar3;
      pUVar6 = (pUVar3->StaticMesh).field0_0x0.DebugPtr;
LAB_1493b5592:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      *param_3 = pUVar6;
    }
  }
  return;
}

