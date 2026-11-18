// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// Exec_Dev @ 146e30160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FNavigationGeomExec::Exec_Dev
          (FNavigationGeomExec *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  longlong *plVar1;
  int iVar2;
  UNavigationSystemBase *pUVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  UClass *pUVar8;
  longlong *plVar9;
  bool bVar10;
  wchar_t *local_res18 [2];
  undefined1 local_68 [4];
  FName local_64;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar10 = false;
  local_res18[0] = param_2;
  bVar7 = FParse::Command(local_res18,L"ExportNavigation",true);
  if (bVar7) {
    if (param_1 == (UWorld *)0x0) {
      if (1 < (byte)LogNavigation._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`protected:_virtual_bool___cdecl_FNavigationGeomExec::Exec_Dev(UWorld*___ptr64,wchar_t_const*___ptr64,FOutputDevice&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogNavigation);
        return false;
      }
    }
    else {
      pUVar3 = (param_1->NavigationSystem).field0_0x0.DebugPtr;
      if (pUVar3 != (UNavigationSystemBase *)0x0) {
        pUVar8 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
        iVar2 = (int)pUVar8->_padding_;
        if ((iVar2 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar8->_padding_)) {
          plVar9 = *(longlong **)&pUVar3[5].field_0x18;
          iVar2 = *(int *)&pUVar3[5].field_0x20;
          plVar1 = plVar9 + iVar2;
          while( true ) {
            if (*(int *)&pUVar3[5].field_0x20 != iVar2) {
              `TCheckedPointerIterator<TObjectPtr<ANavigationData>,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_68);
            }
            if (plVar9 == plVar1) break;
            lVar4 = *plVar9;
            plVar5 = *(longlong **)(lVar4 + 0x398);
            if (plVar5 == (longlong *)0x0) {
              if (1 < (byte)LogNavigation._0_1_) {
                local_64 = *(FName *)(lVar4 + 0x18);
                ::FName::ToString(&local_64,&local_48);
                UE::Logging::Private::BasicLog<2>
                          (&`protected:_virtual_bool___cdecl_FNavigationGeomExec::Exec_Dev(UWorld*___ptr64,wchar_t_const*___ptr64,FOutputDevice&___ptr64)___ptr64'
                            ::__l41::LOG_Static,(FLogCategoryBase *)&LogNavigation);
                if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_48.Data.AllocatorInstance.Data);
                }
              }
              plVar9 = plVar9 + 1;
            }
            else {
              pcVar6 = *(code **)(*plVar5 + 0x60);
              local_64 = *(FName *)(lVar4 + 0x18);
              ::FName::ToString(&local_64,&local_58);
              FPaths::ProjectSavedDir();
              ::FString::PrintfImpl(&local_38,L"%s/%s");
              (*pcVar6)(plVar5,&local_38);
              if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_38.Data.AllocatorInstance.Data);
              }
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
              bVar10 = true;
              plVar9 = plVar9 + 1;
            }
          }
          return bVar10;
        }
      }
      if (1 < (byte)LogNavigation._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`protected:_virtual_bool___cdecl_FNavigationGeomExec::Exec_Dev(UWorld*___ptr64,wchar_t_const*___ptr64,FOutputDevice&___ptr64)___ptr64'
                    ::__l61::LOG_Static,(FLogCategoryBase *)&LogNavigation);
      }
    }
  }
  return false;
}

