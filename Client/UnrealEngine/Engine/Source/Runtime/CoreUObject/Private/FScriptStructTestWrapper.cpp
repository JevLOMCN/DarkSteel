// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// AttemptCreateTempBuffer @ 141f6f800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FScriptStructTestWrapper::AttemptCreateTempBuffer(FScriptStructTestWrapper *this)

{
  UScriptStruct *this_00;
  ICppStructOps *this_01;
  FStructOpsFakeVTable *pFVar1;
  FProperty *this_02;
  code *pcVar2;
  bool bVar3;
  FUObjectItem *pFVar4;
  uchar *puVar5;
  undefined1 uVar6;
  int iVar7;
  EStructOpsFakeVTableFlags EVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  FName local_res8;
  FString local_48;
  FString local_38;
  
  pFVar4 = FUObjectArray::IndexToObject
                     (&GUObjectArray,*(int *)((longlong)&this->ScriptStruct->_padding_ + 4));
  if (((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0) {
    this->bTempBufferAttemptedCreate = true;
    return;
  }
  this_00 = this->ScriptStruct;
  if (this_00->bPrepareCppStructOpsCompleted == false) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_38,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bPrepareCppStructOpsCompleted",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x8f6,
                       L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_01 = this_00->CppStructOps;
  if ((this_01 != (ICppStructOps *)0x0) && ((this_01->FakeVPtr->Capabilities).HasZeroConstructor)) {
    this->bTempBufferAttemptedCreate = true;
    return;
  }
  iVar7 = (int)*(short *)((longlong)&this->ScriptStruct->_padding_ + 4);
  uVar9 = iVar7 + -1 + (int)this->ScriptStruct->_padding_ & -iVar7;
  if ((this_01 != (ICppStructOps *)0x0) && ((int)uVar9 < (this_01->Size + -1 + iVar7 & -iVar7))) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2910729057672884237>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                       ,0xff3,"RequiredAllocSize >= CppAllocSize");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (2 < (byte)LogClass._0_1_) {
      local_res8 = (FName)this->ScriptStruct->_padding_;
      ::FName::ToString(&local_res8,&local_48);
      (**(code **)(this->ScriptStruct->_padding_ + 0x318))();
      UE::Logging::Private::BasicLog<3>
                (&`private:_void___cdecl_FScriptStructTestWrapper::AttemptCreateTempBuffer(void)___ptr64'
                  ::__l17::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    uVar9 = this_01->Size;
  }
  puVar5 = FMemory::Malloc((longlong)(int)uVar9,
                           (int)*(short *)((longlong)&this->ScriptStruct->_padding_ + 4));
  this->TempBuffer = puVar5;
  memset(puVar5,(uint)this->InitValue,(longlong)(int)uVar9);
  iVar7 = 0;
  uVar10 = 0;
  if (this_01 != (ICppStructOps *)0x0) {
    puVar5 = this->TempBuffer;
    if (this->ConstrutorSyntax == NoInit) {
      pFVar1 = this_01->FakeVPtr;
      if (((pFVar1->Flags & ConstructForTests) == None) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!!(this->Flags & FuncFlag)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0x660,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar11 = 0;
      for (EVar8 = pFVar1->Flags & Construct; EVar8 != None; EVar8 = EVar8 & EVar8 - Construct) {
        uVar11 = (ulonglong)((int)uVar11 + 1);
      }
      (**(code **)(&pFVar1[1].Flags + uVar11 * 2))(puVar5);
    }
    else {
      UScriptStruct::ICppStructOps::Construct(this_01,puVar5);
    }
    iVar7 = this_01->Size;
  }
  if (iVar7 < (int)this->ScriptStruct->_padding_) {
    this_02 = (FProperty *)this->ScriptStruct->_padding_;
    bVar3 = false;
    while ((this_02 != (FProperty *)0x0 && (!bVar3))) {
      bVar3 = this_02->ElementSize * this_02->ArrayDim + this_02->Offset_Internal <= iVar7;
      if (!bVar3) {
        FProperty::InitializeValue_InContainer(this_02,this->TempBuffer);
      }
      this_02 = this_02->PropertyLinkNext;
    }
  }
  if ((this->ScriptStruct->StructFlags & STRUCT_PostScriptConstruct) != STRUCT_NoFlags) {
    if ((this_01 == (ICppStructOps *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("StructOps",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                           ,0x1020,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = this_01->FakeVPtr;
    puVar5 = this->TempBuffer;
    if (((pFVar1->Flags & PostScriptConstruct) == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!!(this->Flags & FuncFlag)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x660,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    for (uVar6 = (undefined1)pFVar1->Flags; uVar6 != None; uVar6 = uVar6 & uVar6 - Construct) {
      uVar10 = (ulonglong)((int)uVar10 + 1);
    }
    (**(code **)(&pFVar1[1].Flags + uVar10 * 2))(puVar5);
  }
  this->bTempBufferAttemptedCreate = true;
  return;
}

