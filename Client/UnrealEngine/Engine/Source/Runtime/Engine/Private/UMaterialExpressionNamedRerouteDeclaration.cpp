// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 1472b7e10

UClass * __cdecl UMaterialExpressionNamedRerouteDeclaration::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteDeclaration.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionNamedRerouteDeclaration",
               &Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteDeclaration.InnerSingleton
               ,StaticRegisterNativesUMaterialExpressionNamedRerouteDeclaration,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionNamedRerouteDeclaration>,
               InternalVTableHelperCtorCaller<UMaterialExpressionNamedRerouteDeclaration>,local_res8
               ,UMaterialExpressionNamedRerouteBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteDeclaration.InnerSingleton;
}

// UMaterialExpressionNamedRerouteDeclaration @ 1472c01d0

UMaterialExpressionNamedRerouteDeclaration * __thiscall
UMaterialExpressionNamedRerouteDeclaration::UMaterialExpressionNamedRerouteDeclaration
          (UMaterialExpressionNamedRerouteDeclaration *this,FVTableHelper *param_1)

{
  UMaterialExpression::UMaterialExpression((UMaterialExpression *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionNamedRerouteDeclaration__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->VariableGuid).A = 0;
  (this->VariableGuid).B = 0;
  (this->VariableGuid).C = 0;
  (this->VariableGuid).D = 0;
  return this;
}

// ~UMaterialExpressionNamedRerouteDeclaration @ 1472c2090

void __thiscall
UMaterialExpressionNamedRerouteDeclaration::~UMaterialExpressionNamedRerouteDeclaration
          (UMaterialExpressionNamedRerouteDeclaration *this)

{
  this->_padding_ = (longlong)&___7UMaterialExpressionRerouteBase__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  return;
}

// GetPrivateStaticClass @ 1472c4930

UClass * __cdecl UMaterialExpressionNamedRerouteDeclaration::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteDeclaration.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialExpressionNamedRerouteDeclaration",
               &Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteDeclaration.InnerSingleton
               ,StaticRegisterNativesUMaterialExpressionNamedRerouteDeclaration,0x100,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionNamedRerouteDeclaration>,
               InternalVTableHelperCtorCaller<UMaterialExpressionNamedRerouteDeclaration>,local_res8
               ,UMaterialExpressionNamedRerouteBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionNamedRerouteDeclaration.InnerSingleton;
}

// StaticRegisterNativesUMaterialExpressionNamedRerouteDeclaration @ 1472c7490

void __cdecl
UMaterialExpressionNamedRerouteDeclaration::
StaticRegisterNativesUMaterialExpressionNamedRerouteDeclaration(void)

{
  return;
}

// UMaterialExpressionNamedRerouteDeclaration @ 148afd3c0

UMaterialExpressionNamedRerouteDeclaration * __thiscall
UMaterialExpressionNamedRerouteDeclaration::UMaterialExpressionNamedRerouteDeclaration
          (UMaterialExpressionNamedRerouteDeclaration *this,FObjectInitializer *param_1)

{
  FName local_res8 [4];
  
  UMaterialExpressionNamedRerouteBase::UMaterialExpressionNamedRerouteBase
            ((UMaterialExpressionNamedRerouteBase *)this,param_1);
  this->_padding_ = (longlong)&___7UMaterialExpressionNamedRerouteDeclaration__6B_;
  (this->Input).OutputIndex = 0;
  (this->Input).InputName.ComparisonIndex = 0;
  *(undefined8 *)&(this->Input).InputName.Number = 0;
  (this->Input).MaskR = 0;
  (this->Input).MaskG = 0;
  (this->Input).MaskB = 0;
  (this->Input).MaskA = 0;
  (this->Input).Expression = (UMaterialExpression *)0x0;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->VariableGuid).A = 0;
  (this->VariableGuid).B = 0;
  (this->VariableGuid).C = 0;
  (this->VariableGuid).D = 0;
  ::FName::FName(local_res8,L"Name");
  this->Name = local_res8[0];
  return this;
}

// GetRerouteInput @ 148b02410

bool __thiscall
UMaterialExpressionNamedRerouteDeclaration::GetRerouteInput
          (UMaterialExpressionNamedRerouteDeclaration *this,FExpressionInput *param_1)

{
  int iVar1;
  FNameEntryId FVar2;
  int iVar3;
  
  iVar1 = (this->Input).OutputIndex;
  FVar2.Value = (this->Input).InputName.ComparisonIndex.Value;
  param_1->Expression = (this->Input).Expression;
  param_1->OutputIndex = iVar1;
  (param_1->InputName).ComparisonIndex = (FNameEntryId)FVar2.Value;
  iVar1 = (this->Input).MaskR;
  iVar3 = (this->Input).MaskG;
  *(undefined8 *)&(param_1->InputName).Number = *(undefined8 *)&(this->Input).InputName.Number;
  param_1->MaskR = iVar1;
  param_1->MaskG = iVar3;
  iVar1 = (this->Input).MaskA;
  param_1->MaskB = (this->Input).MaskB;
  param_1->MaskA = iVar1;
  return true;
}

// MakeNameUnique @ 148b028b0

void __thiscall
UMaterialExpressionNamedRerouteDeclaration::MakeNameUnique
          (UMaterialExpressionNamedRerouteDeclaration *this)

{
  return;
}

// PostDuplicate @ 148b029f0

void __thiscall
UMaterialExpressionNamedRerouteDeclaration::PostDuplicate
          (UMaterialExpressionNamedRerouteDeclaration *this,bool param_1)

{
  return;
}

// PostInitProperties @ 148b02b60

void __thiscall
UMaterialExpressionNamedRerouteDeclaration::PostInitProperties
          (UMaterialExpressionNamedRerouteDeclaration *this)

{
  UObject::PostInitProperties((UObject *)this);
  UObjectBaseUtility::IsTemplate
            ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  return;
}

// PostLoad @ 148b03110

void __thiscall
UMaterialExpressionNamedRerouteDeclaration::PostLoad
          (UMaterialExpressionNamedRerouteDeclaration *this)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString FStack_28;
  FString FStack_18;
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId992,"UMaterialExpression_PostLoad",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialExpressions.cpp"
               ,0x3e0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId992);
  }
  UObject::PostLoad((UObject *)this);
  if (this->_padding_ == 0) {
    lVar2 = this->_padding_;
    pUVar5 = Z_Construct_UClass_UMaterial_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      pUVar3 = (UObject *)this->_padding_;
      if (pUVar3 == (UObject *)0x0) {
        pFVar6 = GetTypeName<UMaterial>(&FStack_28);
        if ((pFVar6->Data).ArrayNum == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar7);
      }
      pUVar5 = Z_Construct_UClass_UMaterial_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        pFVar6 = GetTypeName<UMaterial>(&FStack_28);
        pwVar7 = L"";
        if ((pFVar6->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
        pFVar6 = GetFullNameForCastLogError<UObject>(&FStack_18,pUVar3);
        if ((pFVar6->Data).ArrayNum != 0) {
          pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar7,pwVar8);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      this->_padding_ = (longlong)pUVar3;
    }
  }
  if (this->_padding_ == 0) {
    lVar2 = this->_padding_;
    pUVar5 = Z_Construct_UClass_UMaterialFunction_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      pUVar3 = (UObject *)this->_padding_;
      if (pUVar3 == (UObject *)0x0) {
        pFVar6 = GetTypeName<UMaterialFunction>(&FStack_18);
        if ((pFVar6->Data).ArrayNum == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar7);
      }
      pUVar5 = Z_Construct_UClass_UMaterialFunction_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        pFVar6 = GetTypeName<UMaterialFunction>(&FStack_18);
        pwVar7 = L"";
        if ((pFVar6->Data).ArrayNum == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
        pFVar6 = GetFullNameForCastLogError<UObject>(&FStack_28,pUVar3);
        if ((pFVar6->Data).ArrayNum != 0) {
          pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar7,pwVar8);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      this->_padding_ = (longlong)pUVar3;
    }
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateVariableGuid @ 148b04880

void __thiscall
UMaterialExpressionNamedRerouteDeclaration::UpdateVariableGuid
          (UMaterialExpressionNamedRerouteDeclaration *this,bool param_1,bool param_2)

{
  return;
}

