// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 17

// operator()<int> @ 149a195d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::operator()<int>
          (void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  FPCGContext *this_00;
  bool bVar3;
  bool bVar4;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<int> *pFVar5;
  FString *pFVar6;
  int local_res8 [4];
  int local_res18 [2];
  int local_res20 [2];
  FText local_78;
  FString local_68;
  undefined1 local_58 [16];
  FName local_48;
  
  bVar3 = false;
  local_res8[0] = 0;
  local_res20[0] = 0;
  local_res18[0] = -1;
  local_58._0_8_ = *(FName *)((longlong)this + 0x20);
  local_58._8_8_ = PCGMetadataDomainID::Default._0_8_;
  local_48 = PCGMetadataDomainID::Default.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain
                      (*(UPCGMetadata **)(*(longlong *)((longlong)this + 0x28) + 0x38),
                       (FPCGMetadataDomainID *)(local_58 + 8));
  if (this_01 == (FPCGMetadataDomain *)0x0) {
    return -1;
  }
  pFVar5 = FPCGMetadataDomain::CreateAttribute<int>
                     (this_01,(FName)local_58._0_8_,local_res8,true,false);
  if (pFVar5 == (FPCGMetadataAttribute<int> *)0x0) {
    return -1;
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_78,L"PCGAttributeSelectElement",L"InvalidAxis",
             L"Invalid axis for attribute type");
  lVar2 = **(longlong **)((longlong)this + 0x18);
  iVar1 = *(int *)(lVar2 + 0x114);
  if (iVar1 == 0) {
    bVar4 = PCGAttributeSelectElement::DispatchOperation<int,0>
                      ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                       (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),local_res20,
                       *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),local_res8,local_res18);
LAB_149a197a4:
    if (bVar4 != false) {
      UPCGMetadata::AddEntry(*(UPCGMetadata **)(*(longlong *)((longlong)this + 0x28) + 0x38),-1);
      pFVar5->DefaultValue = local_res8[0];
      goto LAB_149a198ae;
    }
  }
  else {
    if (iVar1 == 1) {
      bVar4 = PCGAttributeSelectElement::DispatchOperation<int,1>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),local_res20,
                         *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),local_res8,local_res18);
      goto LAB_149a197a4;
    }
    if (iVar1 == 2) {
      bVar4 = PCGAttributeSelectElement::DispatchOperation<int,2>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),local_res20,
                         *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),local_res8,local_res18);
      goto LAB_149a197a4;
    }
    if (iVar1 == 3) {
      bVar4 = PCGAttributeSelectElement::DispatchOperation<int,3>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),local_res20,
                         *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),local_res8,local_res18);
      goto LAB_149a197a4;
    }
    if (iVar1 == 4) {
      bVar4 = PCGAttributeSelectElement::DispatchOperation<int,_1>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),local_res20,
                         *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),local_res8,local_res18);
      goto LAB_149a197a4;
    }
  }
  if (1 < (byte)LogPCG._0_1_) {
    FText::ToString(&local_78);
    if (*(FPCGContext **)((longlong)this + 0x30) != (FPCGContext *)0x0) {
      pFVar6 = FPCGContext::GetTaskName
                         (*(FPCGContext **)((longlong)this + 0x30),(FString *)local_58);
      if ((pFVar6->Data).ArrayNum == 0) {
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
    }
    this_00 = *(FPCGContext **)((longlong)this + 0x30);
    if (this_00 != (FPCGContext *)0x0) {
      FPCGContext::GetExecutionSourceName(this_00,&local_68);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((this_00 != (FPCGContext *)0x0) &&
       (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((bVar3) && ((FName)local_58._0_8_ != (FName)0x0)) {
      FMemory::Free((void *)local_58._0_8_);
    }
  }
  local_res18[0] = -1;
LAB_149a198ae:
  iVar1 = local_res18[0];
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  return iVar1;
}

// operator()<float> @ 149a1ae90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::operator()<float>
          (void *this,float param_1)

{
  int iVar1;
  longlong lVar2;
  FPCGContext *this_00;
  bool bVar3;
  bool bVar4;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<float> *pFVar5;
  FString *pFVar6;
  float local_res8 [4];
  int local_res18 [2];
  float local_res20 [2];
  FText local_78;
  FString local_68;
  undefined1 local_58 [16];
  FName local_48;
  
  bVar3 = false;
  local_res8[0] = 0.0;
  local_res20[0] = 0.0;
  local_res18[0] = -1;
  local_58._0_8_ = *(FName *)((longlong)this + 0x20);
  local_58._8_8_ = PCGMetadataDomainID::Default._0_8_;
  local_48 = PCGMetadataDomainID::Default.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain
                      (*(UPCGMetadata **)(*(longlong *)((longlong)this + 0x28) + 0x38),
                       (FPCGMetadataDomainID *)(local_58 + 8));
  if (this_01 == (FPCGMetadataDomain *)0x0) {
    return -1;
  }
  pFVar5 = FPCGMetadataDomain::CreateAttribute<float>
                     (this_01,(FName)local_58._0_8_,local_res8,true,false);
  if (pFVar5 == (FPCGMetadataAttribute<float> *)0x0) {
    return -1;
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_78,L"PCGAttributeSelectElement",L"InvalidAxis",
             L"Invalid axis for attribute type");
  lVar2 = **(longlong **)((longlong)this + 0x18);
  iVar1 = *(int *)(lVar2 + 0x114);
  if (iVar1 == 0) {
    bVar4 = PCGAttributeSelectElement::DispatchOperation<float,0>
                      ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                       (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),local_res20,
                       *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),local_res8,local_res18);
LAB_149a1b064:
    if (bVar4 != false) {
      UPCGMetadata::AddEntry(*(UPCGMetadata **)(*(longlong *)((longlong)this + 0x28) + 0x38),-1);
      pFVar5->DefaultValue = local_res8[0];
      goto LAB_149a1b172;
    }
  }
  else {
    if (iVar1 == 1) {
      bVar4 = PCGAttributeSelectElement::DispatchOperation<float,1>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),local_res20,
                         *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),local_res8,local_res18);
      goto LAB_149a1b064;
    }
    if (iVar1 == 2) {
      bVar4 = PCGAttributeSelectElement::DispatchOperation<float,2>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),local_res20,
                         *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),local_res8,local_res18);
      goto LAB_149a1b064;
    }
    if (iVar1 == 3) {
      bVar4 = PCGAttributeSelectElement::DispatchOperation<float,3>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),local_res20,
                         *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),local_res8,local_res18);
      goto LAB_149a1b064;
    }
    if (iVar1 == 4) {
      bVar4 = PCGAttributeSelectElement::DispatchOperation<float,_1>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),local_res20,
                         *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),local_res8,local_res18);
      goto LAB_149a1b064;
    }
  }
  if (1 < (byte)LogPCG._0_1_) {
    FText::ToString(&local_78);
    if (*(FPCGContext **)((longlong)this + 0x30) != (FPCGContext *)0x0) {
      pFVar6 = FPCGContext::GetTaskName
                         (*(FPCGContext **)((longlong)this + 0x30),(FString *)local_58);
      if ((pFVar6->Data).ArrayNum == 0) {
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
    }
    this_00 = *(FPCGContext **)((longlong)this + 0x30);
    if (this_00 != (FPCGContext *)0x0) {
      FPCGContext::GetExecutionSourceName(this_00,&local_68);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((this_00 != (FPCGContext *)0x0) &&
       (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((bVar3) && ((FName)local_58._0_8_ != (FName)0x0)) {
      FMemory::Free((void *)local_58._0_8_);
    }
  }
  local_res18[0] = -1;
LAB_149a1b172:
  iVar1 = local_res18[0];
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  return iVar1;
}

// operator()<double> @ 149a1ca70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::operator()<double>
          (void *this,double param_1)

{
  int iVar1;
  longlong lVar2;
  FPCGContext *this_00;
  bool bVar3;
  bool bVar4;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<double> *pFVar5;
  FString *pFVar6;
  int local_res8 [4];
  double local_res18;
  double local_res20;
  FText local_78;
  FString local_68;
  undefined1 local_58 [16];
  FName local_48;
  
  bVar3 = false;
  local_res18 = 0.0;
  local_res20 = 0.0;
  local_res8[0] = -1;
  local_58._0_8_ = *(FName *)((longlong)this + 0x20);
  local_58._8_8_ = PCGMetadataDomainID::Default._0_8_;
  local_48 = PCGMetadataDomainID::Default.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain
                      (*(UPCGMetadata **)(*(longlong *)((longlong)this + 0x28) + 0x38),
                       (FPCGMetadataDomainID *)(local_58 + 8));
  if (this_01 == (FPCGMetadataDomain *)0x0) {
    return -1;
  }
  pFVar5 = FPCGMetadataDomain::CreateAttribute<double>
                     (this_01,(FName)local_58._0_8_,&local_res18,true,false);
  if (pFVar5 == (FPCGMetadataAttribute<double> *)0x0) {
    return -1;
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_78,L"PCGAttributeSelectElement",L"InvalidAxis",
             L"Invalid axis for attribute type");
  lVar2 = **(longlong **)((longlong)this + 0x18);
  iVar1 = *(int *)(lVar2 + 0x114);
  if (iVar1 == 0) {
    bVar4 = PCGAttributeSelectElement::DispatchOperation<double,0>
                      ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                       (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_res20,
                       *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),&local_res18,local_res8);
LAB_149a1cc4b:
    if (bVar4 != false) {
      UPCGMetadata::AddEntry(*(UPCGMetadata **)(*(longlong *)((longlong)this + 0x28) + 0x38),-1);
      pFVar5->DefaultValue = local_res18;
      goto LAB_149a1cd59;
    }
  }
  else {
    if (iVar1 == 1) {
      bVar4 = PCGAttributeSelectElement::DispatchOperation<double,1>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_res20
                         ,*(EPCGAttributeSelectOperation *)(lVar2 + 0x110),&local_res18,local_res8);
      goto LAB_149a1cc4b;
    }
    if (iVar1 == 2) {
      bVar4 = PCGAttributeSelectElement::DispatchOperation<double,2>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_res20
                         ,*(EPCGAttributeSelectOperation *)(lVar2 + 0x110),&local_res18,local_res8);
      goto LAB_149a1cc4b;
    }
    if (iVar1 == 3) {
      bVar4 = PCGAttributeSelectElement::DispatchOperation<double,3>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_res20
                         ,*(EPCGAttributeSelectOperation *)(lVar2 + 0x110),&local_res18,local_res8);
      goto LAB_149a1cc4b;
    }
    if (iVar1 == 4) {
      bVar4 = PCGAttributeSelectElement::DispatchOperation<double,_1>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),&local_res20
                         ,*(EPCGAttributeSelectOperation *)(lVar2 + 0x110),&local_res18,local_res8);
      goto LAB_149a1cc4b;
    }
  }
  if (1 < (byte)LogPCG._0_1_) {
    FText::ToString(&local_78);
    if (*(FPCGContext **)((longlong)this + 0x30) != (FPCGContext *)0x0) {
      pFVar6 = FPCGContext::GetTaskName
                         (*(FPCGContext **)((longlong)this + 0x30),(FString *)local_58);
      if ((pFVar6->Data).ArrayNum == 0) {
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
    }
    this_00 = *(FPCGContext **)((longlong)this + 0x30);
    if (this_00 != (FPCGContext *)0x0) {
      FPCGContext::GetExecutionSourceName(this_00,&local_68);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((this_00 != (FPCGContext *)0x0) &&
       (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((bVar3) && ((FName)local_58._0_8_ != (FName)0x0)) {
      FMemory::Free((void *)local_58._0_8_);
    }
  }
  local_res8[0] = -1;
LAB_149a1cd59:
  iVar1 = local_res8[0];
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  return iVar1;
}

// operator()<UE::Math::TQuat<double>_> @ 149a1e440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::
operator()<UE::Math::TQuat<double>_>(void *this,TQuat<double> *param_1)

{
  FPCGContext *this_00;
  bool bVar1;
  FText *this_01;
  FString *pFVar2;
  FString local_48;
  FString local_38;
  FText local_28;
  
  bVar1 = false;
  if (1 < (byte)LogPCG._0_1_) {
    this_01 = FText::AsLocalizable_Advanced_LocText
                        (&local_28,L"PCGAttributeSelectElement",L"AttributeNotVectorScalar",
                         L"Attribute type is not a Vector nor a scalar");
    FText::ToString(this_01);
    if (*(FPCGContext **)((longlong)this + 0x30) != (FPCGContext *)0x0) {
      pFVar2 = FPCGContext::GetTaskName(*(FPCGContext **)((longlong)this + 0x30),&local_38);
      if ((pFVar2->Data).ArrayNum == 0) {
        bVar1 = true;
      }
      else {
        bVar1 = true;
      }
    }
    this_00 = *(FPCGContext **)((longlong)this + 0x30);
    if (this_00 != (FPCGContext *)0x0) {
      FPCGContext::GetExecutionSourceName(this_00,&local_48);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((this_00 != (FPCGContext *)0x0) &&
       (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((bVar1) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  return -1;
}

// operator()<UE::Math::TRotator<double>_> @ 149a1fbe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::
operator()<UE::Math::TRotator<double>_>(void *this,TRotator<double> *param_1)

{
  FPCGContext *this_00;
  bool bVar1;
  FText *this_01;
  FString *pFVar2;
  FString local_48;
  FString local_38;
  FText local_28;
  
  bVar1 = false;
  if (1 < (byte)LogPCG._0_1_) {
    this_01 = FText::AsLocalizable_Advanced_LocText
                        (&local_28,L"PCGAttributeSelectElement",L"AttributeNotVectorScalar",
                         L"Attribute type is not a Vector nor a scalar");
    FText::ToString(this_01);
    if (*(FPCGContext **)((longlong)this + 0x30) != (FPCGContext *)0x0) {
      pFVar2 = FPCGContext::GetTaskName(*(FPCGContext **)((longlong)this + 0x30),&local_38);
      if ((pFVar2->Data).ArrayNum == 0) {
        bVar1 = true;
      }
      else {
        bVar1 = true;
      }
    }
    this_00 = *(FPCGContext **)((longlong)this + 0x30);
    if (this_00 != (FPCGContext *)0x0) {
      FPCGContext::GetExecutionSourceName(this_00,&local_48);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((this_00 != (FPCGContext *)0x0) &&
       (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((bVar1) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  return -1;
}

// operator()<UE::Math::TTransform<double>_> @ 149a21490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::
operator()<UE::Math::TTransform<double>_>(void *this,TTransform<double> *param_1)

{
  FPCGContext *this_00;
  bool bVar1;
  FText *this_01;
  FString *pFVar2;
  FString local_48;
  FString local_38;
  FText local_28;
  
  bVar1 = false;
  if (1 < (byte)LogPCG._0_1_) {
    this_01 = FText::AsLocalizable_Advanced_LocText
                        (&local_28,L"PCGAttributeSelectElement",L"AttributeNotVectorScalar",
                         L"Attribute type is not a Vector nor a scalar");
    FText::ToString(this_01);
    if (*(FPCGContext **)((longlong)this + 0x30) != (FPCGContext *)0x0) {
      pFVar2 = FPCGContext::GetTaskName(*(FPCGContext **)((longlong)this + 0x30),&local_38);
      if ((pFVar2->Data).ArrayNum == 0) {
        bVar1 = true;
      }
      else {
        bVar1 = true;
      }
    }
    this_00 = *(FPCGContext **)((longlong)this + 0x30);
    if (this_00 != (FPCGContext *)0x0) {
      FPCGContext::GetExecutionSourceName(this_00,&local_48);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((this_00 != (FPCGContext *)0x0) &&
       (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((bVar1) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  return -1;
}

// operator()<UE::Math::TVector2<double>_> @ 149a234f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::
operator()<UE::Math::TVector2<double>_>(void *this,TVector2<double> *param_1)

{
  int iVar1;
  longlong lVar2;
  FPCGContext *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<UE::Math::TVector2<double>_> *pFVar7;
  FString *pFVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int local_res8 [2];
  TVector2<double>_u_0 local_88;
  TVector2<double>_u_0 local_78;
  FText local_68;
  FString local_58;
  undefined1 local_48 [16];
  FName local_38;
  
  bVar5 = false;
  bVar6 = false;
  iVar9 = -1;
  local_78._s_0.X = 0.0;
  local_78._s_0.Y = 0.0;
  local_res8[0] = -1;
  local_88._s_0.X = 0.0;
  local_88._s_0.Y = 0.0;
  local_48._0_8_ = *(FName *)((longlong)this + 0x20);
  local_48._8_8_ = PCGMetadataDomainID::Default._0_8_;
  local_38 = PCGMetadataDomainID::Default.DebugName;
  this_00 = UPCGMetadata::FindOrCreateMetadataDomain
                      (*(UPCGMetadata **)(*(longlong *)((longlong)this + 0x28) + 0x38),
                       (FPCGMetadataDomainID *)(local_48 + 8));
  if (this_00 == (FPCGMetadataDomain *)0x0) {
    return -1;
  }
  pFVar7 = FPCGMetadataDomain::CreateAttribute<UE::Math::TVector2<double>_>
                     (this_00,(FName)local_48._0_8_,(TVector2<double> *)&local_78._s_0,true,false);
  if (pFVar7 == (FPCGMetadataAttribute<UE::Math::TVector2<double>_> *)0x0) {
    return -1;
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_68,L"PCGAttributeSelectElement",L"InvalidAxis",
             L"Invalid axis for attribute type");
  lVar2 = **(longlong **)((longlong)this + 0x18);
  iVar1 = *(int *)(lVar2 + 0x114);
  if ((iVar1 != 0) && (iVar1 != 1)) {
    if ((iVar1 != 2) && ((iVar1 != 3 && (iVar1 == 4)))) {
      local_88._s_0.X = *(double *)(lVar2 + 0x120);
      local_88._s_0.Y = *(double *)(lVar2 + 0x128);
      uVar10 = SUB84(local_88._s_0.X - UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X,0) &
               (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar11 = (uint)((ulonglong)
                      (local_88._s_0.X - UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X)
                     >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar11,uVar10) &&
           (double)CONCAT44(uVar11,uVar10) != __real_3f1a36e2e0000000) ||
         (uVar10 = SUB84(local_88._s_0.Y - UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y,
                         0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar11 = (uint)((ulonglong)
                         (local_88._s_0.Y - UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y
                         ) >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar11,uVar10) &&
         (double)CONCAT44(uVar11,uVar10) != __real_3f1a36e2e0000000)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) goto LAB_149a23711;
    }
    if (1 < (byte)LogPCG._0_1_) {
      FText::ToString(&local_68);
      if (*(FPCGContext **)((longlong)this + 0x30) != (FPCGContext *)0x0) {
        pFVar8 = FPCGContext::GetTaskName
                           (*(FPCGContext **)((longlong)this + 0x30),(FString *)local_48);
        if ((pFVar8->Data).ArrayNum == 0) {
          bVar6 = true;
        }
        else {
          bVar6 = true;
        }
      }
      pFVar3 = *(FPCGContext **)((longlong)this + 0x30);
      if (pFVar3 != (FPCGContext *)0x0) {
        FPCGContext::GetExecutionSourceName(pFVar3,&local_58);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((pFVar3 != (FPCGContext *)0x0) &&
         (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if ((bVar6) && ((FName)local_48._0_8_ != (FName)0x0)) {
        FMemory::Free((void *)local_48._0_8_);
      }
    }
    goto LAB_149a23935;
  }
LAB_149a23711:
  lVar2 = **(longlong **)((longlong)this + 0x18);
  iVar1 = *(int *)(lVar2 + 0x114);
  if (iVar1 == 0) {
    bVar6 = PCGAttributeSelectElement::DispatchOperation<UE::Math::TVector2<double>,0>
                      ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                       (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),
                       (TVector2<double> *)&local_88._s_0,
                       *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),
                       (TVector2<double> *)&local_78._s_0,local_res8);
LAB_149a2383d:
    if (bVar6 != false) {
      UPCGMetadata::AddEntry(*(UPCGMetadata **)(*(longlong *)((longlong)this + 0x28) + 0x38),-1);
      (pFVar7->DefaultValue).field0_0x0._s_0.X = local_78._s_0.X;
      (pFVar7->DefaultValue).field0_0x0._s_0.Y = local_78._s_0.Y;
      iVar9 = local_res8[0];
      goto LAB_149a23935;
    }
  }
  else {
    if (iVar1 == 1) {
      bVar6 = PCGAttributeSelectElement::DispatchOperation<UE::Math::TVector2<double>,1>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),
                         (TVector2<double> *)&local_88._s_0,
                         *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),
                         (TVector2<double> *)&local_78._s_0,local_res8);
      goto LAB_149a2383d;
    }
    if (iVar1 == 2) {
      bVar6 = PCGAttributeSelectElement::DispatchOperation<UE::Math::TVector2<double>,2>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),
                         (TVector2<double> *)&local_88._s_0,
                         *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),
                         (TVector2<double> *)&local_78._s_0,local_res8);
      goto LAB_149a2383d;
    }
    if (iVar1 == 3) {
      bVar6 = PCGAttributeSelectElement::DispatchOperation<UE::Math::TVector2<double>,3>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),
                         (TVector2<double> *)&local_88._s_0,
                         *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),
                         (TVector2<double> *)&local_78._s_0,local_res8);
      goto LAB_149a2383d;
    }
    if (iVar1 == 4) {
      bVar6 = PCGAttributeSelectElement::DispatchOperation<UE::Math::TVector2<double>,_1>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),
                         (TVector2<double> *)&local_88._s_0,
                         *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),
                         (TVector2<double> *)&local_78._s_0,local_res8);
      goto LAB_149a2383d;
    }
  }
  if (1 < (byte)LogPCG._0_1_) {
    FText::ToString(&local_68);
    if (*(FPCGContext **)((longlong)this + 0x30) != (FPCGContext *)0x0) {
      pFVar8 = FPCGContext::GetTaskName(*(FPCGContext **)((longlong)this + 0x30),&local_58);
      if ((pFVar8->Data).ArrayNum == 0) {
        bVar5 = true;
      }
      else {
        bVar5 = true;
      }
    }
    pFVar3 = *(FPCGContext **)((longlong)this + 0x30);
    if (pFVar3 != (FPCGContext *)0x0) {
      FPCGContext::GetExecutionSourceName(pFVar3,(FString *)local_48);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((pFVar3 != (FPCGContext *)0x0) && ((FName)local_48._0_8_ != (FName)0x0)) {
      FMemory::Free((void *)local_48._0_8_);
    }
    if ((bVar5) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  local_res8[0] = -1;
LAB_149a23935:
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  return iVar9;
}

// operator()<UE::Math::TVector4<double>_> @ 149a25650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::
operator()<UE::Math::TVector4<double>_>(void *this,TVector4<double> *param_1)

{
  int iVar1;
  longlong lVar2;
  FPCGContext *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<UE::Math::TVector4<double>_> *pFVar7;
  FString *pFVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int local_res8 [2];
  FText local_a8;
  FString local_98;
  undefined1 local_88 [16];
  FName local_78;
  TVector4<double>_u_0 local_68;
  TVector4<double>_u_0 local_48;
  
  bVar5 = false;
  bVar6 = false;
  iVar9 = -1;
  local_68._s_0.X = 0.0;
  local_68._s_0.Y = 0.0;
  local_68._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_68._s_0.W = _UNK_15061cbc8;
  local_48._s_0.X = 0.0;
  local_48._s_0.Y = 0.0;
  local_48._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_48._s_0.W = _UNK_15061cbc8;
  local_res8[0] = -1;
  local_88._0_8_ = *(FName *)((longlong)this + 0x20);
  local_88._8_8_ = PCGMetadataDomainID::Default._0_8_;
  local_78 = PCGMetadataDomainID::Default.DebugName;
  this_00 = UPCGMetadata::FindOrCreateMetadataDomain
                      (*(UPCGMetadata **)(*(longlong *)((longlong)this + 0x28) + 0x38),
                       (FPCGMetadataDomainID *)(local_88 + 8));
  if (this_00 == (FPCGMetadataDomain *)0x0) {
    return -1;
  }
  pFVar7 = FPCGMetadataDomain::CreateAttribute<UE::Math::TVector4<double>_>
                     (this_00,(FName)local_88._0_8_,(TVector4<double> *)&local_68._s_0,true,false);
  if (pFVar7 == (FPCGMetadataAttribute<UE::Math::TVector4<double>_> *)0x0) {
    return -1;
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_a8,L"PCGAttributeSelectElement",L"InvalidAxis",
             L"Invalid axis for attribute type");
  lVar2 = **(longlong **)((longlong)this + 0x18);
  iVar1 = *(int *)(lVar2 + 0x114);
  if ((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) && (iVar1 != 3)) {
    if (iVar1 == 4) {
      local_48._s_0.X = *(double *)(lVar2 + 0x120);
      local_48._s_0.Y = *(double *)(lVar2 + 0x128);
      uVar10 = *(uint *)(lVar2 + 0x120) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar11 = *(uint *)(lVar2 + 0x124) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      local_48._s_0.Z = *(double *)(lVar2 + 0x130);
      local_48._s_0.W = *(double *)(lVar2 + 0x138);
      if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar11,uVar10) &&
            (double)CONCAT44(uVar11,uVar10) != __real_3f1a36e2e0000000) ||
          (uVar10 = *(uint *)(lVar2 + 0x128) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar11 = *(uint *)(lVar2 + 300) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar11,uVar10) &&
          (double)CONCAT44(uVar11,uVar10) != __real_3f1a36e2e0000000)) ||
         ((uVar10 = *(uint *)(lVar2 + 0x130) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar11 = *(uint *)(lVar2 + 0x134) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar11,uVar10) &&
          (double)CONCAT44(uVar11,uVar10) != __real_3f1a36e2e0000000 ||
          (__real_3f1a36e2e0000000 <
           (double)CONCAT44(*(uint *)(lVar2 + 0x13c) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            *(uint *)(lVar2 + 0x138) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
          )))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) goto LAB_149a25892;
    }
    if (1 < (byte)LogPCG._0_1_) {
      FText::ToString(&local_a8);
      if (*(FPCGContext **)((longlong)this + 0x30) != (FPCGContext *)0x0) {
        pFVar8 = FPCGContext::GetTaskName
                           (*(FPCGContext **)((longlong)this + 0x30),(FString *)local_88);
        if ((pFVar8->Data).ArrayNum == 0) {
          bVar6 = true;
        }
        else {
          bVar6 = true;
        }
      }
      pFVar3 = *(FPCGContext **)((longlong)this + 0x30);
      if (pFVar3 != (FPCGContext *)0x0) {
        FPCGContext::GetExecutionSourceName(pFVar3,&local_98);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((pFVar3 != (FPCGContext *)0x0) &&
         (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if ((bVar6) && ((FName)local_88._0_8_ != (FName)0x0)) {
        FMemory::Free((void *)local_88._0_8_);
      }
    }
    goto LAB_149a25ac1;
  }
LAB_149a25892:
  lVar2 = **(longlong **)((longlong)this + 0x18);
  iVar1 = *(int *)(lVar2 + 0x114);
  if (iVar1 == 0) {
    bVar6 = PCGAttributeSelectElement::DispatchOperation<UE::Math::TVector4<double>,0>
                      ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                       (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),
                       (TVector4<double> *)&local_48._s_0,
                       *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),
                       (TVector4<double> *)&local_68._s_0,local_res8);
LAB_149a259be:
    if (bVar6 != false) {
      UPCGMetadata::AddEntry(*(UPCGMetadata **)(*(longlong *)((longlong)this + 0x28) + 0x38),-1);
      (pFVar7->DefaultValue).field0_0x0._s_0.X = local_68._s_0.X;
      (pFVar7->DefaultValue).field0_0x0._s_0.Y = local_68._s_0.Y;
      (pFVar7->DefaultValue).field0_0x0._s_0.Z = local_68._s_0.Z;
      (pFVar7->DefaultValue).field0_0x0._s_0.W = local_68._s_0.W;
      iVar9 = local_res8[0];
      goto LAB_149a25ac1;
    }
  }
  else {
    if (iVar1 == 1) {
      bVar6 = PCGAttributeSelectElement::DispatchOperation<UE::Math::TVector4<double>,1>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),
                         (TVector4<double> *)&local_48._s_0,
                         *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),
                         (TVector4<double> *)&local_68._s_0,local_res8);
      goto LAB_149a259be;
    }
    if (iVar1 == 2) {
      bVar6 = PCGAttributeSelectElement::DispatchOperation<UE::Math::TVector4<double>,2>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),
                         (TVector4<double> *)&local_48._s_0,
                         *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),
                         (TVector4<double> *)&local_68._s_0,local_res8);
      goto LAB_149a259be;
    }
    if (iVar1 == 3) {
      bVar6 = PCGAttributeSelectElement::DispatchOperation<UE::Math::TVector4<double>,3>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),
                         (TVector4<double> *)&local_48._s_0,
                         *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),
                         (TVector4<double> *)&local_68._s_0,local_res8);
      goto LAB_149a259be;
    }
    if (iVar1 == 4) {
      bVar6 = PCGAttributeSelectElement::DispatchOperation<UE::Math::TVector4<double>,_1>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),
                         (TVector4<double> *)&local_48._s_0,
                         *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),
                         (TVector4<double> *)&local_68._s_0,local_res8);
      goto LAB_149a259be;
    }
  }
  if (1 < (byte)LogPCG._0_1_) {
    FText::ToString(&local_a8);
    if (*(FPCGContext **)((longlong)this + 0x30) != (FPCGContext *)0x0) {
      pFVar8 = FPCGContext::GetTaskName(*(FPCGContext **)((longlong)this + 0x30),&local_98);
      if ((pFVar8->Data).ArrayNum == 0) {
        bVar5 = true;
      }
      else {
        bVar5 = true;
      }
    }
    pFVar3 = *(FPCGContext **)((longlong)this + 0x30);
    if (pFVar3 != (FPCGContext *)0x0) {
      FPCGContext::GetExecutionSourceName(pFVar3,(FString *)local_88);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((pFVar3 != (FPCGContext *)0x0) && ((FName)local_88._0_8_ != (FName)0x0)) {
      FMemory::Free((void *)local_88._0_8_);
    }
    if ((bVar5) && (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  local_res8[0] = -1;
LAB_149a25ac1:
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  return iVar9;
}

// operator()<UE::Math::TVector<double>_> @ 149a27860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::
operator()<UE::Math::TVector<double>_>(void *this,TVector<double> *param_1)

{
  int iVar1;
  longlong lVar2;
  FPCGContext *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<UE::Math::TVector<double>_> *pFVar7;
  FString *pFVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int local_res8 [2];
  FText local_98;
  FString local_88;
  undefined1 local_78 [16];
  FName local_68;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_40;
  
  bVar5 = false;
  bVar6 = false;
  iVar9 = -1;
  local_40._s_0.Z = 0.0;
  local_58._s_0.Z = 0.0;
  local_40._s_0.X = 0.0;
  local_40._s_0.Y = 0.0;
  local_res8[0] = -1;
  local_58._s_0.X = 0.0;
  local_58._s_0.Y = 0.0;
  local_78._0_8_ = *(FName *)((longlong)this + 0x20);
  local_78._8_8_ = PCGMetadataDomainID::Default._0_8_;
  local_68 = PCGMetadataDomainID::Default.DebugName;
  this_00 = UPCGMetadata::FindOrCreateMetadataDomain
                      (*(UPCGMetadata **)(*(longlong *)((longlong)this + 0x28) + 0x38),
                       (FPCGMetadataDomainID *)(local_78 + 8));
  if (this_00 == (FPCGMetadataDomain *)0x0) {
    return -1;
  }
  pFVar7 = FPCGMetadataDomain::CreateAttribute<UE::Math::TVector<double>_>
                     (this_00,(FName)local_78._0_8_,(TVector<double> *)&local_40._s_0,true,false);
  if (pFVar7 == (FPCGMetadataAttribute<UE::Math::TVector<double>_> *)0x0) {
    return -1;
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_98,L"PCGAttributeSelectElement",L"InvalidAxis",
             L"Invalid axis for attribute type");
  lVar2 = **(longlong **)((longlong)this + 0x18);
  iVar1 = *(int *)(lVar2 + 0x114);
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) {
    if ((iVar1 != 3) && (iVar1 == 4)) {
      local_58._s_0.X = *(double *)(lVar2 + 0x120);
      local_58._s_0.Y = *(double *)(lVar2 + 0x128);
      local_58._s_0.Z = *(double *)(lVar2 + 0x130);
      uVar10 = SUB84(local_58._s_0.X - UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0) &
               (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar11 = (uint)((ulonglong)
                      (local_58._s_0.X - UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) >>
                     0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar11,uVar10) &&
           (double)CONCAT44(uVar11,uVar10) != __real_3f1a36e2e0000000) ||
         ((__real_3f1a36e2e0000000 <
           (double)CONCAT44((uint)((ulonglong)
                                   (local_58._s_0.Y -
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y) >> 0x20)
                            & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_58._s_0.Y -
                                  UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
          (uVar10 = SUB84(local_58._s_0.Z - UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
                          0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar11 = (uint)((ulonglong)
                          (local_58._s_0.Z - UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
                          ) >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar11,uVar10) &&
          (double)CONCAT44(uVar11,uVar10) != __real_3f1a36e2e0000000)))) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) goto LAB_149a27ab2;
    }
    if (1 < (byte)LogPCG._0_1_) {
      FText::ToString(&local_98);
      if (*(FPCGContext **)((longlong)this + 0x30) != (FPCGContext *)0x0) {
        pFVar8 = FPCGContext::GetTaskName
                           (*(FPCGContext **)((longlong)this + 0x30),(FString *)local_78);
        if ((pFVar8->Data).ArrayNum == 0) {
          bVar6 = true;
        }
        else {
          bVar6 = true;
        }
      }
      pFVar3 = *(FPCGContext **)((longlong)this + 0x30);
      if (pFVar3 != (FPCGContext *)0x0) {
        FPCGContext::GetExecutionSourceName(pFVar3,&local_88);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((pFVar3 != (FPCGContext *)0x0) &&
         (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if ((bVar6) && ((FName)local_78._0_8_ != (FName)0x0)) {
        FMemory::Free((void *)local_78._0_8_);
      }
    }
    goto LAB_149a27ce3;
  }
LAB_149a27ab2:
  lVar2 = **(longlong **)((longlong)this + 0x18);
  iVar1 = *(int *)(lVar2 + 0x114);
  if (iVar1 == 0) {
    bVar6 = PCGAttributeSelectElement::DispatchOperation<UE::Math::TVector<double>,0>
                      ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                       (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),
                       (TVector<double> *)&local_58._s_0,
                       *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),
                       (TVector<double> *)&local_40._s_0,local_res8);
LAB_149a27bde:
    if (bVar6 != false) {
      UPCGMetadata::AddEntry(*(UPCGMetadata **)(*(longlong *)((longlong)this + 0x28) + 0x38),-1);
      (pFVar7->DefaultValue).field0_0x0._s_0.X = local_40._s_0.X;
      (pFVar7->DefaultValue).field0_0x0._s_0.Y = local_40._s_0.Y;
      (pFVar7->DefaultValue).field0_0x0._s_0.Z = local_40._s_0.Z;
      iVar9 = local_res8[0];
      goto LAB_149a27ce3;
    }
  }
  else {
    if (iVar1 == 1) {
      bVar6 = PCGAttributeSelectElement::DispatchOperation<UE::Math::TVector<double>,1>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),
                         (TVector<double> *)&local_58._s_0,
                         *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),
                         (TVector<double> *)&local_40._s_0,local_res8);
      goto LAB_149a27bde;
    }
    if (iVar1 == 2) {
      bVar6 = PCGAttributeSelectElement::DispatchOperation<UE::Math::TVector<double>,2>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),
                         (TVector<double> *)&local_58._s_0,
                         *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),
                         (TVector<double> *)&local_40._s_0,local_res8);
      goto LAB_149a27bde;
    }
    if (iVar1 == 3) {
      bVar6 = PCGAttributeSelectElement::DispatchOperation<UE::Math::TVector<double>,3>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),
                         (TVector<double> *)&local_58._s_0,
                         *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),
                         (TVector<double> *)&local_40._s_0,local_res8);
      goto LAB_149a27bde;
    }
    if (iVar1 == 4) {
      bVar6 = PCGAttributeSelectElement::DispatchOperation<UE::Math::TVector<double>,_1>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),
                         (TVector<double> *)&local_58._s_0,
                         *(EPCGAttributeSelectOperation *)(lVar2 + 0x110),
                         (TVector<double> *)&local_40._s_0,local_res8);
      goto LAB_149a27bde;
    }
  }
  if (1 < (byte)LogPCG._0_1_) {
    FText::ToString(&local_98);
    if (*(FPCGContext **)((longlong)this + 0x30) != (FPCGContext *)0x0) {
      pFVar8 = FPCGContext::GetTaskName(*(FPCGContext **)((longlong)this + 0x30),&local_88);
      if ((pFVar8->Data).ArrayNum == 0) {
        bVar5 = true;
      }
      else {
        bVar5 = true;
      }
    }
    pFVar3 = *(FPCGContext **)((longlong)this + 0x30);
    if (pFVar3 != (FPCGContext *)0x0) {
      FPCGContext::GetExecutionSourceName(pFVar3,(FString *)local_78);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((pFVar3 != (FPCGContext *)0x0) && ((FName)local_78._0_8_ != (FName)0x0)) {
      FMemory::Free((void *)local_78._0_8_);
    }
    if ((bVar5) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  local_res8[0] = -1;
LAB_149a27ce3:
  if (local_98.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
  }
  return iVar9;
}

// operator()<FSoftClassPath> @ 149a29650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::operator()<FSoftClassPath>
          (void *this,FSoftClassPath *param_1)

{
  FPCGContext *this_00;
  bool bVar1;
  FText *this_01;
  FString *pFVar2;
  FString local_48;
  FString local_38;
  FText local_28;
  
  bVar1 = false;
  if (1 < (byte)LogPCG._0_1_) {
    this_01 = FText::AsLocalizable_Advanced_LocText
                        (&local_28,L"PCGAttributeSelectElement",L"AttributeNotVectorScalar",
                         L"Attribute type is not a Vector nor a scalar");
    FText::ToString(this_01);
    if (*(FPCGContext **)((longlong)this + 0x30) != (FPCGContext *)0x0) {
      pFVar2 = FPCGContext::GetTaskName(*(FPCGContext **)((longlong)this + 0x30),&local_38);
      if ((pFVar2->Data).ArrayNum == 0) {
        bVar1 = true;
      }
      else {
        bVar1 = true;
      }
    }
    this_00 = *(FPCGContext **)((longlong)this + 0x30);
    if (this_00 != (FPCGContext *)0x0) {
      FPCGContext::GetExecutionSourceName(this_00,&local_48);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((this_00 != (FPCGContext *)0x0) &&
       (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((bVar1) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  if (*(void **)&param_1->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x10);
  }
  return -1;
}

// operator()<FSoftObjectPath> @ 149a2ad30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::operator()<FSoftObjectPath>
          (void *this,FSoftObjectPath *param_1)

{
  FPCGContext *this_00;
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FText *this_01;
  FString *pFVar3;
  FString local_48;
  FString local_38;
  FText local_28;
  
  bVar2 = false;
  if (1 < (byte)LogPCG._0_1_) {
    this_01 = FText::AsLocalizable_Advanced_LocText
                        (&local_28,L"PCGAttributeSelectElement",L"AttributeNotVectorScalar",
                         L"Attribute type is not a Vector nor a scalar");
    FText::ToString(this_01);
    if (*(FPCGContext **)((longlong)this + 0x30) != (FPCGContext *)0x0) {
      pFVar3 = FPCGContext::GetTaskName(*(FPCGContext **)((longlong)this + 0x30),&local_38);
      if ((pFVar3->Data).ArrayNum == 0) {
        bVar2 = true;
      }
      else {
        bVar2 = true;
      }
    }
    this_00 = *(FPCGContext **)((longlong)this + 0x30);
    if (this_00 != (FPCGContext *)0x0) {
      FPCGContext::GetExecutionSourceName(this_00,&local_48);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((this_00 != (FPCGContext *)0x0) &&
       (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  pFVar1 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return -1;
}

// operator()<FName> @ 149a2c460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::operator()<FName>
          (void *this,FName param_1)

{
  FPCGContext *this_00;
  bool bVar1;
  FText *this_01;
  FString *pFVar2;
  FString local_48;
  FString local_38;
  FText local_28;
  
  bVar1 = false;
  if (1 < (byte)LogPCG._0_1_) {
    this_01 = FText::AsLocalizable_Advanced_LocText
                        (&local_28,L"PCGAttributeSelectElement",L"AttributeNotVectorScalar",
                         L"Attribute type is not a Vector nor a scalar");
    FText::ToString(this_01);
    if (*(FPCGContext **)((longlong)this + 0x30) != (FPCGContext *)0x0) {
      pFVar2 = FPCGContext::GetTaskName(*(FPCGContext **)((longlong)this + 0x30),&local_38);
      if ((pFVar2->Data).ArrayNum == 0) {
        bVar1 = true;
      }
      else {
        bVar1 = true;
      }
    }
    this_00 = *(FPCGContext **)((longlong)this + 0x30);
    if (this_00 != (FPCGContext *)0x0) {
      FPCGContext::GetExecutionSourceName(this_00,&local_48);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((this_00 != (FPCGContext *)0x0) &&
       (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((bVar1) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  return -1;
}

// operator()<FString> @ 149a2f370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::operator()<FString>
          (void *this,FString *param_1)

{
  FPCGContext *this_00;
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FText *this_01;
  FString *pFVar3;
  FString local_48;
  FString local_38;
  FText local_28;
  
  bVar2 = false;
  if (1 < (byte)LogPCG._0_1_) {
    this_01 = FText::AsLocalizable_Advanced_LocText
                        (&local_28,L"PCGAttributeSelectElement",L"AttributeNotVectorScalar",
                         L"Attribute type is not a Vector nor a scalar");
    FText::ToString(this_01);
    if (*(FPCGContext **)((longlong)this + 0x30) != (FPCGContext *)0x0) {
      pFVar3 = FPCGContext::GetTaskName(*(FPCGContext **)((longlong)this + 0x30),&local_38);
      if ((pFVar3->Data).ArrayNum == 0) {
        bVar2 = true;
      }
      else {
        bVar2 = true;
      }
    }
    this_00 = *(FPCGContext **)((longlong)this + 0x30);
    if (this_00 != (FPCGContext *)0x0) {
      FPCGContext::GetExecutionSourceName(this_00,&local_48);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((this_00 != (FPCGContext *)0x0) &&
       (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return -1;
}

// operator()<__int64> @ 149a30c50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::operator()<__int64>
          (void *this,long64 param_1)

{
  int iVar1;
  longlong lVar2;
  FPCGContext *this_00;
  bool bVar3;
  bool bVar4;
  FPCGMetadataDomain *this_01;
  FPCGMetadataAttribute<__int64> *pFVar5;
  FString *pFVar6;
  int local_res8 [4];
  long64 local_res18 [2];
  FText local_78;
  FString local_68;
  undefined1 local_58 [16];
  FName local_48;
  
  bVar3 = false;
  local_res18[0] = 0;
  local_res18[1] = 0;
  local_res8[0] = -1;
  local_58._0_8_ = *(FName *)((longlong)this + 0x20);
  local_58._8_8_ = PCGMetadataDomainID::Default._0_8_;
  local_48 = PCGMetadataDomainID::Default.DebugName;
  this_01 = UPCGMetadata::FindOrCreateMetadataDomain
                      (*(UPCGMetadata **)(*(longlong *)((longlong)this + 0x28) + 0x38),
                       (FPCGMetadataDomainID *)(local_58 + 8));
  if (this_01 == (FPCGMetadataDomain *)0x0) {
    return -1;
  }
  pFVar5 = FPCGMetadataDomain::CreateAttribute<__int64>
                     (this_01,(FName)local_58._0_8_,local_res18,true,false);
  if (pFVar5 == (FPCGMetadataAttribute<__int64> *)0x0) {
    return -1;
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_78,L"PCGAttributeSelectElement",L"InvalidAxis",
             L"Invalid axis for attribute type");
  lVar2 = **(longlong **)((longlong)this + 0x18);
  iVar1 = *(int *)(lVar2 + 0x114);
  if (iVar1 == 0) {
    bVar4 = PCGAttributeSelectElement::DispatchOperation<__int64,0>
                      ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                       (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),
                       local_res18 + 1,*(EPCGAttributeSelectOperation *)(lVar2 + 0x110),local_res18,
                       local_res8);
LAB_149a30e26:
    if (bVar4 != false) {
      UPCGMetadata::AddEntry(*(UPCGMetadata **)(*(longlong *)((longlong)this + 0x28) + 0x38),-1);
      pFVar5->DefaultValue = local_res18[0];
      goto LAB_149a30f32;
    }
  }
  else {
    if (iVar1 == 1) {
      bVar4 = PCGAttributeSelectElement::DispatchOperation<__int64,1>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),
                         local_res18 + 1,*(EPCGAttributeSelectOperation *)(lVar2 + 0x110),
                         local_res18,local_res8);
      goto LAB_149a30e26;
    }
    if (iVar1 == 2) {
      bVar4 = PCGAttributeSelectElement::DispatchOperation<__int64,2>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),
                         local_res18 + 1,*(EPCGAttributeSelectOperation *)(lVar2 + 0x110),
                         local_res18,local_res8);
      goto LAB_149a30e26;
    }
    if (iVar1 == 3) {
      bVar4 = PCGAttributeSelectElement::DispatchOperation<__int64,3>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),
                         local_res18 + 1,*(EPCGAttributeSelectOperation *)(lVar2 + 0x110),
                         local_res18,local_res8);
      goto LAB_149a30e26;
    }
    if (iVar1 == 4) {
      bVar4 = PCGAttributeSelectElement::DispatchOperation<__int64,_1>
                        ((IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x10),
                         (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 8),
                         local_res18 + 1,*(EPCGAttributeSelectOperation *)(lVar2 + 0x110),
                         local_res18,local_res8);
      goto LAB_149a30e26;
    }
  }
  if (1 < (byte)LogPCG._0_1_) {
    FText::ToString(&local_78);
    if (*(FPCGContext **)((longlong)this + 0x30) != (FPCGContext *)0x0) {
      pFVar6 = FPCGContext::GetTaskName
                         (*(FPCGContext **)((longlong)this + 0x30),(FString *)local_58);
      if ((pFVar6->Data).ArrayNum == 0) {
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
    }
    this_00 = *(FPCGContext **)((longlong)this + 0x30);
    if (this_00 != (FPCGContext *)0x0) {
      FPCGContext::GetExecutionSourceName(this_00,&local_68);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((this_00 != (FPCGContext *)0x0) &&
       (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if ((bVar3) && ((FName)local_58._0_8_ != (FName)0x0)) {
      FMemory::Free((void *)local_58._0_8_);
    }
  }
  local_res8[0] = -1;
LAB_149a30f32:
  iVar1 = local_res8[0];
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  return iVar1;
}

// operator()<bool> @ 149a323c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
`FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::operator()<bool>
          (void *this,bool param_1)

{
  FPCGContext *this_00;
  bool bVar1;
  FText *this_01;
  FString *pFVar2;
  FString local_48;
  FString local_38;
  FText local_28;
  
  bVar1 = false;
  if (1 < (byte)LogPCG._0_1_) {
    this_01 = FText::AsLocalizable_Advanced_LocText
                        (&local_28,L"PCGAttributeSelectElement",L"AttributeNotVectorScalar",
                         L"Attribute type is not a Vector nor a scalar");
    FText::ToString(this_01);
    if (*(FPCGContext **)((longlong)this + 0x30) != (FPCGContext *)0x0) {
      pFVar2 = FPCGContext::GetTaskName(*(FPCGContext **)((longlong)this + 0x30),&local_38);
      if ((pFVar2->Data).ArrayNum == 0) {
        bVar1 = true;
      }
      else {
        bVar1 = true;
      }
    }
    this_00 = *(FPCGContext **)((longlong)this + 0x30);
    if (this_00 != (FPCGContext *)0x0) {
      FPCGContext::GetExecutionSourceName(this_00,&local_48);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((this_00 != (FPCGContext *)0x0) &&
       (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((bVar1) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  return -1;
}

// ExecuteInternal @ 149b089d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FPCGAttributeSelectElement::ExecuteInternal(FPCGAttributeSelectElement *this,FPCGContext *param_1)

{
  FPCGDataCollection *pFVar1;
  UPCGNode *this_00;
  code *pcVar2;
  ForAnyElementType FVar3;
  FObjectPtr_u_0 FVar4;
  FName FVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  UClass *pUVar10;
  UPCGSettings *pUVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  FString *pFVar14;
  FText *pFVar15;
  FName FVar16;
  UPCGParamData *pUVar17;
  FPCGTaggedData *pFVar18;
  UPCGBasePointData *this_01;
  longlong lVar19;
  FObjectPtr_u_0 FVar20;
  FObjectPtr_u_0 FVar21;
  wchar_t *pwVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_878 [32];
  FPCGTaggedData *local_858;
  FPCGTaggedData *local_850;
  longlong local_848;
  longlong local_840;
  undefined8 local_838;
  <lambda_1> local_828;
  undefined1 local_820 [16];
  UPCGParamData *local_810;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_808;
  TObjectPtr<UPCGSettings>_u_0 local_7f8;
  FObjectPtr_u_0 local_7f0;
  TObjectPtr<UPCGSettings>_u_0 local_7e8;
  undefined8 local_7e0;
  UPCGParamData *local_7d8;
  undefined1 *puStack_7d0;
  undefined1 *local_7c8;
  TObjectPtr<UPCGSettings>_u_0 *pTStack_7c0;
  FName local_7b8;
  UPCGParamData *pUStack_7b0;
  FPCGContext *local_7a8;
  FSoftObjectPath local_798;
  FString local_778;
  FSoftClassPath local_768;
  UPCGParamData *local_748;
  undefined1 *puStack_740;
  undefined1 *local_738;
  TObjectPtr<UPCGSettings>_u_0 *pTStack_730;
  FName local_728;
  UPCGParamData *pUStack_720;
  FPCGContext *local_718;
  FName local_708;
  FString local_700;
  FString local_6f0;
  FText local_6e0;
  FText local_6d0;
  FString local_6c0;
  FString local_6b0;
  FText local_6a0;
  FText local_690;
  FString local_680;
  FString local_670;
  FText local_660;
  FString local_650;
  FString local_640;
  FText local_630;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  TVector<double>_u_0 local_608;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  TRotator<double> local_5c8;
  FString local_5a8;
  FString local_598;
  TVector2<double>_u_0 local_588;
  FText local_578;
  FPCGInitializeFromDataParams local_568;
  FPCGAttributePropertySelector local_528;
  TVector4<double>_u_0 local_4e8;
  TQuat<double> local_4c8;
  TTransform<double> local_4a8;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  FTextFormat local_428;
  FText local_418;
  FTextFormat local_408;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  double local_3d8;
  double dStack_3d0;
  undefined1 local_3c8 [16];
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  undefined1 local_378 [16];
  FConstPCGPointValueRanges local_368;
  FPCGPointValueRanges local_1d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_878;
  bVar23 = -1 < CpuChannel->Enabled;
  local_810 = (UPCGParamData *)this;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId272,"FPCGAttributeSelectElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeSelectElement.cpp"
               ,0x110);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId272);
  }
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeSelectElement.cpp"
                         ,0x112,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar11 = UPCGNode::GetSettings(this_00), pUVar11 == (UPCGSettings *)0x0)) {
      pFVar18 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAttributeSelectSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_828);
      if (pFVar18 != (FPCGTaggedData *)0x0) {
        local_7f8.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar18->Data).Data.field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_7f8.DebugPtr == (UPCGSettings *)0x0) goto LAB_149b08b1f;
          UE::GC::MarkAsReachable((UObject *)local_7f8.DebugPtr);
        }
        if (local_7f8.DebugPtr != (UPCGSettings *)0x0) {
          pUVar10 = UPCGAttributeSelectSettings::StaticClass();
          bVar6 = FObjectPtr::IsA(&local_7f8.ObjectPtr,pUVar10);
          local_7e8 = local_7f8;
          if (bVar6) goto LAB_149b08b21;
        }
      }
    }
    else {
      pUVar11 = UPCGNode::GetSettings(this_00);
      local_7e8.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar11);
      if (local_7e8.DebugPtr != (UPCGSettings *)0x0) {
        pUVar10 = UPCGAttributeSelectSettings::StaticClass();
        iVar9 = (int)pUVar10->_padding_;
        if ((iVar9 <= *(int *)((local_7e8.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((local_7e8.DebugPtr)->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
            &pUVar10->_padding_)) goto LAB_149b08b21;
      }
    }
LAB_149b08b1f:
    local_7e8.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar10 = UPCGAttributeSelectSettings::StaticClass();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar10);
    if (bVar6) {
      local_7e8.DebugPtr = (param_1->SettingsWithOverride).field0_0x0.DebugPtr;
    }
    else {
      local_7e8.DebugPtr = (UPCGSettings *)0x0;
    }
  }
LAB_149b08b21:
  if ((local_7e8.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeSelectElement.cpp"
                         ,0x115,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_808,&PCGPinConstants::DefaultInputLabel);
  iVar9 = local_808.ArrayNum;
  if (local_808.ArrayNum != 1) {
    if (1 < (byte)LogPCG._0_1_) {
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_6d0,L"PCGAttributeSelectElement",L"WrongNumberOfInputs",
                           L"Input pin expected to have one input data element, encountered {0}");
      pFVar13 = FTextFormat::FTextFormat(&local_428,pFVar12,Default);
      pFVar12 = FText::Format<int>(&local_6e0,pFVar13,iVar9);
      pFVar14 = FText::ToString(pFVar12);
      if ((pFVar14->Data).ArrayNum == 0) {
        pwVar22 = L"";
      }
      else {
        pwVar22 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
      FPCGContext::GetTaskName(param_1,&local_6f0);
      FPCGContext::GetExecutionSourceName(param_1,&local_700);
      local_858 = (FPCGTaggedData *)pwVar22;
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_700.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_700.Data.AllocatorInstance.Data);
      }
      if (local_6f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6f0.Data.AllocatorInstance.Data);
      }
      if (local_6e0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_6e0.TextData.Reference + 0x10))();
      }
      if (local_6d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_6d0.TextData.Reference + 0x10))();
      }
    }
    goto LAB_149b097fc;
  }
  local_7f0 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)local_808.AllocatorInstance.Data;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UPCGBasePointData *)local_7f0.Handle != (UPCGBasePointData *)0x0)) {
    UE::GC::MarkAsReachable(local_7f0.Handle);
  }
  if ((UPCGBasePointData *)local_7f0.Handle == (UPCGBasePointData *)0x0) {
LAB_149b09729:
    if ((byte)LogPCG._0_1_ < 2) goto LAB_149b097fc;
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_630,L"PCGAttributeSelectElement",L"InputNotSpatialData",
                         L"Input is not a spatial data");
    pFVar14 = FText::ToString(pFVar12);
    if ((pFVar14->Data).ArrayNum == 0) {
      pwVar22 = L"";
    }
    else {
      pwVar22 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    FPCGContext::GetTaskName(param_1,&local_640);
    FPCGContext::GetExecutionSourceName(param_1,&local_650);
    local_858 = (FPCGTaggedData *)pwVar22;
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_650.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_650.Data.AllocatorInstance.Data);
    }
    if (local_640.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_640.Data.AllocatorInstance.Data);
    }
LAB_149b097e9:
    if (local_630.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_630.TextData.Reference + 0x10))();
    }
    goto LAB_149b097fc;
  }
  pUVar10 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
  bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_7f0,pUVar10);
  FVar4 = local_7f0;
  if ((!bVar6) || ((UPCGBasePointData *)local_7f0.Handle == (UPCGBasePointData *)0x0))
  goto LAB_149b09729;
  pUVar10 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
  iVar9 = (int)pUVar10->_padding_;
  if ((*(int *)(*(longlong *)&(FVar4.Handle)->field_0x10 + 0x38) < iVar9) ||
     (FVar21 = FVar4,
     (longlong *)
     *(undefined1 **)
      (*(longlong *)(*(longlong *)&(FVar4.Handle)->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
     &pUVar10->_padding_)) {
    FVar20.Handle = (UObject *)0x0;
    FVar21.Handle = (UObject *)0x0;
    if ((param_1->Node != (UPCGNode *)0x0) &&
       ((bVar6 = UPCGNode::IsOutputPinConnected
                           (param_1->Node,&PCGAttributeSelectConstants::OutputPointLabel), bVar6 &&
        (FVar21.Handle = FVar20.Handle, 2 < (byte)LogPCG._0_1_)))) {
      pFVar12 = FText::FromName(&local_418,&PCGAttributeSelectConstants::OutputPointLabel);
      pFVar15 = FText::AsLocalizable_Advanced_LocText
                          (&local_690,L"PCGAttributeSelectElement",L"InputMissingPointData",
                           L"No point data in input, will output nothing in the \'{0}\' output pin")
      ;
      pFVar13 = FTextFormat::FTextFormat(&local_408,pFVar15,Default);
      pFVar12 = FText::Format<FText>(&local_6a0,pFVar13,pFVar12);
      pFVar14 = FText::ToString(pFVar12);
      if ((pFVar14->Data).ArrayNum == 0) {
        pwVar22 = L"";
      }
      else {
        pwVar22 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
      FPCGContext::GetTaskName(param_1,&local_6b0);
      FPCGContext::GetExecutionSourceName(param_1,&local_6c0);
      local_858 = (FPCGTaggedData *)pwVar22;
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_6c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6c0.Data.AllocatorInstance.Data);
      }
      if (local_6b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6b0.Data.AllocatorInstance.Data);
      }
      if (local_6a0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_6a0.TextData.Reference + 0x10))();
      }
      this = (FPCGAttributeSelectElement *)local_810;
      if (local_690.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_690.TextData.Reference + 0x10))();
        this = (FPCGAttributeSelectElement *)local_810;
      }
    }
  }
  if (*(longlong *)&FVar4.Handle[1].field_0x10 == 0) {
    if ((byte)LogPCG._0_1_ < 2) goto LAB_149b097fc;
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_660,L"PCGAttributeSelectElement",L"InputMissingMetadata",
                         L"Input data doesn\'t have metadata");
    pFVar14 = FText::ToString(pFVar12);
    if ((pFVar14->Data).ArrayNum == 0) {
      pwVar22 = L"";
    }
    else {
      pwVar22 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    FPCGContext::GetTaskName(param_1,&local_670);
    FPCGContext::GetExecutionSourceName(param_1,&local_680);
    local_858 = (FPCGTaggedData *)pwVar22;
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if (local_680.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_680.Data.AllocatorInstance.Data);
    }
    local_630.TextData.Reference = local_660.TextData.Reference;
    if (local_670.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_670.Data.AllocatorInstance.Data);
      local_630.TextData.Reference = local_660.TextData.Reference;
    }
    goto LAB_149b097e9;
  }
  FPCGAttributePropertyInputSelector::CopyAndFixLast
            ((FPCGAttributePropertyInputSelector *)(local_7e8.DebugPtr + 1),
             (FPCGAttributePropertyInputSelector *)&local_528,(UPCGData *)FVar4.Handle);
  FVar16 = (FName)local_7e8.DebugPtr[1]._padding_;
  FVar5 = FVar16;
  if (FVar16 == PCGMetadataAttributeConstants::SourceNameAttributeName) {
    FVar16 = FPCGAttributePropertySelector::GetName(&local_528);
    FVar16 = *(FName *)FVar16;
    FVar5 = local_708;
  }
  local_708 = FVar5;
  pUVar17 = FPCGContext::NewObject_AnyThread<UPCGParamData>(param_1);
  local_810 = pUVar17;
  PCGAttributeAccessorHelpers::CreateConstAccessor
            ((UPCGData *)local_820,(FPCGAttributePropertySelector *)FVar21.Handle,
             SUB81(&local_528,0));
  PCGAttributeAccessorHelpers::CreateConstKeys
            ((UPCGData *)(local_820 + 8),(FPCGAttributePropertySelector *)FVar21.Handle);
  if (((undefined8 *)local_820._0_8_ == (undefined8 *)0x0) ||
     ((undefined8 *)local_820._8_8_ == (undefined8 *)0x0)) {
    if (1 < (byte)LogPCG._0_1_) {
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_578,L"PCGAttributeSelectElement",L"AttributeMissing",
                           L"Input attribute/property does not exist");
      pFVar14 = FText::ToString(pFVar12);
      if ((pFVar14->Data).ArrayNum == 0) {
        pwVar22 = L"";
      }
      else {
        pwVar22 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
      FPCGContext::GetTaskName(param_1,&local_5a8);
      FPCGContext::GetExecutionSourceName(param_1,&local_598);
      local_858 = (FPCGTaggedData *)pwVar22;
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_598.Data.AllocatorInstance.Data);
      }
      if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
      }
      if (local_578.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_578.TextData.Reference + 0x10))();
      }
    }
  }
  else {
    puStack_7d0 = local_820;
    local_7c8 = local_820 + 8;
    pTStack_7c0 = &local_7e8;
    local_7d8 = (UPCGParamData *)this;
    local_7b8 = FVar16;
    pUStack_7b0 = pUVar17;
    local_7a8 = param_1;
    local_748 = (UPCGParamData *)this;
    puStack_740 = puStack_7d0;
    local_738 = local_7c8;
    pTStack_730 = pTStack_7c0;
    local_728 = FVar16;
    pUStack_720 = pUVar17;
    local_718 = param_1;
    switch(*(undefined2 *)(local_820._0_8_ + 10)) {
    case 0:
      iVar9 = `FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::operator()<float>
                        (&local_7d8,0.0);
      break;
    case 1:
      iVar9 = `FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::operator()<double>
                        (&local_7d8,0.0);
      break;
    case 2:
      iVar9 = `FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::operator()<int>
                        (&local_7d8,0);
      break;
    case 3:
      iVar9 = `FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::operator()<__int64>
                        (&local_7d8,0);
      break;
    case 4:
      local_3f8 = 0;
      uStack_3f0 = 0;
      local_588._s_0.X = 0.0;
      local_588._s_0.Y = 0.0;
      iVar9 = `FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::
              operator()<UE::Math::TVector2<double>_>
                        (&local_7d8,(TVector2<double> *)&local_588._s_0);
      break;
    case 5:
      local_608._s_0.X = 0.0;
      local_608._s_0.Y = 0.0;
      local_620 = 0;
      uStack_618 = 0;
      local_610 = 0;
      local_608._s_0.Z = 0.0;
      iVar9 = `FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::
              operator()<UE::Math::TVector<double>_>(&local_7d8,(TVector<double> *)&local_608._s_0);
      break;
    case 6:
      local_3d8 = ___xmm_3ff00000000000000000000000000000;
      dStack_3d0 = _UNK_15061cbc8;
      local_3e8 = 0;
      uStack_3e0 = 0;
      local_4e8._s_0.X = 0.0;
      local_4e8._s_0.Y = 0.0;
      local_4e8._s_0.Z = ___xmm_3ff00000000000000000000000000000;
      local_4e8._s_0.W = _UNK_15061cbc8;
      iVar9 = `FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::
              operator()<UE::Math::TVector4<double>_>
                        (&local_7d8,(TVector4<double> *)&local_4e8._s_0);
      break;
    case 7:
      local_448 = 0;
      uStack_440 = 0;
      local_438 = 0;
      uStack_430 = 0;
      local_4c8.X = 0.0;
      local_4c8.Y = 0.0;
      local_4c8.Z = 0.0;
      local_4c8.W = 0.0;
      iVar9 = `FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::
              operator()<UE::Math::TQuat<double>_>(&local_7d8,&local_4c8);
      break;
    case 8:
      uVar26 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      uVar27 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      local_4a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_4a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_4a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_4a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_4a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_4a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_4a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_4a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      uVar24 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      uVar25 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
      ;
      local_3c8._8_4_ = uVar26;
      local_3c8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_3c8._12_4_ = uVar27;
      local_378._8_4_ = uVar24;
      local_378._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_378._12_4_ = uVar25;
      local_4a8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar24;
      local_4a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_4a8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar25;
      local_4a8.Rotation.XY.m128d_f64[1]._0_4_ = uVar26;
      local_4a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_4a8.Rotation.XY.m128d_f64[1]._4_4_ = uVar27;
      local_3b8 = local_4a8.Rotation.ZW.m128d_f64[0];
      dStack_3b0 = local_4a8.Rotation.ZW.m128d_f64[1];
      local_3a8 = local_4a8.Translation.XY.m128d_f64[0];
      dStack_3a0 = local_4a8.Translation.XY.m128d_f64[1];
      local_398 = local_4a8.Translation.ZW.m128d_f64[0];
      dStack_390 = local_4a8.Translation.ZW.m128d_f64[1];
      local_388 = local_4a8.Scale3D.XY.m128d_f64[0];
      dStack_380 = local_4a8.Scale3D.XY.m128d_f64[1];
      iVar9 = `FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::
              operator()<UE::Math::TTransform<double>_>(&local_7d8,&local_4a8);
      break;
    case 9:
      local_778.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_778.Data.ArrayNum = 0;
      local_778.Data.ArrayMax = 0;
      iVar9 = `FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::operator()<FString>
                        (&local_7d8,&local_778);
      break;
    case 10:
      iVar9 = `FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::operator()<bool>
                        (&local_7d8,false);
      break;
    case 0xb:
      local_5c8.Pitch = 0.0;
      local_5c8.Yaw = 0.0;
      local_5e8 = 0;
      uStack_5e0 = 0;
      local_5d8 = 0;
      local_5c8.Roll = 0.0;
      iVar9 = `FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::
              operator()<UE::Math::TRotator<double>_>(&local_7d8,&local_5c8);
      break;
    case 0xc:
      local_7e0._0_1_ = false;
      local_7e0._1_1_ = (atomic<unsigned_char>)0x0;
      local_7e0._2_2_ = 0;
      local_7e0._4_4_ = (atomic<int>)0x0;
      iVar9 = `FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::operator()<FName>
                        (&local_7d8,(FName)0x0);
      break;
    case 0xd:
      local_798.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_798.AssetPath.PackageName.Number = 0;
      local_798.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_798.AssetPath.AssetName.Number = 0;
      local_798.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_798.SubPathString.Data.ArrayNum = 0;
      local_798.SubPathString.Data.ArrayMax = 0;
      iVar9 = `FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::
              operator()<FSoftObjectPath>(&local_7d8,&local_798);
      break;
    case 0xe:
      local_768._0_8_ = 0;
      local_768._8_8_ = 0;
      local_768._16_8_ = 0;
      local_768._24_8_ = 0;
      iVar9 = `FPCGAttributeSelectElement::ExecuteInternal'::__l2::<lambda_1>::
              operator()<FSoftClassPath>(&local_7d8,&local_768);
      break;
    default:
      iVar9 = 0;
      goto LAB_149b09329;
    }
    if (-1 < iVar9) {
LAB_149b09329:
      pFVar1 = &param_1->OutputData;
      if (local_808.ArrayNum < 1) {
        local_858 = (FPCGTaggedData *)0x0;
        local_850 = (FPCGTaggedData *)(longlong)local_808.ArrayNum;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      FVar3.Data = local_808.AllocatorInstance.Data;
      pFVar18 = (FPCGTaggedData *)(pFVar1->TaggedData).AllocatorInstance.Data;
      if ((pFVar18 <= local_808.AllocatorInstance.Data) &&
         (lVar19 = (longlong)(param_1->OutputData).TaggedData.ArrayMax,
         local_808.AllocatorInstance.Data < pFVar18 + lVar19)) {
        local_840 = (longlong)(param_1->OutputData).TaggedData.ArrayNum;
        local_838 = 0x78;
        local_858 = (FPCGTaggedData *)local_808.AllocatorInstance.Data;
        local_850 = pFVar18;
        local_848 = lVar19;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          uVar7 = (*pcVar2)();
          return (bool)uVar7;
        }
      }
      iVar8 = (param_1->OutputData).TaggedData.ArrayNum;
      if (iVar8 == (param_1->OutputData).TaggedData.ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,(ForAnyElementType *)pFVar1,
                           &(param_1->OutputData).TaggedData.ArrayMax);
      }
      (param_1->OutputData).TaggedData.ArrayNum = iVar8 + 1;
      pFVar18 = FPCGTaggedData::FPCGTaggedData
                          ((FPCGTaggedData *)
                           ((pFVar1->TaggedData).AllocatorInstance.Data + (longlong)iVar8 * 0x78),
                           (FPCGTaggedData *)FVar3.Data);
      FPCGDataPtrWrapper::operator=(&pFVar18->Data,(UPCGData *)local_810);
      pFVar18->Pin = PCGAttributeSelectConstants::OutputAttributeLabel;
      if ((((UPCGBasePointData *)FVar21.Handle != (UPCGBasePointData *)0x0) &&
          (param_1->Node != (UPCGNode *)0x0)) &&
         (bVar6 = UPCGNode::IsOutputPinConnected
                            (param_1->Node,&PCGAttributeSelectConstants::OutputPointLabel), bVar6))
      {
        this_01 = FPCGContext::NewPointData_AnyThread(param_1);
        FPCGInitializeFromDataParams::FPCGInitializeFromDataParams
                  (&local_568,(UPCGSpatialData *)FVar21.Handle);
        local_568.bInheritSpatialData = false;
        UPCGSpatialData::InitializeFromDataWithParams((UPCGSpatialData *)this_01,&local_568);
        (**(code **)(this_01->_padding_ + 0x490))(this_01,1);
        (**(code **)(this_01->_padding_ + 0x4b0))(this_01,FVar21.Handle);
        FConstPCGPointValueRanges::FConstPCGPointValueRanges
                  (&local_368,(UPCGBasePointData *)FVar21.Handle);
        FPCGPointValueRanges::FPCGPointValueRanges(&local_1d8,this_01,false);
        FPCGPointValueRanges::SetFromValueRanges(&local_1d8,0,&local_368,iVar9);
        if (local_808.ArrayNum < 1) {
          local_858 = (FPCGTaggedData *)0x0;
          local_850 = (FPCGTaggedData *)(longlong)local_808.ArrayNum;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar2 = (code *)swi(3);
            uVar7 = (*pcVar2)();
            return (bool)uVar7;
          }
        }
        FVar3.Data = local_808.AllocatorInstance.Data;
        pFVar18 = (FPCGTaggedData *)(pFVar1->TaggedData).AllocatorInstance.Data;
        if ((pFVar18 <= local_808.AllocatorInstance.Data) &&
           (lVar19 = (longlong)(param_1->OutputData).TaggedData.ArrayMax,
           local_808.AllocatorInstance.Data < pFVar18 + lVar19)) {
          local_840 = (longlong)(param_1->OutputData).TaggedData.ArrayNum;
          local_838 = 0x78;
          local_858 = (FPCGTaggedData *)local_808.AllocatorInstance.Data;
          local_850 = pFVar18;
          local_848 = lVar19;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar2 = (code *)swi(3);
            uVar7 = (*pcVar2)();
            return (bool)uVar7;
          }
        }
        iVar9 = (param_1->OutputData).TaggedData.ArrayNum;
        if (iVar9 == (param_1->OutputData).TaggedData.ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,(ForAnyElementType *)pFVar1,
                             &(param_1->OutputData).TaggedData.ArrayMax);
        }
        (param_1->OutputData).TaggedData.ArrayNum = iVar9 + 1;
        pFVar18 = FPCGTaggedData::FPCGTaggedData
                            ((FPCGTaggedData *)
                             ((pFVar1->TaggedData).AllocatorInstance.Data + (longlong)iVar9 * 0x78),
                             (FPCGTaggedData *)FVar3.Data);
        FPCGDataPtrWrapper::operator=(&pFVar18->Data,(UPCGData *)this_01);
        pFVar18->Pin = PCGAttributeSelectConstants::OutputPointLabel;
        DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
                  ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
                   local_568.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data,
                   local_568.MetadataInitializeParams.DomainInitializeParams.ArrayNum);
        if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
            local_568.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.Data !=
            (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
          FMemory::Free(local_568.MetadataInitializeParams.DomainInitializeParams.AllocatorInstance.
                        Data);
        }
        if (local_568.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_568.MetadataInitializeParams.DomainMapping.AllocatorInstance.Data);
        }
      }
    }
  }
  if ((undefined8 *)local_820._8_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_820._8_8_)(local_820._8_8_,1);
  }
  if ((undefined8 *)local_820._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_820._0_8_)(local_820._0_8_,1);
  }
  DestructItems<FString,int>
            ((FString *)local_528.ExtraNames.AllocatorInstance.Data,local_528.ExtraNames.ArrayNum);
  if (local_528.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_528.ExtraNames.AllocatorInstance.Data);
  }
LAB_149b097fc:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_808.AllocatorInstance.Data,local_808.ArrayNum);
  if ((FPCGTaggedData *)local_808.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_808.AllocatorInstance.Data);
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// SupportsBasePointDataInputs @ 149b2d180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGAttributeSelectElement::SupportsBasePointDataInputs
          (FPCGAttributeSelectElement *this,FPCGContext *param_1)

{
  return true;
}

