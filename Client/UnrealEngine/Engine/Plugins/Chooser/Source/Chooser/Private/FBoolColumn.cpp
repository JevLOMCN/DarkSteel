// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 5

// StaticStruct @ 14a870f40

UScriptStruct * __cdecl FBoolColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoolColumn.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FBoolColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoolColumn,(UObject *)pUVar1,L"BoolColumn");
  }
  return Z_Registration_Info_UScriptStruct_FBoolColumn.OuterSingleton;
}

// FBoolColumn @ 14a87d080

FBoolColumn * __thiscall FBoolColumn::FBoolColumn(FBoolColumn *this)

{
  UPackage *pUVar1;
  
  this->_padding_ = (longlong)&___7FBoolColumn__6B_;
  FInstancedStruct::FInstancedStruct(&this->InputValue);
  (this->RowValuesWithAny).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowValuesWithAny).ArrayNum = 0;
  (this->RowValuesWithAny).ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FBoolContextProperty.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FBoolContextProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoolContextProperty,(UObject *)pUVar1,
                         L"BoolContextProperty");
  }
  FInstancedStruct::InitializeAs
            (&this->InputValue,Z_Registration_Info_UScriptStruct_FBoolContextProperty.OuterSingleton
             ,(uchar *)0x0);
  return this;
}

// Filter @ 14a8878a0

void __thiscall
FBoolColumn::Filter(FBoolColumn *this,FChooserEvaluationContext *param_1,FChooserIndexArray *param_2
                   ,FChooserIndexArray *param_3)

{
  FIndexData *pFVar1;
  uint uVar2;
  uchar *puVar3;
  UScriptStruct *pUVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  FChooserParameterBoolBase *pFVar9;
  FChooserParameterBase *pFVar10;
  undefined8 *puVar11;
  wchar_t *pwVar12;
  FIndexData *pFVar13;
  char local_res8 [8];
  uint local_108 [2];
  undefined8 local_100;
  undefined1 local_f8 [8];
  FFastPathLoadBuffer *pFStack_f0;
  uchar *local_e8;
  uchar *puStack_e0;
  uchar *local_d8;
  ulonglong uStack_d0;
  longlong local_c8;
  long64 lStack_c0;
  FPackageFileVersion local_b8;
  longlong lStack_b0;
  longlong local_a8;
  FCustomVersionContainer *pFStack_a0;
  FCustomPropertyListNode *local_98;
  FArchiveSavePackageData *pFStack_90;
  FProperty *local_88;
  FArchiveSerializedPropertyChain *pFStack_80;
  longlong local_78;
  FArchiveState *pFStack_70;
  longlong local_68;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_60;
  FName local_58;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_50;
  void *local_38 [2];
  
  local_res8[0] = '\0';
  puVar3 = (this->InputValue).StructMemory;
  if ((puVar3 != (uchar *)0x0) &&
     (pUVar4 = (this->InputValue).ScriptStruct.field0_0x0.DebugPtr, pUVar4 != (UScriptStruct *)0x0))
  {
    pFVar9 = UE::StructUtils::GetStructRef<FChooserParameterBoolBase>(pUVar4,puVar3);
    cVar6 = (**(code **)((longlong)*pFVar9 + 0x40))(pFVar9,param_1,local_res8);
    if (cVar6 != '\0') {
      pFVar10 = UE::StructUtils::GetStructRef<FChooserParameterBase>
                          ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr,
                           (this->InputValue).StructMemory);
      puVar11 = (undefined8 *)(**(code **)*pFVar10)(pFVar10,local_38);
      if (*(int *)(puVar11 + 1) == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = (wchar_t *)*puVar11;
      }
      local_100 = 0;
      local_f8 = (undefined1  [8])0x0;
      pFStack_f0 = (FFastPathLoadBuffer *)0x0;
      local_e8 = (uchar *)0x0;
      puStack_e0 = (uchar *)0x0;
      local_d8 = (uchar *)0x0;
      uStack_d0 = 0;
      local_c8 = 0;
      lStack_c0 = 0;
      local_b8.FileVersionUE4 = 0;
      local_b8.FileVersionUE5 = 0;
      lStack_b0 = 0;
      local_a8 = 0;
      pFStack_a0 = (FCustomVersionContainer *)0x0;
      local_98 = (FCustomPropertyListNode *)0x0;
      pFStack_90 = (FArchiveSavePackageData *)0x0;
      local_88 = (FProperty *)0x0;
      pFStack_80 = (FArchiveSerializedPropertyChain *)0x0;
      local_78 = 0;
      pFStack_70 = (FArchiveState *)0x0;
      FArchiveState::FArchiveState((FArchiveState *)local_f8);
      local_68 = 0;
      local_f8 = (undefined1  [8])&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
      local_60 = &local_50;
      local_58.ComparisonIndex.Value = 0;
      local_58.Number = 0;
      FArchiveState::SetIsSaving((FArchiveState *)local_f8,true);
      (**(code **)((longlong)local_f8 + 0x108))(local_f8,0);
      local_f8 = (undefined1  [8])&___7FBufferArchive__6B_;
      local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.ArrayNum = 0;
      local_50.ArrayMax = 0;
      if (pFStack_f0->EndFastPathLoadBuffer <
          (int *)((longlong)pFStack_f0->StartFastPathLoadBuffer + 4)) {
        local_108[0] = 0;
        if ((uStack_d0 & 1) == 0) {
          local_108[0] = (uint)(local_res8[0] != '\0');
        }
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize
                  ((TMemoryWriterBase<TSizedDefaultAllocator<32>_> *)local_f8,local_108,4);
        if (1 < local_108[0]) {
          FArchiveState::SetError((FArchiveState *)local_f8);
        }
        if ((uStack_d0 & 1) != 0) {
          local_res8[0] = local_108[0] != 0;
        }
      }
      else {
        local_res8[0] = *(int *)pFStack_f0->StartFastPathLoadBuffer != 0;
        pFStack_f0->StartFastPathLoadBuffer = pFStack_f0->StartFastPathLoadBuffer + 4;
      }
      FChooserTrace::OutputChooserValueArchive(param_1,pwVar12,(FBufferArchive *)local_f8);
      if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.AllocatorInstance.Data);
      }
      FArchive::~FArchive((FArchive *)local_f8);
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
      pFVar13 = param_2->Data;
      pFVar1 = pFVar13 + param_2->Size;
      do {
        if (pFVar13 == pFVar1) {
          return;
        }
        uVar2 = pFVar13->Index;
        if ((-1 < (int)uVar2) && ((int)uVar2 < (this->RowValuesWithAny).ArrayNum)) {
          uVar8 = 0;
          if ((int)uVar2 < (this->RowValuesWithAny).ArrayNum) {
            uVar8 = ~uVar2 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((this->RowValuesWithAny).AllocatorInstance.Data[(int)uVar2] !=
              (FScriptContainerElement)0x2) {
            uVar2 = pFVar13->Index;
            uVar8 = 0;
            if ((int)uVar2 < (this->RowValuesWithAny).ArrayNum) {
              uVar8 = ~uVar2 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((bool)local_res8[0] !=
                ((this->RowValuesWithAny).AllocatorInstance.Data[(int)uVar2] !=
                (FScriptContainerElement)0x0)) goto LAB_14a887b8e;
          }
          if ((param_3->MaxSize <= param_3->Size) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Size < MaxSize",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                                 ,0x26,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          param_3->Data[param_3->Size] = *pFVar13;
          param_3->Size = param_3->Size + 1;
        }
LAB_14a887b8e:
        pFVar13 = pFVar13 + 1;
      } while( true );
    }
  }
  if ((param_3->MaxSize < param_2->Size) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxSize >= Other.Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Chooser\\Source\\Chooser\\Public\\ChooserIndexArray.h"
                         ,0x48,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar2 = param_2->Size;
  param_3->Size = uVar2;
  memcpy(param_3->Data,param_2->Data,(ulonglong)uVar2 << 3);
  return;
}

// GetInputValue @ 14a88a4c0

FChooserParameterBase * __thiscall FBoolColumn::GetInputValue(FBoolColumn *this)

{
  FChooserParameterBase *pFVar1;
  
  pFVar1 = FInstancedStruct::GetMutablePtr<FChooserParameterBase>(&this->InputValue);
  return pFVar1;
}

// PostLoad @ 14a88cb10

void __thiscall FBoolColumn::PostLoad(FBoolColumn *this)

{
  FChooserParameterBase *pFVar1;
  
  if (((this->InputValue).StructMemory != (uchar *)0x0) &&
     ((this->InputValue).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    pFVar1 = FInstancedStruct::GetMutable<FChooserParameterBase>(&this->InputValue);
                    /* WARNING: Could not recover jumptable at 0x00014a88cb38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar1 + 0x20))(pFVar1,*(code **)((longlong)*pFVar1 + 0x20));
    return;
  }
  return;
}

