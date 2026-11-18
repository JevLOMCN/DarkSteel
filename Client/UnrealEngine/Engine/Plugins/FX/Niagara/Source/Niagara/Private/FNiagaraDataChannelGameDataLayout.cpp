// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 14907e6f0

UScriptStruct * __cdecl FNiagaraDataChannelGameDataLayout::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraDataChannelGameDataLayout.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraDataChannelGameDataLayout.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout,
                         (UObject *)pUVar1,L"NiagaraDataChannelGameDataLayout");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraDataChannelGameDataLayout.OuterSingleton;
}

// Init @ 149113a80

void __thiscall
FNiagaraDataChannelGameDataLayout::Init
          (FNiagaraDataChannelGameDataLayout *this,
          TArrayView<FNiagaraDataChannelVariable_const_,int> *param_1)

{
  int *piVar1;
  TArray<FNiagaraStructConversionStep,TSizedDefaultAllocator<32>_> *pTVar2;
  FNiagaraDataChannelVariable *pFVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  int iVar6;
  FNiagaraTypeDefinition *pFVar7;
  FNiagaraLwcStructConverter *pFVar8;
  FNiagaraDataChannelVariable *pFVar9;
  FScriptContainerElement *pFVar10;
  TKeyInitializer<FNiagaraVariableBase_const_&> local_res8;
  undefined8 *local_res10;
  undefined8 local_78;
  FNiagaraTypeDefinitionHandle local_70 [2];
  FNiagaraTypeDefinition local_68;
  FNiagaraLwcStructConverter local_50;
  
  TSet<TTuple<FNiagaraVariableBase,int>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FNiagaraVariableBase,int>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,int,0>,FDefaultSetAllocator>
           *)this);
  uVar5 = param_1->ArrayNum;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  piVar1 = &(this->LwcConverters).ArrayMax;
  if (*piVar1 < (int)uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar5,&(this->LwcConverters).AllocatorInstance,(this->LwcConverters).ArrayNum,
               piVar1);
  }
  pFVar9 = param_1->DataPtr;
  pFVar3 = pFVar9 + (int)uVar5;
  if (pFVar9 != pFVar3) {
    local_res10 = &local_78;
    do {
      pFVar7 = FNiagaraTypeDefinitionHandle::Resolve
                         ((FNiagaraTypeDefinitionHandle *)&pFVar9->field_0x8);
      FNiagaraTypeHelper::GetLWCType(&local_68,pFVar7);
      local_78 = *(undefined8 *)pFVar9;
      local_70[0].RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(local_70,&local_68);
      TSet<TTuple<FNiagaraVariableBase,int>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,int,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FNiagaraVariableBase_const_&>_>
                ((TSet<TTuple<FNiagaraVariableBase,int>,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,int,0>,FDefaultSetAllocator>
                  *)this,&local_res8,(bool *)&local_res10);
      *(int *)(*(longlong *)&this->VariableIndices + 0xc + (longlong)(int)local_res8.Key * 0x18) =
           (*(int *)&(this->VariableIndices).field_0x8 - *(int *)&(this->VariableIndices).field_0x34
           ) + -1;
      iVar6 = (this->LwcConverters).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&(this->LwcConverters).AllocatorInstance,piVar1);
      }
      (this->LwcConverters).ArrayNum = iVar6 + 1;
      pFVar4 = (this->LwcConverters).AllocatorInstance.Data + (longlong)iVar6 * 0x18;
      DefaultConstructItems<FNiagaraLwcStructConverter,int>(pFVar4,1);
      pFVar8 = FNiagaraTypeRegistry::GetStructConverter(&local_50,&local_68);
      pTVar2 = &pFVar8->ConversionSteps;
      *(int *)pFVar4 = pFVar8->LWCSize;
      *(int *)(pFVar4 + 4) = pFVar8->SWCSize;
      pFVar10 = pFVar4 + 8;
      if ((TArray<FNiagaraStructConversionStep,TSizedDefaultAllocator<32>_> *)pFVar10 != pTVar2) {
        if (*(void **)pFVar10 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar10);
        }
        *(FScriptContainerElement **)pFVar10 = (pTVar2->AllocatorInstance).Data;
        (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar4 + 0x10) = (pFVar8->ConversionSteps).ArrayNum;
        *(int *)(pFVar4 + 0x14) = (pFVar8->ConversionSteps).ArrayMax;
        (pFVar8->ConversionSteps).ArrayNum = 0;
        (pFVar8->ConversionSteps).ArrayMax = 0;
      }
      if (local_50.ConversionSteps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.ConversionSteps.AllocatorInstance.Data);
      }
      pFVar9 = pFVar9 + 1;
    } while (pFVar9 != pFVar3);
  }
  return;
}

