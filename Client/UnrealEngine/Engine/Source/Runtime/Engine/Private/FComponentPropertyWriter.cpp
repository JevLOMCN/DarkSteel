// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FComponentPropertyWriter @ 1477ebe60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FComponentPropertyWriter * __thiscall
FComponentPropertyWriter::FComponentPropertyWriter
          (FComponentPropertyWriter *this,UActorComponent *param_1,
          FActorComponentInstanceData *param_2)

{
  UStruct *this_00;
  FName *pFVar1;
  FName local_res8;
  FProperty *local_res10;
  
  FDataCachePropertyWriter::FDataCachePropertyWriter
            ((FDataCachePropertyWriter *)this,(UObject *)param_1,(FInstanceCacheDataBase *)param_2);
  *(undefined ***)this = &___7FComponentPropertyWriter__6B_;
  if (param_1 != (UActorComponent *)0x0) {
    UActorComponent::GetUCSModifiedProperties
              (param_1,(TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>
                        *)&this->field_0xa8);
    if ((param_1->OwnerPrivate != (AActor *)0x0) &&
       ((USceneComponent *)param_1 == (param_1->OwnerPrivate->RootComponent).field0_0x0.DebugPtr)) {
      this_00 = (UStruct *)param_1->_padding_;
      pFVar1 = ::FName::FName(&local_res8,0x10,L"RelativeLocation",FNAME_Add);
      local_res10 = UStruct::FindPropertyByName(this_00,*pFVar1);
      TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>::
      Emplace<FProperty_const_*>
                ((TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>
                  *)&this->field_0xa8,(FProperty **)&local_res8,(bool *)&local_res10);
      pFVar1 = ::FName::FName(&local_res8,0x10,L"RelativeRotation",FNAME_Add);
      local_res10 = UStruct::FindPropertyByName(this_00,*pFVar1);
      TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>::
      Emplace<FProperty_const_*>
                ((TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>
                  *)&this->field_0xa8,(FProperty **)&local_res8,(bool *)&local_res10);
      pFVar1 = ::FName::FName(&local_res8,0xf,L"RelativeScale3D",FNAME_Add);
      local_res10 = UStruct::FindPropertyByName(this_00,*pFVar1);
      TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>::
      Emplace<FProperty_const_*>
                ((TSet<FProperty_const_*,DefaultKeyFuncs<FProperty_const_*,0>,FDefaultSetAllocator>
                  *)&this->field_0xa8,(FProperty **)&local_res8,(bool *)&local_res10);
    }
    FDataCachePropertyWriter::SerializeProperties((FDataCachePropertyWriter *)this);
  }
  return this;
}

