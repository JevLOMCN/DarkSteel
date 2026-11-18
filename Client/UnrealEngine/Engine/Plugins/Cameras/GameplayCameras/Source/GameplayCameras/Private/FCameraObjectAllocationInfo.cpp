// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 3

// StaticStruct @ 14d537ee0

UScriptStruct * __cdecl FCameraObjectAllocationInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraObjectAllocationInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraObjectAllocationInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraObjectAllocationInfo,(UObject *)pUVar1,
                         L"CameraObjectAllocationInfo");
  }
  return Z_Registration_Info_UScriptStruct_FCameraObjectAllocationInfo.OuterSingleton;
}

// operator== @ 14d5451c0

bool __thiscall
FCameraObjectAllocationInfo::operator==
          (FCameraObjectAllocationInfo *this,FCameraObjectAllocationInfo *param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((((this->EvaluatorInfo).TotalSizeof == (param_1->EvaluatorInfo).TotalSizeof) &&
      ((this->EvaluatorInfo).MaxAlignof == (param_1->EvaluatorInfo).MaxAlignof)) &&
     (iVar1 = (this->VariableTableInfo).VariableDefinitions.ArrayNum,
     iVar1 == (param_1->VariableTableInfo).VariableDefinitions.ArrayNum)) {
    bVar2 = CompareItems<FCameraVariableDefinition,int>
                      ((FCameraVariableDefinition *)
                       (this->VariableTableInfo).VariableDefinitions.AllocatorInstance.Data,
                       (FCameraVariableDefinition *)
                       (param_1->VariableTableInfo).VariableDefinitions.AllocatorInstance.Data,iVar1
                      );
    if ((bVar2) &&
       (iVar1 = (this->ContextDataTableInfo).DataDefinitions.ArrayNum,
       iVar1 == (param_1->ContextDataTableInfo).DataDefinitions.ArrayNum)) {
      bVar2 = CompareItems<FCameraContextDataDefinition,int>
                        ((FCameraContextDataDefinition *)
                         (this->ContextDataTableInfo).DataDefinitions.AllocatorInstance.Data,
                         (FCameraContextDataDefinition *)
                         (param_1->ContextDataTableInfo).DataDefinitions.AllocatorInstance.Data,
                         iVar1);
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

// Append @ 14d5485b0

void __thiscall
FCameraObjectAllocationInfo::Append
          (FCameraObjectAllocationInfo *this,FCameraObjectAllocationInfo *param_1)

{
  FCameraVariableTableAllocationInfo *pFVar1;
  FCameraContextDataTableAllocationInfo *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  short sVar7;
  
  sVar7 = (param_1->EvaluatorInfo).MaxAlignof;
  pFVar1 = &this->VariableTableInfo;
  if (sVar7 < (this->EvaluatorInfo).MaxAlignof) {
    sVar7 = (this->EvaluatorInfo).MaxAlignof;
  }
  (this->EvaluatorInfo).MaxAlignof = sVar7;
  sVar7 = (param_1->EvaluatorInfo).MaxAlignof;
  (this->EvaluatorInfo).TotalSizeof =
       (sVar7 + -1 + (this->EvaluatorInfo).TotalSizeof & -sVar7) +
       (param_1->EvaluatorInfo).TotalSizeof;
  if (pFVar1 == &param_1->VariableTableInfo) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar3 = (param_1->VariableTableInfo).VariableDefinitions.ArrayNum;
  if (iVar3 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar3,(ForAnyElementType *)pFVar1,
                       &(this->VariableTableInfo).VariableDefinitions.ArrayNum,
                       &(this->VariableTableInfo).VariableDefinitions.ArrayMax);
    ConstructItems<FCameraVariableDefinition,FCameraVariableDefinition,int>
              ((pFVar1->VariableDefinitions).AllocatorInstance.Data + (longlong)iVar6 * 0x18,
               (FCameraVariableDefinition *)
               (param_1->VariableTableInfo).VariableDefinitions.AllocatorInstance.Data,iVar3);
  }
  pFVar2 = &this->ContextDataTableInfo;
  if (pFVar2 == &param_1->ContextDataTableInfo) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar3 = (param_1->ContextDataTableInfo).DataDefinitions.ArrayNum;
  if (iVar3 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,iVar3,(ForAnyElementType *)pFVar2,
                       &(this->ContextDataTableInfo).DataDefinitions.ArrayNum,
                       &(this->ContextDataTableInfo).DataDefinitions.ArrayMax);
    ConstructItems<FCameraContextDataDefinition,FCameraContextDataDefinition,int>
              ((pFVar2->DataDefinitions).AllocatorInstance.Data + (longlong)iVar6 * 0x20,
               (FCameraContextDataDefinition *)
               (param_1->ContextDataTableInfo).DataDefinitions.AllocatorInstance.Data,iVar3);
  }
  return;
}

