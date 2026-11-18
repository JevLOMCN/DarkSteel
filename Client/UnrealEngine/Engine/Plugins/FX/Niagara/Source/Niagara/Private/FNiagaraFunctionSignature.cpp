// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 11

// AddInputWithDefault<FNiagaraBool> @ 148e441f0

void __thiscall
FNiagaraFunctionSignature::AddInputWithDefault<FNiagaraBool>
          (FNiagaraFunctionSignature *this,FNiagaraVariable *param_1,FNiagaraBool *param_2,
          FText *param_3)

{
  TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FNiagaraVariable *pFVar7;
  
  pTVar1 = &this->Inputs;
  pFVar7 = (FNiagaraVariable *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar7 <= param_1) && (param_1 < pFVar7 + (this->Inputs).ArrayMax)) {
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
  iVar6 = (this->Inputs).ArrayNum;
  piVar2 = &(this->Inputs).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Inputs).ArrayNum = iVar6 + 1;
  pFVar7 = FNiagaraVariable::FNiagaraVariable
                     ((FNiagaraVariable *)
                      ((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x20),param_1);
  if (param_2 == (FNiagaraBool *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x5ec,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FNiagaraVariable::AllocateData(pFVar7);
  memcpy((pFVar7->VarData).AllocatorInstance.Data,param_2,(longlong)(pFVar7->VarData).ArrayNum);
  pFVar3 = (param_1->VarData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// AddInput @ 148e5b060

void __thiscall
FNiagaraFunctionSignature::AddInput
          (FNiagaraFunctionSignature *this,FNiagaraVariable *param_1,FText *param_2)

{
  TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FNiagaraVariable *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar1 = &this->Inputs;
  pFVar3 = (FNiagaraVariable *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->Inputs).ArrayMax)) {
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
  iVar6 = (this->Inputs).ArrayNum;
  piVar2 = &(this->Inputs).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Inputs).ArrayNum = iVar6 + 1;
  FNiagaraVariable::FNiagaraVariable
            ((FNiagaraVariable *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x20),param_1
            );
  return;
}

// AddInputWithoutDefault @ 148e5b120

void __thiscall
FNiagaraFunctionSignature::AddInputWithoutDefault
          (FNiagaraFunctionSignature *this,FNiagaraVariable *param_1,FText *param_2)

{
  TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FNiagaraVariable *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pTVar1 = &this->Inputs;
  pFVar3 = (FNiagaraVariable *)(pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->Inputs).ArrayMax)) {
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
  iVar6 = (this->Inputs).ArrayNum;
  piVar2 = &(this->Inputs).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Inputs).ArrayNum = iVar6 + 1;
  FNiagaraVariable::FNiagaraVariable
            ((FNiagaraVariable *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x20),param_1
            );
  return;
}

// AddOutput @ 148e5b210

void __thiscall
FNiagaraFunctionSignature::AddOutput
          (FNiagaraFunctionSignature *this,FNiagaraVariable *param_1,FText *param_2)

{
  int *piVar1;
  FNiagaraVariable *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pFVar2 = (FNiagaraVariable *)(this->Outputs).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) &&
     (param_1 < (FNiagaraVariable *)
                ((longlong)&pFVar2->_padding_ + (longlong)(this->Outputs).ArrayMax * 0xc))) {
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
  iVar6 = (this->Outputs).ArrayNum;
  piVar1 = &(this->Outputs).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->Outputs).AllocatorInstance,piVar1);
  }
  (this->Outputs).ArrayNum = iVar6 + 1;
  pFVar3 = (this->Outputs).AllocatorInstance.Data;
  *(longlong *)(pFVar3 + (longlong)iVar6 * 0xc) = param_1->_padding_;
  *(int *)(pFVar3 + (longlong)iVar6 * 0xc + 8) = (int)param_1->_padding_;
  return;
}

// StaticStruct @ 148fe40c0

UScriptStruct * __cdecl FNiagaraFunctionSignature::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraFunctionSignature.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraFunctionSignature.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraFunctionSignature,(UObject *)pUVar1,
                         L"NiagaraFunctionSignature");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraFunctionSignature.OuterSingleton;
}

// ~FNiagaraFunctionSignature @ 149025f20

void __thiscall
FNiagaraFunctionSignature::~FNiagaraFunctionSignature(FNiagaraFunctionSignature *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->FunctionSpecifiers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FunctionSpecifiers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FunctionSpecifiers);
  pFVar2 = (this->Outputs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FNiagaraVariable,int>
            ((FNiagaraVariable *)(this->Inputs).AllocatorInstance.Data,(this->Inputs).ArrayNum);
  pFVar2 = (this->Inputs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// GetVariadicInputs @ 14904b740

void __thiscall
FNiagaraFunctionSignature::GetVariadicInputs
          (FNiagaraFunctionSignature *this,
          TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FName *pFVar7;
  int iVar8;
  uint uVar9;
  FName *pFVar10;
  FName local_res8;
  
  if (this->RequiredInputs != -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&local_res8,L"InstanceData");
      InstDataVar.Name = local_res8;
      InstDataVar.TypeDefHandle.RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register
                     (&InstDataVar.TypeDefHandle,&FNiagaraTypeDefinition::IntDef);
      _Init_thread_footer(&::_TSS0);
    }
    iVar5 = (int)this->RequiredInputs;
    piVar1 = &(this->Inputs).ArrayNum;
    if (this->RequiredInputs == -1) {
      iVar5 = *piVar1;
    }
    uVar9 = *piVar1 - iVar5;
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    iVar5 = 0;
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax < (int)uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar9,&param_1->AllocatorInstance,0,piVar1);
    }
    iVar2 = (this->Inputs).ArrayNum;
    pFVar7 = (FName *)(this->Inputs).AllocatorInstance.Data;
    pFVar10 = pFVar7 + (longlong)iVar2 * 4;
    while( true ) {
      if ((this->Inputs).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FNiagaraVariable_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar7 == pFVar10) break;
      if ((*pFVar7 != InstDataVar.Name) ||
         (pFVar7[1].ComparisonIndex.Value != InstDataVar.TypeDefHandle.RegisteredTypeIndex)) {
        if (this->RequiredInputs == -1) {
          iVar6 = -1;
        }
        else {
          iVar6 = this->bRequiresExecPin + (int)this->RequiredInputs;
        }
        iVar8 = iVar5 + 1;
        bVar4 = iVar6 <= iVar5;
        iVar5 = iVar8;
        if (bVar4) {
          iVar6 = param_1->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x40c,&param_1->AllocatorInstance,piVar1);
          }
          param_1->ArrayNum = iVar6 + 1;
          pFVar3 = (param_1->AllocatorInstance).Data;
          *(FName *)(pFVar3 + (longlong)iVar6 * 0xc) = *pFVar7;
          *(uint *)(pFVar3 + (longlong)iVar6 * 0xc + 8) = pFVar7[1].ComparisonIndex.Value;
        }
      }
      pFVar7 = pFVar7 + 4;
    }
  }
  return;
}

// GetVariadicOutputs @ 14904b920

void __thiscall
FNiagaraFunctionSignature::GetVariadicOutputs
          (FNiagaraFunctionSignature *this,
          TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  iVar4 = (int)this->RequiredOutputs;
  if (iVar4 != -1) {
    if (this->RequiredOutputs == -1) {
      iVar4 = (this->Outputs).ArrayNum;
    }
    uVar8 = (this->Outputs).ArrayNum - iVar4;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar8,&param_1->AllocatorInstance,0,piVar1);
    }
    iVar4 = (this->Outputs).ArrayNum;
    pFVar6 = (this->Outputs).AllocatorInstance.Data;
    pFVar2 = pFVar6 + (longlong)iVar4 * 0xc;
    iVar7 = 0;
    while( true ) {
      if ((this->Outputs).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FNiagaraVariableBase_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar6 == pFVar2) break;
      if (this->RequiredOutputs == -1) {
        iVar5 = -1;
      }
      else {
        iVar5 = this->bRequiresExecPin + (int)this->RequiredOutputs;
      }
      if (iVar5 <= iVar7) {
        iVar5 = param_1->ArrayNum;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar5 + 1;
        pFVar3 = (param_1->AllocatorInstance).Data;
        *(undefined8 *)(pFVar3 + (longlong)iVar5 * 0xc) = *(undefined8 *)pFVar6;
        *(undefined4 *)(pFVar3 + (longlong)iVar5 * 0xc + 8) = *(undefined4 *)(pFVar6 + 8);
      }
      pFVar6 = pFVar6 + 0xc;
      iVar7 = iVar7 + 1;
    }
  }
  return;
}

// FNiagaraFunctionSignature @ 1491ab630

FNiagaraFunctionSignature * __thiscall
FNiagaraFunctionSignature::FNiagaraFunctionSignature
          (FNiagaraFunctionSignature *this,FNiagaraFunctionSignature *param_1)

{
  TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FNiagaraVariable *pFVar5;
  FScriptContainerElement *_Src;
  uint uVar6;
  
  pTVar1 = &this->Inputs;
  this->Name = param_1->Name;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Inputs).ArrayMax;
  iVar4 = (param_1->Inputs).ArrayNum;
  pFVar5 = (FNiagaraVariable *)(param_1->Inputs).AllocatorInstance.Data;
  (this->Inputs).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    ConstructItems<FNiagaraVariable,FNiagaraVariable,int>
              ((pTVar1->AllocatorInstance).Data,pFVar5,iVar4);
  }
  pTVar3 = &this->Outputs;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Outputs).ArrayMax;
  iVar4 = (param_1->Outputs).ArrayNum;
  _Src = (param_1->Outputs).AllocatorInstance.Data;
  (this->Outputs).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0xc);
  }
  this->OwnerName = param_1->OwnerName;
  uVar6 = (this->bRequiresContext ^ param_1->bRequiresContext) & 1 ^ *(uint *)&this->field_0x30;
  *(uint *)&this->field_0x30 = uVar6;
  uVar6 = (uVar6 ^ *(uint *)&param_1->field_0x30) & 2 ^ uVar6;
  *(uint *)&this->field_0x30 = uVar6;
  uVar6 = (uVar6 ^ *(uint *)&param_1->field_0x30) & 4 ^ uVar6;
  *(uint *)&this->field_0x30 = uVar6;
  uVar6 = (uVar6 ^ *(uint *)&param_1->field_0x30) & 8 ^ uVar6;
  *(uint *)&this->field_0x30 = uVar6;
  uVar6 = (uVar6 ^ *(uint *)&param_1->field_0x30) & 0x10 ^ uVar6;
  *(uint *)&this->field_0x30 = uVar6;
  uVar6 = (uVar6 ^ *(uint *)&param_1->field_0x30) & 0x20 ^ uVar6;
  *(uint *)&this->field_0x30 = uVar6;
  uVar6 = (uVar6 ^ *(uint *)&param_1->field_0x30) & 0x40 ^ uVar6;
  *(uint *)&this->field_0x30 = uVar6;
  uVar6 = (uVar6 ^ *(uint *)&param_1->field_0x30) & 0x80 ^ uVar6;
  *(uint *)&this->field_0x30 = uVar6;
  uVar6 = (uVar6 ^ *(uint *)&param_1->field_0x30) & 0x100 ^ uVar6;
  *(uint *)&this->field_0x30 = uVar6;
  uVar6 = (uVar6 ^ *(uint *)&param_1->field_0x30) & 0x200 ^ uVar6;
  *(uint *)&this->field_0x30 = uVar6;
  *(uint *)&this->field_0x30 = (uVar6 ^ *(uint *)&param_1->field_0x30) & 0x400 ^ uVar6;
  this->ModuleUsageBitmask = param_1->ModuleUsageBitmask;
  this->MiscUsageBitMask = param_1->MiscUsageBitMask;
  this->ContextStageIndex = param_1->ContextStageIndex;
  this->RequiredInputs = param_1->RequiredInputs;
  this->RequiredOutputs = param_1->RequiredOutputs;
  *(undefined8 *)&(this->FunctionSpecifiers).field_0x0 = 0;
  *(undefined8 *)&(this->FunctionSpecifiers).field_0x8 = 0;
  *(undefined8 *)&(this->FunctionSpecifiers).field_0x20 = 0;
  *(undefined4 *)&(this->FunctionSpecifiers).field_0x28 = 0;
  *(undefined4 *)&(this->FunctionSpecifiers).field_0x2c = 0x80;
  *(undefined4 *)&(this->FunctionSpecifiers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FunctionSpecifiers).field_0x34 = 0;
  *(undefined8 *)&(this->FunctionSpecifiers).field_0x40 = 0;
  *(undefined4 *)&(this->FunctionSpecifiers).field_0x48 = 0;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
             *)&this->FunctionSpecifiers,
            (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
             *)&param_1->FunctionSpecifiers);
  return this;
}

// operator() @ 1492d53f0

bool __thiscall `FNiagaraFunctionSignature::operator=='::__l2::<lambda_1>::operator()(void *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  TTuple<FName,FName> *pTVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  int iVar20;
  int iVar21;
  undefined1 local_res8 [8];
  int local_res10;
  longlong *local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar5 = *(longlong *)((longlong)this + 8);
  iVar21 = *(int *)(lVar5 + 0x50) - *(int *)(lVar5 + 0x7c);
  if (*(int *)(*(longlong *)this + 0x50) - *(int *)(*(longlong *)this + 0x7c) == iVar21) {
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar5 + 0x58);
    plVar2 = (longlong *)(lVar5 + 0x48);
    iVar4 = *(int *)(lVar5 + 0x70);
    iVar18 = 0;
    iVar20 = 0;
    uVar11 = 1;
    iVar12 = 0;
    if (iVar4 != 0) {
      pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x68);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x68) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = pTVar1;
      }
      uVar17 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
      while (uVar17 == 0) {
        lVar15 = (longlong)iVar18;
        iVar20 = iVar20 + 0x20;
        iVar18 = iVar18 + 1;
        iVar12 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_1492d54be;
        uVar17 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar15 * 4 + 4);
      }
      uVar11 = -uVar17 & uVar17;
      uVar3 = (ulonglong)uVar11 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_res10 = (int)lVar15;
      iVar12 = iVar20 + -1 + local_res10;
      if (iVar4 < iVar12) {
        iVar12 = iVar4;
      }
    }
LAB_1492d54be:
    uVar17 = *(uint *)(lVar5 + 0x70);
    uVar16 = uVar17 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar11,iVar18);
    TStack_60.CurrentBitIndex = iVar12;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60._28_4_ = iVar12;
    TStack_60.BaseBitIndex = iVar20;
    uStack_40 = CONCAT44(uStack_6c,iVar21);
    iVar21 = (int)uVar17 >> 5;
    local_res18 = plVar2;
    TStack_60.Array = pTVar1;
    if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    plVar8 = local_res18;
    uVar11 = *(uint *)(lVar5 + 0x70);
    if (uVar17 != uVar11) {
      pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x68);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x68) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = pTVar1;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) &
               *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar21 * 4);
      while (uVar17 == 0) {
        lVar15 = (longlong)iVar21;
        uVar16 = uVar16 + 0x20;
        iVar21 = iVar21 + 1;
        uVar17 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
        goto LAB_1492d55d0;
        uVar17 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar15 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      uVar17 = (int)lVar15 + -1 + uVar16;
      if ((int)uVar11 < (int)uVar17) {
        uVar17 = uVar11;
      }
    }
LAB_1492d55d0:
    while( true ) {
      if (*(int *)(lVar5 + 0x50) - *(int *)(lVar5 + 0x7c) != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      lVar15 = (longlong)TStack_60.CurrentBitIndex;
      if (((TStack_60.CurrentBitIndex == uVar17) && (TStack_60.Array == pTVar1)) &&
         (plVar2 == plVar8)) {
        return true;
      }
      lVar6 = *plVar2;
      pTVar13 = TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                        *)(*(longlong *)this + 0x48),*(FName *)(lVar6 + lVar15 * 0x18));
      lVar14 = 0;
      if (pTVar13 != (TTuple<FName,FName> *)0x0) {
        lVar14 = *(longlong *)&pTVar13->field_0x8;
      }
      if (lVar14 != *(longlong *)(lVar6 + lVar15 * 0x18 + 8)) break;
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return false;
}

// EqualsIgnoringSpecifiers @ 1492e48e0

bool __thiscall
FNiagaraFunctionSignature::EqualsIgnoringSpecifiers
          (FNiagaraFunctionSignature *this,FNiagaraFunctionSignature *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  byte bVar9;
  bool bVar10;
  uint uVar11;
  FString *pFVar12;
  FString *pFVar13;
  bool bVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  short sVar18;
  int iVar19;
  ulonglong uVar20;
  bool bVar21;
  FString local_48;
  FString local_38;
  
  pFVar12 = ::FName::ToString(&this->Name,&local_38);
  pFVar13 = ::FName::ToString(&param_1->Name,&local_48);
  iVar19 = (pFVar12->Data).ArrayNum;
  iVar1 = (pFVar13->Data).ArrayNum;
  if (iVar19 == iVar1) {
    if (iVar19 < 2) {
      bVar21 = true;
    }
    else {
      iVar19 = wcscmp((wchar_t *)(pFVar12->Data).AllocatorInstance.Data,
                      (wchar_t *)(pFVar13->Data).AllocatorInstance.Data);
      bVar21 = iVar19 == 0;
    }
  }
  else {
    bVar21 = iVar1 + iVar19 == 1;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  sVar18 = this->RequiredInputs;
  iVar19 = (int)sVar18;
  uVar17 = 0;
  if ((iVar19 == -1) || (bVar21 == false)) {
    iVar19 = (this->Inputs).ArrayNum;
    if ((iVar19 == (param_1->Inputs).ArrayNum) &&
       (bVar7 = CompareItems<FNiagaraVariable,int>
                          ((FNiagaraVariable *)(this->Inputs).AllocatorInstance.Data,
                           (FNiagaraVariable *)(param_1->Inputs).AllocatorInstance.Data,iVar19),
       bVar7)) {
      bVar9 = 1;
    }
    else {
      bVar9 = 0;
    }
    bVar21 = (bool)(bVar21 & bVar9);
  }
  else if ((param_1->Inputs).ArrayNum < iVar19) {
    bVar21 = false;
  }
  else {
    uVar16 = uVar17;
    uVar20 = uVar17;
    if (0 < iVar19) {
      do {
        uVar15 = (uint)uVar16;
        uVar11 = 0;
        if ((int)uVar15 < (this->Inputs).ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pFVar4 = (this->Inputs).AllocatorInstance.Data;
        uVar11 = 0;
        if ((int)uVar15 < (param_1->Inputs).ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pFVar5 = (param_1->Inputs).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar4 + uVar20) == *(longlong *)(pFVar5 + uVar20)) &&
           (*(int *)(pFVar4 + uVar20 + 8) == *(int *)(pFVar5 + uVar20 + 8))) {
          bVar9 = 1;
        }
        else {
          bVar9 = 0;
        }
        bVar21 = (bool)(bVar21 & bVar9);
        sVar18 = this->RequiredInputs;
        uVar16 = (ulonglong)(uVar15 + 1);
        uVar20 = uVar20 + 0x20;
      } while ((int)(uVar15 + 1) < (int)sVar18);
    }
  }
  if ((this->RequiredOutputs == -1) || (bVar21 == false)) {
    iVar19 = (this->Outputs).ArrayNum;
    if ((iVar19 == (param_1->Outputs).ArrayNum) &&
       (bVar7 = CompareItems<FNiagaraVariableBase,int>
                          ((FNiagaraVariableBase *)(this->Outputs).AllocatorInstance.Data,
                           (FNiagaraVariableBase *)(param_1->Outputs).AllocatorInstance.Data,iVar19)
       , bVar7)) {
      bVar9 = 1;
    }
    else {
      bVar9 = 0;
    }
    bVar21 = (bool)(bVar21 & bVar9);
  }
  else if ((param_1->Inputs).ArrayNum < (int)sVar18) {
    bVar21 = false;
  }
  else {
    uVar16 = uVar17;
    if (0 < this->RequiredOutputs) {
      do {
        uVar15 = (uint)uVar17;
        uVar11 = 0;
        if ((int)uVar15 < (this->Outputs).ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pFVar4 = (this->Outputs).AllocatorInstance.Data;
        uVar11 = 0;
        if ((int)uVar15 < (param_1->Outputs).ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pFVar5 = (param_1->Outputs).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar4 + uVar16) == *(longlong *)(pFVar5 + uVar16)) &&
           (*(int *)(pFVar4 + uVar16 + 8) == *(int *)(pFVar5 + uVar16 + 8))) {
          bVar9 = 1;
        }
        else {
          bVar9 = 0;
        }
        bVar21 = (bool)(bVar21 & bVar9);
        uVar17 = (ulonglong)(uVar15 + 1);
        uVar16 = uVar16 + 0xc;
      } while ((int)(uVar15 + 1) < (int)this->RequiredOutputs);
    }
  }
  uVar2 = *(undefined4 *)&param_1->field_0x30;
  uVar3 = *(undefined4 *)&this->field_0x30;
  bVar14 = false;
  bVar7 = bVar14;
  if (((uVar2 ^ uVar3) & 2) == 0) {
    bVar7 = (bool)((~param_1->bIsCompileTagGenerator ^ ZPULL(uVar3,9,1)) &
                   (~ZPULL(uVar2,2,1) ^ this->bMemberFunction) & 1);
  }
  bVar10 = bVar14;
  if (this->ContextStageIndex == param_1->ContextStageIndex) {
    bVar10 = (bool)(bVar7 & (~(byte)uVar2 ^ (byte)uVar3));
  }
  if (this->OwnerName == param_1->OwnerName) {
    bVar14 = bVar21;
  }
  return (bool)(bVar10 & bVar14);
}

