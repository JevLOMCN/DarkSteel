// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Exec_Runtime @ 147c18160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FSkinCacheExecHelper::Exec_Runtime
          (FSkinCacheExecHelper *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  longlong lVar8;
  int iVar9;
  wchar_t *local_res18 [2];
  FString local_38;
  TObjectIterator<USkeletalMesh> local_28;
  
  local_res18[0] = param_2;
  bVar2 = FParse::Command(local_res18,L"list skincacheusage",true);
  if (!bVar2) {
    return false;
  }
  if (3 < (byte)LogTemp._0_1_) {
    UE::Logging::Private::BasicLog<4>
              (&`private:_virtual_bool___cdecl_FSkinCacheExecHelper::Exec_Runtime(UWorld*___ptr64,wchar_t_const*___ptr64,FOutputDevice&___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogTemp);
  }
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar7 = Z_Construct_UClass_USkeletalMesh_NoRegister();
  GetObjectsOfClass(pUVar7,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<USkeletalMesh>::Advance(&local_28);
    lVar8 = (longlong)local_28.Index;
    if ((local_28.Index < 0) || (local_28.ObjectArray.ArrayNum <= local_28.Index)) {
      if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
      }
      return true;
    }
    uVar5 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar5 = (uint)~local_28.Index >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) break;
    this_00 = *(UObjectBaseUtility **)(local_28.ObjectArray.AllocatorInstance.Data + lVar8 * 8);
    if (this_00 != (UObjectBaseUtility *)0x0) {
      iVar9 = 0;
      iVar6 = (**(code **)(*(longlong *)this_00 + 0x3d0))(this_00);
      if (0 < iVar6) {
        do {
          lVar8 = (**(code **)(*(longlong *)this_00 + 0x330))(this_00,iVar9);
          if ((lVar8 != 0) && (3 < (byte)LogTemp._0_1_)) {
            UObjectBaseUtility::GetFullName(this_00,&local_38,(UObject *)0x0,None);
            UE::Logging::Private::BasicLog<4>
                      (&`private:_virtual_bool___cdecl_FSkinCacheExecHelper::Exec_Runtime(UWorld*___ptr64,wchar_t_const*___ptr64,FOutputDevice&___ptr64)___ptr64'
                        ::__l34::LOG_Static,(FLogCategoryBase *)&LogTemp);
            if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38.Data.AllocatorInstance.Data);
            }
          }
          iVar9 = iVar9 + 1;
          iVar6 = (**(code **)(*(longlong *)this_00 + 0x3d0))(this_00);
        } while (iVar9 < iVar6);
      }
    }
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

