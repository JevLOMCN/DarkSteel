// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// GetArchetypeFromLoader @ 1421ceea0

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
UE::RemoteObject::Serialization::FArchetypeDeltaWriter::GetArchetypeFromLoader
          (FArchetypeDeltaWriter *this,UObject *param_1)

{
  undefined1 *puVar1;
  UObject **ppUVar2;
  UObject *pUVar3;
  uint uVar4;
  bool bVar5;
  FString local_18;
  
  ppUVar2 = TMapBase<UObject_const_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,0>_>
            ::Find((TMapBase<UObject_const_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,0>_>
                    *)this->ArchetypeToInstanceMap,param_1);
  if (ppUVar2 != (UObject **)0x0) {
    return *ppUVar2;
  }
  if (2 < (byte)LogRemoteSerialization._0_1_) {
    if (param_1 == (UObject *)0x0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0);
    }
    Logging::Private::BasicLog<3>
              (&`public:_virtual_class_UObject*___ptr64___cdecl_UE::RemoteObject::Serialization::FArchetypeDeltaWriter::GetArchetypeFromLoader(UObject_const*___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRemoteSerialization);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (GUseImmutableArchetypes != 0) {
    bVar5 = true;
    pUVar3 = param_1;
    if (param_1 != (UObject *)0x0) {
      do {
        if (!bVar5) goto LAB_1421cef71;
        puVar1 = &pUVar3->field_0x20;
        uVar4 = *(uint *)(*(longlong *)&pUVar3->field_0x10 + 0xd4) & 0x40000;
        bVar5 = uVar4 == 0;
        pUVar3 = *(UObject **)puVar1;
      } while (*(UObject **)puVar1 != (UObject *)0x0);
      if (uVar4 != 0) goto LAB_1421cef71;
    }
    pUVar3 = FindImmutableArchetype(param_1);
    return pUVar3;
  }
LAB_1421cef71:
  pUVar3 = UObject::GetArchetype(param_1);
  return pUVar3;
}

// PopulateObjectHeader @ 1421d86d0

bool __thiscall
UE::RemoteObject::Serialization::FArchetypeDeltaWriter::PopulateObjectHeader
          (FArchetypeDeltaWriter *this,UObject *param_1,FRemoteObjectHeader *param_2)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined1 uVar6;
  UObject **ppUVar7;
  UObject *pUVar8;
  FUObjectItem *pFVar9;
  
  ppUVar7 = TMapBase<UObject_const_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,0>_>
            ::Find((TMapBase<UObject_const_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,0>_>
                    *)this->ArchetypeToInstanceMap,param_1);
  if (ppUVar7 != (UObject **)0x0) {
    param_1 = *ppUVar7;
  }
  uVar4 = *(undefined4 *)&param_1->field_0x1c;
  pFVar9 = (FUObjectItem *)0x0;
  (param_2->Name).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->field_0x18;
  (param_2->Name).Number = uVar4;
  (param_2->RemoteId).field0_0x0.Id = 0;
  pUVar2 = *(UClass **)&param_1->field_0x10;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  (param_2->Class).field0_0x0.DebugPtr = pUVar2;
  pUVar8 = *(UObject **)&param_1->field_0x20;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar8);
  }
  (param_2->Outer).field0_0x0.DebugPtr = pUVar8;
  pUVar8 = UObject::GetArchetype(param_1);
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    GC::MarkAsReachable(pUVar8);
  }
  (param_2->Archetype).field0_0x0.DebugPtr = pUVar8;
  iVar1 = *(int *)&param_1->field_0xc;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x443,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
    pFVar9 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
  }
  param_2->InternalFlags =
       (uint)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x20) & 0x200000;
  return true;
}

// WriteObjectReference @ 1421f13a0

void __thiscall
UE::RemoteObject::Serialization::FArchetypeDeltaWriter::WriteObjectReference
          (FArchetypeDeltaWriter *this,FRemoteObjectReferenceInfo *param_1)

{
  longlong *plVar1;
  UObject **ppUVar2;
  ushort local_res8 [4];
  ushort local_res10 [4];
  UObject *local_28;
  FRemoteObjectId_u_0 FStack_20;
  undefined8 local_18 [2];
  
  local_28 = param_1->Object;
  FStack_20 = (FRemoteObjectId_u_0)*(FRemoteObjectId_u_0 *)&(param_1->Id).field0_0x0._s_0;
  local_18[0]._0_1_ = param_1->Type;
  local_18[0]._1_1_ = param_1->bIsSubobject;
  local_18[0]._2_6_ = *(undefined6 *)&param_1->field_0x12;
  ppUVar2 = TMapBase<UObject_const_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,0>_>
            ::Find((TMapBase<UObject_const_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,UObject_*,0>_>
                    *)this->ArchetypeToInstanceMap,param_1->Object);
  if (ppUVar2 != (UObject **)0x0) {
    local_28 = *ppUVar2;
    FStack_20.Id = 0;
  }
  plVar1 = (longlong *)this->_padding_;
  if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
    (**(code **)(this->_padding_ + 0x188))(this,local_18,1);
  }
  else {
    local_18[0] = CONCAT71(local_18[0]._1_7_,*(undefined1 *)*plVar1);
    *plVar1 = *plVar1 + 1;
  }
  if ((char)local_18[0] != '\0') {
    local_res8[0] =
         FArchiveRemoteObjectWriter::AddRemoteIdToIdMap
                   ((FArchiveRemoteObjectWriter *)this,(FRemoteObjectId)FStack_20._s_0);
    plVar1 = (longlong *)this->_padding_;
    if ((ushort *)plVar1[1] < (ushort *)*plVar1 + 1) {
      if ((this->_padding_ & 0x10000) == 0) {
        (**(code **)(this->_padding_ + 0x188))(this,local_res8,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res8);
      }
    }
    else {
      local_res8[0] = *(ushort *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
    if ((char)local_18[0] == '\x02') {
      local_res10[0] =
           FArchiveRemoteObjectWriter::AddPathNameToNameMap
                     ((FArchiveRemoteObjectWriter *)this,local_28);
      plVar1 = (longlong *)this->_padding_;
      if (*plVar1 + 2U <= (ulonglong)plVar1[1]) {
        *plVar1 = *plVar1 + 2;
        return;
      }
      if ((this->_padding_ & 0x10000) == 0) {
        (**(code **)(this->_padding_ + 0x188))(this,local_res10,2);
        return;
      }
      FArchive::SerializeByteOrderSwapped((FArchive *)this,local_res10);
    }
  }
  return;
}

