// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// StaticStruct @ 149077f80

UScriptStruct * __cdecl FNiagaraDataChannelVariable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDataChannelVariable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDataChannelVariable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataChannelVariable,(UObject *)pUVar1,
                         L"NiagaraDataChannelVariable");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDataChannelVariable.OuterSingleton;
}

// Serialize @ 14912cd50

bool __thiscall
FNiagaraDataChannelVariable::Serialize(FNiagaraDataChannelVariable *this,FArchive *param_1)

{
  bool bVar1;
  int iVar2;
  FNiagaraTypeDefinition *pFVar3;
  FNiagaraTypeDefinitionHandle local_res18 [4];
  TObjectPtr<UObject>_u_0 local_28;
  ushort local_20;
  uchar local_1e;
  short local_1c;
  short local_1a;
  int local_18;
  uint local_14;
  
  bVar1 = FNiagaraVariableBase::Serialize((FNiagaraVariableBase *)this,param_1);
  if (bVar1) {
    if ((param_1->field_0x28 & 1) != 0) {
      pFVar3 = FNiagaraTypeDefinitionHandle::Resolve
                         ((FNiagaraTypeDefinitionHandle *)&this->field_0x8);
      local_28.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar3->ClassStructOrEnum).field0_0x0.DebugPtr;
      if ((((TObjectPtr<UObject>_u_0)local_28.DebugPtr ==
            FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0) &&
          (pFVar3->UnderlyingType == FNiagaraTypeDefinition::Vec3Def.UnderlyingType)) &&
         (pFVar3->Flags == FNiagaraTypeDefinition::Vec3Def.Flags)) {
        local_28 = FNiagaraTypeHelper::VectorDef.ClassStructOrEnum.field0_0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (FNiagaraTypeHelper::VectorDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable
                    ((UObject *)FNiagaraTypeHelper::VectorDef.ClassStructOrEnum.field0_0x0);
        }
        local_20 = FNiagaraTypeHelper::VectorDef.UnderlyingType;
        local_1e = FNiagaraTypeHelper::VectorDef.Flags;
        local_1c = FNiagaraTypeHelper::VectorDef.Size;
        local_1a = FNiagaraTypeHelper::VectorDef.Alignment;
        local_18 = FNiagaraTypeHelper::VectorDef.RegisteredTypeDefIndex;
        local_14 = FNiagaraTypeHelper::VectorDef.UnderlyingTypePathNameHash;
      }
      else if ((((TObjectPtr<UObject>_u_0)local_28.DebugPtr ==
                 FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0) &&
               (pFVar3->UnderlyingType == FNiagaraTypeDefinition::FloatDef.UnderlyingType)) &&
              (pFVar3->Flags == FNiagaraTypeDefinition::FloatDef.Flags)) {
        local_28 = FNiagaraTypeHelper::DoubleDef.ClassStructOrEnum.field0_0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (FNiagaraTypeHelper::DoubleDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable
                    ((UObject *)FNiagaraTypeHelper::DoubleDef.ClassStructOrEnum.field0_0x0);
        }
        local_20 = FNiagaraTypeHelper::DoubleDef.UnderlyingType;
        local_1e = FNiagaraTypeHelper::DoubleDef.Flags;
        local_1c = FNiagaraTypeHelper::DoubleDef.Size;
        local_1a = FNiagaraTypeHelper::DoubleDef.Alignment;
        local_18 = FNiagaraTypeHelper::DoubleDef.RegisteredTypeDefIndex;
        local_14 = FNiagaraTypeHelper::DoubleDef.UnderlyingTypePathNameHash;
      }
      else if ((((TObjectPtr<UObject>_u_0)local_28.DebugPtr ==
                 FNiagaraTypeDefinition::QuatDef.ClassStructOrEnum.field0_0x0) &&
               (pFVar3->UnderlyingType == FNiagaraTypeDefinition::QuatDef.UnderlyingType)) &&
              (pFVar3->Flags == FNiagaraTypeDefinition::QuatDef.Flags)) {
        local_28 = FNiagaraTypeHelper::QuatDef.ClassStructOrEnum.field0_0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (FNiagaraTypeHelper::QuatDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable
                    ((UObject *)FNiagaraTypeHelper::QuatDef.ClassStructOrEnum.field0_0x0);
        }
        local_20 = FNiagaraTypeHelper::QuatDef.UnderlyingType;
        local_1e = FNiagaraTypeHelper::QuatDef.Flags;
        local_1c = FNiagaraTypeHelper::QuatDef.Size;
        local_1a = FNiagaraTypeHelper::QuatDef.Alignment;
        local_18 = FNiagaraTypeHelper::QuatDef.RegisteredTypeDefIndex;
        local_14 = FNiagaraTypeHelper::QuatDef.UnderlyingTypePathNameHash;
      }
      else if ((((TObjectPtr<UObject>_u_0)local_28.DebugPtr ==
                 FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0) &&
               (pFVar3->UnderlyingType == FNiagaraTypeDefinition::Vec2Def.UnderlyingType)) &&
              (pFVar3->Flags == FNiagaraTypeDefinition::Vec2Def.Flags)) {
        local_28 = FNiagaraTypeHelper::Vector2DDef.ClassStructOrEnum.field0_0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (FNiagaraTypeHelper::Vector2DDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable
                    ((UObject *)FNiagaraTypeHelper::Vector2DDef.ClassStructOrEnum.field0_0x0);
        }
        local_20 = FNiagaraTypeHelper::Vector2DDef.UnderlyingType;
        local_1e = FNiagaraTypeHelper::Vector2DDef.Flags;
        local_1c = FNiagaraTypeHelper::Vector2DDef.Size;
        local_1a = FNiagaraTypeHelper::Vector2DDef.Alignment;
        local_18 = FNiagaraTypeHelper::Vector2DDef.RegisteredTypeDefIndex;
        local_14 = FNiagaraTypeHelper::Vector2DDef.UnderlyingTypePathNameHash;
      }
      else if ((((TObjectPtr<UObject>_u_0)local_28.DebugPtr ==
                 FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0) &&
               (pFVar3->UnderlyingType == FNiagaraTypeDefinition::Vec4Def.UnderlyingType)) &&
              (pFVar3->Flags == FNiagaraTypeDefinition::Vec4Def.Flags)) {
        local_28 = FNiagaraTypeHelper::Vector4Def.ClassStructOrEnum.field0_0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (FNiagaraTypeHelper::Vector4Def.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable
                    ((UObject *)FNiagaraTypeHelper::Vector4Def.ClassStructOrEnum.field0_0x0);
        }
        local_20 = FNiagaraTypeHelper::Vector4Def.UnderlyingType;
        local_1e = FNiagaraTypeHelper::Vector4Def.Flags;
        local_1c = FNiagaraTypeHelper::Vector4Def.Size;
        local_1a = FNiagaraTypeHelper::Vector4Def.Alignment;
        local_18 = FNiagaraTypeHelper::Vector4Def.RegisteredTypeDefIndex;
        local_14 = FNiagaraTypeHelper::Vector4Def.UnderlyingTypePathNameHash;
      }
      else {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_28.DebugPtr != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_28.DebugPtr);
        }
        local_20 = pFVar3->UnderlyingType;
        local_1e = pFVar3->Flags;
        local_1c = pFVar3->Size;
        local_1a = pFVar3->Alignment;
        local_18 = pFVar3->RegisteredTypeDefIndex;
        local_14 = pFVar3->UnderlyingTypePathNameHash;
      }
      iVar2 = FNiagaraTypeDefinitionHandle::Register
                        (local_res18,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
      *(int *)&this->field_0x8 = iVar2;
    }
    return true;
  }
  return false;
}

// ToDataChannelType @ 14913b950

FNiagaraTypeDefinition * __cdecl
FNiagaraDataChannelVariable::ToDataChannelType
          (FNiagaraTypeDefinition *__return_storage_ptr__,FNiagaraTypeDefinition *param_1)

{
  TObjectPtr<UObject>_u_0 TVar1;
  
  TVar1.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr;
  if ((((TObjectPtr<UObject>_u_0)TVar1.DebugPtr ==
        FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0) &&
      (param_1->UnderlyingType == FNiagaraTypeDefinition::Vec3Def.UnderlyingType)) &&
     (param_1->Flags == FNiagaraTypeDefinition::Vec3Def.Flags)) {
    (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
         (FObjectPtr_u_0)FNiagaraTypeHelper::VectorDef.ClassStructOrEnum.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (FNiagaraTypeHelper::VectorDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FNiagaraTypeHelper::VectorDef.ClassStructOrEnum.field0_0x0)
      ;
    }
    __return_storage_ptr__->UnderlyingType = FNiagaraTypeHelper::VectorDef.UnderlyingType;
    __return_storage_ptr__->Flags = FNiagaraTypeHelper::VectorDef.Flags;
    __return_storage_ptr__->Size = FNiagaraTypeHelper::VectorDef.Size;
    __return_storage_ptr__->Alignment = FNiagaraTypeHelper::VectorDef.Alignment;
    __return_storage_ptr__->RegisteredTypeDefIndex =
         FNiagaraTypeHelper::VectorDef.RegisteredTypeDefIndex;
    __return_storage_ptr__->UnderlyingTypePathNameHash =
         FNiagaraTypeHelper::VectorDef.UnderlyingTypePathNameHash;
    return __return_storage_ptr__;
  }
  if ((((TObjectPtr<UObject>_u_0)TVar1.DebugPtr ==
        FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0) &&
      (param_1->UnderlyingType == FNiagaraTypeDefinition::FloatDef.UnderlyingType)) &&
     (param_1->Flags == FNiagaraTypeDefinition::FloatDef.Flags)) {
    (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
         (FObjectPtr_u_0)FNiagaraTypeHelper::DoubleDef.ClassStructOrEnum.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (FNiagaraTypeHelper::DoubleDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FNiagaraTypeHelper::DoubleDef.ClassStructOrEnum.field0_0x0)
      ;
    }
    __return_storage_ptr__->UnderlyingType = FNiagaraTypeHelper::DoubleDef.UnderlyingType;
    __return_storage_ptr__->Flags = FNiagaraTypeHelper::DoubleDef.Flags;
    __return_storage_ptr__->Size = FNiagaraTypeHelper::DoubleDef.Size;
    __return_storage_ptr__->Alignment = FNiagaraTypeHelper::DoubleDef.Alignment;
    __return_storage_ptr__->RegisteredTypeDefIndex =
         FNiagaraTypeHelper::DoubleDef.RegisteredTypeDefIndex;
    __return_storage_ptr__->UnderlyingTypePathNameHash =
         FNiagaraTypeHelper::DoubleDef.UnderlyingTypePathNameHash;
    return __return_storage_ptr__;
  }
  if ((((TObjectPtr<UObject>_u_0)TVar1.DebugPtr ==
        FNiagaraTypeDefinition::QuatDef.ClassStructOrEnum.field0_0x0) &&
      (param_1->UnderlyingType == FNiagaraTypeDefinition::QuatDef.UnderlyingType)) &&
     (param_1->Flags == FNiagaraTypeDefinition::QuatDef.Flags)) {
    FNiagaraTypeDefinition::FNiagaraTypeDefinition
              (__return_storage_ptr__,&FNiagaraTypeHelper::QuatDef);
    return __return_storage_ptr__;
  }
  if ((((TObjectPtr<UObject>_u_0)TVar1.DebugPtr ==
        FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0) &&
      (param_1->UnderlyingType == FNiagaraTypeDefinition::Vec2Def.UnderlyingType)) &&
     (param_1->Flags == FNiagaraTypeDefinition::Vec2Def.Flags)) {
    FNiagaraTypeDefinition::FNiagaraTypeDefinition
              (__return_storage_ptr__,&FNiagaraTypeHelper::Vector2DDef);
    return __return_storage_ptr__;
  }
  if ((((TObjectPtr<UObject>_u_0)TVar1.DebugPtr ==
        FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0) &&
      (param_1->UnderlyingType == FNiagaraTypeDefinition::Vec4Def.UnderlyingType)) &&
     (param_1->Flags == FNiagaraTypeDefinition::Vec4Def.Flags)) {
    param_1 = &FNiagaraTypeHelper::Vector4Def;
  }
  FNiagaraTypeDefinition::FNiagaraTypeDefinition(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

