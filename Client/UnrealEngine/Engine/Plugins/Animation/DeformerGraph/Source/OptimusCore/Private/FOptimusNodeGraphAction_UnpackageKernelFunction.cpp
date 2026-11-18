// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticStruct @ 14e10e9d0

UScriptStruct * __cdecl FOptimusNodeGraphAction_UnpackageKernelFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_UnpackageKernelFunction.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_UnpackageKernelFunction.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_UnpackageKernelFunction
                           ,(UObject *)pUVar1,L"OptimusNodeGraphAction_UnpackageKernelFunction");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_UnpackageKernelFunction.
         OuterSingleton;
}

// Do @ 14e10ea50

bool __thiscall
FOptimusNodeGraphAction_UnpackageKernelFunction::Do
          (FOptimusNodeGraphAction_UnpackageKernelFunction *this,IOptimusPathResolver *param_1)

{
  FName FVar1;
  UOptimusNodeGraph *this_00;
  UClass *pUVar2;
  UOptimusNode *this_01;
  FString *pFVar3;
  undefined1 local_68 [16];
  UOptimusNode_ComputeKernelFunctionGeneratorClass *local_58;
  FScriptContainerElement *pFStack_50;
  double dStack_48;
  code *local_38 [5];
  undefined8 *local_10;
  
  this_00 = (UOptimusNodeGraph *)(**(code **)((longlong)*param_1 + 0x18))(param_1,&this->GraphPath);
  if (this_00 != (UOptimusNodeGraph *)0x0) {
    local_58 = Optimus::
               FindObjectInPackageOrGlobal<UOptimusNode_ComputeKernelFunctionGeneratorClass>
                         (&this->ClassPath);
    if (local_58 != (UOptimusNode_ComputeKernelFunctionGeneratorClass *)0x0) {
      local_68._0_8_ = (this->NodePosition).field0_0x0._s_0.X;
      local_68._8_8_ = (this->NodePosition).field0_0x0._s_0.Y;
      local_38[0] = (code *)0x0;
      pFStack_50 = (FScriptContainerElement *)local_68._0_8_;
      dStack_48 = (double)local_68._8_8_;
      local_10 = FMemory::Malloc(0x20,8);
      local_10[1] = local_58;
      local_10[2] = pFStack_50;
      *local_10 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FOptimusNodeGraphAction_UnpackageKernelFunction::Do'::`2'::<lambda_1>,0,1>
                   ::_vftable_;
      local_10[3] = local_68._8_8_;
      if (local_10 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_38[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FOptimusNodeGraphAction_UnpackageKernelFunction::Do'::__l2::<lambda_1>,bool,UOptimusNode_*>
                      ::Call;
      }
      FVar1 = this->NodeName;
      pUVar2 = UOptimusNode_CustomComputeKernel::StaticClass();
      this_01 = UOptimusNodeGraph::CreateNodeDirect
                          (this_00,pUVar2,FVar1,(TFunction<bool___cdecl(UOptimusNode_*)> *)local_38)
      ;
      if (this_01 != (UOptimusNode *)0x0) {
        pFVar3 = UOptimusNode::GetNodePath(this_01,(FString *)local_68);
        ::FString::operator=(&this->NodePath,pFVar3);
        if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_68._0_8_);
        }
        return true;
      }
    }
  }
  return false;
}

// Undo @ 14e10eb80

bool __thiscall
FOptimusNodeGraphAction_UnpackageKernelFunction::Undo
          (FOptimusNodeGraphAction_UnpackageKernelFunction *this,IOptimusPathResolver *param_1)

{
  bool bVar1;
  UOptimusNodeGraph *this_00;
  UOptimusNode *pUVar2;
  
  this_00 = (UOptimusNodeGraph *)(**(code **)((longlong)*param_1 + 0x18))(param_1,&this->GraphPath);
  if (this_00 == (UOptimusNodeGraph *)0x0) {
    return false;
  }
  pUVar2 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&this->NodePath);
  bVar1 = UOptimusNodeGraph::RemoveNodeDirect(this_00,pUVar2,true);
  return bVar1;
}

// FOptimusNodeGraphAction_UnpackageKernelFunction @ 14e1554e0

FOptimusNodeGraphAction_UnpackageKernelFunction * __thiscall
FOptimusNodeGraphAction_UnpackageKernelFunction::FOptimusNodeGraphAction_UnpackageKernelFunction
          (FOptimusNodeGraphAction_UnpackageKernelFunction *this,
          UOptimusNode_ComputeKernelFunction *param_1,FName param_2)

{
  FString *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  FOptimusNodeGraphAction_UnpackageKernelFunction *pFVar7;
  UClass *pUVar8;
  undefined8 *puVar9;
  FString *pFVar10;
  longlong lVar11;
  void *local_38 [2];
  FString local_28;
  
  pFVar1 = &this->GraphPath;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusNodeGraphAction_UnpackageKernelFunction__6B_;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphPath).Data.ArrayNum = 0;
  (this->GraphPath).Data.ArrayMax = 0;
  (this->ClassPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClassPath).Data.ArrayNum = 0;
  (this->ClassPath).Data.ArrayMax = 0;
  (this->NodeName).ComparisonIndex = 0;
  (this->NodeName).Number = 0;
  (this->NodePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodePath).Data.ArrayNum = 0;
  (this->NodePath).Data.ArrayMax = 0;
  if (param_1 == (UOptimusNode_ComputeKernelFunction *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5689001813563409356>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                       ,0x3cc,"InKernelFunction");
    if (!bVar6) {
      return this;
    }
    pcVar4 = (code *)swi(3);
    pFVar7 = (FOptimusNodeGraphAction_UnpackageKernelFunction *)(*pcVar4)();
    return pFVar7;
  }
  lVar11 = *(longlong *)&param_1->field_0x20;
  if (lVar11 != 0) {
    pUVar8 = UOptimusNodeGraph::StaticClass();
    iVar2 = (int)pUVar8->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)iVar2 * 8)
        == &pUVar8->_padding_)) goto LAB_14e15559d;
  }
  lVar11 = 0;
LAB_14e15559d:
  puVar9 = (undefined8 *)(**(code **)(*(longlong *)(lVar11 + 0x28) + 0x20))(lVar11 + 0x28,local_38);
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
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  pFVar10 = UObjectBaseUtility::GetPathName
                      (*(UObjectBaseUtility **)&param_1->field_0x10,&local_28,(UObject *)0x0);
  pFVar1 = &this->ClassPath;
  if (pFVar1 != pFVar10) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ClassPath).Data.ArrayNum = (pFVar10->Data).ArrayNum;
    (this->ClassPath).Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  this->NodeName = param_2;
  dVar5 = *(double *)&param_1->field_0x48;
  (this->NodePosition).field0_0x0._s_0.X = *(double *)&param_1->field_0x40;
  (this->NodePosition).field0_0x0._s_0.Y = dVar5;
  return this;
}

// operator() @ 14e167220

bool __thiscall
`FOptimusNodeGraphAction_UnpackageKernelFunction::Do'::__l2::<lambda_1>::operator()
          (void *this,UOptimusNode *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  UOptimusNode *pUVar6;
  int iVar7;
  
  if (param_1 != (UOptimusNode *)0x0) {
    pUVar5 = UOptimusNode_CustomComputeKernel::StaticClass();
    iVar7 = (int)pUVar5->_padding_;
    if ((iVar7 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (pUVar6 = param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar7 * 8)
       == &pUVar5->_padding_)) goto LAB_14e16726a;
  }
  pUVar6 = (UOptimusNode *)0x0;
LAB_14e16726a:
  *(undefined8 *)&pUVar6[1].bSendNotifications = *(undefined8 *)(*(longlong *)this + 0x208);
  pUVar6[1].DisplayName.TextData.Reference = *(ITextData **)(*(longlong *)this + 0x210);
  lVar3 = *(longlong *)this;
  uVar1 = *(undefined8 *)(lVar3 + 0x238);
  pUVar6[1].Pins.ArrayNum = (int)uVar1;
  pUVar6[1].Pins.ArrayMax = (int)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)&pUVar6[1].ExpandedPins.Elements = *(undefined4 *)(lVar3 + 0x240);
  TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)
             &pUVar6[1].ExpandedPins.Hash,
             (TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)this + 0x248));
  TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)
             &pUVar6[1].ExpandedPins.HashSize,
             (TArray<FOptimusParameterBinding,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)this + 600));
  iVar2 = *(int *)(*(longlong *)this + 0x270);
  iVar7 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar7 = 0;
  }
  ::FString::AssignRange
            ((FString *)&pUVar6[1].CachedPinLookup.field_0x30,
             *(wchar_t **)(*(longlong *)this + 0x268),iVar7);
  bVar4 = UOptimusNode::SetGraphPositionDirect(param_1,(TVector2<double> *)((longlong)this + 8));
  return bVar4;
}

// GetNode @ 14e1cac40

UOptimusNode * __thiscall
FOptimusNodeGraphAction_UnpackageKernelFunction::GetNode
          (FOptimusNodeGraphAction_UnpackageKernelFunction *this,IOptimusPathResolver *param_1)

{
  UOptimusNode *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014e1cac4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&this->NodePath);
  return pUVar1;
}

