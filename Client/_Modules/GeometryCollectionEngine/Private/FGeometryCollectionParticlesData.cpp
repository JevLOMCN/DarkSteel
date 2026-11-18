// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 4

// FGeometryCollectionParticlesData @ 1463a19d0

FGeometryCollectionParticlesData * __thiscall
FGeometryCollectionParticlesData::FGeometryCollectionParticlesData
          (FGeometryCollectionParticlesData *this)

{
  FChaosSolversModule *pFVar1;
  
  pFVar1 = FChaosSolversModule::GetModule();
  this->ChaosModule = pFVar1;
  (this->BufferedData).SyncCounter = 0;
  (this->BufferedData).BufferIndex = (TAtomic<int>)0x0;
  FData::FData((this->BufferedData).Data);
  FData::FData((this->BufferedData).Data + 1);
  (this->BufferedData).DataSyncCounts[0] = 0;
  (this->BufferedData).DataSyncCounts[1] = 0;
  (this->PhysicsSyncCount).Counter = 0;
  this->GameSyncCount = 0x7fffffff;
  this->SyncFrame = 0xffffffffffffffff;
  return this;
}

// operator() @ 1463a7860

void __thiscall `FGeometryCollectionParticlesData::Sync'::__l11::<lambda_2>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  int *piVar6;
  
  lVar1 = *(longlong *)this;
  piVar6 = (int *)(lVar1 + 8);
  lVar4 = (longlong)*(int *)(lVar1 + 0x14);
  *piVar6 = *piVar6 + 1;
  *(int *)(lVar1 + 0xc + lVar4 * 4) = *piVar6;
  uVar5 = 0;
  do {
    if (((int)uVar5 < 0) || (0x1c < uVar5)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StaticBitArray.h"
                         ,0xaf,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((*(ulonglong *)(piVar6 + lVar4 * 0xb2 + (ulonglong)(uVar5 >> 6) * 2 + 4) >> (uVar5 & 0x3f) &
        1) == 0) {
      FGeometryCollectionParticlesData::FData::Reset
                ((FData *)(piVar6 + lVar4 * 0xb2 + 4),(EGeometryCollectionParticlesData)uVar5);
    }
    else if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionParticlesData.cpp"
                         ,0x85,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x1d);
  *(undefined8 *)(piVar6 + lVar4 * 0xb2 + 6) = *(undefined8 *)(piVar6 + lVar4 * 0xb2 + 4);
  LOCK();
  *(int *)(*(longlong *)this + 0x5a8) = *(int *)(*(longlong *)this + 0x5a8) + 1;
  UNLOCK();
  return;
}

// Sync @ 1463c9c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGeometryCollectionParticlesData::Sync
          (FGeometryCollectionParticlesData *this,FPBDRigidsSolver *param_1,
          TManagedArray<FGuid> *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  FData *pFVar4;
  FSimCallbackCommandObject *pFVar5;
  undefined8 *puVar6;
  longlong lVar7;
  TAtomic<int> TVar8;
  longlong *plVar9;
  uint uVar10;
  code *pcVar12;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a7 [3];
  int local_a4;
  FString local_a0;
  FGeometryCollectionParticlesData *local_90;
  TManagedArray<FGuid> *pTStack_88;
  FPBDRigidsSolver *local_80;
  code *local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  code *pcVar11;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pcVar12 = (code *)0x0;
  local_a4 = 0;
  if (this->SyncFrame == GFrameCounter) {
    local_a8 = 0;
    bVar2 = `FGeometryCollectionParticlesData::Sync'::__l3::<lambda_1>::operator()(&local_a8);
    if (!bVar2) {
      return;
    }
  }
  this->SyncFrame = GFrameCounter;
  iVar1 = (this->PhysicsSyncCount).Counter;
  if (this->GameSyncCount != iVar1) {
    LOCK();
    TVar8._1_3_ = 0;
    TVar8._0_1_ = (this->BufferedData).BufferIndex != (TAtomic<int>)0x1;
    (this->BufferedData).BufferIndex = TVar8;
    UNLOCK();
    TVar8 = (this->BufferedData).BufferIndex;
    pFVar4 = (this->BufferedData).Data + (int)TVar8;
    pcVar11 = pcVar12;
    do {
      if ((pFVar4->RequiredDataFlags).Words[0] != 0) {
        if ((int)pcVar11 == 0) {
          pFVar4 = (this->BufferedData).Data + (int)TVar8;
          lVar7 = 0;
          bVar2 = (pFVar4->RequiredDataFlags).Words[0] != 0;
          if (bVar2) {
            for (; ((pFVar4->RequiredDataFlags).Words[0] >> lVar7 & 1) == 0; lVar7 = lVar7 + 1) {
            }
          }
          local_a4 = (int)lVar7;
          iVar3 = 0x40;
          if (bVar2) {
            iVar3 = local_a4;
          }
          if ((((iVar3 < 0x1d) && (iVar3 != -1)) && (param_1 != (FPBDRigidsSolver *)0x0)) &&
             (iVar3 = (**(code **)(*(longlong *)param_2 + 0x60))(param_2), 0 < iVar3)) {
            this->GameSyncCount = iVar1;
            local_90 = this;
            pTStack_88 = param_2;
            local_80 = param_1;
            if (((Chaos::CVars::bEnableAsyncInitBody == false) && (bVar2 = IsInGameThread(), !bVar2)
                ) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                                         ,0x1b3,L""), bVar2)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar5 = ::operator_new(0xc0);
            if (pFVar5 == (FSimCallbackCommandObject *)0x0) {
              pFVar5 = (FSimCallbackCommandObject *)0x0;
            }
            else {
              local_78 = (code *)0x0;
              puVar6 = FMemory::Malloc(0x20,8);
              *puVar6 = &UE::Core::Private::Function::
                         TFunction_OwnedObject<`FGeometryCollectionParticlesData::Sync'::`11'::<lambda_2>,1,1>
                         ::_vftable_;
              puVar6[1] = local_90;
              puVar6[2] = pTStack_88;
              puVar6[3] = local_80;
              if (puVar6 != (undefined8 *)&DAT_fffffffffffffff8) {
                local_78 = UE::Core::Private::Function::
                           TFunctionRefCaller<`FGeometryCollectionParticlesData::Sync'::__l11::<lambda_2>,void>
                           ::Call;
              }
              *(undefined ***)pFVar5 = &___7FSimCallbackCommandObject_Chaos__6B_;
              *(undefined2 *)&pFVar5->field_0x8 = 0;
              *(undefined8 *)&pFVar5->field_0x10 = 0;
              *(undefined8 *)&pFVar5->field_0x18 = 0;
              *(undefined8 *)&pFVar5->field_0x20 = 0;
              *(undefined8 *)&pFVar5->field_0x28 = 0;
              *(undefined2 *)&pFVar5->field_0x40 = 1;
              *(code **)&pFVar5->Func = local_78;
              *(undefined8 **)&(pFVar5->Func).field_0x28 = puVar6;
              local_50 = (longlong *)0x0;
              *(longlong *)&(pFVar5->Func).field_0x10 = local_68;
              *(undefined8 *)&(pFVar5->Func).field_0x18 = uStack_60;
              *(undefined8 *)&(pFVar5->Func).field_0x20 = local_58;
              if (*(longlong *)&pFVar5->Func != 0) {
                local_78 = pcVar12;
              }
              *(undefined8 *)&pFVar5->Func2 = 0;
              *(undefined8 *)&(pFVar5->Func2).field_0x28 = 0;
              pFVar5->bFuncHasTimeParameters = false;
              pFVar5->ExecuteOnStep = -1;
              pcVar12 = (code *)0x1;
              if (*(longlong *)&pFVar5->Func == 0) {
                `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::
                operator()(local_a7);
              }
            }
            if ((pcVar12 != (code *)0x0) && (local_78 != (code *)0x0)) {
              plVar9 = &local_68;
              if (local_50 != (longlong *)0x0) {
                plVar9 = local_50;
              }
              (**(code **)(*plVar9 + 0x10))();
            }
            Chaos::FChaosMarshallingManager::RegisterSimCommand_External
                      ((FChaosMarshallingManager *)&param_1->_padding_,pFVar5);
          }
        }
        break;
      }
      uVar10 = (int)pcVar11 + 1;
      pcVar11 = (code *)(ulonglong)uVar10;
      pFVar4 = (FData *)&pFVar4->SyncedDataFlags;
    } while (uVar10 == 0);
  }
  lVar7 = 0x10;
  if ((this->BufferedData).BufferIndex != (TAtomic<int>)0x1) {
    lVar7 = 0x2d8;
  }
  *(undefined8 *)((longlong)(this->BufferedData).DataSyncCounts + lVar7 + -4) = 0;
  if (5 < (byte)LogGeometryCollectionParticlesData._0_1_) {
    uVar10 = 0x10;
    if ((this->BufferedData).BufferIndex != (TAtomic<int>)0x1) {
      uVar10 = 0x2d8;
    }
    FData::ToString((FData *)((longlong)(this->BufferedData).DataSyncCounts +
                             ((ulonglong)uVar10 - 4)),&local_a0,0,L", ");
    UE::Logging::Private::BasicLog<6>
              (&::LOG_Static,(FLogCategoryBase *)&LogGeometryCollectionParticlesData);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 1504eb3b0

bool __thiscall `FGeometryCollectionParticlesData::Sync'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8669963001094209566>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8669963001094209566>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

