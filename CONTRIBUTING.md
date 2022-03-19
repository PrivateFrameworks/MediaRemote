To contribute you must sign the waiver with your GPG key.

```sh
cd waiver
gpg --no-version --armor --output "<Your Name>.asc" --sign WAIVER
```

Commit the signature in a seperately from your contributions. Contribution commits must be based on the signature commit.

Every commit must be signed with the GPG key used to sign the waiver.

To keep your email address private use the GitHub private email for your GPG key (`users.noreply.github.com`).
