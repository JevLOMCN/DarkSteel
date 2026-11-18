// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 9

// StaticStruct @ 14966cf50

UScriptStruct * __cdecl FGizmoElementMeshRenderStateAttributes::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGizmoElementMeshRenderStateAttributes.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UScriptStruct_FGizmoElementMeshRenderStateAttributes.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes,
                         (UObject *)pUVar1,L"GizmoElementMeshRenderStateAttributes");
  }
  return Z_Registration_Info_UScriptStruct_FGizmoElementMeshRenderStateAttributes.OuterSingleton;
}

// FGizmoElementMeshRenderStateAttributes @ 149682850

FGizmoElementMeshRenderStateAttributes * __thiscall
FGizmoElementMeshRenderStateAttributes::FGizmoElementMeshRenderStateAttributes
          (FGizmoElementMeshRenderStateAttributes *this)

{
  FLinearColor FVar1;
  undefined8 local_res8;
  
  (this->Material).Value.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  (this->Material).bOverridesChildState = false;
  (this->HoverMaterial).Value.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->HoverMaterial,(FObjectPtr)&local_res8);
  (this->HoverMaterial).bOverridesChildState = false;
  (this->InteractMaterial).Value.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->InteractMaterial,(FObjectPtr)&local_res8);
  (this->InteractMaterial).bOverridesChildState = false;
  (this->SelectMaterial).Value.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->SelectMaterial,(FObjectPtr)&local_res8);
  (this->SelectMaterial).bOverridesChildState = false;
  (this->SubdueMaterial).Value.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->SubdueMaterial,(FObjectPtr)&local_res8);
  (this->SubdueMaterial).bOverridesChildState = false;
  FVar1 = FGizmoElementColorAttribute::DefaultColor;
  (this->VertexColor).bHasValue = false;
  (this->VertexColor).bOverridesChildState = false;
  (this->VertexColor).Value.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FGizmoElementColorAttribute::DefaultColor;
  (this->HoverVertexColor).bHasValue = false;
  (this->HoverVertexColor).bOverridesChildState = false;
  (this->HoverVertexColor).Value.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FGizmoElementColorAttribute::DefaultColor;
  (this->InteractVertexColor).bHasValue = false;
  (this->InteractVertexColor).bOverridesChildState = false;
  (this->InteractVertexColor).Value.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FGizmoElementColorAttribute::DefaultColor;
  (this->SelectVertexColor).bHasValue = false;
  (this->SelectVertexColor).bOverridesChildState = false;
  (this->SelectVertexColor).Value.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FGizmoElementColorAttribute::DefaultColor;
  (this->SubdueVertexColor).bHasValue = false;
  (this->SubdueVertexColor).bOverridesChildState = false;
  (this->SubdueVertexColor).Value.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return this;
}

// GetMaterial @ 1496a32c0

UMaterialInterface * __thiscall
FGizmoElementMeshRenderStateAttributes::GetMaterial
          (FGizmoElementMeshRenderStateAttributes *this,EGizmoElementInteractionState param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UMaterialInterface *pUVar3;
  
  if (param_1 == Hovering) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->HoverMaterial);
    if (bVar1) {
      pUVar3 = (UMaterialInterface *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->HoverMaterial);
      return pUVar3;
    }
  }
  else {
    if (param_1 != Interacting) {
      if (param_1 == Selected) {
        bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->SelectMaterial);
        if ((bVar1) &&
           (pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->SelectMaterial),
           pUVar2 != (UObject *)0x0)) {
          bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->SelectMaterial);
          if (bVar1) {
            pUVar3 = (UMaterialInterface *)
                     FWeakObjectPtr::Get((FWeakObjectPtr *)&this->SelectMaterial);
            return pUVar3;
          }
        }
        else {
          bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->InteractMaterial);
          if (bVar1) {
            pUVar3 = (UMaterialInterface *)
                     FWeakObjectPtr::Get((FWeakObjectPtr *)&this->InteractMaterial);
            return pUVar3;
          }
        }
      }
      else if (((param_1 == Subdued) &&
               (bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->SubdueMaterial), bVar1)) &&
              (pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->SubdueMaterial),
              pUVar2 != (UObject *)0x0)) {
        bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->SubdueMaterial);
        if (bVar1) {
          pUVar3 = (UMaterialInterface *)
                   FWeakObjectPtr::Get((FWeakObjectPtr *)&this->SubdueMaterial);
          return pUVar3;
        }
      }
      else {
        bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
        if (bVar1) {
          pUVar3 = (UMaterialInterface *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
          return pUVar3;
        }
      }
      return (UMaterialInterface *)0x0;
    }
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->InteractMaterial);
    if (bVar1) {
      pUVar3 = (UMaterialInterface *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->InteractMaterial);
      return pUVar3;
    }
  }
  return (UMaterialInterface *)0x0;
}

// GetMaterial @ 1496a32d0

UMaterialInterface * __thiscall
FGizmoElementMeshRenderStateAttributes::GetMaterial
          (FGizmoElementMeshRenderStateAttributes *this,EGizmoElementInteractionState param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UMaterialInterface *pUVar3;
  
  if (param_1 == Hovering) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->HoverMaterial);
    if (bVar1) {
      pUVar3 = (UMaterialInterface *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->HoverMaterial);
      return pUVar3;
    }
  }
  else {
    if (param_1 != Interacting) {
      if (param_1 == Selected) {
        bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->SelectMaterial);
        if ((bVar1) &&
           (pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->SelectMaterial),
           pUVar2 != (UObject *)0x0)) {
          bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->SelectMaterial);
          if (bVar1) {
            pUVar3 = (UMaterialInterface *)
                     FWeakObjectPtr::Get((FWeakObjectPtr *)&this->SelectMaterial);
            return pUVar3;
          }
        }
        else {
          bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->InteractMaterial);
          if (bVar1) {
            pUVar3 = (UMaterialInterface *)
                     FWeakObjectPtr::Get((FWeakObjectPtr *)&this->InteractMaterial);
            return pUVar3;
          }
        }
      }
      else if (((param_1 == Subdued) &&
               (bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->SubdueMaterial), bVar1)) &&
              (pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->SubdueMaterial),
              pUVar2 != (UObject *)0x0)) {
        bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->SubdueMaterial);
        if (bVar1) {
          pUVar3 = (UMaterialInterface *)
                   FWeakObjectPtr::Get((FWeakObjectPtr *)&this->SubdueMaterial);
          return pUVar3;
        }
      }
      else {
        bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
        if (bVar1) {
          pUVar3 = (UMaterialInterface *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
          return pUVar3;
        }
      }
      return (UMaterialInterface *)0x0;
    }
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->InteractMaterial);
    if (bVar1) {
      pUVar3 = (UMaterialInterface *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->InteractMaterial);
      return pUVar3;
    }
  }
  return (UMaterialInterface *)0x0;
}

// GetMaterialInternal @ 1496a33b0

UMaterialInterface * __thiscall
FGizmoElementMeshRenderStateAttributes::GetMaterialInternal
          (FGizmoElementMeshRenderStateAttributes *this,EGizmoElementInteractionState param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UMaterialInterface *pUVar3;
  
  if (param_1 == Hovering) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->HoverMaterial);
    if (bVar1) {
      pUVar3 = (UMaterialInterface *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->HoverMaterial);
      return pUVar3;
    }
  }
  else {
    if (param_1 != Interacting) {
      if (param_1 == Selected) {
        bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->SelectMaterial);
        if ((bVar1) &&
           (pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->SelectMaterial),
           pUVar2 != (UObject *)0x0)) {
          bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->SelectMaterial);
          if (bVar1) {
            pUVar3 = (UMaterialInterface *)
                     FWeakObjectPtr::Get((FWeakObjectPtr *)&this->SelectMaterial);
            return pUVar3;
          }
        }
        else {
          bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->InteractMaterial);
          if (bVar1) {
            pUVar3 = (UMaterialInterface *)
                     FWeakObjectPtr::Get((FWeakObjectPtr *)&this->InteractMaterial);
            return pUVar3;
          }
        }
      }
      else if (((param_1 == Subdued) &&
               (bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->SubdueMaterial), bVar1)) &&
              (pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->SubdueMaterial),
              pUVar2 != (UObject *)0x0)) {
        bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->SubdueMaterial);
        if (bVar1) {
          pUVar3 = (UMaterialInterface *)
                   FWeakObjectPtr::Get((FWeakObjectPtr *)&this->SubdueMaterial);
          return pUVar3;
        }
      }
      else {
        bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
        if (bVar1) {
          pUVar3 = (UMaterialInterface *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
          return pUVar3;
        }
      }
      return (UMaterialInterface *)0x0;
    }
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->InteractMaterial);
    if (bVar1) {
      pUVar3 = (UMaterialInterface *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->InteractMaterial);
      return pUVar3;
    }
  }
  return (UMaterialInterface *)0x0;
}

// GetVertexColor @ 1496a9630

FLinearColor * __thiscall
FGizmoElementMeshRenderStateAttributes::GetVertexColor
          (FGizmoElementMeshRenderStateAttributes *this,FLinearColor *__return_storage_ptr__,
          EGizmoElementInteractionState param_1)

{
  GetVertexColorInternal(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetVertexColor @ 1496a9650

FLinearColor * __thiscall
FGizmoElementMeshRenderStateAttributes::GetVertexColor
          (FGizmoElementMeshRenderStateAttributes *this,FLinearColor *__return_storage_ptr__,
          EGizmoElementInteractionState param_1)

{
  GetVertexColorInternal(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetVertexColorInternal @ 1496a96a0

FLinearColor * __thiscall
FGizmoElementMeshRenderStateAttributes::GetVertexColorInternal
          (FGizmoElementMeshRenderStateAttributes *this,FLinearColor *__return_storage_ptr__,
          EGizmoElementInteractionState param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_1 == Hovering) {
    if ((this->HoverVertexColor).bHasValue != false) {
      uVar1 = *(undefined8 *)((longlong)&(this->HoverVertexColor).Value.field0_0x0 + 8);
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
           *(undefined8 *)&(this->HoverVertexColor).Value.field0_0x0;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
      return __return_storage_ptr__;
    }
LAB_1496a9789:
    (__return_storage_ptr__->field0_0x0)._s_0 =
         (FLinearColor_u_0_s_0)FGizmoElementColorAttribute::DefaultColor;
    return __return_storage_ptr__;
  }
  if (param_1 == Interacting) {
    if ((this->InteractVertexColor).bHasValue != false) {
      uVar1 = *(undefined8 *)((longlong)&(this->InteractVertexColor).Value.field0_0x0 + 8);
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
           *(undefined8 *)&(this->InteractVertexColor).Value.field0_0x0;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
      return __return_storage_ptr__;
    }
    goto LAB_1496a9789;
  }
  if (param_1 == Selected) {
    if ((this->SelectVertexColor).bHasValue != false) {
      fVar2 = (this->SelectVertexColor).Value.field0_0x0._s_0.R;
      fVar3 = (this->SelectVertexColor).Value.field0_0x0._s_0.G;
      fVar4 = (this->SelectVertexColor).Value.field0_0x0._s_0.B;
      fVar5 = (this->SelectVertexColor).Value.field0_0x0._s_0.A;
      goto LAB_1496a972e;
    }
    if ((this->InteractVertexColor).bHasValue != false) {
      fVar2 = (this->InteractVertexColor).Value.field0_0x0._s_0.R;
      fVar3 = (this->InteractVertexColor).Value.field0_0x0._s_0.G;
      fVar4 = (this->InteractVertexColor).Value.field0_0x0._s_0.B;
      fVar5 = (this->InteractVertexColor).Value.field0_0x0._s_0.A;
      goto LAB_1496a972e;
    }
  }
  else {
    if (param_1 != Subdued) {
      if ((this->VertexColor).bHasValue != false) {
        uVar1 = *(undefined8 *)((longlong)&(this->VertexColor).Value.field0_0x0 + 8);
        *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
             *(undefined8 *)&(this->VertexColor).Value.field0_0x0;
        *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
        return __return_storage_ptr__;
      }
      goto LAB_1496a9789;
    }
    if ((this->SubdueVertexColor).bHasValue != false) {
      uVar1 = *(undefined8 *)((longlong)&(this->SubdueVertexColor).Value.field0_0x0 + 8);
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
           *(undefined8 *)&(this->SubdueVertexColor).Value.field0_0x0;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
      return __return_storage_ptr__;
    }
    if ((this->VertexColor).bHasValue != false) {
      uVar1 = *(undefined8 *)((longlong)&(this->VertexColor).Value.field0_0x0 + 8);
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
           *(undefined8 *)&(this->VertexColor).Value.field0_0x0;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
      return __return_storage_ptr__;
    }
  }
  fVar2 = FGizmoElementColorAttribute::DefaultColor.field0_0x0._0_4_;
  fVar3 = FGizmoElementColorAttribute::DefaultColor.field0_0x0._4_4_;
  fVar4 = FGizmoElementColorAttribute::DefaultColor.field0_0x0._8_4_;
  fVar5 = FGizmoElementColorAttribute::DefaultColor.field0_0x0._12_4_;
LAB_1496a972e:
  local_18 = CONCAT44(fVar3,fVar2);
  uStack_10 = CONCAT44(fVar5,fVar4);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_18;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uStack_10;
  return __return_storage_ptr__;
}

// Update @ 1496c3700

void __thiscall
FGizmoElementMeshRenderStateAttributes::Update
          (FGizmoElementMeshRenderStateAttributes *this,
          FGizmoElementMeshRenderStateAttributes *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  
  bVar3 = TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> *)param_1,(void *)0x0);
  if (!bVar3) {
    if ((this->Material).bOverridesChildState != false) {
      bVar3 = TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> *)this,(void *)0x0);
      if (!bVar3) goto LAB_1496c3749;
    }
    (this->Material).Value.WeakPtr = (param_1->Material).Value.WeakPtr;
    (this->Material).bOverridesChildState = (param_1->Material).bOverridesChildState;
  }
LAB_1496c3749:
  bVar3 = TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>::UEOpEquals
                    (&(param_1->HoverMaterial).Value,(void *)0x0);
  if (!bVar3) {
    if ((this->HoverMaterial).bOverridesChildState != false) {
      bVar3 = TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>::UEOpEquals
                        (&(this->HoverMaterial).Value,(void *)0x0);
      if (!bVar3) goto LAB_1496c377b;
    }
    (this->HoverMaterial).Value.WeakPtr = (param_1->HoverMaterial).Value.WeakPtr;
    (this->HoverMaterial).bOverridesChildState = (param_1->HoverMaterial).bOverridesChildState;
  }
LAB_1496c377b:
  bVar3 = TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>::UEOpEquals
                    (&(param_1->InteractMaterial).Value,(void *)0x0);
  if (!bVar3) {
    if ((this->InteractMaterial).bOverridesChildState != false) {
      bVar3 = TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>::UEOpEquals
                        (&(this->InteractMaterial).Value,(void *)0x0);
      if (!bVar3) goto LAB_1496c37ad;
    }
    (this->InteractMaterial).Value.WeakPtr = (param_1->InteractMaterial).Value.WeakPtr;
    (this->InteractMaterial).bOverridesChildState = (param_1->InteractMaterial).bOverridesChildState
    ;
  }
LAB_1496c37ad:
  bVar3 = TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>::UEOpEquals
                    (&(param_1->SelectMaterial).Value,(void *)0x0);
  if (!bVar3) {
    if ((this->SelectMaterial).bOverridesChildState != false) {
      bVar3 = TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>::UEOpEquals
                        (&(this->SelectMaterial).Value,(void *)0x0);
      if (!bVar3) goto LAB_1496c37df;
    }
    (this->SelectMaterial).Value.WeakPtr = (param_1->SelectMaterial).Value.WeakPtr;
    (this->SelectMaterial).bOverridesChildState = (param_1->SelectMaterial).bOverridesChildState;
  }
LAB_1496c37df:
  bVar3 = TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>::UEOpEquals
                    (&(param_1->SubdueMaterial).Value,(void *)0x0);
  if (!bVar3) {
    if ((this->SubdueMaterial).bOverridesChildState != false) {
      bVar3 = TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>::UEOpEquals
                        (&(this->SubdueMaterial).Value,(void *)0x0);
      if (!bVar3) goto LAB_1496c3811;
    }
    (this->SubdueMaterial).Value.WeakPtr = (param_1->SubdueMaterial).Value.WeakPtr;
    (this->SubdueMaterial).bOverridesChildState = (param_1->SubdueMaterial).bOverridesChildState;
  }
LAB_1496c3811:
  if (((param_1->VertexColor).bHasValue != false) &&
     (((this->VertexColor).bOverridesChildState == false || ((this->VertexColor).bHasValue == false)
      ))) {
    uVar1 = *(undefined8 *)&(param_1->VertexColor).Value.field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&(param_1->VertexColor).Value.field0_0x0 + 8);
    (this->VertexColor).bHasValue = true;
    *(undefined8 *)&(this->VertexColor).Value.field0_0x0 = uVar1;
    *(undefined8 *)((longlong)&(this->VertexColor).Value.field0_0x0 + 8) = uVar2;
    (this->VertexColor).bOverridesChildState = (param_1->VertexColor).bOverridesChildState;
  }
  if (((param_1->HoverVertexColor).bHasValue != false) &&
     (((this->HoverVertexColor).bOverridesChildState == false ||
      ((this->HoverVertexColor).bHasValue == false)))) {
    uVar1 = *(undefined8 *)&(param_1->HoverVertexColor).Value.field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&(param_1->HoverVertexColor).Value.field0_0x0 + 8);
    (this->HoverVertexColor).bHasValue = true;
    *(undefined8 *)&(this->HoverVertexColor).Value.field0_0x0 = uVar1;
    *(undefined8 *)((longlong)&(this->HoverVertexColor).Value.field0_0x0 + 8) = uVar2;
    (this->HoverVertexColor).bOverridesChildState = (param_1->HoverVertexColor).bOverridesChildState
    ;
  }
  if (((param_1->InteractVertexColor).bHasValue != false) &&
     (((this->InteractVertexColor).bOverridesChildState == false ||
      ((this->InteractVertexColor).bHasValue == false)))) {
    uVar1 = *(undefined8 *)&(param_1->InteractVertexColor).Value.field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&(param_1->InteractVertexColor).Value.field0_0x0 + 8);
    (this->InteractVertexColor).bHasValue = true;
    *(undefined8 *)&(this->InteractVertexColor).Value.field0_0x0 = uVar1;
    *(undefined8 *)((longlong)&(this->InteractVertexColor).Value.field0_0x0 + 8) = uVar2;
    (this->InteractVertexColor).bOverridesChildState =
         (param_1->InteractVertexColor).bOverridesChildState;
  }
  if (((param_1->SelectVertexColor).bHasValue != false) &&
     (((this->SelectVertexColor).bOverridesChildState == false ||
      ((this->SelectVertexColor).bHasValue == false)))) {
    uVar1 = *(undefined8 *)&(param_1->SelectVertexColor).Value.field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&(param_1->SelectVertexColor).Value.field0_0x0 + 8);
    (this->SelectVertexColor).bHasValue = true;
    *(undefined8 *)&(this->SelectVertexColor).Value.field0_0x0 = uVar1;
    *(undefined8 *)((longlong)&(this->SelectVertexColor).Value.field0_0x0 + 8) = uVar2;
    (this->SelectVertexColor).bOverridesChildState =
         (param_1->SelectVertexColor).bOverridesChildState;
  }
  if (((param_1->SubdueVertexColor).bHasValue != false) &&
     (((this->SubdueVertexColor).bOverridesChildState == false ||
      ((this->SubdueVertexColor).bHasValue == false)))) {
    uVar1 = *(undefined8 *)&(param_1->SubdueVertexColor).Value.field0_0x0;
    uVar2 = *(undefined8 *)((longlong)&(param_1->SubdueVertexColor).Value.field0_0x0 + 8);
    (this->SubdueVertexColor).bHasValue = true;
    *(undefined8 *)&(this->SubdueVertexColor).Value.field0_0x0 = uVar1;
    *(undefined8 *)((longlong)&(this->SubdueVertexColor).Value.field0_0x0 + 8) = uVar2;
    (this->SubdueVertexColor).bOverridesChildState =
         (param_1->SubdueVertexColor).bOverridesChildState;
  }
  return;
}

