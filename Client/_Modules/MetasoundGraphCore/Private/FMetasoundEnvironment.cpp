// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 4

// Contains<TArray<FGuid,TSizedDefaultAllocator<32>_>_> @ 14ad2bc80

bool __thiscall
Metasound::FMetasoundEnvironment::Contains<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
          (FMetasoundEnvironment *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar4;
  TArray<FGuid,TSizedDefaultAllocator<32>_> **ppTVar5;
  
  pTVar4 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(&this->Variables,*param_1);
  if (pTVar4 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    return false;
  }
  pTVar4 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(&this->Variables,*param_1);
  if (pTVar4 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x148,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  ppTVar5 = (TArray<FGuid,TSizedDefaultAllocator<32>_> **)
            (**(code **)((longlong)*pTVar4->Ptr + 0x10))();
  return ppTVar5 ==
         &TEnvironmentVariableTypeInfo<TArray<FGuid,TSizedDefaultAllocator<32>_>_>::TypePtr;
}

// GetValue<TArray<FGuid,TSizedDefaultAllocator<32>_>_> @ 14ad2fdf0

TArray<FGuid,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::FMetasoundEnvironment::GetValue<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
          (FMetasoundEnvironment *this,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName *param_1)

{
  int iVar1;
  IMetasoundEnvironmentVariable *pIVar2;
  IMetasoundEnvironmentVariable _Src;
  code *pcVar3;
  bool bVar4;
  TArray<FGuid,TSizedDefaultAllocator<32>_> *pTVar5;
  TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
  *pTVar6;
  TArray<FGuid,TSizedDefaultAllocator<32>_> **ppTVar7;
  
  bVar4 = Contains<TArray<FGuid,TSizedDefaultAllocator<32>_>_>(this,param_1);
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1845334588512010475>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundEnvironment.h"
                       ,0xeb,"Contains<VarType>(InVariableName)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pTVar6 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
           ::Find(&this->Variables,*param_1);
  if (pTVar6 == (TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>
                 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                       ,0x148,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pIVar2 = pTVar6->Ptr;
  ppTVar7 = (TArray<FGuid,TSizedDefaultAllocator<32>_> **)
            (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
  if (ppTVar7 != &TEnvironmentVariableTypeInfo<TArray<FGuid,TSizedDefaultAllocator<32>_>_>::TypePtr)
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEnvironmentVariableOfType<Type>(InVar)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundEnvironment.h"
                       ,0xaa,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArray<FGuid,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = *(int *)(pIVar2 + 3);
  _Src = pIVar2[2];
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,(void *)_Src,(longlong)iVar1 << 4);
  return __return_storage_ptr__;
}

// FMetasoundEnvironment @ 14ad3adb0

FMetasoundEnvironment * __thiscall
Metasound::FMetasoundEnvironment::FMetasoundEnvironment
          (FMetasoundEnvironment *this,FMetasoundEnvironment *param_1)

{
  (this->Variables).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Variables).Pairs.ArrayNum = 0;
  (this->Variables).Pairs.ArrayMax = 0;
  operator=(this,param_1);
  return this;
}

// operator= @ 14ad3e940

FMetasoundEnvironment * __thiscall
Metasound::FMetasoundEnvironment::operator=
          (FMetasoundEnvironment *this,FMetasoundEnvironment *param_1)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  FMetasoundEnvironment *pFVar7;
  undefined8 *puVar8;
  TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
  *pTVar9;
  FName *pFVar10;
  FName *pFVar11;
  undefined1 local_res8 [8];
  undefined8 *local_res10;
  
  piVar1 = &(this->Variables).Pairs.ArrayMax;
  pTVar9 = (TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>
            *)(this->Variables).Pairs.AllocatorInstance.Data;
  iVar2 = (this->Variables).Pairs.ArrayNum;
  if ((this->Variables).Pairs.ArrayMax < 0) {
    DestructItems<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>,int>
              (pTVar9,iVar2);
    (this->Variables).Pairs.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>,int>
              (pTVar9,iVar2);
    (this->Variables).Pairs.ArrayNum = 0;
  }
  iVar2 = (param_1->Variables).Pairs.ArrayNum;
  pFVar10 = (FName *)(param_1->Variables).Pairs.AllocatorInstance.Data;
  pFVar11 = pFVar10 + (longlong)iVar2 * 2;
  while( true ) {
    if ((param_1->Variables).Pairs.ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar11) break;
    FVar3 = pFVar10[1];
    if (FVar3 == (FName)0x0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8527186292331511773>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundEnvironment.cpp"
                         ,0x23,"VarTuple.Value.IsValid()");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FMetasoundEnvironment *)(*pcVar4)();
        return pFVar7;
      }
    }
    else {
      puVar8 = (undefined8 *)(**(code **)(*(longlong *)FVar3 + 0x18))(FVar3,&local_res10);
      pTVar9 = TSortedMap<FName,TUniquePtr<Metasound::IMetasoundEnvironmentVariable,TDefaultDelete<Metasound::IMetasoundEnvironmentVariable>_>,TSizedDefaultAllocator<32>,FNameFastLess>
               ::AllocateMemoryForEmplace<FName_const_&>(&this->Variables,pFVar10);
      uVar5 = pFVar10->Number;
      *(uint *)&pTVar9->field_0x0 = (pFVar10->ComparisonIndex).Value;
      *(uint *)&pTVar9->field_0x4 = uVar5;
      *(undefined8 *)&pTVar9->field_0x8 = *puVar8;
      *puVar8 = 0;
      if (local_res10 != (undefined8 *)0x0) {
        (**(code **)*local_res10)();
      }
    }
    pFVar10 = pFVar10 + 2;
  }
  return this;
}

