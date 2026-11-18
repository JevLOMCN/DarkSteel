// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 3

// StaticStruct @ 1436c7380

UScriptStruct * __cdecl FChaosVDCollisionChannelsInfoContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDCollisionChannelsInfoContainer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDCollisionChannelsInfoContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDCollisionChannelsInfoContainer,
                         (UObject *)pUVar1,L"ChaosVDCollisionChannelsInfoContainer");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDCollisionChannelsInfoContainer.OuterSingleton;
}

// FChaosVDCollisionChannelsInfoContainer @ 1436d4060

FChaosVDCollisionChannelsInfoContainer * __thiscall
FChaosVDCollisionChannelsInfoContainer::FChaosVDCollisionChannelsInfoContainer
          (FChaosVDCollisionChannelsInfoContainer *this)

{
  memset(this,0,0x300);
  this->CustomChannelsNames[0].CollisionChannel = -1;
  this->CustomChannelsNames[1].CollisionChannel = -1;
  this->CustomChannelsNames[2].CollisionChannel = -1;
  this->CustomChannelsNames[3].CollisionChannel = -1;
  this->CustomChannelsNames[4].CollisionChannel = -1;
  this->CustomChannelsNames[5].CollisionChannel = -1;
  this->CustomChannelsNames[6].CollisionChannel = -1;
  this->CustomChannelsNames[7].CollisionChannel = -1;
  this->CustomChannelsNames[8].CollisionChannel = -1;
  this->CustomChannelsNames[9].CollisionChannel = -1;
  this->CustomChannelsNames[10].CollisionChannel = -1;
  this->CustomChannelsNames[0xb].CollisionChannel = -1;
  this->CustomChannelsNames[0xc].CollisionChannel = -1;
  this->CustomChannelsNames[0xd].CollisionChannel = -1;
  this->CustomChannelsNames[0xe].CollisionChannel = -1;
  this->CustomChannelsNames[0xf].CollisionChannel = -1;
  this->CustomChannelsNames[0x10].CollisionChannel = -1;
  this->CustomChannelsNames[0x11].CollisionChannel = -1;
  this->CustomChannelsNames[0x12].CollisionChannel = -1;
  this->CustomChannelsNames[0x13].CollisionChannel = -1;
  this->CustomChannelsNames[0x14].CollisionChannel = -1;
  this->CustomChannelsNames[0x15].CollisionChannel = -1;
  this->CustomChannelsNames[0x16].CollisionChannel = -1;
  this->CustomChannelsNames[0x17].CollisionChannel = -1;
  this->CustomChannelsNames[0x18].CollisionChannel = -1;
  this->CustomChannelsNames[0x19].CollisionChannel = -1;
  this->CustomChannelsNames[0x1a].CollisionChannel = -1;
  this->CustomChannelsNames[0x1b].CollisionChannel = -1;
  this->CustomChannelsNames[0x1c].CollisionChannel = -1;
  this->CustomChannelsNames[0x1d].CollisionChannel = -1;
  this->CustomChannelsNames[0x1e].CollisionChannel = -1;
  this->CustomChannelsNames[0x1f].CollisionChannel = -1;
  return this;
}

// Serialize @ 1436db640

bool __thiscall
FChaosVDCollisionChannelsInfoContainer::Serialize
          (FChaosVDCollisionChannelsInfoContainer *this,FArchive *param_1)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  
  piVar3 = &this->CustomChannelsNames[0].CollisionChannel;
  lVar2 = 0x20;
  do {
    ::operator<<(param_1,(FString *)(piVar3 + -4));
    piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
      }
    }
    else {
      *piVar3 = *piVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    ::operator<<(param_1,(bool *)(piVar3 + 1));
    piVar3 = piVar3 + 6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

