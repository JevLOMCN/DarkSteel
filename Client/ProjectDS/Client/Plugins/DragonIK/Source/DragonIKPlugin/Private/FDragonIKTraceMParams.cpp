// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 3

// StaticStruct @ 14d2a43d0

UScriptStruct * __cdecl FDragonIKTraceMParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDragonIKTraceMParams.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_DragonIKPlugin();
    Z_Registration_Info_UScriptStruct_FDragonIKTraceMParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDragonIKTraceMParams,(UObject *)pUVar1,
                         L"DragonIKTraceMParams");
  }
  return Z_Registration_Info_UScriptStruct_FDragonIKTraceMParams.OuterSingleton;
}

// FDragonIKTraceMParams @ 14d2a5a60

FDragonIKTraceMParams * __thiscall
FDragonIKTraceMParams::FDragonIKTraceMParams(FDragonIKTraceMParams *this)

{
  undefined8 uVar1;
  FName local_res8;
  
  this->allow = true;
  ::FName::FName(&this->TraceIdentifier,"");
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EndLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->EndLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->EndLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->SphereRadius = 20.0;
  this->trace_complex = true;
  this->is_line_type = true;
  this->ChannelInput = '\0';
  this->TraceType = LineTrace;
  memset(&this->hit_result,0,0x100);
  (this->hit_result).Time = 1.0;
  (this->hit_result).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->hit_result).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->hit_result).MyItem = -1;
  (this->hit_result).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->hit_result).HitObjectHandle.InstanceIndex = -1;
  (this->hit_result).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->hit_result).HitObjectHandle.field_0x1d = 0;
  (this->bone_text).ComparisonIndex = 0;
  (this->bone_text).Number = 0;
  ::FName::FName(&local_res8,"");
  this->TraceIdentifier = local_res8;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->EndLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->EndLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->EndLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->SphereRadius = 20.0;
  this->ChannelInput = '\0';
  this->TraceType = LineTrace;
  this->trace_complex = true;
  this->allow = true;
  ::FName::FName(&local_res8,"");
  this->bone_text = local_res8;
  return this;
}

// FDragonIKTraceMParams @ 14d32ded0

FDragonIKTraceMParams * __thiscall
FDragonIKTraceMParams::FDragonIKTraceMParams
          (FDragonIKTraceMParams *this,FDragonIKTraceMParams *param_1)

{
  double dVar1;
  
  this->allow = param_1->allow;
  this->TraceIdentifier = param_1->TraceIdentifier;
  dVar1 = (param_1->StartLocation).field0_0x0._s_0.Y;
  (this->StartLocation).field0_0x0._s_0.X = (param_1->StartLocation).field0_0x0._s_0.X;
  (this->StartLocation).field0_0x0._s_0.Y = dVar1;
  (this->StartLocation).field0_0x0._s_0.Z = (param_1->StartLocation).field0_0x0._s_0.Z;
  dVar1 = (param_1->EndLocation).field0_0x0._s_0.Y;
  (this->EndLocation).field0_0x0._s_0.X = (param_1->EndLocation).field0_0x0._s_0.X;
  (this->EndLocation).field0_0x0._s_0.Y = dVar1;
  (this->EndLocation).field0_0x0._s_0.Z = (param_1->EndLocation).field0_0x0._s_0.Z;
  this->SphereRadius = param_1->SphereRadius;
  this->trace_complex = param_1->trace_complex;
  this->is_line_type = param_1->is_line_type;
  (this->ChannelInput).Value = (param_1->ChannelInput).Value;
  this->TraceType = param_1->TraceType;
  FHitResult::FHitResult(&this->hit_result,&param_1->hit_result);
  this->bone_text = param_1->bone_text;
  return this;
}

