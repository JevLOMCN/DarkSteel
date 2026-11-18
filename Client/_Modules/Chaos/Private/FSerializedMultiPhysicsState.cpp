// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// ReadElementDataIntoBuffer @ 143e3bd20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FSerializedMultiPhysicsState::ReadElementDataIntoBuffer
          (FSerializedMultiPhysicsState *this,FSerializedDataBuffer *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  FScriptContainerElement *_Src;
  
  uVar6 = this->CurrentReadElementIndex;
  if (((int)uVar6 < 0) || ((this->Header).DataTagPerElementIndex.ArrayNum <= (int)uVar6)) {
    uVar7 = 0xffffffffffffffff;
  }
  else {
    uVar3 = 0;
    if ((int)uVar6 < (this->Header).DataTagPerElementIndex.ArrayNum) {
      uVar3 = ~uVar6 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar7 = *(undefined8 *)
             ((this->Header).DataTagPerElementIndex.AllocatorInstance.Data +
             (longlong)(int)uVar6 * 8);
  }
  iVar4 = (this->MigratedStateAsBytes).DataBuffer.ArrayNum;
  if (5 < (byte)LogChaos._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
  uVar6 = (uint)uVar7;
  iVar5 = (int)((ulonglong)uVar7 >> 0x20);
  if (((int)uVar6 < iVar4) || (iVar5 == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((((uVar6 == 0xffffffff) || (iVar5 == -1)) || (!bVar2)) || (iVar4 < (int)(iVar5 + uVar6))) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1368520496269754345>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Serialization\\SerializedMultiPhysicsState.cpp"
                       ,0x17,
                       "DataTag.IsValid() && bHasValidStartingOffset && bThereIsEnoughDataToCopyFromBuffer"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (1 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
  }
  else if (0 < iVar5) {
    uVar3 = 0;
    if ((int)uVar6 < (this->MigratedStateAsBytes).DataBuffer.ArrayNum) {
      uVar3 = ~uVar6 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    _Src = (this->MigratedStateAsBytes).DataBuffer.AllocatorInstance.Data + (int)uVar6;
    if (_Src == (FScriptContainerElement *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar5,(ForAnyElementType *)param_1,&(param_1->DataBuffer).ArrayNum,
                       &(param_1->DataBuffer).ArrayMax);
    memcpy((param_1->DataBuffer).AllocatorInstance.Data + iVar4,_Src,(longlong)iVar5);
  }
  this->CurrentReadElementIndex = this->CurrentReadElementIndex + 1;
  return;
}

// Serialize @ 143e4b810

void __thiscall
Chaos::FSerializedMultiPhysicsState::Serialize(FSerializedMultiPhysicsState *this,FArchive *param_1)

{
  int *piVar1;
  ESerializedDataContext *pEVar2;
  int *piVar3;
  
  pEVar2 = (ESerializedDataContext *)**(undefined8 **)&param_1->field_0x8;
  if ((ESerializedDataContext *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->Header,1);
  }
  else {
    (this->Header).DataContext = *pEVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  piVar1 = &(this->Header).NumBodies;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &(this->Header).NumConstraints;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::
  Serialize<Chaos::FSerializedMultiPhysicsState::FDataEntryTag,TSizedDefaultAllocator<32>_>
            (param_1,&(this->Header).DataTagPerElementIndex);
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)this);
  return;
}

