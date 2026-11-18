// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// TInstancedStruct<FPCGDataTypeInfo><FPCGDataTypeInfo,void> @ 149904de0

TInstancedStruct<FPCGDataTypeInfo> * __thiscall
TInstancedStruct<FPCGDataTypeInfo>::TInstancedStruct<FPCGDataTypeInfo><FPCGDataTypeInfo,void>
          (TInstancedStruct<FPCGDataTypeInfo> *this,UScriptStruct *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  TInstancedStruct<FPCGDataTypeInfo> *pTVar5;
  
  FInstancedStruct::FInstancedStruct(&this->InstancedStruct);
  pUVar4 = FPCGDataTypeInfo::StaticStruct();
  if (pUVar4 != (UScriptStruct *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_
       )) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_149904e49;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InScriptStruct->IsChildOf(TBaseStructure<BaseStructT>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0x16e,L"ScriptStruct must be a child of BaseStruct!");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TInstancedStruct<FPCGDataTypeInfo> *)(*pcVar2)();
    return pTVar5;
  }
LAB_149904e49:
  FInstancedStruct::InitializeAs(&this->InstancedStruct,param_1,(uchar *)0x0);
  return this;
}

// Get<FPCGDataTypeInfo,void> @ 1499a6d50

FPCGDataTypeInfo * __thiscall
TInstancedStruct<FPCGDataTypeInfo>::Get<FPCGDataTypeInfo,void>
          (TInstancedStruct<FPCGDataTypeInfo> *this)

{
  int iVar1;
  UScriptStruct *this_00;
  code *pcVar2;
  bool bVar3;
  FPCGDataTypeInfo *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  pFVar4 = (FPCGDataTypeInfo *)(this->InstancedStruct).StructMemory;
  this_00 = (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr;
  if ((pFVar4 == (FPCGDataTypeInfo *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FPCGDataTypeInfo *)(*pcVar2)();
    return pFVar4;
  }
  if ((this_00 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FPCGDataTypeInfo *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FPCGDataTypeInfo::StaticStruct();
  if (this_00 != pUVar5) {
    pUVar5 = FPCGDataTypeInfo::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)this_00->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(this_00->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return pFVar4;
      }
    }
    pUVar5 = FPCGDataTypeInfo::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPCGDataTypeInfo *)(*pcVar2)();
      return pFVar4;
    }
  }
  return pFVar4;
}

// TInstancedStruct<FPCGPerExecutionCacheData> @ 149ca1ca0

TInstancedStruct<FPCGPerExecutionCacheData> * __thiscall
TInstancedStruct<FPCGPerExecutionCacheData>::TInstancedStruct<FPCGPerExecutionCacheData>
          (TInstancedStruct<FPCGPerExecutionCacheData> *this,
          TInstancedStruct<FPCGPerExecutionCacheData> *param_1)

{
  uchar *puVar1;
  UScriptStruct *pUVar2;
  
  puVar1 = (param_1->InstancedStruct).StructMemory;
  pUVar2 = (param_1->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr;
  (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->InstancedStruct).StructMemory = puVar1;
  (param_1->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (param_1->InstancedStruct).StructMemory = (uchar *)0x0;
  return this;
}

// TInstancedStruct<FPCGPerExecutionCacheData> @ 149ca1d00

TInstancedStruct<FPCGPerExecutionCacheData> * __thiscall
TInstancedStruct<FPCGPerExecutionCacheData>::TInstancedStruct<FPCGPerExecutionCacheData>
          (TInstancedStruct<FPCGPerExecutionCacheData> *this)

{
  FInstancedStruct::FInstancedStruct(&this->InstancedStruct);
  return this;
}

// ~TInstancedStruct<FPCGPerExecutionCacheData> @ 149ca4b40

void __thiscall
TInstancedStruct<FPCGPerExecutionCacheData>::~TInstancedStruct<FPCGPerExecutionCacheData>
          (TInstancedStruct<FPCGPerExecutionCacheData> *this)

{
  uchar *puVar1;
  UScriptStruct *pUVar2;
  
  puVar1 = (this->InstancedStruct).StructMemory;
  if (puVar1 != (uchar *)0x0) {
    pUVar2 = (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr;
    if ((pUVar2 != (UScriptStruct *)0x0) && ((pUVar2->_padding_ & 0x40018000) == 0)) {
      pUVar2 = (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr;
      (**(code **)(pUVar2->_padding_ + 0x300))(pUVar2,(this->InstancedStruct).StructMemory,1);
    }
    FMemory::Free(puVar1);
    (this->InstancedStruct).StructMemory = (uchar *)0x0;
    (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    return;
  }
  (this->InstancedStruct).StructMemory = (uchar *)0x0;
  (this->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  return;
}

