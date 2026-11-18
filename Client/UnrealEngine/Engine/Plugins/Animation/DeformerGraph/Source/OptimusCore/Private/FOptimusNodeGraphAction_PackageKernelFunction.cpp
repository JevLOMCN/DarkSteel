// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticStruct @ 14e10dff0

UScriptStruct * __cdecl FOptimusNodeGraphAction_PackageKernelFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_PackageKernelFunction.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_PackageKernelFunction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_PackageKernelFunction,
                         (UObject *)pUVar1,L"OptimusNodeGraphAction_PackageKernelFunction");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_PackageKernelFunction.
         OuterSingleton;
}

// Do @ 14e10e2d0

bool __thiscall
FOptimusNodeGraphAction_PackageKernelFunction::Do
          (FOptimusNodeGraphAction_PackageKernelFunction *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  FName FVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  UOptimusNodeGraph *this_00;
  UPackage *pUVar5;
  UClass *pUVar6;
  UOptimusNode *this_01;
  FString *pFVar7;
  FName local_res8;
  TIntVector3<int>_u_0 local_68;
  FString local_58;
  code *local_48 [2];
  undefined **local_38;
  double local_30;
  double dStack_28;
  undefined8 local_20;
  
  this_00 = (UOptimusNodeGraph *)(**(code **)((longlong)*param_1 + 0x18))(param_1,&this->GraphPath);
  if (this_00 != (UOptimusNodeGraph *)0x0) {
    local_res8 = *(FName *)&(this->GroupSize).field0_0x0;
    iVar1 = (this->GroupSize).field0_0x0._s_0.Z;
    FVar2 = this->KernelName;
    FVar3 = this->Category;
    pUVar5 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_00);
    local_68._s_0.X = local_res8.ComparisonIndex.Value;
    local_68._s_0.Y = local_res8.Number;
    local_68._s_0.Z = iVar1;
    pUVar6 = UOptimusNode_ComputeKernelFunctionGeneratorClass::CreateNodeClass
                       ((UObject *)pUVar5,FVar3,FVar2,(TIntVector3<int> *)&local_68._s_0,
                        &this->InputBindings,&this->OutputBindings,&this->ShaderSource);
    if (pUVar6 != (UClass *)0x0) {
      UOptimusNodeGraph::GlobalNotify(this_00,NodeTypeAdded,(UObject *)pUVar6);
      local_res8 = (FName)pUVar6->_padding_;
      ::FName::ToString(&local_res8,&local_58);
      pFVar7 = &this->NodeClassName;
      if (pFVar7 != &local_58) {
        pFVar4 = (pFVar7->Data).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pFVar7->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
        (this->NodeClassName).Data.ArrayNum = local_58.Data.ArrayNum;
        (this->NodeClassName).Data.ArrayMax = local_58.Data.ArrayMax;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      local_30 = (this->NodePosition).field0_0x0._s_0.X;
      dStack_28 = (this->NodePosition).field0_0x0._s_0.Y;
      local_38 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FOptimusNodeGraphAction_PackageKernelFunction::Do'::`2'::<lambda_1>,0,0>
                  ::_vftable_;
      local_20 = 0;
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FOptimusNodeGraphAction_PackageKernelFunction::Do'::__l2::<lambda_1>,bool,UOptimusNode_*>
                    ::Call;
      this_01 = UOptimusNodeGraph::CreateNodeDirect
                          (this_00,pUVar6,this->NodeName,
                           (TFunction<bool___cdecl(UOptimusNode_*)> *)local_48);
      if (this_01 != (UOptimusNode *)0x0) {
        pFVar7 = UOptimusNode::GetNodePath(this_01,(FString *)&local_68._s_0);
        ::FString::operator=(&this->NodePath,pFVar7);
        if ((void *)local_68._0_8_ != (void *)0x0) {
          FMemory::Free((void *)local_68._0_8_);
        }
        return true;
      }
    }
  }
  return false;
}

// Undo @ 14e10e4d0

bool __thiscall
FOptimusNodeGraphAction_PackageKernelFunction::Undo
          (FOptimusNodeGraphAction_PackageKernelFunction *this,IOptimusPathResolver *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  UOptimusNodeGraph *this_00;
  UOptimusNode *pUVar4;
  size_t sVar5;
  UPackage *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  TStringView<wchar_t> local_18;
  
  this_00 = (UOptimusNodeGraph *)(**(code **)((longlong)*param_1 + 0x18))(param_1,&this->GraphPath);
  if (this_00 == (UOptimusNodeGraph *)0x0) {
    return false;
  }
  pUVar4 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&this->NodePath);
  if ((this->NodeClassName).Data.ArrayNum == 0) {
    local_18.DataPtr = L"";
  }
  else {
    local_18.DataPtr = (wchar_t *)(this->NodeClassName).Data.AllocatorInstance.Data;
    local_18.Size = 0;
    if ((FScriptContainerElement *)local_18.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_14e10e546;
  }
  sVar5 = wcslen(local_18.DataPtr);
  local_18.Size = (int)sVar5;
LAB_14e10e546:
  pUVar6 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_00);
  pUVar7 = Z_Construct_UClass_UClass_NoRegister();
  pUVar8 = StaticFindObject(pUVar7,(UObject *)pUVar6,&local_18,None);
  if ((pUVar8 != (UObject *)0x0) &&
     (bVar2 = UOptimusNodeGraph::RemoveNodeDirect(this_00,pUVar4,true), bVar2)) {
    pcVar1 = *(code **)(*(longlong *)pUVar8 + 0x170);
    pUVar6 = GetTransientPackage();
    cVar3 = (*pcVar1)(pUVar8,0,pUVar6,0x30);
    if (cVar3 != '\0') {
      UOptimusNodeGraph::GlobalNotify(this_00,NodeTypeRemoved,pUVar8);
      return true;
    }
  }
  return false;
}

// FOptimusNodeGraphAction_PackageKernelFunction @ 14e154a70

FOptimusNodeGraphAction_PackageKernelFunction * __thiscall
FOptimusNodeGraphAction_PackageKernelFunction::FOptimusNodeGraphAction_PackageKernelFunction
          (FOptimusNodeGraphAction_PackageKernelFunction *this,
          UOptimusNode_CustomComputeKernel *param_1,FName param_2)

{
  FString *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  FOptimusNodeGraphAction_PackageKernelFunction *pFVar7;
  UClass *pUVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  void *local_28 [2];
  
  pFVar1 = &this->GraphPath;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusNodeGraphAction_PackageKernelFunction__6B_;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphPath).Data.ArrayNum = 0;
  (this->GraphPath).Data.ArrayMax = 0;
  (this->NodeName).ComparisonIndex = 0;
  (this->NodeName).Number = 0;
  (this->Category).ComparisonIndex = 0;
  (this->Category).Number = 0;
  (this->KernelName).ComparisonIndex = 0;
  (this->KernelName).Number = 0;
  (this->InputBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputBindings).ArrayNum = 0;
  (this->InputBindings).ArrayMax = 0;
  (this->OutputBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputBindings).ArrayNum = 0;
  (this->OutputBindings).ArrayMax = 0;
  (this->ShaderSource).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderSource).Data.ArrayNum = 0;
  (this->ShaderSource).Data.ArrayMax = 0;
  (this->NodeClassName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeClassName).Data.ArrayNum = 0;
  (this->NodeClassName).Data.ArrayMax = 0;
  (this->NodePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodePath).Data.ArrayNum = 0;
  (this->NodePath).Data.ArrayMax = 0;
  if (param_1 == (UOptimusNode_CustomComputeKernel *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5689001813563409246>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                       ,0x35e,"InKernelNode");
    if (!bVar6) {
      return this;
    }
    pcVar4 = (code *)swi(3);
    pFVar7 = (FOptimusNodeGraphAction_PackageKernelFunction *)(*pcVar4)();
    return pFVar7;
  }
  lVar10 = param_1->_padding_;
  if (lVar10 != 0) {
    pUVar8 = UOptimusNodeGraph::StaticClass();
    iVar11 = (int)pUVar8->_padding_;
    if ((iVar11 <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar11 * 8)
        == &pUVar8->_padding_)) goto LAB_14e154b5f;
  }
  lVar10 = 0;
LAB_14e154b5f:
  puVar9 = (undefined8 *)(**(code **)(*(longlong *)(lVar10 + 0x28) + 0x20))(lVar10 + 0x28,local_28);
  if (pFVar1 != (FString *)puVar9) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar9;
    *puVar9 = 0;
    (this->GraphPath).Data.ArrayNum = *(int *)(puVar9 + 1);
    (this->GraphPath).Data.ArrayMax = *(int *)((longlong)puVar9 + 0xc);
    puVar9[1] = 0;
  }
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  this->NodeName = param_2;
  dVar5 = (double)param_1->_padding_;
  (this->NodePosition).field0_0x0._s_0.X = (double)param_1->_padding_;
  (this->NodePosition).field0_0x0._s_0.Y = dVar5;
  this->Category = param_1->Category;
  this->KernelName = (param_1->KernelName).Name;
  *(undefined8 *)&(this->GroupSize).field0_0x0 = *(undefined8 *)&(param_1->GroupSize).field0_0x0;
  (this->GroupSize).field0_0x0._s_0.Z = (param_1->GroupSize).field0_0x0._s_0.Z;
  TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::operator=
            (&this->InputBindings,&(param_1->InputBindingArray).InnerArray);
  TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::operator=
            (&this->OutputBindings,&(param_1->OutputBindingArray).InnerArray);
  iVar2 = (param_1->ShaderSource).ShaderText.Data.ArrayNum;
  iVar11 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar11 = 0;
  }
  ::FString::AssignRange
            (&this->ShaderSource,
             (wchar_t *)(param_1->ShaderSource).ShaderText.Data.AllocatorInstance.Data,iVar11);
  return this;
}

// ~FOptimusNodeGraphAction_PackageKernelFunction @ 14e1618d0

void __thiscall
FOptimusNodeGraphAction_PackageKernelFunction::~FOptimusNodeGraphAction_PackageKernelFunction
          (FOptimusNodeGraphAction_PackageKernelFunction *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->NodePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NodeClassName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderSource).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FOptimusParameterBinding,int>
            ((FOptimusParameterBinding *)(this->OutputBindings).AllocatorInstance.Data,
             (this->OutputBindings).ArrayNum);
  pFVar1 = (this->OutputBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FOptimusParameterBinding,int>
            ((FOptimusParameterBinding *)(this->InputBindings).AllocatorInstance.Data,
             (this->InputBindings).ArrayNum);
  pFVar1 = (this->InputBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GraphPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FOptimusAction__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// GetNode @ 14e1cac20

UOptimusNode * __thiscall
FOptimusNodeGraphAction_PackageKernelFunction::GetNode
          (FOptimusNodeGraphAction_PackageKernelFunction *this,IOptimusPathResolver *param_1)

{
  UOptimusNode *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014e1cac30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&this->NodePath);
  return pUVar1;
}

