// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// ForEachEntity @ 146832fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FCallNotificationsTask::ForEachEntity
          (FCallNotificationsTask *this,UObject *param_1,FPropertyNotifyComponentData *param_2)

{
  longlong lVar1;
  FName FVar2;
  longlong lVar3;
  uint uVar4;
  undefined **ppuVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  undefined1 local_res10 [8];
  FName local_res18 [2];
  undefined1 local_48 [16];
  FString local_38;
  
  if (param_2->bNotifyFunctionCached != false) goto LAB_14683310b;
  local_res10 = *(undefined1 (*) [8])&param_2->NotifyFunctionName;
  FVar2 = (FName)UObject::FindFunction(param_1,(FName)local_res10);
  if (FVar2 == (FName)0x0) {
    if (2 < (byte)LogMovieScene._0_1_) {
      local_res18[0] = *(FName *)(*(longlong *)&param_1->field_0x10 + 0x18);
      ::FName::ToString(local_res18,(FString *)local_48);
      ::FName::ToString((FName *)local_res10,&local_38);
      ppuVar5 = &`private:_void___cdecl_UE::MovieScene::FCallNotificationsTask::EnsureNotifyFunctionCached(UObject*___ptr64_const,UE::MovieScene::FPropertyNotifyComponentData&___ptr64)___ptr64'
                 ::__l34::LOG_Static;
LAB_1468330cf:
      Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)ppuVar5,(FLogCategoryBase *)&LogMovieScene);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_48._0_8_);
      }
    }
  }
  else if ((*(uchar *)((longlong)FVar2 + 0xb4) == '\0') &&
          (*(ushort *)((longlong)FVar2 + 0xb8) == 0xffff)) {
    local_res18[0] = FVar2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)FVar2);
    }
    FWeakObjectPtr::operator=(&(param_2->WeakNotifyFunction).WeakPtr,(FObjectPtr)local_res18);
  }
  else if (2 < (byte)LogMovieScene._0_1_) {
    local_res18[0] = *(FName *)(*(longlong *)&param_1->field_0x10 + 0x18);
    ::FName::ToString(local_res18,(FString *)local_48);
    ::FName::ToString((FName *)local_res10,&local_38);
    ppuVar5 = &`private:_void___cdecl_UE::MovieScene::FCallNotificationsTask::EnsureNotifyFunctionCached(UObject*___ptr64_const,UE::MovieScene::FPropertyNotifyComponentData&___ptr64)___ptr64'
               ::__l14::LOG_Static;
    goto LAB_1468330cf;
  }
  param_2->bNotifyFunctionCached = true;
LAB_14683310b:
  local_48._8_8_ = FWeakObjectPtr::Get(&(param_2->WeakNotifyFunction).WeakPtr);
  if ((UObject *)local_48._8_8_ != (UObject *)0x0) {
    uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    uVar6 = uVar6 >> 0x10 ^ uVar6;
    uVar4 = ((uint)((ulonglong)local_48._8_8_ >> 0x14) & 0xffff ^
            (uint)((ulonglong)local_48._8_8_ >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    if (*(int *)&(this->ProcessedNotifications).Elements.field_0x8 !=
        *(int *)&(this->ProcessedNotifications).Elements.field_0x34) {
      FVar7 = (this->ProcessedNotifications).Hash.SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&(this->ProcessedNotifications).Hash;
      }
      iVar8 = *(int *)((longlong)FVar7 +
                      (ulonglong)
                      ((this->ProcessedNotifications).HashSize - 1U &
                      ((uVar6 >> 2) + 0x9e3779b9 + (uVar4 >> 0x10 ^ uVar4) + uVar6 * 0x40 ^ uVar6))
                      * 4);
      if (iVar8 != -1) {
        lVar1 = *(longlong *)&(this->ProcessedNotifications).Elements;
        do {
          lVar3 = (longlong)iVar8;
          if ((*(UObject **)(lVar1 + lVar3 * 0x18) == param_1) &&
             (*(UObject **)(lVar1 + 8 + lVar3 * 0x18) == (UObject *)local_48._8_8_)) {
            if (iVar8 != -1) {
              return;
            }
            break;
          }
          iVar8 = *(int *)(lVar1 + 0x10 + lVar3 * 0x18);
        } while (iVar8 != -1);
      }
    }
    local_48._0_8_ = param_1;
    (**(code **)(*(longlong *)param_1 + 0x260))(param_1,local_48._8_8_,0);
    TSet<TTuple<UObject_*,UFunction_*>,DefaultKeyFuncs<TTuple<UObject_*,UFunction_*>,0>,FDefaultSetAllocator>
    ::Emplace<TTuple<UObject_*,UFunction_*>_const_&>
              (&this->ProcessedNotifications,(TTuple<UObject_*,UFunction_*> *)local_res10,
               (bool *)local_48);
  }
  return;
}

